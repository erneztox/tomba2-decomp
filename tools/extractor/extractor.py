import os
import sys
import struct

# Tomba 2 Asset Extractor
# Based on the community Tomba2Ex script.

def mdir(directory):
    if not os.path.exists(directory):
        os.makedirs(directory)

def tuplify(item):
    dat_id = item >> 24
    dat_ptr = item & 0x00FFFFFF
    return (dat_id, dat_ptr)

lista = {}
comparedlist = {}
newlista = []
outlist = {}
unknown_count = 0
unmapped_list = []
newMAP = {}

# Paths adapted for the professional repository structure
PROJECT_ROOT = os.path.abspath(os.path.join(os.path.dirname(__file__), "..", ".."))
CDpath = os.path.join(PROJECT_ROOT, "rom", "extracted", "CD")
outfolder = os.path.join(PROJECT_ROOT, "assets")
tombamap = os.path.join(PROJECT_ROOT, "config", "TOMBAMAP.txt") # Expected map file location

def extract_assets():
    global unknown_count
    mdir(outfolder)

    idxpath = os.path.join(CDpath, "TOMBA2.IDX")
    datpath = os.path.join(CDpath, "TOMBA2.DAT")
    imgpath = os.path.join(CDpath, "TOMBA2.IMG")

    if not all(os.path.exists(p) for p in [idxpath, datpath, imgpath]):
        print(f"Error: Missing .IDX, .DAT, or .IMG files in {CDpath}")
        print("Please extract the CD contents into the rom/extracted folder first.")
        return

    # Create dummy TOMBAMAP.txt if it doesn't exist so the script doesn't crash
    if not os.path.exists(tombamap):
        mdir(os.path.dirname(tombamap))
        with open(tombamap, "w") as f:
            f.write("000000           0000 dummy_file\n")
        print(f"Created dummy {tombamap}. Please populate it with the real map if available.")

    IDX = open(idxpath, "rb")
    DAT = open(datpath, "rb")
    IMG = open(imgpath, "rb")
    OUTDAT = open(datpath, "rb")

    chunk_size = 0x800
    trailer = 0x700
    total_chunks = int(os.path.getsize(idxpath) / chunk_size)

    for chunk_index in range(total_chunks):
        print("Reading Chunk index {:02X}...".format(chunk_index))

        IDX.seek(chunk_index * chunk_size)
        img_start, img_end, dat_start, dat_end, pointer_amount = struct.unpack("<5I", IDX.read(20))
        if not any([img_start, img_end, dat_start, dat_end, pointer_amount]):
            print("Chunk index {:02X} is completely empty.".format(chunk_index))
            continue

        IMG.seek(img_start)
        imgdata = IMG.read(img_end - img_start)

        DAT.seek(dat_start)
        datdata = DAT.read(dat_end - dat_start)

        sdat_pointers = [tuplify(item) for item in struct.unpack("<{:d}I".format(pointer_amount), IDX.read(pointer_amount * 4))]

        # TRAILER PART
        IDX.seek(chunk_index * chunk_size + (chunk_size - trailer))
        traildata = struct.unpack("<{:d}I".format(trailer >> 2), IDX.read(trailer))
        trail_list = []
        for t in range(0, len(traildata), 2):
            dat_trail_start, dat_trail_end = traildata[t], traildata[t + 1]
            dat_trail_size = dat_trail_end - dat_trail_start
            if dat_trail_size != 0:
                trail_list.append((dat_trail_start, dat_trail_end, dat_trail_size))

        # WRAPPING IT ALL UP
        dest = outfolder + "/chunk_{:02X}".format(chunk_index)
        tbadest = dest + "/{:02X}_trail".format(chunk_index)

        mdir(dest)
        mdir(tbadest)

        if datdata:
            datdest = dest + "/{:02X}_sdats".format(chunk_index)
            mdir(datdest)

            out_sdat = open(datdest + "/{:04X}-{:04X}.sdat".format(dat_start, dat_end), "wb")
            out_sdat.write(datdata)
            out_sdat.close()
            out_sdat_info = open(datdest + "/{:02X}_pointers.txt".format(chunk_index), "w")
            out_sdat_info.write("**** Indexes and Pointers for chunk_index {:02X}'s SDAT ****\n".format(chunk_index))

            for i in range(0, len(sdat_pointers)):
                map_matched = False
                pointer_start = hex(dat_start + sdat_pointers[i][1])[2:].zfill(6).upper()

                if i < len(sdat_pointers) - 1 and len(sdat_pointers) > 1:
                    pointer_end = hex(dat_start + sdat_pointers[i + 1][1] - 1)[2:].zfill(6).upper()
                else:
                    pointer_end = hex(dat_end - 1)[2:].zfill(6).upper()
                with open(tombamap, "r") as rommap:
                    romlines = [line.rstrip('\n') for line in rommap]
                    if len(romlines) > 0 and len(romlines[0]) > 3:
                        romlines[0] = romlines[0][3:] # handle potential BOM or prefix
                    for n in romlines:
                        if len(n) < 23: continue # skip empty or malformed lines
                        file_adr = n[:6]
                        file_type = n[16:20]
                        file_name = n[23:]
                        if file_adr == pointer_start:
                            map_matched = True
                            print("\tID: {:02X} | {}-{} : {} : {}".format(sdat_pointers[i][0], pointer_start, pointer_end, file_type, file_name))
                            newMAP.update({pointer_start: "{}-{} : {} : {}".format(pointer_start, pointer_end, file_type, file_name)})

                            OUTDAT.seek(int(pointer_start, 16))
                            outdata = OUTDAT.read(int(pointer_end, 16) - int(pointer_start, 16) + 1)
                            outfile = open(datdest + "/{:02X}-{:02X}-{}.{}".format(chunk_index, sdat_pointers[i][0], file_name, file_type), "wb")
                            outfile.write(outdata)
                            outfile.close()
                            out_sdat_info.write("ID: {:02X} | Pointer: {:06X} | {}-{} : {} : {}\n".format(sdat_pointers[i][0], sdat_pointers[i][1], pointer_start, pointer_end, file_type, file_name))
                            break

                    if not map_matched:
                        print("\tID: {:02X} | {}-{} : ____ : unknown, UNMAPPED".format(sdat_pointers[i][0], pointer_start, pointer_end))
                        newMAP.update({pointer_start: "{}-{} : ____ : unknown".format(pointer_start, pointer_end)})
                        unmapped_list.append("{}-{} : unknown".format(pointer_start, pointer_end))
                        unknown_count += 1
                        out_sdat_info.write("ID: {:02X} | Pointer: {:06X} | {}-{} : ____ : UNMAPPED\n".format(sdat_pointers[i][0], sdat_pointers[i][1], pointer_start, pointer_end))

                lista.update({pointer_start: pointer_end})

            out_sdat_info.close()

        else:
            print("Chunk index {:02X} missing DAT pointers.".format(chunk_index))

        if imgdata:
            imgdest = dest + "/{:02X}_vrams".format(chunk_index)
            mdir(imgdest)

            out_cvram = open(imgdest + "/{:04X}-{:04X}.cvram".format(img_start, img_end), "wb+")
            out_cvram.write(imgdata)
            out_cvram.seek(0)

            sharddest = imgdest + "/{:02X}_shards".format(chunk_index)
            mdir(sharddest)

            c_header_amount = struct.unpack("<I", out_cvram.read(4))[0]
            c_header_size = c_header_amount * 0xC + 4
            skip = 0x800 - c_header_size
            c_header_list = []

            for h in range(c_header_amount):
                c_header = struct.unpack("<HHHHI", out_cvram.read(12))
                c_header_list.append(c_header)
            out_cvram.read(skip)
            vram_build_entry = []

            for i in range(c_header_amount):
                # print("sharding round {:d}, at {:02X}".format(i, out_cvram.tell()))
                shardfilename = sharddest + "/{:02X}-{:d}.shard".format(chunk_index, i)
                with open(shardfilename, "wb+") as shard:
                    x = c_header_list[i][0]
                    y = c_header_list[i][1]
                    w = c_header_list[i][2]
                    h = c_header_list[i][3]
                    s = c_header_list[i][4]
                    vram_build_entry.append([shardfilename, x, y, w, h])
                    lz = w * 2
                    shardsize = w * 2 * h
                    extras = [0, -1, -lz, -lz - 1, -lz - 2, -lz - 3, -lz + 1, -lz + 2]
                    scompare = 0
                    while True:
                        base = ord(out_cvram.read(1))
                        scompare += 1
                        if (scompare >= s): break

                        amount = base >> 3
                        extra = base & 7
                        if (extra == 0):
                            shard.write(out_cvram.read(amount))
                            scompare += amount
                            if (scompare >= s): break
                        if (extra != 0):
                            for j in range(amount):
                                shard.seek(extras[extra], 2)
                                b = shard.read(1)
                                shard.seek(0, 2)
                                shard.write(b)

            print("\n\tAll Shards done. Now making the real VRAM page.\n")
            with open(imgdest + "/{:02X}.vram".format(chunk_index), "w+b") as vram:
                vram.seek(0x100000 - 1)
                vram.write(b"\0")
                for j in range(len(vram_build_entry)):
                    entry = vram_build_entry[j]
                    with open(entry[0], "rb") as inshard:
                        x = entry[1]
                        y = entry[2]
                        w = entry[3]
                        h = entry[4]
                        vram.seek((x * 2) + (y * 0x800))
                        for k in range(h):
                            vram.write(inshard.read(w * 2))
                            vram.read(0x800 - w * 2)

            out_cvram.close()

        else:
            print("Chunk index {:02X} missing IMG pointers.".format(chunk_index))

        if traildata:
            out_trail_info = open(tbadest + "/{:02X}_trail_pointers.txt".format(chunk_index), "w")
            out_trail_info.write("**** Indexes and Pointers for chunk_index {:02X}'s trail data ****\n".format(chunk_index))
            for i in range(0, len(trail_list)):
                map_matched = False
                adr, end, sz = trail_list[i][0], trail_list[i][1], trail_list[i][2]
                out_tba = open(tbadest + "/{:04X}-{:04X}.bin".format(adr, end), "wb")
                DAT.seek(adr)
                out_tba.write(DAT.read(sz))
                out_tba.close()
                lista.update({adr: end})
                out_trail_info.write("{:04X}-{:04X} \n".format(adr, end))
                with open(tombamap, "r") as rommap:
                    romlines = [line.rstrip('\n') for line in rommap]
                    if len(romlines) > 0 and len(romlines[0]) > 3:
                        romlines[0] = romlines[0][3:]
                    adrhex = hex(adr)[2:].zfill(6).upper()
                    endhex = hex(end)[2:].zfill(6).upper()
                    for n in romlines:
                        if len(n) < 23: continue
                        file_adr = n[:6]
                        file_type = n[16:20]
                        file_name = n[23:]
                        if file_adr == adrhex:
                            map_matched = True
                            print("{}-{} : {} : {}".format(adr, end, file_type, file_name))
                            newMAP.update({adrhex: "{}-{} : {} : {}".format(adrhex, endhex, file_type, file_name)})
                            break
                    if not map_matched:
                        print("{}-{} : ____ : unknown trail data, UNMAPPED".format(adrhex, endhex))
                        newMAP.update({adrhex: "{}-{} : ____ : unknown trail".format(adrhex, endhex)})
                        if "{}-{} : ____ : unknown trail data".format(adrhex, endhex) not in unmapped_list:
                            unmapped_list.append("{}-{} : ____ : unknown trail data".format(adrhex, endhex))
                            unknown_count += 1
            out_trail_info.close()

        else:
            print("Chunk index {:02X} missing trail pointers.".format(chunk_index))

    IDX.close()
    DAT.close()
    IMG.close()
    OUTDAT.close()

    newMAPlist = []
    for n in newMAP:
        newMAPlist.append(newMAP[n])
    newMAPlist.sort()
    with open(os.path.join(os.path.dirname(tombamap), "newTOMBAMAP.txt"), "w") as newtombamap:
        for n in newMAPlist:
            newtombamap.write(n + "\n")

    if len(unmapped_list) != 0:
        for n in unmapped_list:
            print(n)
        print("\n\"newTOMBAMAP.txt\" has been updated with %d missing addresses:" % unknown_count)
    else:
        print("\n\tEvery exported entry has been mapped.")

if __name__ == "__main__":
    extract_assets()

