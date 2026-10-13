import os, glob

def process_sdats():
    chunks = sorted(glob.glob("assets/chunk_*"))
    for chunk in chunks:
        sdat_dir = os.path.join(chunk, os.path.basename(chunk).replace("chunk_", "") + "_sdats")
        if not os.path.exists(sdat_dir): continue
        
        # Find pointers file
        pointers_txt = glob.glob(os.path.join(sdat_dir, "*_pointers.txt"))
        sdat_file = glob.glob(os.path.join(sdat_dir, "*.sdat"))
        if not pointers_txt or not sdat_file: continue
        
        print(f"Processing {sdat_file[0]}...")
        pointers = []
        with open(pointers_txt[0], "r") as f:
            for line in f:
                if "Pointer:" in line:
                    parts = line.split(" | ")
                    id_hex = parts[0].split(": ")[1].strip()
                    ptr_hex = parts[1].split(": ")[1].strip()
                    addr_range = parts[2].split(" : ")[0].strip()
                    start_hex, end_hex = addr_range.split("-")
                    pointers.append((id_hex, int(ptr_hex, 16), start_hex, end_hex))
        
        with open(sdat_file[0], "rb") as sf:
            for id_hex, ptr, start_hex, end_hex in pointers:
                size = int(end_hex, 16) - int(start_hex, 16) + 1
                if size <= 0: continue
                sf.seek(ptr)
                data = sf.read(size)
                
                # We save the file using its hex address since we don't have TOMBAMAP
                out_name = os.path.join(sdat_dir, f"{start_hex}-{end_hex}_{id_hex}.bin")
                with open(out_name, "wb") as outf:
                    outf.write(data)
                print(f"  Extracted {out_name} (Size: {size} bytes)")

process_sdats()
