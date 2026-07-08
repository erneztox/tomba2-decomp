nonmatching Engine_ExecuteGameLoop, 0x74

glabel Engine_ExecuteGameLoop
    /* 301A8 8003F9A8 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 301AC 8003F9AC 1000BFAF */  sw         $ra, 0x10($sp)
    /* 301B0 8003F9B0 4C3F010C */  jal        func_8004FD30
    /* 301B4 8003F9B4 00000000 */   nop
    /* 301B8 8003F9B8 6697000C */  jal        func_80025D98
    /* 301BC 8003F9BC 00000000 */   nop
    /* 301C0 8003F9C0 C0EF000C */  jal        func_8003BF00
    /* 301C4 8003F9C4 00000000 */   nop
    /* 301C8 8003F9C8 B0FB000C */  jal        func_8003EEC0
    /* 301CC 8003F9CC 00000000 */   nop
    /* 301D0 8003F9D0 62ED000C */  jal        func_8003B588
    /* 301D4 8003F9D4 00000000 */   nop
    /* 301D8 8003F9D8 D4EE000C */  jal        func_8003BB50
    /* 301DC 8003F9DC 00000000 */   nop
    /* 301E0 8003F9E0 3DEF000C */  jal        func_8003BCF4
    /* 301E4 8003F9E4 00000000 */   nop
    /* 301E8 8003F9E8 0F80043C */  lui        $a0, %hi(D_800F2418)
    /* 301EC 8003F9EC 2FF4000C */  jal        func_8003D0BC
    /* 301F0 8003F9F0 18248424 */   addiu     $a0, $a0, %lo(D_800F2418)
    /* 301F4 8003F9F4 09FC000C */  jal        func_8003F024
    /* 301F8 8003F9F8 00000000 */   nop
    /* 301FC 8003F9FC C1F7000C */  jal        func_8003DF04
    /* 30200 8003FA00 00000000 */   nop
    /* 30204 8003FA04 12F0000C */  jal        EntityLoop_Active
    /* 30208 8003FA08 00000000 */   nop
    /* 3020C 8003FA0C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 30210 8003FA10 00000000 */  nop
    /* 30214 8003FA14 0800E003 */  jr         $ra
    /* 30218 8003FA18 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel Engine_ExecuteGameLoop
