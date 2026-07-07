import os
import glob
import subprocess
import sys
import shutil

PROJECT_ROOT = os.path.abspath(os.path.join(os.path.dirname(__file__), ".."))
ROM_DIR = os.path.join(PROJECT_ROOT, "rom")
EXTRACT_DIR = os.path.join(ROM_DIR, "extracted")
CONFIG_DIR = os.path.join(PROJECT_ROOT, "config")

def run_cmd(cmd, cwd=None):
    print(f"Running: {cmd}")
    result = subprocess.run(cmd, shell=True, cwd=cwd)
    if result.returncode != 0:
        print(f"Command failed with exit code {result.returncode}")
        sys.exit(1)

def main():
    print("--- Tomba 2 Decompilation Setup ---")
    
    if not os.path.exists(ROM_DIR):
        print(f"Error: {ROM_DIR} does not exist.")
        sys.exit(1)
        
    # Check for 7z files first
    archives = glob.glob(os.path.join(ROM_DIR, "*.7z"))
    if archives:
        print(f"Found archive: {archives[0]}")
        print("Extracting archive...")
        run_cmd(f"7z x \"{archives[0]}\" -orom/ -y", cwd=PROJECT_ROOT)

    bins = glob.glob(os.path.join(ROM_DIR, "*Track 1*.bin")) + glob.glob(os.path.join(ROM_DIR, "*.bin"))
    if not bins:
        print("Error: No .bin files found in rom/ directory.")
        sys.exit(1)
        
    track1_bin = bins[0]
    print(f"Found ROM: {track1_bin}")
    
    # Extract ISO using bchunk
    if not os.path.exists(EXTRACT_DIR):
        os.makedirs(EXTRACT_DIR)
        
        print("\nExtracting ISO from BIN using bchunk...")
        # Create dummy cue for Track 1
        dummy_cue = os.path.join(ROM_DIR, "track1.cue")
        with open(dummy_cue, "w") as f:
            f.write(f'FILE "{os.path.basename(track1_bin)}" BINARY\n  TRACK 01 MODE2/2352\n    INDEX 01 00:00:00\n')
            
        iso_prefix = os.path.join(ROM_DIR, "tomba2_clean_")
        run_cmd(f"bchunk \"{track1_bin}\" \"{dummy_cue}\" \"{iso_prefix}\"")
        
        iso_file = iso_prefix + "01.iso"
        if not os.path.exists(iso_file):
            print("Error: bchunk failed to create ISO.")
            sys.exit(1)
            
        print("\nExtracting files from ISO using 7z...")
        # 7z often returns code 2 on PS1 isos due to dummy files at the end, so we ignore errors here
        subprocess.run(f"7z x \"{iso_file}\" -orom/extracted/ -y", shell=True, cwd=PROJECT_ROOT)
        
    # Find Executable
    executables = glob.glob(os.path.join(EXTRACT_DIR, "S*S_*.**")) + glob.glob(os.path.join(EXTRACT_DIR, "S*S*.**"))
    if not executables:
        print("Error: Could not find PlayStation executable (e.g., SLUS_xxx.xx) in extracted directory.")
        sys.exit(1)
        
    exe_path = executables[0]
    exe_name = os.path.basename(exe_path)
    print(f"Found executable: {exe_name}")
    
    # Update splat.yaml
    splat_config = os.path.join(CONFIG_DIR, "splat.yaml")
    if os.path.exists(splat_config):
        with open(splat_config, 'r') as f:
            config_data = f.read()
            
        # Basic replace, works for initial setup
        import re
        config_data = re.sub(r"target_path: .*", f"target_path: ../rom/extracted/{exe_name}", config_data)
        
        with open(splat_config, 'w') as f:
            f.write(config_data)
        print("Updated splat.yaml with executable path.")
        
    print("\n--- Ghidra MCP Integration ---")
    print("To connect your AI assistant directly to Ghidra:")
    print("1. Create a new Ghidra project and import the executable:")
    print(f"   {exe_path}")
    print("2. Install the bethington/ghidra-mcp bridge.")
    print("\nSetup complete! You can now run splat or start decompiling.")

if __name__ == "__main__":
    main()
