import os
import glob
import struct
from PIL import Image, ImageDraw

OUT_DIR = "assets/imagenes_master"
os.makedirs(OUT_DIR, exist_ok=True)

def get_vram(chunk_id):
    global_path = 'assets/chunk_01/01_vrams/01.vram'
    with open(global_path, 'rb') as f:
        vram = bytearray(f.read())
        
    if chunk_id != "01":
        chunk_path = f'assets/chunk_{chunk_id}/{chunk_id}_vrams/{chunk_id}.vram'
        if os.path.exists(chunk_path):
            with open(chunk_path, 'rb') as f:
                cv = f.read()
                # Word-by-word composite to avoid color corruption
                for i in range(0, len(vram), 2):
                    word = cv[i] | (cv[i+1] << 8)
                    if word != 0:
                        vram[i] = cv[i]
                        vram[i+1] = cv[i+1]
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

def process_chunk(chunk_id):
    sdat_files = glob.glob(f'assets/chunk_{chunk_id}/*_sdats/*.sdat')
    if not sdat_files: return 0
    
    vram = get_vram(chunk_id)
    tpage_canvases = {} # tpage -> Image
    
    for sdat_path in sdat_files:
        with open(sdat_path, 'rb') as f:
            sdat = f.read()
            
        count = struct.unpack('<H', sdat[2:4])[0]
        if count == 0 or count > 5000: continue
        pointers = struct.unpack(f'<{count}I', sdat[4:4+count*4])
        
        for b_idx in range(len(pointers)):
            p = pointers[b_idx]
            next_p = pointers[b_idx+1] if b_idx < len(pointers)-1 else len(sdat)
            block = sdat[p:next_p]
            
            if len(block) < 0x10: continue
            num_prims = struct.unpack('<H', block[0:2])[0]
            if num_prims == 0 or num_prims > 2000: continue
            
            offset = 0x10
            
            for _ in range(num_prims):
                if offset + 16 > len(block): break
                code = block[offset + 3]
                
                prim_size = 0
                u0,v0, u1,v1, u2,v2, u3,v3 = 0,0,0,0,0,0,0,0
                
                if code == 0x34 or code == 0x2C:
                    if offset + 36 > len(block): break
                    u0, v0 = block[offset+8], block[offset+9]
                    u1, v1 = block[offset+12], block[offset+13]
                    u2, v2 = block[offset+32], block[offset+33]
                    u3, v3 = block[offset+34], block[offset+35]
                    prim_size = 36
                elif code == 0x3C or code == 0x24:
                    if offset + 44 > len(block): break
                    u0, v0 = block[offset+8], block[offset+9]
                    u1, v1 = block[offset+12], block[offset+13]
                    u2, v2 = block[offset+16], block[offset+17]
                    u3, v3 = block[offset+18], block[offset+19]
                    prim_size = 44
                else:
                    break
                    
                clut = struct.unpack('<H', block[offset+10:offset+12])[0]
                tpage = struct.unpack('<H', block[offset+14:offset+16])[0]
                
                if is_valid_tpage(tpage):
                    if tpage not in tpage_canvases:
                        tpage_canvases[tpage] = Image.new('RGBA', (256, 256), (0,0,0,0))
                        
                    canvas = tpage_canvases[tpage]
                    pixels = canvas.load()
                    clut_colors = get_clut_colors(vram, clut, tpage)
                    
                    tp_mode = (tpage >> 7) & 3
                    tpage_x = (tpage & 0xF) * 64
                    tpage_y = ((tpage >> 4) & 1) * 256
                    
                    # Rasterize polygon
                    mask = Image.new('1', (256, 256), 0)
                    draw = ImageDraw.Draw(mask)
                    draw.polygon([(u0,v0), (u1,v1), (u3,v3), (u2,v2)], fill=1)
                    mask_pixels = mask.load()
                    
                    min_u = min(u0, u1, u2, u3)
                    max_u = max(u0, u1, u2, u3)
                    min_v = min(v0, v1, v2, v3)
                    max_v = max(v0, v1, v2, v3)
                    
                    for v in range(min_v, max_v + 1):
                        for u in range(min_u, max_u + 1):
                            if u > 255 or v > 255: continue
                            if mask_pixels[u, v]:
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
                offset += prim_size
                
    saved = 0
    for tpage, canvas in tpage_canvases.items():
        # Only save if it has significant colored pixels to avoid empty noise
        bbox = canvas.getbbox()
        if bbox:
            out_path = os.path.join(OUT_DIR, f"master_chunk_{chunk_id}_tp{hex(tpage)}.png")
            canvas.save(out_path)
            saved += 1
            
    if saved > 0:
        print(f"Chunk {chunk_id}: Saved {saved} Master TPages")
    return saved

all_chunks = set()
for path in glob.glob('assets/chunk_*'):
    chunk_id = path.split('_')[-1]
    all_chunks.add(chunk_id)

total_saved = 0
for chunk_id in sorted(all_chunks):
    total_saved += process_chunk(chunk_id)

print(f"\nDone! Generated {total_saved} perfectly colored Master TPages in {OUT_DIR}/")
