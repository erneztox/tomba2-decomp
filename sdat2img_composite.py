#!/usr/bin/env python3
"""
sdat2img_composite.py - Tomba! 2 Composite Spritesheet Extractor

Strategy:
  - Scans ALL .sdat files to build a UV->CLUT vote map per TPage.
  - Only paints pixels that are EXPLICITLY referenced by at least one primitive.
  - No default-fill: uncovered pixels stay transparent (avoids wrong-color blocks).
  - Each unique VRAM combination produces one output file (deduplication via hash).
"""
import struct, glob, os, hashlib
from PIL import Image
from collections import Counter

OUT_DIR = "assets/imagenes_composite"
os.makedirs(OUT_DIR, exist_ok=True)

# ── helpers ──────────────────────────────────────────────────────────────────

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

def vram_hash(vram):
    return hashlib.md5(bytes(vram)).hexdigest()[:12]

def scan_sdats(sdat_paths):
    """Return tpage -> {(u,v): majority_clut}  from all given SDAT files."""
    tpage_uv_votes = {}
    for sdat_path in sdat_paths:
        try:
            with open(sdat_path, 'rb') as f:
                sdat = f.read()
            count_s = struct.unpack('<H', sdat[2:4])[0]
            if count_s == 0 or count_s > 5000:
                continue
            ptrs = struct.unpack(f'<{count_s}I', sdat[4:4+count_s*4])
        except Exception:
            continue

        for b_idx in range(count_s):
            p_start = ptrs[b_idx]
            p_end   = ptrs[b_idx+1] if b_idx+1 < count_s else len(sdat)
            block   = sdat[p_start:p_end]
            if len(block) < 0x10:
                continue
            try:
                num_prims = struct.unpack('<H', block[0:2])[0]
            except Exception:
                continue
            if num_prims == 0 or num_prims > 2000:
                continue

            offset = 0x10
            for _ in range(num_prims):
                if offset + 36 > len(block):
                    break
                p    = block[offset:offset+36]
                code = p[3]
                if code not in (0x34, 0x2C):
                    offset += 36; continue

                u0, v0   = p[8],  p[9]
                clut_val = struct.unpack('<H', p[10:12])[0]
                u1, v1   = p[12], p[13]
                tpage_val = struct.unpack('<H', p[14:16])[0]

                tp_mode = (tpage_val >> 7) & 3
                if tp_mode > 1 or (tpage_val & 0xE000):
                    offset += 36; continue
                if u0 == u1 or v0 == v1:
                    offset += 36; continue

                u_min, u_max = min(u0, u1), max(u0, u1)
                v_min, v_max = min(v0, v1), max(v0, v1)
                # reject obviously garbage UV rectangles
                if u_max - u_min > 80 or v_max - v_min > 80:
                    offset += 36; continue

                uvm = tpage_uv_votes.setdefault(tpage_val, {})
                for v in range(v_min, v_max+1):
                    for u in range(u_min, u_max+1):
                        cnt = uvm.setdefault((u, v), Counter())
                        cnt[clut_val] += 1
                offset += 36

    return {tp: {uv: cnt.most_common(1)[0][0] for uv, cnt in uvm.items()}
            for tp, uvm in tpage_uv_votes.items()}

def render_composite(tpage_val, uv_clut, vram):
    """Render only the UV pixels that have an explicit CLUT assignment."""
    tp_x  = (tpage_val & 0xF) * 64
    tp_y  = ((tpage_val >> 4) & 1) * 256
    tp_mode = (tpage_val >> 7) & 3
    if tp_mode > 1 or not uv_clut:
        return None

    # preload clut colours
    clut_cache = {}
    for cv in set(uv_clut.values()):
        cx   = (cv & 0x3F) * 16
        cy   = (cv >> 6) & 0x1FF
        cidx = (cy * 1024 + cx) * 2
        nc   = 16 if tp_mode == 0 else 256
        cols = []
        for i in range(nc):
            if cidx + i*2 + 1 >= len(vram):
                cols.append((0,0,0,0)); continue
            c = vram[cidx+i*2] | (vram[cidx+i*2+1] << 8)
            r = ((c & 0x1F) << 3) | ((c & 0x1F) >> 2)
            g = (((c >> 5)  & 0x1F) << 3) | (((c >>  5) & 0x1F) >> 2)
            b = (((c >> 10) & 0x1F) << 3) | (((c >> 10) & 0x1F) >> 2)
            a = 0 if c == 0 else 255
            cols.append((r, g, b, a))
        clut_cache[cv] = cols

    canvas = Image.new('RGBA', (256, 256), (0, 0, 0, 0))
    px     = canvas.load()
    drawn  = 0

    for (u, v), cv in uv_clut.items():
        if u > 255 or v > 255:
            continue
        cols = clut_cache[cv]
        if tp_mode == 0:
            vx  = tp_x + (u // 4)
            vy  = tp_y + v
            idx = (vy * 1024 + vx) * 2
            if idx + 1 >= len(vram): continue
            word  = vram[idx] | (vram[idx+1] << 8)
            c_idx = (word >> ((u % 4) * 4)) & 0xF
        else:
            vx  = tp_x + (u // 2)
            vy  = tp_y + v
            idx = (vy * 1024 + vx) * 2
            if idx + 1 >= len(vram): continue
            word  = vram[idx] | (vram[idx+1] << 8)
            c_idx = (word >> ((u % 2) * 8)) & 0xFF

        col = cols[c_idx]
        if col[3] > 0:
            px[u, v] = col
            drawn += 1

    if drawn == 0:
        return None
    return canvas

# ── main ─────────────────────────────────────────────────────────────────────

# Build global UV-CLUT map from ALL SDATEs (maximises UV coverage)
all_sdats  = sorted(glob.glob('assets/chunk_*/*_sdats/*.sdat'))
all_chunks = sorted(set(
    p.split(os.sep)[1].split('_')[1]
    for p in all_sdats
))

print(f"Scanning {len(all_sdats)} SDAT files across {len(all_chunks)} chunks...")
global_uv_clut = scan_sdats(all_sdats)

for tp, uvm in sorted(global_uv_clut.items()):
    pct = len(uvm) / 65536 * 100
    print(f"  TPage {hex(tp)}: {len(uvm)} UV pixels explicitly mapped ({pct:.1f}%)")

# Render one composite per (TPage × unique-VRAM-hash)
print(f"\nRendering composites (one per unique VRAM × TPage)...")
seen_hashes = {}   # (tpage, vram_hash) -> filename
total_saved = 0

# Clear previous output
for old in glob.glob(f'{OUT_DIR}/composite_*.png'):
    os.remove(old)

for chunk_id in all_chunks:
    vram = load_vram(chunk_id)
    vh   = vram_hash(vram)

    for tpage_val, uv_clut in sorted(global_uv_clut.items()):
        key = (tpage_val, vh)
        if key in seen_hashes:
            continue   # identical VRAM already rendered this TPage

        img = render_composite(tpage_val, uv_clut, vram)
        if img is None:
            seen_hashes[key] = None
            continue

        bbox = img.getbbox()
        if not bbox:
            seen_hashes[key] = None
            continue

        fname = f'composite_chunk{chunk_id}_tp{hex(tpage_val)}.png'
        img.save(os.path.join(OUT_DIR, fname))
        seen_hashes[key] = fname
        total_saved += 1
        opaque = sum(1 for x in range(bbox[0], bbox[2])
                       for y in range(bbox[1], bbox[3])
                       if img.getpixel((x,y))[3] > 0)
        print(f"  chunk_{chunk_id} TPage {hex(tpage_val)}: {opaque} px drawn  → {fname}")

print(f"\n✓ Saved {total_saved} unique composite spritesheets to {OUT_DIR}/")
