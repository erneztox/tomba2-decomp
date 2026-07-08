nonmatching func_8007A980, 0xB8

glabel func_8007A980
    /* 6B180 8007A980 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 6B184 8007A984 1000BFAF */  sw         $ra, 0x10($sp)
    /* 6B188 8007A988 FF008330 */  andi       $v1, $a0, 0xFF
    /* 6B18C 8007A98C 0500622C */  sltiu      $v0, $v1, 0x5
    /* 6B190 8007A990 25004010 */  beqz       $v0, .L8007AA28
    /* 6B194 8007A994 2138C000 */   addu      $a3, $a2, $zero
    /* 6B198 8007A998 0180023C */  lui        $v0, %hi(jtbl_80016E4C)
    /* 6B19C 8007A99C 4C6E4224 */  addiu      $v0, $v0, %lo(jtbl_80016E4C)
    /* 6B1A0 8007A9A0 80180300 */  sll        $v1, $v1, 2
    /* 6B1A4 8007A9A4 21186200 */  addu       $v1, $v1, $v0
    /* 6B1A8 8007A9A8 0000628C */  lw         $v0, 0x0($v1)
    /* 6B1AC 8007A9AC 00000000 */  nop
    /* 6B1B0 8007A9B0 08004000 */  jr         $v0
    /* 6B1B4 8007A9B4 00000000 */   nop
    /* 6B1B8 8007A9B8 21200000 */  addu       $a0, $zero, $zero
    /* 6B1BC 8007A9BC FF00A530 */  andi       $a1, $a1, 0xFF
    /* 6B1C0 8007A9C0 0FE7010C */  jal        func_80079C3C
    /* 6B1C4 8007A9C4 03000624 */   addiu     $a2, $zero, 0x3
    /* 6B1C8 8007A9C8 8AEA0108 */  j          .L8007AA28
    /* 6B1CC 8007A9CC 00000000 */   nop
    /* 6B1D0 8007A9D0 21200000 */  addu       $a0, $zero, $zero
    /* 6B1D4 8007A9D4 FF00A530 */  andi       $a1, $a1, 0xFF
    /* 6B1D8 8007A9D8 77E7010C */  jal        func_80079DDC
    /* 6B1DC 8007A9DC 03000624 */   addiu     $a2, $zero, 0x3
    /* 6B1E0 8007A9E0 8AEA0108 */  j          .L8007AA28
    /* 6B1E4 8007A9E4 00000000 */   nop
    /* 6B1E8 8007A9E8 21200000 */  addu       $a0, $zero, $zero
    /* 6B1EC 8007A9EC FF00A530 */  andi       $a1, $a1, 0xFF
    /* 6B1F0 8007A9F0 E4E7010C */  jal        func_80079F90
    /* 6B1F4 8007A9F4 03000624 */   addiu     $a2, $zero, 0x3
    /* 6B1F8 8007A9F8 8AEA0108 */  j          .L8007AA28
    /* 6B1FC 8007A9FC 00000000 */   nop
    /* 6B200 8007AA00 21200000 */  addu       $a0, $zero, $zero
    /* 6B204 8007AA04 FF00A530 */  andi       $a1, $a1, 0xFF
    /* 6B208 8007AA08 4BE8010C */  jal        func_8007A12C
    /* 6B20C 8007AA0C 03000624 */   addiu     $a2, $zero, 0x3
    /* 6B210 8007AA10 8AEA0108 */  j          .L8007AA28
    /* 6B214 8007AA14 00000000 */   nop
    /* 6B218 8007AA18 21200000 */  addu       $a0, $zero, $zero
    /* 6B21C 8007AA1C FF00A530 */  andi       $a1, $a1, 0xFF
    /* 6B220 8007AA20 B2E8010C */  jal        func_8007A2C8
    /* 6B224 8007AA24 03000624 */   addiu     $a2, $zero, 0x3
  .L8007AA28:
    /* 6B228 8007AA28 1000BF8F */  lw         $ra, 0x10($sp)
    /* 6B22C 8007AA2C 00000000 */  nop
    /* 6B230 8007AA30 0800E003 */  jr         $ra
    /* 6B234 8007AA34 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8007A980
