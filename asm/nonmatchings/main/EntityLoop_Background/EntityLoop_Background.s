nonmatching EntityLoop_Background, 0xDC

glabel EntityLoop_Background
    /* 2F6C0 8003EEC0 E0FFBD27 */  addiu      $sp, $sp, -0x20
    /* 2F6C4 8003EEC4 0F80023C */  lui        $v0, %hi(g_BackgroundEntitiesList)
    /* 2F6C8 8003EEC8 1000B0AF */  sw         $s0, 0x10($sp)
    /* 2F6CC 8003EECC 3827508C */  lw         $s0, %lo(g_BackgroundEntitiesList)($v0)
    /* 2F6D0 8003EED0 1C00BFAF */  sw         $ra, 0x1C($sp)
    /* 2F6D4 8003EED4 1800B2AF */  sw         $s2, 0x18($sp)
    /* 2F6D8 8003EED8 2A000012 */  beqz       $s0, .L8003EF84
    /* 2F6DC 8003EEDC 1400B1AF */   sw        $s1, 0x14($sp)
    /* 2F6E0 8003EEE0 0180023C */  lui        $v0, %hi(jtbl_80015000)
    /* 2F6E4 8003EEE4 00505224 */  addiu      $s2, $v0, %lo(jtbl_80015000)
  .L8003EEE8:
    /* 2F6E8 8003EEE8 01000292 */  lbu        $v0, 0x1($s0)
    /* 2F6EC 8003EEEC 2400118E */  lw         $s1, 0x24($s0)
    /* 2F6F0 8003EEF0 21004010 */  beqz       $v0, .L8003EF78
    /* 2F6F4 8003EEF4 00000000 */   nop
    /* 2F6F8 8003EEF8 0B000392 */  lbu        $v1, 0xB($s0)
    /* 2F6FC 8003EEFC 00000000 */  nop
    /* 2F700 8003EF00 2100622C */  sltiu      $v0, $v1, 0x21
    /* 2F704 8003EF04 1C004010 */  beqz       $v0, .L8003EF78
    /* 2F708 8003EF08 80100300 */   sll       $v0, $v1, 2
    /* 2F70C 8003EF0C 21105200 */  addu       $v0, $v0, $s2
    /* 2F710 8003EF10 0000428C */  lw         $v0, 0x0($v0)
    /* 2F714 8003EF14 00000000 */  nop
    /* 2F718 8003EF18 08004000 */  jr         $v0
    /* 2F71C 8003EF1C 00000000 */   nop
    /* 2F720 8003EF20 29F3000C */  jal        func_8003CCA4
    /* 2F724 8003EF24 21200002 */   addu      $a0, $s0, $zero
    /* 2F728 8003EF28 DFFB0008 */  j          .L8003EF7C
    /* 2F72C 8003EF2C 21802002 */   addu      $s0, $s1, $zero
    /* 2F730 8003EF30 29F3000C */  jal        func_8003CCA4
    /* 2F734 8003EF34 21200002 */   addu      $a0, $s0, $zero
    /* 2F738 8003EF38 D6FB0008 */  j          .L8003EF58
    /* 2F73C 8003EF3C 00000000 */   nop
    /* 2F740 8003EF40 B5F0000C */  jal        func_8003C2D4
    /* 2F744 8003EF44 21200002 */   addu      $a0, $s0, $zero
    /* 2F748 8003EF48 02000392 */  lbu        $v1, 0x2($s0)
    /* 2F74C 8003EF4C 01000224 */  addiu      $v0, $zero, 0x1
    /* 2F750 8003EF50 09006214 */  bne        $v1, $v0, .L8003EF78
    /* 2F754 8003EF54 00000000 */   nop
  .L8003EF58:
    /* 2F758 8003EF58 C1ED000C */  jal        func_8003B704
    /* 2F75C 8003EF5C 21200002 */   addu      $a0, $s0, $zero
    /* 2F760 8003EF60 DFFB0008 */  j          .L8003EF7C
    /* 2F764 8003EF64 21802002 */   addu      $s0, $s1, $zero
    /* 2F768 8003EF68 1800028E */  lw         $v0, 0x18($s0)
    /* 2F76C 8003EF6C 00000000 */  nop
    /* 2F770 8003EF70 09F84000 */  jalr       $v0
    /* 2F774 8003EF74 21200002 */   addu      $a0, $s0, $zero
  .L8003EF78:
    /* 2F778 8003EF78 21802002 */  addu       $s0, $s1, $zero
  .L8003EF7C:
    /* 2F77C 8003EF7C DAFF0016 */  bnez       $s0, .L8003EEE8
    /* 2F780 8003EF80 00000000 */   nop
  .L8003EF84:
    /* 2F784 8003EF84 1C00BF8F */  lw         $ra, 0x1C($sp)
    /* 2F788 8003EF88 1800B28F */  lw         $s2, 0x18($sp)
    /* 2F78C 8003EF8C 1400B18F */  lw         $s1, 0x14($sp)
    /* 2F790 8003EF90 1000B08F */  lw         $s0, 0x10($sp)
    /* 2F794 8003EF94 0800E003 */  jr         $ra
    /* 2F798 8003EF98 2000BD27 */   addiu     $sp, $sp, 0x20
endlabel EntityLoop_Background
