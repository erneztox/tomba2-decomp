#!/usr/bin/env python3
"""
Automated starter asset extractor for bevy_tomba2 using Tomba2Edit formats.
Extracts:
1. Tomba 3D Model -> bevy_tomba2/assets/models/tomba.glb
2. Fisherman's Village Level 3D Mesh -> bevy_tomba2/assets/levels/area_04_fishermen.glb
"""

import os
import sys
import struct
import json
import math

PROJECT_ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
sys.path.insert(0, os.path.join(PROJECT_ROOT, "Tomba2Edit"))

from formats.models.smst_parser import parse_smst
from formats.models import gltf_export
from formats.geometry.mdat import area_mdat_entries, exportMDAT
from formats.images import img_codec
from formats.animation import skeleton_tree, anmp_parser, sequences
from formats.animation.anmp_parser import blend, Frame
from formats.collision import scld_parser, scld_geometry
from psx import vram as psx_vram

EXE_PATH = os.path.join(PROJECT_ROOT, "rom", "extracted", "MAIN.EXE")
IDX_PATH = os.path.join(PROJECT_ROOT, "rom", "extracted", "CD", "TOMBA2.IDX")
DAT_PATH = os.path.join(PROJECT_ROOT, "rom", "extracted", "CD", "TOMBA2.DAT")
IMG_PATH = os.path.join(PROJECT_ROOT, "rom", "extracted", "CD", "TOMBA2.IMG")

ASSETS_DIR = os.path.join(PROJECT_ROOT, "bevy_tomba2", "assets")
MODELS_DIR = os.path.join(ASSETS_DIR, "models")
LEVELS_DIR = os.path.join(ASSETS_DIR, "levels")


def decompress_vram_chunk(img_file, start, end, vram_buffer):
    """Decompresses an IMG chunk directly into the given 1MB VRAM bytearray."""
    img_file.seek(start)
    chunk_data = img_file.read(end - start)
    for (x, y, w, h, _), pixels in img_codec.decompress_chunk(chunk_data):
        row_bytes = w * 2
        for row in range(h):
            at = (y + row) * psx_vram.VRAM_STRIDE + x * 2
            vram_buffer[at : at + row_bytes] = pixels[row * row_bytes : (row + 1) * row_bytes]


def main():
    print("=== Tomba 2 Asset Extractor for Bevy ===")
    os.makedirs(MODELS_DIR, exist_ok=True)
    os.makedirs(LEVELS_DIR, exist_ok=True)

    # 1. Read Chunk Metadata from IDX
    with open(IDX_PATH, "rb") as idx:
        # Chunk 1 (Shared Player / UI)
        idx.seek(1 * 0x800)
        c1_img_start, c1_img_end = struct.unpack("<2I", idx.read(8))

        # Chunk 4 (Town of the Fishermen)
        idx.seek(4 * 0x800)
        c4_img_start, c4_img_end, c4_dat_start, c4_dat_end, _ = struct.unpack("<5I", idx.read(20))

    # 2. Build combined VRAM (Chunk 1 + Chunk 4)
    print("Decompressing VRAM textures...")
    vram = bytearray(psx_vram.VRAM_SIZE)
    with open(IMG_PATH, "rb") as img:
        decompress_vram_chunk(img, c1_img_start, c1_img_end, vram)
        decompress_vram_chunk(img, c4_img_start, c4_img_end, vram)
    vram_bytes = bytes(vram)
    print(f"VRAM buffer ready ({len(vram_bytes)} bytes).")

    # 3. Export Tomba Model with Skeleton and Idle Animation
    print("Exporting Tomba 3D Model with Skeleton and Idle Animation...")
    with open(EXE_PATH, "rb") as exe:
        exe_data = exe.read()
        bones = skeleton_tree.read_table(exe_data, 0x947A8, 17)

    with open(DAT_PATH, "rb") as dat:
        # Tomba SMST begins at 0x82F000
        dat.seek(0x82F000)
        tomba_raw = dat.read(0x4000)
        # Tomba ANMP begins at 0x0091CC
        dat.seek(0x0091CC)
        anmp_raw = dat.read(0x02125F - 0x0091CC + 1)

    tomba_model = parse_smst(tomba_raw)
    anmp = anmp_parser.parse_anmp(anmp_raw)
    bank = sequences.tomba_bank([("MAIN.EXE", exe_data)], anmp, resource_id=4)
    idle_clip = bank.clips[2] if bank and len(bank.clips) > 2 else None

    frames = []
    if idle_clip:
        frames_by_id = {f.index: f for f in anmp.frames}
        clip_scales = sequences.scale_states(idle_clip, frames_by_id)
        for tick in range(idle_clip.duration):
            row, nxt, amount = idle_clip.sample(tick)
            first = frames_by_id[idle_clip.steps[row].pose]
            second = frames_by_id[idle_clip.steps[nxt].pose] if nxt is not None else None
            rotations, root, scales = blend(first, second, amount)
            scales = clip_scales[row]
            frames.append(Frame(
                index=tick, offset=first.offset, tag=first.tag,
                limbs=[tuple(v / math.tau * 4096 for v in r) for r in rotations],
                root=tuple(int(round(v)) & 0xFFF for v in root),
                scales=[tuple(v * 4096 for v in s) for s in scales]))
        print(f"Baked {len(frames)} frames for Tomba Idle animation.")

    tomba_out = os.path.join(MODELS_DIR, "tomba.glb")
    # Groups 17..20 are alternate costume parts (eyes, hands, pig suit); skip them for base model
    gltf_export.write_glb(
        tomba_out,
        tomba_model,
        vram_bytes,
        groups=tomba_model["groups"],
        bones=bones,
        frames=frames if frames else None,
        fps=30,
        name="tomba",
        skip={17, 18, 19, 20},
    )
    print(f"-> Rigged Tomba model exported to {tomba_out} ({os.path.getsize(tomba_out):,} bytes)")

    # 4. Export Area 04 Level Geometry (MDAT)
    print("Exporting Area 04 (Town of the Fishermen)...")
    mdats = area_mdat_entries(IDX_PATH, DAT_PATH, 4)
    if not mdats:
        print("Error: No MDAT found in Chunk 4!")
        sys.exit(1)

    _, d_start, offset, _ = mdats[0]
    level_model = exportMDAT(d_start + offset, DAT_PATH)
    level_out = os.path.join(LEVELS_DIR, "area_04_fishermen.glb")
    gltf_export.write_glb(level_out, level_model, vram_bytes, name="area_04_fishermen")
    print(f"-> Level geometry exported to {level_out} ({os.path.getsize(level_out):,} bytes)")

    # 5. Export Area 04 Collision Data (SCLD)
    print("Exporting Area 04 Collision Planes (SCLD)...")
    loc = scld_parser.find_area_scld_location(IDX_PATH, 4)
    if not loc:
        print("Error: No SCLD found in Chunk 4!")
        sys.exit(1)

    dat_start, offset, size = loc
    scld = scld_parser.load_scld(DAT_PATH, dat_start, offset, size)
    planes = []
    for entry in scld.entries:
        geom = scld_geometry.geometry(entry)
        plane_data = {
            "id": geom.number,
            "p1": [geom.x1 / 100.0, -geom.baseline_y / 100.0, geom.z1 / 100.0],
            "p2": [geom.x2 / 100.0, -geom.baseline_y / 100.0, geom.z2 / 100.0],
            "length": geom.length / 100.0,
            "dir": list(geom.dir),
            "ls": entry.ls,
            "le": entry.le,
            "floors": [],
            "walls": [],
            "junctions": [],
        }
        for seg in geom.segments:
            if seg.info.role == "floor":
                s_lo = min(seg.slot.s_in, seg.slot.s_out) / 100.0
                s_hi = max(seg.slot.s_in, seg.slot.s_out) / 100.0
                if seg.slot.s_in <= seg.slot.s_out:
                    y_min = -seg.a[1] / 100.0
                    y_max = -seg.b[1] / 100.0
                else:
                    y_min = -seg.b[1] / 100.0
                    y_max = -seg.a[1] / 100.0
                plane_data["floors"].append({
                    "s_min": s_lo,
                    "s_max": s_hi,
                    "y_start": y_min,
                    "y_end": y_max,
                    "kind": seg.kind,
                })
        for w in geom.walls:
            s_w = geom.s_of(w.x, w.z) / 100.0
            plane_data["walls"].append({
                "s": s_w,
                "y_bottom": -w.y_bottom / 100.0,
                "y_top": -w.y_top / 100.0,
                "kind": w.kind,
            })
        for j in geom.junctions:
            s_j = geom.s_of(j.x, j.z) / 100.0
            plane_data["junctions"].append({
                "s": s_j,
                "pos": [j.x / 100.0, -j.y / 100.0, j.z / 100.0],
                "direction": j.direction,
                "dest": j.dest,
                "walk": j.walk,
                "gated": j.gated,
            })
        planes.append(plane_data)

    collision_out = os.path.join(LEVELS_DIR, "area_04_collision.json")
    with open(collision_out, "w") as f:
        json.dump({"planes": planes}, f, indent=2)
    print(f"-> Collision planes exported to {collision_out} ({len(planes)} planes, {os.path.getsize(collision_out):,} bytes)")

    print("\nStarter assets extraction complete!")


if __name__ == "__main__":
    main()
