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

PROJECT_ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
sys.path.insert(0, os.path.join(PROJECT_ROOT, "Tomba2Edit"))

from formats.models.smst_parser import parse_smst
from formats.models import gltf_export
from formats.geometry.mdat import area_mdat_entries, exportMDAT
from formats.images import img_codec
from psx import vram as psx_vram

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

    # 3. Export Tomba Model
    print("Exporting Tomba 3D Model...")
    with open(DAT_PATH, "rb") as dat:
        # Tomba SMST begins at 0x82F000
        dat.seek(0x82F000)
        tomba_raw = dat.read(0x4000)

    tomba_model = parse_smst(tomba_raw)
    tomba_out = os.path.join(MODELS_DIR, "tomba.glb")
    gltf_export.write_glb(tomba_out, tomba_model, vram_bytes, groups=tomba_model["groups"], name="tomba")
    print(f"-> Tomba model exported to {tomba_out} ({os.path.getsize(tomba_out):,} bytes)")

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

    print("\nStarter assets extraction complete!")


if __name__ == "__main__":
    main()
