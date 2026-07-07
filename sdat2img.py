#!/usr/bin/env python3
"""
sdat2img.py - Tomba! 2 Full Spritesheet Extractor (V2 - structured parser)

For each chunk:
  1. Load composite VRAM (global 01.vram overlaid with chunk-specific VRAM, word-by-word).
  2. Parse every .sdat file following the correct block/primitive structure (36-byte quads).
  3. Collect unique (clut, tpage) pairs from valid primitives only.
  4. Render the full 256x256 texture page for each pair using the correct palette.
  5. Save to assets/imagenes/ only if the sheet has actual non-transparent content.

Output format: sprite_<chunk>_<clut_hex>_<tpage_hex>.png
"""
import os
import glob
import struct
from PIL import Image

OUT_DIR = "assets/imagenes"
os.makedirs(OUT_DIR, exist_ok=True)

# ── VRAM loading ─────────────────────────────────────────────────────────────

vram_cache = {}

def get_vram(chunk_id):
    if chunk_id in vram_cache:
        return vram_cache[chunk_id]

    with open('assets/chunk_01/01_vrams/01.vram', 'rb') as f:
        vram = bytearray(f.read())

    if chunk_id != '01':
        chunk_path = f'assets/chunk_{chunk_id}/{chunk_id}_vrams/{chunk_id}.vram'
        if os.path.exists(chunk_path):
            with open(chunk_path, 'rb') as f:
                cv = f.read()
            # Word-by-word composite — avoids single-byte colour corruption
            for i in range(0, min(len(vram), len(cv)), 2):
                word = cv[i] | (cv[i+1] << 8)
                if word != 0:
                    vram[i]   = cv[i]
                    vram[i+1] = cv[i+1]

    vram_cache[chunk_id] = vram
    return vram

# ── SDAT structured parser ────────────────────────────────────────────────────

def parse_sdat_combos(sdat_data):
    """
    Parse an SDAT file following its real block/primitive structure.
    Returns a set of (clut, tpage) pairs found in valid POLY_FT4 primitives.
    
    SDAT header:
      [0-1]  magic / version
      [2-3]  block count (uint16 LE)
      [4..]  block count × uint32 LE block offsets
    
    Each block:
      [0-1]  primitive count (uint16 LE)
      [2-15] block header (14 bytes)
      [16..] primitives, each exactly 36 bytes
    
    Each primitive (code 0x34 or 0x2C = POLY_FT4 variants):
      [3]    primitive code
      [8]    U0   [9]  V0
      [10-11] CLUT (uint16 LE)
      [12]   U1   [13] V1
      [14-15] TPage (uint16 LE)
    """
    combos = set()
    if len(sdat_data) < 4:
        return combos

    try:
        block_count = struct.unpack('<H', sdat_data[2:4])[0]
        if block_count == 0 or block_count > 5000:
            return combos
        offsets = struct.unpack(f'<{block_count}I', sdat_data[4:4 + block_count * 4])
    except struct.error:
        return combos

    for b_idx, offset in enumerate(offsets):
        end = offsets[b_idx + 1] if b_idx + 1 < block_count else len(sdat_data)
        block = sdat_data[offset:end]
        if len(block) < 0x10:
            continue

        try:
            num_prims = struct.unpack('<H', block[0:2])[0]
        except struct.error:
            continue

        if num_prims == 0 or num_prims > 2000:
            continue

        pos = 0x10  # skip 16-byte block header
        for _ in range(num_prims):
            if pos + 36 > len(block):
                break
            prim = block[pos:pos + 36]
            code = prim[3]

            if code in (0x34, 0x2C):  # POLY_FT4 variants (flat & Gouraud textured quad)
                clut  = struct.unpack('<H', prim[10:12])[0]
                tpage = struct.unpack('<H', prim[14:16])[0]

                # Validate TPage: no garbage high bits, mode must be 4-bit or 8-bit
                if (tpage & 0xE000) == 0:
                    tp_mode = (tpage >> 7) & 3
                    if tp_mode <= 1:
                        # Validate CLUT address
                        clut_x = (clut & 0x3F) * 16
                        clut_y = (clut >> 6) & 0x1FF
                        if clut_x < 1024 and clut_y < 512:
                            combos.add((clut, tpage))

            pos += 36

    return combos

# ── Spritesheet renderer ──────────────────────────────────────────────────────

def render_spritesheet(vram, clut, tpage):
    """
    Render the full 256×256 UV texture page using the given CLUT.
    Returns a PIL Image, or None if the result has fewer than 100 opaque pixels.
    """
    clut_x   = (clut & 0x3F) * 16
    clut_y   = (clut >> 6) & 0x1FF
    tpage_x  = (tpage & 0xF) * 64
    tpage_y  = ((tpage >> 4) & 1) * 256
    tp_mode  = (tpage >> 7) & 3  # 0=4-bit, 1=8-bit

    # Load palette
    clut_idx = (clut_y * 1024 + clut_x) * 2
    num_colors = 16 if tp_mode == 0 else 256
    palette = []
    for i in range(num_colors):
        idx = clut_idx + i * 2
        if idx + 1 >= len(vram):
            palette.append((0, 0, 0, 0))
            continue
        c = vram[idx] | (vram[idx + 1] << 8)
        if c == 0:
            palette.append((0, 0, 0, 0))
        else:
            r = ((c & 0x1F) << 3) | ((c & 0x1F) >> 2)
            g = (((c >> 5) & 0x1F) << 3) | (((c >> 5) & 0x1F) >> 2)
            b = (((c >> 10) & 0x1F) << 3) | (((c >> 10) & 0x1F) >> 2)
            palette.append((r, g, b, 255))

    img    = Image.new('RGBA', (256, 256), (0, 0, 0, 0))
    pixels = img.load()
    opaque = 0

    for v in range(256):
        for u in range(256):
            if tp_mode == 0:  # 4-bit: 4 pixels per 16-bit word
                vx  = tpage_x + (u // 4)
                vy  = tpage_y + v
                idx = (vy * 1024 + vx) * 2
                if idx + 1 >= len(vram):
                    continue
                word  = vram[idx] | (vram[idx + 1] << 8)
                c_idx = (word >> ((u % 4) * 4)) & 0xF
            else:             # 8-bit: 2 pixels per 16-bit word
                vx  = tpage_x + (u // 2)
                vy  = tpage_y + v
                idx = (vy * 1024 + vx) * 2
                if idx + 1 >= len(vram):
                    continue
                word  = vram[idx] | (vram[idx + 1] << 8)
                c_idx = (word >> ((u % 2) * 8)) & 0xFF

            if c_idx == 0:
                color = (0, 0, 0, 0)
            else:
                color = palette[c_idx]

            pixels[u, v] = color
            if color[3] > 0:
                opaque += 1

    return img if opaque > 100 else None

# ── Main ──────────────────────────────────────────────────────────────────────

sdat_files  = sorted(glob.glob('assets/chunk_*/*_sdats/*.sdat'))
total_saved = 0
# Track globally which (chunk_id, clut, tpage) already saved to avoid redundant renders
saved_keys  = set()

for sdat_path in sdat_files:
    chunk_id = sdat_path.split(os.sep)[1].split('_')[1]

    with open(sdat_path, 'rb') as f:
        sdat_data = f.read()

    combos = parse_sdat_combos(sdat_data)
    if not combos:
        continue

    vram = get_vram(chunk_id)

    for clut, tpage in sorted(combos):
        key = (chunk_id, clut, tpage)
        if key in saved_keys:
            continue
        saved_keys.add(key)

        out_name = f"sprite_{chunk_id}_{hex(clut)}_{hex(tpage)}.png"
        out_path = os.path.join(OUT_DIR, out_name)
        if os.path.exists(out_path):
            continue

        img = render_spritesheet(vram, clut, tpage)
        if img is not None:
            img.save(out_path)
            total_saved += 1

print(f"\nDone! Extracted {total_saved} spritesheets to {OUT_DIR}/")
