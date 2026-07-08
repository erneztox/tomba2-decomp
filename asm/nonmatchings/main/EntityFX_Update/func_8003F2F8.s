nonmatching func_8003F2F8, 0x24

glabel func_8003F2F8
    /* 2FAF8 8003F2F8 FF008430 */  andi       $a0, $a0, 0xFF
    /* 2FAFC 8003F2FC 81FF8424 */  addiu      $a0, $a0, -0x7F
    /* 2FB00 8003F300 FF00A530 */  andi       $a1, $a1, 0xFF
    /* 2FB04 8003F304 2128A400 */  addu       $a1, $a1, $a0
    /* 2FB08 8003F308 0200A104 */  bgez       $a1, .L8003F314
    /* 2FB0C 8003F30C 2110A000 */   addu      $v0, $a1, $zero
    /* 2FB10 8003F310 21100000 */  addu       $v0, $zero, $zero
  .L8003F314:
    /* 2FB14 8003F314 0800E003 */  jr         $ra
    /* 2FB18 8003F318 FF004230 */   andi      $v0, $v0, 0xFF
endlabel func_8003F2F8
