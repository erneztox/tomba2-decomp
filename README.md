# Tomba! 2 Decompilation Project

This is an ongoing matching decompilation project for the PlayStation 1 game **Tomba! 2: The Evil Swine Return** (also known as Tombi! 2).

The goal of this project is to accurately recreate the original C source code. To ensure no bugs are introduced, the resulting code is compiled using the original PsyQ compiler toolchain (`cc1`) combined with modern translation layers (`maspsx`) to produce a byte-for-byte matching executable.

## Legal

> [!WARNING]
> This repository does **NOT** contain any original game assets, executables, or copyrighted materials. To build the project, you must legally acquire a copy of the game and extract the necessary files yourself.

## Setup Instructions

We use an automated Python script to extract the ISO, split the main executable into assembly, and set up the project. We also utilize Ghidra for reverse engineering and decompilation.

### 1. Prerequisites

- Python 3.8+
- Arch Linux/Linux packages: `p7zip` and `bchunk`.
- Arch Linux GNU Binutils for MIPS: `mips-linux-gnu-binutils` (required for assembling Little Endian PS1 objects).
  - Install via AUR: `yay -S mips-linux-gnu-binutils`
- Tu archivo comprimido `.7z` o tus archivos `.bin`/`.cue` obtenidos legalmente de tu disco de Tomba! 2.
- Ghidra 11.x+ (for decompilation).

### 2. Prepare the ROM

Place your `.bin` and `.cue` files (or `.7z` archive) inside the `rom/` folder at the root of this project.

### 3. Run Setup & Extraction

Run the setup script. This script will:
1. Extract the main executable (e.g., `SCUS_944.54`).
2. Run `splat` to split the executable into pure assembly files (`asm/`).
3. Extract the game's proprietary files into the `assets/` directory (unpacking the internal filesystem).

```bash
python3 scripts/setup.py
```

### 4. Ghidra Setup & MCP Bridge

To start analyzing and extracting C code, we use Ghidra with a custom MCP bridge.

1. **Import the Executable**: Open Ghidra, create a project, and import `rom/extracted/SCUS_944.54`. 
   - Format: `Raw Binary`
   - Language: `MIPS:LE:32:default`
2. **CRITICAL: Set Image Base**: The PS1 loads this executable at `0x80010000`. In Ghidra, go to **Window > Memory Map**, click the **Move Image Base** icon (the house with a blue arrow), and change the address from `00000000` to `80010000`.
3. **Auto Analyze**: Let Ghidra perform its default analysis.
4. **Start MCP Server**: If you installed the Ghidra-MCP bridge, start it via `Tools > GhidraMCP > Start MCP Server`. This allows external scripts to fetch decompiled code directly from your Ghidra instance.

## Engine Architecture & CD Structure

Tomba! 2 uses a custom file loading and indexing system, completely bypassing standard ISO9660 `CdSearchFile` lookups for its main assets.

### Executables
- **`SCUS_944.54`**: A lightweight bootloader/anti-piracy stub. It initializes the console and hands execution over to `MAIN.EXE`.
- **`MAIN.EXE`**: The true game engine (~716 KB). Contains the physics, GTE graphics logic, file parsing, and the LZSS decompression routines.

### Master Index & Assets
- **`START.BIN`**: The master manifest. A small plaintext list linking CD file paths (e.g., `\CD\SWDATA.BIN;1`) to internal numeric IDs.
- **`TOMBA2.IDX`**: The master pointer database. Sector 0 indexes 3D models/animations in `TOMBA2.DAT`. Sector 1 indexes raw VRAM texture uploads in `TOMBA2.IMG`.
- **Custom Formats & Compression**: Tomba! 2 strips standard PlayStation headers (`.TMD`, `.TIM`) to save RAM. Both `TOMBA2.DAT` and `TOMBA2.IMG` contain highly compressed chunks (LZSS). We use `tools/extractor/extractor.py` to natively parse `.IDX`, decompress the VRAM images, and extract the 3D meshes to the `assets/` directory.

### Level Overlays (.BIN files)
Files like `A00.BIN` are **compiled executable overlays**, not just asset archives. They are loaded at a fixed RAM address (usually `0x80100000`) and contain a massive virtual table of absolute memory pointers at their header, allowing `MAIN.EXE` to execute level-specific logic and fetch localized models instantly.

## Asset Extraction & VRAM Conversion

To natively extract the LZSS compressed 3D models (`.sdat`) and raw texture dumps (`.vram`) from the game without using an emulator, run the included extractor script:

```bash
python3 tools/extractor/extractor.py
```

This will populate the `assets/` folder with multiple `chunk_XX` directories containing the raw game data.

Because the extracted `.vram` files are raw 1MB memory dumps (1024x512 pixels at 16-bit color) containing CLUT-indexed textures, we have included a script to mass-convert them into standard `.png` images for easy viewing:

```bash
python3 vram2png.py
```
This will process all `.vram` chunks and output perfectly sized 16-bit PNG textures into the `assets/vram_pngs/` folder.

### 3D Models and Sprite Sheets (.SDAT to PNG)

Because Tomba! 2 uses 2D sprites running in a 3D environment, the `.sdat` files contain complex structures grouping bounding boxes, UVs, and CLUTs (Color Lookup Tables) for each character animation frame.
Furthermore, a single character model is often split into multiple polygons, each using a different color palette (e.g., skin, shorts, hair).

To extract the models and perfectly reconstruct each multi-palette character into a single consolidated spritesheet, run:

```bash
python3 sdat2img_v2.py
```

This powerful script acts as a reverse-engineered UV-mapper and VRAM compositor. It parses the `.sdat` models polygon by polygon, extracts their exact `U, V` bounding boxes, applies their specific `CLUT`, and composites them onto a transparent 256x256 canvas. The resulting perfectly-colored `.png` spritesheets are saved into the `assets/imagenes_composite/` directory.

## Compilation Pipeline

We have established a fully automated build pipeline that mirrors the original 1999 environment:

```bash
make
```

What `make` does under the hood:
1. Takes decompiled C code from `src/` (e.g., `src/func_8001DD04.c`).
2. Compiles it using the original PsyQ compiler (`tools/old-gcc/cc1`).
3. Processes the legacy assembly through `tools/maspsx` to make it compatible with modern GNU assemblers.
4. Assembles the final `.o` object file using `mips-linux-gnu-as` (with the `-EL` Little Endian flag).

The resulting object files will reside in `build/src/` as `elf32-tradlittlemips` binaries.

## Audio Extraction

Since PS1 CD-ROM XA audio files use specialized 2352-byte sectors with interleaved channels, extracting them requires a specialized tool (`jpsxdec`). We have automated this process in Python:

```bash
python3 scripts/extract_music.py
```

This script will automatically download `jpsxdec`, parse the original `.bin` ROM track, and extract all background music, cinematics audio, and voice clips as pristine `.wav` files into the `extracted_music/` directory. Note: The `extracted_music/` directory is ignored by Git to avoid uploading hundreds of megabytes of audio to the repository.

## Local Matching with asm-differ

To verify that your C code produces the exact same assembly as the original game, we use `asm-differ`.

### 1. Install Dependencies
If you are on Arch Linux, install the required python packages:
```bash
yay -S python-colorama python-watchdog python-levenshtein
```

### 2. Run the Diff
We have automated the assembly and diffing process in the `Makefile`. To continuously monitor and diff a function (e.g. `func_8001DD04`):

```bash
make diff FUNC=func_8001DD04
```

This command will:
1. Automatically read `asm/func_8001DD04.s`, inject the required `macro.inc`, and assemble it into the "expected" base object.
2. Compile your `src/func_8001DD04.c` into the "build" object.
3. Launch `asm-differ` in watch mode (`-w`), which will instantly recompilar and update the visual diff every time you save your C file.

## Contributing

We use local matching and [decomp.me](https://decomp.me/) to crowdsource functions.

1. Pick an assembly function from `asm/`.
2. Rewrite the MIPS assembly into C code inside `src/`.
3. To collaborate online, create a Scratch using our official **decomp.me Preset**: [https://decomp.me/preset/244](https://decomp.me/preset/244) (This sets up the PS1 platform, PsyQ 4.0 compiler, and `-O2 -G0` flags automatically).
4. Use `asm-differ` locally to compare your `build/src/function.o` against the original extracted assembly.
5. Once it's a 100% byte-perfect match, open a Pull Request!
