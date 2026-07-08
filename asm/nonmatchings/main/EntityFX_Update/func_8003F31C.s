nonmatching func_8003F31C, 0x28

glabel func_8003F31C
    /* 2FB1C 8003F31C FF008430 */  andi       $a0, $a0, 0xFF
    /* 2FB20 8003F320 FF00A530 */  andi       $a1, $a1, 0xFF
    /* 2FB24 8003F324 21208500 */  addu       $a0, $a0, $a1
    /* 2FB28 8003F328 21108000 */  addu       $v0, $a0, $zero
    /* 2FB2C 8003F32C 00018428 */  slti       $a0, $a0, 0x100
    /* 2FB30 8003F330 02008014 */  bnez       $a0, .L8003F33C
    /* 2FB34 8003F334 00000000 */   nop
    /* 2FB38 8003F338 FF000224 */  addiu      $v0, $zero, 0xFF
  .L8003F33C:
    /* 2FB3C 8003F33C 0800E003 */  jr         $ra
    /* 2FB40 8003F340 FF004230 */   andi      $v0, $v0, 0xFF
endlabel func_8003F31C
