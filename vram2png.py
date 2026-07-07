from PIL import Image
import os
import glob
import sys

def vram_to_png(vram_path, out_path):
    with open(vram_path, 'rb') as f:
        data = f.read()
    
    if len(data) != 1048576:
        print(f"Skipping {vram_path} (not 1MB, got {len(data)} bytes)")
        return

    img = Image.new('RGBA', (1024, 512))
    pixels = img.load()
    
    idx = 0
    for y in range(512):
        for x in range(1024):
            pixel = data[idx] | (data[idx+1] << 8)
            idx += 2
            
            r = (pixel & 0x1F) << 3
            g = ((pixel >> 5) & 0x1F) << 3
            b = ((pixel >> 10) & 0x1F) << 3
            a = 255 if pixel > 0 else 255
            
            r = r | (r >> 5)
            g = g | (g >> 5)
            b = b | (b >> 5)
            
            pixels[x, y] = (r, g, b, a)
            
    img.save(out_path)
    print(f"Saved {out_path}")

out_dir = os.path.join("assets", "vram_pngs")
os.makedirs(out_dir, exist_ok=True)

vram_files = glob.glob('assets/chunk_*/*_vrams/*.vram')
for f in vram_files:
    parts = f.split(os.sep)
    chunk_name = parts[1]
    out_path = os.path.join(out_dir, f"{chunk_name}.png")
    vram_to_png(f, out_path)
