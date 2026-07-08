nonmatching func_8007A8E0, 0x24

glabel func_8007A8E0
    /* 6B0E0 8007A8E0 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 6B0E4 8007A8E4 1000BFAF */  sw         $ra, 0x10($sp)
    /* 6B0E8 8007A8E8 0BE6010C */  jal        func_8007982C
    /* 6B0EC 8007A8EC 00000000 */   nop
    /* 6B0F0 8007A8F0 1000BF8F */  lw         $ra, 0x10($sp)
    /* 6B0F4 8007A8F4 801F023C */  lui        $v0, (0x1F80017C >> 16)
    /* 6B0F8 8007A8F8 7C0140A4 */  sh         $zero, (0x1F80017C & 0xFFFF)($v0)
    /* 6B0FC 8007A8FC 0800E003 */  jr         $ra
    /* 6B100 8007A900 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8007A8E0
