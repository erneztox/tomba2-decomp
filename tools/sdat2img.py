#!/usr/bin/env python3
"""
sdat2img.py - Extract sprites from Tomba 2 VRAM using SDAT animation data.

Flow:
1. Parse SDAT files to find 0x2000 commands that set CLUT/TPAGE per texture
2. Map CLUT values to VRAM CLUT positions
3. Map TPAGE values to VRAM texture pages
4. Extract and save PNG sprites

Based on decompiled code:
- Entity_SpriteAdvance.c: animation player detects flag 0x2000
- Entity_InitScriptData.c: injects CLUT at entity[0x68], TPAGE at entity[0x6A]
- Texture_LoadPack.c: decompresses textures into VRAM pages

Animation command format (12 u16 values):
  u16[0]: flags (bits 15:13 = command type, 001 = CLUT/TPAGE)
  u16[8]: sprite param (width related)
  u16[9]: sprite param (height related)
  u16[10]: CLUT value
  u16[11]: TPAGE value

TPAGE encoding:
  bits 0-4: texture page X (in 64-pixel units)
  bits 5: texture page Y (0 or 1 = 0 or 256)
  bits 7-8: color depth (0=4bit, 1=8bit, 2=16bit)
"""
import struct, os, sys
from PIL import Image
import argparse

PROJECT_ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
ASSETS_DIR = os.path.join(PROJECT_ROOT, "assets")
OUT_DIR = os.path.join(PROJECT_ROOT, "sprites_extracted")

# PS1 VRAM layout
VRAM_WIDTH = 1024
VRAM_HEIGHT = 512
PAGE_WIDTH = 256   # texture page width in pixels
PAGE_HEIGHT = 256  # texture page height in pixels

def parse_tpage(tpage):
    """Decode TPAGE value into (page_x, page_y, bpp)."""
    page_x = (tpage & 0x0F) * 64     # bits 0-3: X in 64px units
    page_y = 256 if (tpage & 0x10) else 0  # bit 4: Y base 0/256
    depth = (tpage >> 7) & 3           # bits 7-8: 0=4bpp, 1=8bpp, 2=16bpp
    bpp_map = {0: 4, 1: 8, 2: 16}
    bpp = bpp_map.get(depth, 8)
    return page_x, page_y, bpp

def parse_clut(clut):
    """Decode CLUT value into (clut_x, clut_y) in VRAM."""
    clut_x = (clut & 0x3F) * 16       # bits 0-5: X in 16px units
    clut_y = (clut >> 6) & 0x1FF       # bits 6-14: Y line
    return clut_x, clut_y

def load_vram(chunk_id):
    """Load raw VRAM data for a chunk."""
    vram_dir = os.path.join(ASSETS_DIR, f"chunk_{chunk_id:02X}", f"{chunk_id:02X}_vrams")
    if not os.path.isdir(vram_dir):
        return None
    # Find .vram file (not .cvram compressed)
    vrams = [f for f in os.listdir(vram_dir) if f.endswith('.vram') and not f.endswith('.cvram')]
    if not vrams:
        return None
    path = os.path.join(vram_dir, vrams[0])
    with open(path, 'rb') as f:
        data = f.read()
    # VRAM is 1024x512 with 16-bit pixels = 1MB
    if len(data) < VRAM_WIDTH * VRAM_HEIGHT * 2:
        return None
    return data

def extract_pixels_from_vram(vram_data, page_x, page_y, bpp, width, height):
    """Extract pixel data from VRAM at given page position."""
    pixels = bytearray()
    if bpp == 4:
        # 4-bit: 4 pixels per u16, each pixel is 4 bits
        for y in range(height):
            for x in range(0, width, 4):
                vram_x = page_x + x
                vram_y = page_y + y
                if vram_x >= VRAM_WIDTH or vram_y >= VRAM_HEIGHT:
                    continue
                offset = (vram_y * VRAM_WIDTH + vram_x) * 2
                if offset + 1 >= len(vram_data):
                    continue
                val = struct.unpack_from('<H', vram_data, offset)[0]
                pixels.append(val & 0xF)
                pixels.append((val >> 4) & 0xF)
                pixels.append((val >> 8) & 0xF)
                pixels.append((val >> 12) & 0xF)
    elif bpp == 8:
        # 8-bit: 2 pixels per u16
        for y in range(height):
            for x in range(0, width, 2):
                vram_x = page_x + x
                vram_y = page_y + y
                offset = (vram_y * VRAM_WIDTH + vram_x) * 2
                if offset + 1 >= len(vram_data):
                    continue
                val = struct.unpack_from('<H', vram_data, offset)[0]
                pixels.append(val & 0xFF)
                pixels.append((val >> 8) & 0xFF)
    return bytes(pixels)

def extract_clut_from_vram(vram_data, clut_x, clut_y, num_colors=256):
    """Extract CLUT (palette) from VRAM."""
    palette = []
    for i in range(num_colors):
        offset = (clut_y * VRAM_WIDTH + clut_x + i) * 2
        if offset + 1 >= len(vram_data):
            break
        val = struct.unpack_from('<H', vram_data, offset)[0]
        # PS1 16-bit color: 5R 5G 5B 1A
        r = (val & 0x1F) << 3
        g = ((val >> 5) & 0x1F) << 3
        b = ((val >> 10) & 0x1F) << 3
        a = 255 if (val >> 15) else 0  # semi-transparency flag
        palette.append((r, g, b, a))
    return palette

def find_sdat_commands(sdat_path):
    """Find all 0x2000 CLUT/TPAGE commands in an SDAT file."""
    commands = []
    with open(sdat_path, 'rb') as f:
        data = f.read()

    for i in range(0, len(data) - 24, 2):
        val = struct.unpack_from('<H', data, i)[0]
        # Check command type: bits 15:13
        cmd_type = val & 0xE000
        if cmd_type == 0x2000:  # CLUT/TPAGE injection command
            # Read the 12 u16 values
            u16s = [struct.unpack_from('<H', data, i+j*2)[0] for j in range(12)]
            clut = u16s[10]
            tpage = u16s[11]
            if clut != 0 and tpage != 0:  # skip null entries
                commands.append({
                    'offset': i,
                    'clut_raw': clut,
                    'tpage_raw': tpage,
                    'param8': u16s[8],
                    'param9': u16s[9],
                    'u16s': u16s,
                })
    return commands

def main():
    parser = argparse.ArgumentParser(description='Extract sprites from Tomba 2 VRAM + SDAT')
    parser.add_argument('--chunk', type=str, help='Chunk ID (hex, e.g. 17)')
    parser.add_argument('--sdat', type=str, help='SDAT file path')
    parser.add_argument('--all', action='store_true', help='Process all chunks')
    args = parser.parse_args()

    os.makedirs(OUT_DIR, exist_ok=True)

    if args.sdat:
        # Single SDAT mode
        sdat_path = args.sdat
        chunk_id = int(os.path.basename(os.path.dirname(os.path.dirname(sdat_path))).split('_')[1], 16)
        print(f"Chunk {chunk_id:02X}")

        vram_data = load_vram(chunk_id)
        if not vram_data:
            print(f"  No VRAM data for chunk {chunk_id:02X}")
            return

        commands = find_sdat_commands(sdat_path)
        print(f"  Found {len(commands)} CLUT/TPAGE commands")

        for i, cmd in enumerate(commands[:20]):  # limit first 20
            clut_x, clut_y = parse_clut(cmd['clut_raw'])
            page_x, page_y, bpp = parse_tpage(cmd['tpage_raw'])
            print(f"  [{i}] CLUT=0x{cmd['clut_raw']:04X} ({clut_x},{clut_y}) TPAGE=0x{cmd['tpage_raw']:04X} page({page_x},{page_y}) {bpp}bpp")

            # Extract and save a test image
            palette = extract_clut_from_vram(vram_data, clut_x, clut_y)
            if not palette:
                continue

            # Try extracting 64x64 test tile
            pixels = extract_pixels_from_vram(vram_data, page_x, page_y, bpp, 64, 64)
            if len(pixels) < 100:
                continue

            img = Image.new('P', (64, 64))
            img.putdata(list(pixels[:64*64]))
            # Convert palette to flat list for PIL
            flat_palette = []
            for c in palette[:256]:
                flat_palette.extend([c[0], c[1], c[2]])
            # Pad to 768 bytes (256*3)
            flat_palette.extend([0] * (768 - len(flat_palette)))
            img.putpalette(flat_palette)

            out_path = os.path.join(OUT_DIR, f"chunk{chunk_id:02X}_cmd{i:03d}_clut{cmd['clut_raw']:04X}_tpage{cmd['tpage_raw']:04X}.png")
            img.save(out_path)
            print(f"    Saved {out_path}")

    elif args.all:
        print("Processing all chunks...")
        # TODO: batch process all chunks
        pass
    else:
        print("Usage: python3 tools/sdat2img.py --chunk XX")
        print("       python3 tools/sdat2img.py --sdat path/to/file.sdat")

if __name__ == '__main__':
    main()
