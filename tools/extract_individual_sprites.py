#!/usr/bin/env python3
"""
Extract INDIVIDUAL sprites from .sdat files using UV coordinates from POLY_FT4 primitives.
Each primitive defines a textured quad - we extract exactly that rectangle from VRAM.
"""
import os, struct, glob
from PIL import Image

OUT_DIR = "assets/sprites_individuales"
os.makedirs(OUT_DIR, exist_ok=True)

vram_cache = {}

def get_vram(chunk_id):
    if chunk_id in vram_cache:
        return vram_cache[chunk_id]
    with open('assets/chunk_01/01_vrams/01.vram', 'rb') as f:
        vram = bytearray(f.read())
    if chunk_id != '01':
        path = f'assets/chunk_{chunk_id}/{chunk_id}_vrams/{chunk_id}.vram'
        if os.path.exists(path):
            with open(path, 'rb') as f:
                cv = f.read()
            for i in range(0, min(len(vram), len(cv)), 2):
                word = cv[i] | (cv[i+1] << 8)
                if word != 0:
                    vram[i]   = cv[i]
                    vram[i+1] = cv[i+1]
    vram_cache[chunk_id] = vram
    return vram

def read_clut(vram, clut_word):
    """Read 16-color CLUT from VRAM."""
    clut_x = (clut_word & 0x3F) * 16
    clut_y = (clut_word >> 6) & 0x1FF
    addr = (clut_y * 1024 + clut_x) * 2
    palette = []
    for i in range(16):
        idx = addr + i * 2
        if idx + 1 >= len(vram):
            palette.append((0,0,0,0))
            continue
        c = vram[idx] | (vram[idx+1] << 8)
        if c == 0:
            palette.append((0,0,0,0))
        else:
            r = ((c & 0x1F) << 3) | ((c & 0x1F) >> 2)
            g = (((c >> 5) & 0x1F) << 3) | (((c >> 5) & 0x1F) >> 2)
            b = (((c >> 10) & 0x1F) << 3) | (((c >> 10) & 0x1F) >> 2)
            palette.append((r, g, b, 255))
    return palette

def extract_sprite(vram, u0, v0, u1, v1, u2, v2, clut_word, tpage_word):
    """Extract a textured quad from VRAM."""
    tpage_x = (tpage_word & 0xF) * 64
    tpage_y = ((tpage_word >> 4) & 1) * 256
    tp_mode = (tpage_word >> 7) & 3

    palette = read_clut(vram, clut_word)

    # Texture coordinates are in bytes in VRAM
    # For 4-bit mode: each byte has 2 pixels
    # For 8-bit mode: each byte has 1 pixel

    # Calculate bounding box from UVs
    min_u = min(u0, u1, u2)
    max_u = max(u0, u1, u2)
    min_v = min(v0, v1, v2)
    max_v = max(v0, v1, v2)

    w = max_u - min_u + 4
    h = max_v - min_v + 1

    # Sanity check
    if w <= 0 or h <= 0 or w > 512 or h > 512:
        return None

    img = Image.new('RGBA', (w, h), (0,0,0,0))
    pixels = img.load()

    for v in range(h):
        tv = min_v + v
        for u in range(w):
            tu = min_u + u

            if tp_mode == 0:  # 4-bit
                vx = tpage_x + (tu // 4)
                vy = tpage_y + tv
                idx = (vy * 1024 + vx) * 2
                if idx + 1 >= len(vram):
                    continue
                word = vram[idx] | (vram[idx+1] << 8)
                nib = (word >> ((tu % 4) * 4)) & 0xF
                if nib != 0:
                    pixels[u, v] = palette[nib]
            elif tp_mode == 1:  # 8-bit
                vx = tpage_x + (tu // 2)
                vy = tpage_y + tv
                idx = (vy * 1024 + vx) * 2
                if idx + 1 >= len(vram):
                    continue
                word = vram[idx] | (vram[idx+1] << 8)
                byte = (word >> ((tu % 2) * 8)) & 0xFF
                if byte != 0:
                    pixels[u, v] = palette[byte]
            else:  # 16-bit direct
                vx = tpage_x + tu
                vy = tpage_y + tv
                idx = (vy * 1024 + vx) * 2
                if idx + 1 >= len(vram):
                    continue
                c = vram[idx] | (vram[idx+1] << 8)
                if c != 0:
                    r = ((c & 0x1F) << 3) | ((c & 0x1F) >> 2)
                    g = (((c >> 5) & 0x1F) << 3) | (((c >> 5) & 0x1F) >> 2)
                    b = (((c >> 10) & 0x1F) << 3) | (((c >> 10) & 0x1F) >> 2)
                    pixels[u, v] = (r, g, b, 255)

    # Check if sprite has content
    has_content = any(pixels[x, y][3] > 0 for y in range(h) for x in range(w))
    return img if has_content else None

def parse_sdat_prims(sdat_data):
    """Parse .sdat and yield (chunk_id, prim_data) for each POLY_FT4."""
    if len(sdat_data) < 4:
        return

    try:
        block_count = struct.unpack('<H', sdat_data[2:4])[0]
        if block_count == 0 or block_count > 5000:
            return
        offsets = struct.unpack(f'<{block_count}I', sdat_data[4:4 + block_count * 4])
    except struct.error:
        return

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

        pos = 0x10
        for _ in range(num_prims):
            if pos + 36 > len(block):
                break
            prim = block[pos:pos + 36]
            code = prim[3]

            if code == 0x2C:  # POLY_FT4
                # Parse UVs - in PSX format, UVs are byte offsets in texture page
                # The GPU primitive format has UVs at specific word offsets
                # Let me try different offsets
                u0 = struct.unpack('<H', prim[8:10])[0]
                v0 = struct.unpack('<H', prim[10:12])[0]
                u1 = struct.unpack('<H', prim[18:20])[0]
                v1 = struct.unpack('<H', prim[20:22])[0]
                u2 = struct.unpack('<H', prim[28:30])[0]
                v2 = struct.unpack('<H', prim[30:32])[0]
                clut = struct.unpack('<H', prim[12:14])[0]
                tpage = struct.unpack('<H', prim[22:24])[0]

                yield (clut, tpage, u0, v0, u1, v1, u2, v2)

            pos += 36

def main():
    sdat_files = sorted(glob.glob('assets/chunk_*/*_sdats/*.sdat'))
    total_sprites = 0

    for sdat_path in sdat_files:
        chunk_id = sdat_path.split(os.sep)[1].split('_')[1]
        basename = os.path.basename(sdat_path).replace('.sdat', '')

        with open(sdat_path, 'rb') as f:
            sdat_data = f.read()

        vram = get_vram(chunk_id)
        chunk_dir = os.path.join(OUT_DIR, f'chunk_{chunk_id}')
        os.makedirs(chunk_dir, exist_ok=True)

        for prim_idx, (clut, tpage, u0, v0, u1, v1, u2, v2) in enumerate(parse_sdat_prims(sdat_data)):
            sprite = extract_sprite(vram, u0, v0, u1, v1, u2, v2, clut, tpage)
            if sprite is not None:
                name = f'{basename}_sprite{prim_idx:04d}.png'
                sprite.save(os.path.join(chunk_dir, name))
                total_sprites += 1

                if total_sprites <= 5:
                    print(f'  {chunk_id}/{name}: {sprite.size[0]}x{sprite.size[1]}')

        print(f'Chunk {chunk_id}: {basename} done')

    print(f'\nTotal: {total_sprites} individual sprites extracted to {OUT_DIR}/')

if __name__ == '__main__':
    main()
