#!/usr/bin/env python3
"""
tools/export_all_assets.py - Master Batch Asset Extractor for bevy_tomba2.

Extracts all authentic assets from the original Tomba 2 PS1 disc images into
modern formats using Tomba2Edit's reverse-engineered modules:

1. Models & Skeletal Animations:
   - Tomba rigged 3D character mesh (.glb) with all 239 skeletal animation clips
     (with standard aliases: Idle, Walk, Trot, Run, Sprint, Jump_Airborne, Jump_Fall).
2. Sound Effects (SFX):
   - All 385 authentic SPU ADPCM sound effects decoded directly into 16-bit WAV.
3. Music (BGM):
   - Streamed CD-XA background music tracks decoded into stereo WAV.
4. Level Geometry & Collisions:
   - All 3D environment meshes (MDAT -> .glb) with baked PS1 VRAM textures.
   - All 2.5D collision planes, floors, walls, and junctions (SCLD -> .json).
5. Manifest:
   - bevy_tomba2/assets/manifest.json indexing every asset.
"""

import argparse
import json
import math
import os
import struct
import sys
import time

PROJECT_ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
sys.path.insert(0, os.path.join(PROJECT_ROOT, "Tomba2Edit"))

from formats.animation import anmp_parser, sequences, skeleton_tree
from formats.animation.anmp_parser import Frame, blend
from formats.audio import audio_export, bgm, sfx, voice, xa
from formats.collision import scld_geometry, scld_parser
from formats.geometry.mdat import area_mdat_entries, exportMDAT
from formats.images import img_codec
from formats.models import gltf_export
from formats.models.smst_parser import parse_smst
from psx import vram as psx_vram

# Disc paths
ROM_DIR = os.path.join(PROJECT_ROOT, "rom")
EXTRACTED_DIR = os.path.join(ROM_DIR, "extracted")
EXE_PATH = os.path.join(EXTRACTED_DIR, "MAIN.EXE")
IDX_PATH = os.path.join(EXTRACTED_DIR, "CD", "TOMBA2.IDX")
DAT_PATH = os.path.join(EXTRACTED_DIR, "CD", "TOMBA2.DAT")
IMG_PATH = os.path.join(EXTRACTED_DIR, "CD", "TOMBA2.IMG")
SND_PATH = os.path.join(EXTRACTED_DIR, "CD", "TOMBA2.SND")
TRACK1_BIN = os.path.join(ROM_DIR, "Tomba! 2 - The Evil Swine Return (USA) (Track 1).bin")

# Output directories
ASSETS_DIR = os.path.join(PROJECT_ROOT, "bevy_tomba2", "assets")
MODELS_DIR = os.path.join(ASSETS_DIR, "models")
LEVELS_DIR = os.path.join(ASSETS_DIR, "levels")
AUDIO_DIR = os.path.join(ASSETS_DIR, "audio")
SFX_DIR = os.path.join(AUDIO_DIR, "sfx")
BGM_DIR = os.path.join(AUDIO_DIR, "bgm")


def decompress_vram_range(img_file, start, end, vram_buffer):
    """Decompresses an IMG chunk directly into the given 1MB VRAM bytearray."""
    if end <= start:
        return
    img_file.seek(start)
    chunk_data = img_file.read(end - start)
    for (x, y, w, h, _), pixels in img_codec.decompress_chunk(chunk_data):
        row_bytes = w * 2
        for row in range(h):
            at = (y + row) * psx_vram.VRAM_STRIDE + x * 2
            vram_buffer[at : at + row_bytes] = pixels[row * row_bytes : (row + 1) * row_bytes]


def export_tomba_model(manifest):
    print("\n--- 1. Exporting Tomba 3D Model & 239 Skeletal Animation Clips ---")
    t0 = time.time()
    os.makedirs(MODELS_DIR, exist_ok=True)

    with open(IDX_PATH, "rb") as idx:
        idx.seek(1 * 0x800)
        c1_s, c1_e = struct.unpack("<2I", idx.read(8))
        idx.seek(4 * 0x800)
        c4_s, c4_e = struct.unpack("<2I", idx.read(8))

    vram = bytearray(psx_vram.VRAM_SIZE)
    with open(IMG_PATH, "rb") as img:
        decompress_vram_range(img, c1_s, c1_e, vram)
        decompress_vram_range(img, c4_s, c4_e, vram)
    vram_bytes = bytes(vram)

    with open(EXE_PATH, "rb") as exe:
        exe_data = exe.read()
        bones = skeleton_tree.read_table(exe_data, 0x947A8, 17)

    with open(DAT_PATH, "rb") as dat:
        dat.seek(0x82F000)
        tomba_raw = dat.read(0x4000)
        dat.seek(0x0091CC)
        anmp_raw = dat.read(0x02125F - 0x0091CC + 1)

    tomba_model = parse_smst(tomba_raw)
    anmp = anmp_parser.parse_anmp(anmp_raw)
    bank = sequences.tomba_bank([("MAIN.EXE", exe_data)], anmp, resource_id=4)
    frames_by_id = {f.index: f for f in anmp.frames}

    def bake_clip(clip):
        frames = []
        clip_scales = sequences.scale_states(clip, frames_by_id)
        for tick in range(clip.duration):
            row, nxt, amount = clip.sample(tick)
            first = frames_by_id[clip.steps[row].pose]
            second = frames_by_id[clip.steps[nxt].pose] if nxt is not None else None
            rotations, root, scales = blend(first, second, amount)
            scales = clip_scales[row]
            frames.append(
                Frame(
                    index=tick,
                    offset=first.offset,
                    tag=first.tag,
                    limbs=[tuple(v / math.tau * 4096 for v in r) for r in rotations],
                    root=tuple(int(round(v)) & 0xFFF for v in root),
                    scales=[tuple(v * 4096 for v in s) for s in scales],
                )
            )
        return frames

    # Named standard aliases from decompiled physics & animation states
    aliases = {
        2: "Idle",
        3: "Walk_Start",
        4: "Walk",
        7: "Trot_Start",
        8: "Trot",
        11: "Run_Start",
        12: "Run",
        15: "Sprint_Start",
        16: "Sprint",
        0xCA: "Jump_Airborne",
        0xCB: "Jump_Fall",
    }

    anim_dict = {}
    for i, clip in enumerate(bank.clips):
        name = aliases.get(i, f"Anim_{i:03d}")
        anim_dict[name] = bake_clip(clip)

    for idx, alias in aliases.items():
        if alias not in anim_dict:
            anim_dict[alias] = bake_clip(bank.clips[idx])

    out_path = os.path.join(MODELS_DIR, "tomba.glb")
    gltf_export.write_glb(
        out_path,
        tomba_model,
        vram_bytes,
        groups=tomba_model["groups"],
        bones=bones,
        frames=anim_dict,
        fps=30,
        name="tomba",
        skip={17, 18, 19, 20},
    )

    t1 = time.time()
    size_mb = os.path.getsize(out_path) / (1024 * 1024)
    print(f"-> Exported {out_path} ({size_mb:.2f} MB, {len(anim_dict)} clips) in {t1 - t0:.2f}s")
    manifest["models"]["tomba"] = {
        "path": "models/tomba.glb",
        "animations": list(anim_dict.keys()),
    }


def export_all_sfx(manifest):
    print("\n--- 2. Exporting All 385 Authentic PS1 SFX (TOMBA2.SND) ---")
    t0 = time.time()
    os.makedirs(SFX_DIR, exist_ok=True)

    with open(SND_PATH, "rb") as f:
        snd_data = f.read()
    with open(EXE_PATH, "rb") as f:
        exe_data = f.read()

    overlays = {}
    for i, c in enumerate("0123456789ABCDEFGHIJKL"):
        p = os.path.join(EXTRACTED_DIR, "BIN", f"A0{c}.BIN")
        if os.path.exists(p):
            with open(p, "rb") as f:
                overlays[i] = f.read()

    rates = sfx.default_rates(exe_data, snd_data, overlays)
    slots = sfx.samples(snd_data)

    names_json = os.path.join(PROJECT_ROOT, "Tomba2Edit", "audio_names", "SCUS_944.54.json")
    names_map = {}
    if os.path.exists(names_json):
        with open(names_json, "r", encoding="utf-8") as f:
            names_map = json.load(f).get("sfx", {})

    count = 0
    sfx_manifest = {}
    for row, (bank, index, offset, size) in enumerate(slots, 1):
        key = f"{bank}:{index}"
        name = names_map.get(key, "")
        stem = audio_export.safe_name(f"{bank:02d}_{index:03d}" + (f"_{name}" if name else ""))
        samples = sfx.decode(snd_data, offset, size)
        rate = rates.get(key, sfx.RATE)
        wav = xa.wav_bytes(samples, rate, 1)

        rel_path = f"audio/sfx/{stem}.wav"
        out_path = os.path.join(ASSETS_DIR, rel_path)
        with open(out_path, "wb") as out_f:
            out_f.write(wav)

        sfx_manifest[stem] = {
            "path": rel_path,
            "bank": bank,
            "index": index,
            "name": name,
            "rate": rate,
        }
        count += 1

    t1 = time.time()
    print(f"-> Exported {count} SFX WAV files to {SFX_DIR} in {t1 - t0:.2f}s")
    manifest["sfx"] = sfx_manifest


def export_bgm_tracks(manifest):
    print("\n--- 3. Exporting CD-XA Background Music (BGM.XA) ---")
    if not os.path.exists(TRACK1_BIN):
        print(f"Notice: {TRACK1_BIN} not found; skipping streamed CD-XA music.")
        return

    t0 = time.time()
    os.makedirs(BGM_DIR, exist_ok=True)

    where = voice.find_file(TRACK1_BIN, "BGM.XA")
    if not where:
        print("Notice: BGM.XA not located on Track 1; skipping.")
        return

    lba, sectors = where
    with open(EXE_PATH, "rb") as f:
        exe_data = f.read()

    with open(TRACK1_BIN, "rb") as f:
        found = bgm.pieces(f, lba, sectors, exe_data)

    names_json = os.path.join(PROJECT_ROOT, "Tomba2Edit", "audio_names", "SCUS_944.54.json")
    music_names = {}
    if os.path.exists(names_json):
        with open(names_json, "r", encoding="utf-8") as f:
            music_names = json.load(f).get("music", {})

    bgm_manifest = {}
    count = 0
    with open(TRACK1_BIN, "rb") as f:
        for piece in found:
            ch = piece["channel"]
            ord_id = piece["ordinal"] + 1
            key = f"BGM.XA:{ch}:{ord_id}"
            title = music_names.get(key, f"Track_{ch}_{ord_id}")
            stem = audio_export.safe_name(f"{ch:02d}_{ord_id:02d}_{title}")

            samples, rate, speakers = xa.decode_channel(f, lba, piece["indices"])
            wav = xa.wav_bytes(samples, rate, speakers)

            rel_path = f"audio/bgm/{stem}.wav"
            out_path = os.path.join(ASSETS_DIR, rel_path)
            with open(out_path, "wb") as out_f:
                out_f.write(wav)

            bgm_manifest[stem] = {
                "path": rel_path,
                "title": title,
                "channel": ch,
                "track": ord_id,
                "rate": rate,
                "channels": speakers,
            }
            count += 1

    t1 = time.time()
    print(f"-> Exported {count} BGM music tracks to {BGM_DIR} in {t1 - t0:.2f}s")
    manifest["bgm"] = bgm_manifest


def export_all_levels(manifest):
    print("\n--- 4. Exporting All 22 Levels (MDAT Meshes & SCLD Collisions) ---")
    t0 = time.time()
    os.makedirs(LEVELS_DIR, exist_ok=True)

    with open(IDX_PATH, "rb") as idx:
        idx.seek(1 * 0x800)
        c1_img_start, c1_img_end = struct.unpack("<2I", idx.read(8))

    level_manifest = {}
    for chunk_idx in range(40):
        try:
            mdats = area_mdat_entries(IDX_PATH, DAT_PATH, chunk_idx)
            loc = scld_parser.find_area_scld_location(IDX_PATH, chunk_idx)
            if not mdats and not loc:
                continue

            # Decompress VRAM for this area
            with open(IDX_PATH, "rb") as idx:
                idx.seek(chunk_idx * 0x800)
                c_s, c_e = struct.unpack("<2I", idx.read(8))
            vram = bytearray(psx_vram.VRAM_SIZE)
            with open(IMG_PATH, "rb") as img:
                decompress_vram_range(img, c1_img_start, c1_img_end, vram)
                decompress_vram_range(img, c_s, c_e, vram)
            vram_bytes = bytes(vram)

            area_info = {"chunk": chunk_idx, "models": [], "collision": None}

            # Export MDAT meshes
            for i, (f_idx, d_start, offset, size) in enumerate(mdats):
                suffix = f"_{i}" if len(mdats) > 1 else ""
                model = exportMDAT(d_start + offset, DAT_PATH)
                rel_glb = f"levels/area_{chunk_idx:02d}{suffix}.glb"
                out_glb = os.path.join(ASSETS_DIR, rel_glb)
                gltf_export.write_glb(out_glb, model, vram_bytes, name=f"area_{chunk_idx:02d}{suffix}")
                area_info["models"].append(rel_glb)

            # Export SCLD collision
            if loc:
                dat_start, offset, size = loc
                scld = scld_parser.load_scld(DAT_PATH, dat_start, offset, size)
                planes = []
                for entry in scld.entries:
                    geom = scld_geometry.geometry(entry)
                    v1 = scld_geometry.view(geom.x1, geom.baseline_y, geom.z1)
                    v2 = scld_geometry.view(geom.x2, geom.baseline_y, geom.z2)
                    p1 = [v1[0] / 100.0, v1[1] / 100.0, v1[2] / 100.0]
                    p2 = [v2[0] / 100.0, v2[1] / 100.0, v2[2] / 100.0]
                    dx = p2[0] - p1[0]
                    dz = p2[2] - p1[2]
                    L = (dx * dx + dz * dz) ** 0.5
                    dir_bevy = [dx / L, dz / L] if L > 1e-6 else [0.0, 1.0]

                    plane_data = {
                        "id": geom.number,
                        "p1": p1,
                        "p2": p2,
                        "length": L,
                        "dir": dir_bevy,
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
                            a_v = scld_geometry.view(*seg.a)
                            b_v = scld_geometry.view(*seg.b)
                            if seg.slot.s_in <= seg.slot.s_out:
                                y_min = a_v[1] / 100.0
                                y_max = b_v[1] / 100.0
                            else:
                                y_min = b_v[1] / 100.0
                                y_max = a_v[1] / 100.0
                            plane_data["floors"].append({
                                "s_min": s_lo,
                                "s_max": s_hi,
                                "y_start": y_min,
                                "y_end": y_max,
                                "kind": seg.kind,
                            })
                    for w in geom.walls:
                        s_w = geom.s_of(w.x, w.z) / 100.0
                        w_a = scld_geometry.view(w.x, w.y_bottom, w.z)
                        w_b = scld_geometry.view(w.x, w.y_top, w.z)
                        plane_data["walls"].append({
                            "s": s_w,
                            "pos": [w_a[0] / 100.0, w_a[1] / 100.0, w_a[2] / 100.0],
                            "y_bottom": w_a[1] / 100.0,
                            "y_top": w_b[1] / 100.0,
                            "kind": w.kind,
                        })
                    for j in geom.junctions:
                        s_j = geom.s_of(j.x, j.z) / 100.0
                        j_v = scld_geometry.view(j.x, j.y, j.z)
                        plane_data["junctions"].append({
                            "s": s_j,
                            "pos": [j_v[0] / 100.0, j_v[1] / 100.0, j_v[2] / 100.0],
                            "direction": j.direction,
                            "dest": j.dest,
                            "walk": j.walk,
                            "gated": j.gated,
                        })
                    planes.append(plane_data)

                rel_json = f"levels/area_{chunk_idx:02d}_collision.json"
                out_json = os.path.join(ASSETS_DIR, rel_json)
                with open(out_json, "w", encoding="utf-8") as f:
                    json.dump({"planes": planes}, f, indent=2)
                area_info["collision"] = rel_json

            level_manifest[f"area_{chunk_idx:02d}"] = area_info
        except Exception as e:
            print(f"Notice: skipped chunk {chunk_idx}: {e}")

    t1 = time.time()
    print(f"-> Exported {len(level_manifest)} area environments in {t1 - t0:.2f}s")
    manifest["levels"] = level_manifest


def main():
    parser = argparse.ArgumentParser(description="Batch export all Tomba 2 assets for bevy_tomba2")
    parser.add_argument("--all", action="store_true", default=True, help="Export everything (default)")
    parser.add_argument("--models", action="store_true", help="Export 3D models and animations only")
    parser.add_argument("--sfx", action="store_true", help="Export SFX only")
    parser.add_argument("--bgm", action="store_true", help="Export BGM music only")
    parser.add_argument("--levels", action="store_true", help="Export levels and collision only")
    args = parser.parse_args()

    # If any specific flag is passed, turn off default --all
    specific = args.models or args.sfx or args.bgm or args.levels
    do_models = args.models or not specific
    do_sfx = args.sfx or not specific
    do_bgm = args.bgm or not specific
    do_levels = args.levels or not specific

    print("==========================================================")
    print("   TOMBA 2 MASTER BATCH ASSET EXTRACTOR FOR BEVY")
    print("==========================================================")

    manifest = {"models": {}, "levels": {}, "sfx": {}, "bgm": {}}

    manifest_path = os.path.join(ASSETS_DIR, "manifest.json")
    if os.path.exists(manifest_path):
        try:
            with open(manifest_path, "r", encoding="utf-8") as f:
                manifest = json.load(f)
        except Exception:
            pass

    if do_models:
        export_tomba_model(manifest)
    if do_sfx:
        export_all_sfx(manifest)
    if do_bgm:
        export_bgm_tracks(manifest)
    if do_levels:
        export_all_levels(manifest)

    with open(manifest_path, "w", encoding="utf-8") as f:
        json.dump(manifest, f, indent=2)
    print(f"\nManifest successfully updated at {manifest_path}")
    print("All batch asset extraction tasks finished successfully!")


if __name__ == "__main__":
    main()
