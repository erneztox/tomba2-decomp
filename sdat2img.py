import os
import glob
import struct
from PIL import Image

OUT_DIR = "assets/imagenes"
os.makedirs(OUT_DIR, exist_ok=True)

vram_cache = {}

def get_vram(chunk_id):
    if chunk_id in vram_cache:
        return vram_cache[chunk_id]
        
    global_path = 'assets/chunk_01/01_vrams/01.vram'
    with open(global_path, 'rb') as f:
        vram = bytearray(f.read())
        
    if chunk_id != "01":
        chunk_path = f'assets/chunk_{chunk_id}/{chunk_id}_vrams/{chunk_id}.vram'
        if os.path.exists(chunk_path):
            with open(chunk_path, 'rb') as f:
                cv = f.read()
                # Use WORD-BY-WORD composite to avoid color corruption!
                for i in range(0, len(vram), 2):
                    word = cv[i] | (cv[i+1] << 8)
                    if word != 0:
                        vram[i] = cv[i]
                        vram[i+1] = cv[i+1]
                        
    vram_cache[chunk_id] = vram
    return vram

def is_valid_combo(clut, tpage):
    if tpage == 0 and clut == 0: return False
    if (tpage & 0xE000) != 0: return False
    tp = (tpage >> 7) & 3
    if tp > 1: return False # Only 4/8-bit
    
    clut_x = (clut & 0x3F) * 16
    clut_y = (clut >> 6) & 0x1FF
    if clut_x >= 1024 or clut_y >= 512: return False
    
    return True

def extract_spritesheet(vram, clut, tpage, out_path):
    clut_x = (clut & 0x3F) * 16
    clut_y = (clut >> 6) & 0x1FF
    
    tpage_x = (tpage & 0xF) * 64
    tpage_y = ((tpage >> 4) & 1) * 256
    tp_mode = (tpage >> 7) & 3
    
    clut_colors = []
    clut_idx = (clut_y * 1024 + clut_x) * 2
    
    num_colors = 16 if tp_mode == 0 else 256
    for i in range(num_colors):
        if clut_idx + i*2 + 1 >= len(vram):
            clut_colors.append((0,0,0,0))
            continue
        c = vram[clut_idx + i*2] | (vram[clut_idx + i*2 + 1] << 8)
        r = (c & 0x1F) << 3
        g = ((c >> 5) & 0x1F) << 3
        b = ((c >> 10) & 0x1F) << 3
        a = 255 if c > 0 else 0
        r = r | (r >> 5)
        g = g | (g >> 5)
        b = b | (b >> 5)
        clut_colors.append((r,g,b,a))
        
    img = Image.new('RGBA', (256, 256))
    pixels = img.load()
    
    non_transparent = 0
    
    for v in range(256):
        for u in range(256):
            if tp_mode == 0: # 4-bit
                vx = tpage_x + (u // 4)
                vy = tpage_y + v
                idx = (vy * 1024 + vx) * 2
                if idx + 1 >= len(vram): continue
                word = vram[idx] | (vram[idx+1] << 8)
                shift = (u % 4) * 4
                c_idx = (word >> shift) & 0xF
            else: # 8-bit
                vx = tpage_x + (u // 2)
                vy = tpage_y + v
                idx = (vy * 1024 + vx) * 2
                if idx + 1 >= len(vram): continue
                word = vram[idx] | (vram[idx+1] << 8)
                shift = (u % 2) * 8
                c_idx = (word >> shift) & 0xFF
                
            color = clut_colors[c_idx]
            pixels[u, v] = color
            if color[3] > 0:
                non_transparent += 1
                
    if non_transparent > 100: # Only save if there's actual graphic data
        img.save(out_path)
        return True
    return False

sdat_files = glob.glob('assets/chunk_*/*_sdats/*.sdat')
total_saved = 0

for sdat_path in sdat_files:
    chunk_id = sdat_path.split(os.sep)[1].split('_')[1]
    
    with open(sdat_path, 'rb') as f:
        sdat = f.read()
        
    combos = set()
    for i in range(0, len(sdat) - 16, 4):
        code = sdat[i+3]
        if code in (0x34, 0x3C, 0x2C, 0x24):
            clut = struct.unpack('<H', sdat[i+10:i+12])[0]
            tpage = struct.unpack('<H', sdat[i+14:i+16])[0]
            if is_valid_combo(clut, tpage):
                combos.add((clut, tpage))
                
    if not combos: continue
    
    vram = get_vram(chunk_id)
    
    saved_for_sdat = 0
    for clut, tpage in combos:
        out_name = f"sprite_{chunk_id}_{hex(clut)}_{hex(tpage)}.png"
        out_path = os.path.join(OUT_DIR, out_name)
        if extract_spritesheet(vram, clut, tpage, out_path):
            saved_for_sdat += 1
            total_saved += 1
            
print(f"\nDone! Extracted {total_saved} uncorrupted 16-bit spritesheets to {OUT_DIR}/")
