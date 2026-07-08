/* Handwritten function */
nonmatching func_8003F7A0, 0x38

glabel func_8003F7A0
    /* 2FFA0 8003F7A0 F8FFBD27 */  addiu      $sp, $sp, -0x8
    /* 2FFA4 8003F7A4 000080C8 */  lwc2       $0, 0x0($a0)
    /* 2FFA8 8003F7A8 040081C8 */  lwc2       $1, 0x4($a0)
    /* 2FFAC 8003F7AC 00000000 */  nop
    /* 2FFB0 8003F7B0 00000000 */  nop
    /* 2FFB4 8003F7B4 0100184A */  rtps
    /* 2FFB8 8003F7B8 0000AEE8 */  swc2       $14, 0x0($a1)
    /* 2FFBC 8003F7BC 00980C48 */  mfc2       $t4, $19 /* handwritten instruction */
    /* 2FFC0 8003F7C0 00000000 */  nop
    /* 2FFC4 8003F7C4 83600C00 */  sra        $t4, $t4, 2
    /* 2FFC8 8003F7C8 0000ACAF */  sw         $t4, 0x0($sp)
    /* 2FFCC 8003F7CC 0000A28F */  lw         $v0, 0x0($sp)
    /* 2FFD0 8003F7D0 0800E003 */  jr         $ra
    /* 2FFD4 8003F7D4 0800BD27 */   addiu     $sp, $sp, 0x8
endlabel func_8003F7A0
