#!/usr/bin/env python3
"""
Dump ALL VRAM texture pages directly - no .sdat filtering.
Renders every 256x256 page with default grayscale palette + all CLUTs found.
"""
import os, struct
from PIL import Image

OUT_DIR = "assets/vram_completo"
os.makedirs(OUT_DIR, exist_ok=True)

def load_vram(chunk_id):
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
    return vram

def extract_clut(vram, clut_addr):
    """Extract 16-color palette from CLUT address in VRAM."""
    clut_addr = clut_addr * 2  # word address -> byte offset
    palette = []
    for i in range(16):
        idx = clut_addr + i * 2
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

def render_tpage_raw(vram, tpage_x, tpage_y, tp_mode):
    """Render a 256x256 texture page with raw 16-bit colors."""
    img = Image.new('RGBA', (256, 256), (0,0,0,0))
    pixels = img.load()
    for v in range(256):
        for u in range(256):
            if tp_mode == 0:  # 4-bit
                vx = tpage_x + (u // 4)
                vy = tpage_y + v
                idx = (vy * 1024 + vx) * 2
                if idx + 1 >= len(vram):
                    continue
                word = vram[idx] | (vram[idx+1] << 8)
                nib = (word >> ((u % 4) * 4)) & 0xF
                if nib == 0:
                    continue
                # Grayscale based on index
                g = nib * 17
                pixels[u, v] = (g, g, g, 255)
            elif tp_mode == 1:  # 8-bit
                vx = tpage_x + (u // 2)
                vy = tpage_y + v
                idx = (vy * 1024 + vx) * 2
                if idx + 1 >= len(vram):
                    continue
                word = vram[idx] | (vram[idx+1] << 8)
                byte = (word >> ((u % 2) * 8)) & 0xFF
                if byte == 0:
                    continue
                g = byte
                pixels[u, v] = (g, g, g, 255)
            else:  # 16-bit direct
                vx = tpage_x + u
                vy = tpage_y + v
                idx = (vy * 1024 + vx) * 2
                if idx + 1 >= len(vram):
                    continue
                c = vram[idx] | (vram[idx+1] << 8)
                if c == 0:
                    continue
                r = ((c & 0x1F) << 3) | ((c & 0x1F) >> 2)
                g = (((c >> 5) & 0x1F) << 3) | (((c >> 5) & 0x1F) >> 2)
                b = (((c >> 10) & 0x1F) << 3) | (((c >> 10) & 0x1F) >> 2)
                pixels[u, v] = (r, g, b, 255)
    return img

def find_cluts_on_page(vram, tpage_x, tpage_y):
    """Find CLUTs that are located within this texture page area."""
    # CLUTs are 16-color (32 bytes) or 256-color (512 bytes)
    # They're stored at any X coordinate (multiple of 16) and Y coordinate
    cluts = []
    for cy in range(tpage_y, tpage_y + 256):
        for cx in range(tpage_x, tpage_x + 1024, 16):
            addr = cy * 1024 + cx
            # Check if this looks like a valid CLUT (has non-zero entries)
            valid = False
            for i in range(1, 16):  # Skip index 0 (transparent)
                idx = (addr + i) * 2
                if idx + 1 < len(vram):
                    word = vram[idx] | (vram[idx+1] << 8)
                    if word != 0:
                        valid = True
                        break
            if valid:
                cluts.append(addr)
    return cluts

def main():
    import glob
    vram_files = sorted(glob.glob('assets/chunk_*/'))
    chunks = sorted(set(p.split('/')[1].split('_')[1] for p in vram_files if 'chunk_' in p))

    total = 0
    for chunk_id in chunks[:3]:  # Start with first 3 chunks
        vram_path = f'assets/chunk_{chunk_id}/{chunk_id}_vrams/{chunk_id}.vram'
        if not os.path.exists(vram_path):
            continue

        print(f'Chunk {chunk_id}...')
        vram = load_vram(chunk_id)

        # Render ALL 32 texture pages (0-31 in X, 0-1 in Y)
        for tp_y in [0, 256]:
            for tp_x in range(0, 1024, 64):
                # Try both 4-bit and 8-bit modes
                for mode in [0, 1]:
                    img = render_tpage_raw(vram, tp_x, tp_y, mode)
                    # Check if non-empty
                    has_content = False
                    pixels = img.load()
                    for y in range(0, 256, 4):
                        for x in range(0, 256, 4):
                            if pixels[x, y][3] > 0:
                                has_content = True
                                break
                        if has_content:
                            break

                    if has_content:
                        page_x = tp_x // 64
                        page_y = tp_y // 256
                        name = f'chunk{chunk_id}_page{page_x}_{page_y}_mode{mode}.png'
                        img.save(os.path.join(OUT_DIR, name))
                        total += 1
                        print(f'  Saved: {name}')

    print(f'\nTotal: {total} texture pages extracted to {OUT_DIR}/')

if __name__ == '__main__':
    main()
