#!/usr/bin/env python3
"""
Brute-force: render every texture page with every CLUT, save only valid images.
"""
import os, glob, struct
from PIL import Image

OUT = "assets/sprites_final"
os.makedirs(OUT, exist_ok=True)

# Load full combined VRAM
with open('assets/chunk_01/01_vrams/01.vram', 'rb') as f:
    vram = bytearray(f.read())

for cvf in sorted(glob.glob('assets/chunk_*/*_vrams/*.cvram')):
    with open(cvf, 'rb') as f:
        cv = f.read()
    for i in range(0, min(len(vram), len(cv)), 2):
        word = cv[i] | (cv[i+1] << 8)
        if word != 0:
            vram[i] = cv[i]
            vram[i+1] = cv[i+1]

vram = bytes(vram)

# Find all CLUTs (16-color aligned, first entry transparent)
cluts = []
for y in range(512):
    for x in range(0, 1024, 16):
        addr = (y * 1024 + x) * 2
        if addr + 32 > len(vram): continue
        first = vram[addr] | (vram[addr+1] << 8)
        if first != 0: continue  # First must be transparent
        nonzero = 0
        for i in range(1, 16):
            idx = addr + i * 2
            if idx + 1 < len(vram):
                w = vram[idx] | (vram[idx+1] << 8)
                if w != 0: nonzero += 1
        if nonzero >= 4:
            cluts.append((x, y))

print(f"CLUTs: {len(cluts)}")

# Precompute all CLUT palettes
palettes = []
for cx, cy in cluts:
    addr = (cy * 1024 + cx) * 2
    pal = []
    for i in range(16):
        idx = addr + i * 2
        c = vram[idx] | (vram[idx+1] << 8)
        r = ((c & 0x1F) << 3) | ((c & 0x1F) >> 2)
        g = (((c >> 5) & 0x1F) << 3) | (((c >> 5) & 0x1F) >> 2)
        b = (((c >> 10) & 0x1F) << 3) | (((c >> 10) & 0x1F) >> 2)
        pal.append((r, g, b, 0 if i == 0 else 255))
    palettes.append(pal)

# Render each TPAGE with each CLUT
total = 0
for tp in range(32):
    tx = (tp & 0xF) * 64
    ty = ((tp >> 4) & 1) * 256

    # First check if page has any data in 4-bit mode
    has_data = False
    for v in range(0, 256, 2):
        for u in range(0, 256, 2):
            vx = tx + (u // 4)
            vy = ty + v
            idx = (vy * 1024 + vx) * 2
            if idx + 1 >= len(vram): continue
            word = vram[idx] | (vram[idx+1] << 8)
            if word != 0:
                has_data = True
                break
        if has_data: break

    if not has_data:
        continue

    # Render raw index values
    indices = {}
    for v in range(256):
        for u in range(256):
            vx = tx + (u // 4)
            vy = ty + v
            idx = (vy * 1024 + vx) * 2
            if idx + 1 >= len(vram): continue
            word = vram[idx] | (vram[idx+1] << 8)
            nib = (word >> ((u % 4) * 4)) & 0xF
            indices[(u, v)] = nib

    for ci, pal in enumerate(palettes):
        img = Image.new('RGBA', (256, 256), (0, 0, 0, 0))
        px = img.load()
        colored = 0

        for (u, v), nib in indices.items():
            if nib != 0:
                px[u, v] = pal[nib]
                colored += 1

        # Only save if enough colored pixels (non-noise)
        if colored > 500:
            cx, cy = cluts[ci]
            name = f"page{tp:02d}_clut{cx:03d}_{cy:03d}.png"
            img.save(os.path.join(OUT, name))
            total += 1
            if total <= 10:
                print(f"  {name}: {colored} pixels")

print(f"\nTotal: {total} spritesheets in {OUT}/")
