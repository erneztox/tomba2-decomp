#!/usr/bin/env python3
"""
sdat2img_composite.py - Tomba! 2 Composite Spritesheet Extractor
Scans ALL .sdat files per chunk to build a complete UV->CLUT mapping via majority voting,
then renders each TPage with every pixel colored by its correct palette.
"""
import struct, glob, os
from PIL import Image
from collections import Counter

OUT_DIR = "assets/imagenes_composite"
os.makedirs(OUT_DIR, exist_ok=True)

def load_vram(chunk_id):
    with open('assets/chunk_01/01_vrams/01.vram', 'rb') as f:
        vram = bytearray(f.read())
    if chunk_id != '01':
        cp = f'assets/chunk_{chunk_id}/{chunk_id}_vrams/{chunk_id}.vram'
        if os.path.exists(cp):
            with open(cp, 'rb') as f:
                cv = f.read()
            for i in range(0, len(vram), 2):
                w = cv[i] | (cv[i+1] << 8)
                if w != 0:
                    vram[i] = cv[i]; vram[i+1] = cv[i+1]
    return vram

def scan_sdats(sdat_paths):
    tpage_uv_votes = {}
    for sdat_path in sdat_paths:
        with open(sdat_path, 'rb') as f:
            sdat = f.read()
        try:
            count_s = struct.unpack('<H', sdat[2:4])[0]
            if count_s == 0 or count_s > 5000: continue
            ptrs = struct.unpack(f'<{count_s}I', sdat[4:4+count_s*4])
        except: continue
        for b_idx in range(count_s):
            p_start = ptrs[b_idx]
            p_end = ptrs[b_idx+1] if b_idx+1 < count_s else len(sdat)
            block = sdat[p_start:p_end]
            if len(block) < 0x10: continue
            try:
                num_prims = struct.unpack('<H', block[0:2])[0]
            except: continue
            if num_prims == 0 or num_prims > 2000: continue
            offset = 0x10
            for _ in range(num_prims):
                if offset + 36 > len(block): break
                p = block[offset:offset+36]
                code = p[3]
                if code not in (0x34, 0x2C):
                    offset += 36; continue
                u0, v0 = p[8], p[9]
                clut_val = struct.unpack('<H', p[10:12])[0]
                u1, v1 = p[12], p[13]
                tpage_val = struct.unpack('<H', p[14:16])[0]
                tp_mode = (tpage_val >> 7) & 3
                if tp_mode > 1 or (tpage_val & 0xE000):
                    offset += 36; continue
                if u0 == u1 or v0 == v1:
                    offset += 36; continue
                u_min, u_max = min(u0,u1), max(u0,u1)
                v_min, v_max = min(v0,v1), max(v0,v1)
                if u_max - u_min > 80 or v_max - v_min > 80:
                    offset += 36; continue
                if tpage_val not in tpage_uv_votes:
                    tpage_uv_votes[tpage_val] = {}
                uvm = tpage_uv_votes[tpage_val]
                for v in range(v_min, v_max+1):
                    for u in range(u_min, u_max+1):
                        key = (u, v)
                        if key not in uvm: uvm[key] = Counter()
                        uvm[key][clut_val] += 1
                offset += 36
    return {tp: {uv: votes.most_common(1)[0][0] for uv, votes in uvm.items()}
            for tp, uvm in tpage_uv_votes.items()}

def render_composite(tpage_val, uv_clut, vram, out_path):
    tp_x = (tpage_val & 0xF) * 64
    tp_y = ((tpage_val >> 4) & 1) * 256
    tp_mode = (tpage_val >> 7) & 3
    if tp_mode > 1 or not uv_clut: return False

    clut_cache = {}
    for cv in set(uv_clut.values()):
        cx = (cv & 0x3F)*16; cy = (cv >> 6) & 0x1FF
        cidx = (cy * 1024 + cx) * 2
        nc = 16 if tp_mode == 0 else 256
        colors = []
        for i in range(nc):
            if cidx + i*2 + 1 >= len(vram):
                colors.append((0,0,0,0)); continue
            c = vram[cidx+i*2] | (vram[cidx+i*2+1]<<8)
            r = ((c & 0x1F)<<3)|((c & 0x1F)>>2)
            g = (((c>>5)&0x1F)<<3)|(((c>>5)&0x1F)>>2)
            b = (((c>>10)&0x1F)<<3)|(((c>>10)&0x1F)>>2)
            a = 0 if c == 0 else 255
            colors.append((r,g,b,a))
        clut_cache[cv] = colors

    freq = Counter(uv_clut.values())
    default_clut = freq.most_common(1)[0][0]
    u_vals = [u for u,v in uv_clut]; v_vals = [v for u,v in uv_clut]
    u_lo, u_hi = min(u_vals), max(u_vals)
    v_lo, v_hi = min(v_vals), max(v_vals)

    canvas = Image.new('RGBA', (256, 256), (0,0,0,0))
    px = canvas.load()
    for v in range(v_lo, v_hi+1):
        for u in range(u_lo, u_hi+1):
            cv = uv_clut.get((u,v), default_clut)
            colors = clut_cache[cv]
            if tp_mode == 0:
                vx = tp_x + (u // 4); vy = tp_y + v
                c_idx = (vram[(vy*1024+vx)*2] | (vram[(vy*1024+vx)*2+1]<<8) >> ((u%4)*4)) & 0xF
                idx = (vy*1024+vx)*2
                if idx+1 >= len(vram): continue
                word = vram[idx]|(vram[idx+1]<<8)
                c_idx = (word >> ((u%4)*4)) & 0xF
            else:
                vx = tp_x + (u // 2); vy = tp_y + v
                idx = (vy*1024+vx)*2
                if idx+1 >= len(vram): continue
                word = vram[idx]|(vram[idx+1]<<8)
                c_idx = (word >> ((u%2)*8)) & 0xFF
            color = colors[c_idx]
            if color[3] > 0:
                px[u, v] = color

    bbox = canvas.getbbox()
    if bbox:
        canvas.save(out_path)
        return True
    return False

# --- Main ---
all_chunks = sorted(set(
    p.split(os.sep)[1].split('_')[1]
    for p in glob.glob('assets/chunk_*/*_sdats/*.sdat')
))

total_saved = 0
print(f"Processing {len(all_chunks)} chunks...\n")

for chunk_id in all_chunks:
    chunk_sdats = sorted(glob.glob(f'assets/chunk_{chunk_id}/{chunk_id}_sdats/*.sdat'))
    if not chunk_sdats: continue
    
    # Also include all SDATEs globally to build best UV map for shared TPages
    all_sdats = sorted(glob.glob('assets/chunk_*/*_sdats/*.sdat'))
    uv_clut_map = scan_sdats(all_sdats)
    
    vram = load_vram(chunk_id)
    for tpage_val, uv_clut in uv_clut_map.items():
        out_path = os.path.join(OUT_DIR, f'composite_chunk{chunk_id}_tp{hex(tpage_val)}.png')
        if not os.path.exists(out_path):
            if render_composite(tpage_val, uv_clut, vram, out_path):
                print(f"  chunk_{chunk_id} TPage {hex(tpage_val)}: saved")
                total_saved += 1

print(f"\nDone! {total_saved} new composite spritesheets in {OUT_DIR}/")
