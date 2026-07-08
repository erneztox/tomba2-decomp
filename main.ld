SECTIONS
{
    __romPos = 0;
    header_ROM_START = __romPos;
    header_VRAM = ADDR(.header);
    .header : AT(header_ROM_START) SUBALIGN(16)
    {
        FILL(0x00000000);
        header_DATA_START = .;
        build/asm/header.s.o(.data);
        header_DATA_END = .;
        header_DATA_SIZE = ABSOLUTE(header_DATA_END - header_DATA_START);
    }
    __romPos += SIZEOF(.header);
    header_ROM_END = __romPos;
    header_VRAM_END = .;

    main_ROM_START = __romPos;
    main_VRAM = ADDR(.main);
    .main 0x80010000 : AT(main_ROM_START) SUBALIGN(16)
    {
        FILL(0x00000000);
        main_TEXT_START = .;
        build/asm/asm_start.s.o(.text);
        build/asm/main/FUN_8003116c.s.o(.text);
        build/asm/asm_end.s.o(.text);
        . = ALIGN(., 16);
        main_TEXT_END = .;
        main_TEXT_SIZE = ABSOLUTE(main_TEXT_END - main_TEXT_START);
        main_DATA_START = .;
        build/asm/asm_start.s.o(.data);
        build/asm/main/FUN_8003116c.s.o(.data);
        build/asm/asm_end.s.o(.data);
        . = ALIGN(., 16);
        main_DATA_END = .;
        main_DATA_SIZE = ABSOLUTE(main_DATA_END - main_DATA_START);
        main_RODATA_START = .;
        build/asm/asm_start.s.o(.rodata);
        build/asm/main/FUN_8003116c.s.o(.rodata);
        build/asm/asm_end.s.o(.rodata);
        . = ALIGN(., 16);
        main_RODATA_END = .;
        main_RODATA_SIZE = ABSOLUTE(main_RODATA_END - main_RODATA_START);
        main_BSS_START = .;
        build/asm/asm_start.s.o(.bss);
        build/asm/main/FUN_8003116c.s.o(.bss);
        build/asm/asm_end.s.o(.bss);
        . = ALIGN(., 16);
        main_BSS_END = .;
        main_BSS_SIZE = ABSOLUTE(main_BSS_END - main_BSS_START);
    }
    __romPos += SIZEOF(.main);
    __romPos = ALIGN(__romPos, 16);
    . = ALIGN(., 16);
    main_ROM_END = __romPos;
    main_VRAM_END = .;

    /DISCARD/ :
    {
        *(*);
    }
}
