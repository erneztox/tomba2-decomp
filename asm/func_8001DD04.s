.include "macro.inc"
glabel func_8001DD04
    .set noreorder
    /* E504 8001DD04 F8FFBD27 */  addiu      $sp, $sp, -0x8
    /* E508 8001DD08 0D000224 */  addiu      $v0, $zero, 0xD
    /* E50C 8001DD0C 0400A2AF */  sw         $v0, 0x4($sp)
    /* E510 8001DD10 51770008 */  j          .L8001DD44
    /* E514 8001DD14 0000A0AF */   sw        $zero, 0x0($sp)
  .L8001DD18:
    /* E518 8001DD18 0400A38F */  lw         $v1, 0x4($sp)
    /* E51C 8001DD1C 00000000 */  nop
    /* E520 8001DD20 40100300 */  sll        $v0, $v1, 1
    /* E524 8001DD24 21104300 */  addu       $v0, $v0, $v1
    /* E528 8001DD28 80100200 */  sll        $v0, $v0, 2
    /* E52C 8001DD2C 21104300 */  addu       $v0, $v0, $v1
    /* E530 8001DD30 0400A2AF */  sw         $v0, 0x4($sp)
    /* E534 8001DD34 0000A28F */  lw         $v0, 0x0($sp)
    /* E538 8001DD38 00000000 */  nop
    /* E53C 8001DD3C 01004224 */  addiu      $v0, $v0, 0x1
    /* E540 8001DD40 0000A2AF */  sw         $v0, 0x0($sp)
  .L8001DD44:
    /* E544 8001DD44 0000A28F */  lw         $v0, 0x0($sp)
    /* E548 8001DD48 00000000 */  nop
    /* E54C 8001DD4C 3C004228 */  slti       $v0, $v0, 0x3C
    /* E550 8001DD50 F1FF4014 */  bnez       $v0, .L8001DD18
    /* E554 8001DD54 00000000 */   nop
    /* E558 8001DD58 0800E003 */  jr         $ra
    /* E55C 8001DD5C 0800BD27 */   addiu     $sp, $sp, 0x8
endlabel func_8001DD04
