nonmatching func_8003F024, 0x58

glabel func_8003F024
    /* 2F824 8003F024 E0FFBD27 */  addiu      $sp, $sp, -0x20
    /* 2F828 8003F028 1400B1AF */  sw         $s1, 0x14($sp)
    /* 2F82C 8003F02C 21880000 */  addu       $s1, $zero, $zero
    /* 2F830 8003F030 0F80023C */  lui        $v0, %hi(D_800EC188)
    /* 2F834 8003F034 1000B0AF */  sw         $s0, 0x10($sp)
    /* 2F838 8003F038 88C15024 */  addiu      $s0, $v0, %lo(D_800EC188)
    /* 2F83C 8003F03C 1800BFAF */  sw         $ra, 0x18($sp)
  .L8003F040:
    /* 2F840 8003F040 00000292 */  lbu        $v0, 0x0($s0)
    /* 2F844 8003F044 00000000 */  nop
    /* 2F848 8003F048 03004010 */  beqz       $v0, .L8003F058
    /* 2F84C 8003F04C 00000000 */   nop
    /* 2F850 8003F050 8FF4000C */  jal        func_8003D23C
    /* 2F854 8003F054 21200002 */   addu      $a0, $s0, $zero
  .L8003F058:
    /* 2F858 8003F058 01003126 */  addiu      $s1, $s1, 0x1
    /* 2F85C 8003F05C 2800222A */  slti       $v0, $s1, 0x28
    /* 2F860 8003F060 F7FF4014 */  bnez       $v0, .L8003F040
    /* 2F864 8003F064 40001026 */   addiu     $s0, $s0, 0x40
    /* 2F868 8003F068 1800BF8F */  lw         $ra, 0x18($sp)
    /* 2F86C 8003F06C 1400B18F */  lw         $s1, 0x14($sp)
    /* 2F870 8003F070 1000B08F */  lw         $s0, 0x10($sp)
    /* 2F874 8003F074 0800E003 */  jr         $ra
    /* 2F878 8003F078 2000BD27 */   addiu     $sp, $sp, 0x20
endlabel func_8003F024
.include "asm/nonmatchings/main/EntityFX_Update/func_8003F07C.s"
