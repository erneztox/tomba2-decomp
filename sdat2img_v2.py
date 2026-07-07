import os
import glob
import struct
from PIL import Image

OUT_DIR = "assets/imagenes_composite"
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
                for i in range(len(vram)):
                    if cv[i] != 0:
                        vram[i] = cv[i]
                        
    vram_cache[chunk_id] = vram
    return vram

def is_valid_tpage(tpage):
    if (tpage & 0xE000) != 0: return False
    tp = (tpage >> 7) & 3
    if tp > 1: return False
    return True

def get_clut_colors(vram, clut, tpage):
    clut_x = (clut & 0x3F) * 16
    clut_y = (clut >> 6) & 0x1FF
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
    return clut_colors

def process_sdat(sdat_path, chunk_id):
    with open(sdat_path, 'rb') as f:
        sdat = f.read()
        
    count = struct.unpack('<H', sdat[2:4])[0]
    if count == 0 or count > 5000: return 0
    pointers = struct.unpack(f'<{count}I', sdat[4:4+count*4])
    
    vram = get_vram(chunk_id)
    saved = 0
    
    for b_idx in range(len(pointers)):
        p = pointers[b_idx]
        next_p = pointers[b_idx+1] if b_idx < len(pointers)-1 else len(sdat)
        block = sdat[p:next_p]
        
        if len(block) < 0x10: continue
        num_prims = struct.unpack('<H', block[0:2])[0]
        if num_prims == 0 or num_prims > 2000: continue
        
        offset = 0x10
        
        # Group primitives by tpage
        tpage_prims = {}
        
        for _ in range(num_prims):
            if offset + 16 > len(block): break
            code = block[offset + 3]
            
            # Find size and UVs
            prim_size = 0
            u0,v0, u1,v1, u2,v2, u3,v3 = 0,0,0,0,0,0,0,0
            
            if code == 0x34 or code == 0x2C: # GT4 / FT4 (Custom 36 bytes)
                if offset + 36 > len(block): break
                u0, v0 = block[offset+8], block[offset+9]
                u1, v1 = block[offset+12], block[offset+13]
                u2, v2 = block[offset+32], block[offset+33]
                u3, v3 = block[offset+34], block[offset+35]
                prim_size = 36
            elif code == 0x3C or code == 0x24: # GT3 / FT3 (Custom 44 bytes?)
                if offset + 44 > len(block): break
                u0, v0 = block[offset+8], block[offset+9]
                u1, v1 = block[offset+12], block[offset+13]
                u2, v2 = block[offset+16], block[offset+17]
                u3, v3 = block[offset+18], block[offset+19]
                prim_size = 44
            else:
                # If we hit an unknown primitive, we can't reliably parse further.
                break
                
            clut = struct.unpack('<H', block[offset+10:offset+12])[0]
            tpage = struct.unpack('<H', block[offset+14:offset+16])[0]
            
            if is_valid_tpage(tpage):
                min_u = min(u0, u1, u2, u3)
                max_u = max(u0, u1, u2, u3)
                min_v = min(v0, v1, v2, v3)
                max_v = max(v0, v1, v2, v3)
                
                if max_u >= min_u and max_v >= min_v:
                    if tpage not in tpage_prims:
                        tpage_prims[tpage] = []
                    tpage_prims[tpage].append({
                        'min_u': min_u, 'max_u': max_u,
                        'min_v': min_v, 'max_v': max_v,
                        'clut': clut
                    })
            offset += prim_size
            
        # Now composite the canvas for each TPage used by this block
        for tpage, prims in tpage_prims.items():
            if not prims: continue
            
            canvas = Image.new('RGBA', (256, 256), (0,0,0,0))
            pixels = canvas.load()
            
            tp_mode = (tpage >> 7) & 3
            tpage_x = (tpage & 0xF) * 64
            tpage_y = ((tpage >> 4) & 1) * 256
            
            drawn_pixels = 0
            
            for prim in prims:
                clut_colors = get_clut_colors(vram, prim['clut'], tpage)
                for v in range(prim['min_v'], prim['max_v'] + 1):
                    for u in range(prim['min_u'], prim['max_u'] + 1):
                        if u > 255 or v > 255: continue
                        
                        if tp_mode == 0:
                            vx = tpage_x + (u // 4)
                            vy = tpage_y + v
                            idx = (vy * 1024 + vx) * 2
                            if idx + 1 >= len(vram): continue
                            word = vram[idx] | (vram[idx+1] << 8)
                            shift = (u % 4) * 4
                            c_idx = (word >> shift) & 0xF
                        else:
                            vx = tpage_x + (u // 2)
                            vy = tpage_y + v
                            idx = (vy * 1024 + vx) * 2
                            if idx + 1 >= len(vram): continue
                            word = vram[idx] | (vram[idx+1] << 8)
                            shift = (u % 2) * 8
                            c_idx = (word >> shift) & 0xFF
                            
                        color = clut_colors[c_idx]
                        if color[3] > 0:
                            pixels[u, v] = color
                            drawn_pixels += 1
                            
            if drawn_pixels > 0:
                out_path = os.path.join(OUT_DIR, f"sprite_{chunk_id}_b{b_idx}_tp{hex(tpage)}.png")
                canvas.save(out_path)
                saved += 1
                
    return saved

sdat_files = glob.glob('assets/chunk_*/*_sdats/*.sdat')
total_saved = 0

for sdat_path in sdat_files:
    chunk_id = sdat_path.split(os.sep)[1].split('_')[1]
    s = process_sdat(sdat_path, chunk_id)
    if s > 0:
        print(f"Saved {s} composite sprites for {sdat_path}")
    total_saved += s
    
print(f"Done! Extracted {total_saved} composite sprites to {OUT_DIR}")
