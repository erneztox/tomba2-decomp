#!/usr/bin/env python3
import os
import urllib.request
import zipfile
import subprocess
import sys

TOOLS_DIR = "tools"
JPSXDEC_URL = "https://github.com/m35/jpsxdec/releases/download/v2.1/jpsxdec_v2.1-beta.zip"
JPSXDEC_ZIP = os.path.join(TOOLS_DIR, "jpsxdec.zip")
JPSXDEC_JAR = os.path.join(TOOLS_DIR, "jpsxdec_v2.1-beta", "jpsxdec.jar")
ROM_FILE = "rom/Tomba! 2 - The Evil Swine Return (USA) (Track 1).bin"
EXTRACT_DIR = "extracted_music"
INDEX_FILE = os.path.join(EXTRACT_DIR, "index.idx")

def main():
    print("=== Tomba! 2 Music Extractor ===")

    if not os.path.isfile(ROM_FILE):
        print(f"Error: Original ROM file not found at '{ROM_FILE}'.")
        print("Please ensure the .bin file is in the rom/ folder.")
        sys.exit(1)

    os.makedirs(TOOLS_DIR, exist_ok=True)
    os.makedirs(EXTRACT_DIR, exist_ok=True)

    # Download jpsxdec if it doesn't exist
    if not os.path.isfile(JPSXDEC_JAR):
        print("Downloading jpsxdec v2.1-beta...")
        urllib.request.urlretrieve(JPSXDEC_URL, JPSXDEC_ZIP)
        
        print("Extracting jpsxdec...")
        with zipfile.ZipFile(JPSXDEC_ZIP, 'r') as zip_ref:
            zip_ref.extractall(TOOLS_DIR)
        
        os.remove(JPSXDEC_ZIP)

    # Generate index
    if not os.path.isfile(INDEX_FILE):
        print("Analyzing the ROM to generate audio index (this may take a minute)...")
        subprocess.run(["java", "-jar", JPSXDEC_JAR, "-f", ROM_FILE, "-x", INDEX_FILE], check=True)

    # Extract audio
    print(f"Extracting audio tracks to '{EXTRACT_DIR}/'...")
    subprocess.run(["java", "-jar", JPSXDEC_JAR, "-x", INDEX_FILE, "-a", "audio", "-dir", EXTRACT_DIR], check=True)

    print("Extraction complete! Enjoy the OST.")

if __name__ == "__main__":
    main()
