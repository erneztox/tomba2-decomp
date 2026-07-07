def apply(config, args):
    config["arch"] = "mips"
    config["baseimg"] = "rom/extracted/SCUS_944.54"
    config["myimg"] = "build/tomba2.elf"
    config["mapfile"] = "build/tomba2.map"
    config["source_directories"] = ["src", "include", "asm"]
    config["objdump_executable"] = "mips-linux-gnu-objdump"
    config["make_command"] = ["make"]
