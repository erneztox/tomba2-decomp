nonmatching func_8003F698, 0x108

glabel func_8003F698
    /* 2FE98 8003F698 801F023C */  lui        $v0, (0x1F800234 >> 16)
    /* 2FE9C 8003F69C 34024290 */  lbu        $v0, (0x1F800234 & 0xFFFF)($v0)
    /* 2FEA0 8003F6A0 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 2FEA4 8003F6A4 38004014 */  bnez       $v0, .L8003F788
    /* 2FEA8 8003F6A8 1000BFAF */   sw        $ra, 0x10($sp)
    /* 2FEAC 8003F6AC 0100C230 */  andi       $v0, $a2, 0x1
    /* 2FEB0 8003F6B0 35004014 */  bnez       $v0, .L8003F788
    /* 2FEB4 8003F6B4 0C80023C */   lui       $v0, %hi(D_800BF870)
    /* 2FEB8 8003F6B8 70F84390 */  lbu        $v1, %lo(D_800BF870)($v0)
    /* 2FEBC 8003F6BC 00000000 */  nop
    /* 2FEC0 8003F6C0 1600622C */  sltiu      $v0, $v1, 0x16
    /* 2FEC4 8003F6C4 30004010 */  beqz       $v0, .L8003F788
    /* 2FEC8 8003F6C8 0180023C */   lui       $v0, %hi(jtbl_80015268)
    /* 2FECC 8003F6CC 68524224 */  addiu      $v0, $v0, %lo(jtbl_80015268)
    /* 2FED0 8003F6D0 80180300 */  sll        $v1, $v1, 2
    /* 2FED4 8003F6D4 21186200 */  addu       $v1, $v1, $v0
    /* 2FED8 8003F6D8 0000628C */  lw         $v0, 0x0($v1)
    /* 2FEDC 8003F6DC 00000000 */  nop
    /* 2FEE0 8003F6E0 08004000 */  jr         $v0
    /* 2FEE4 8003F6E4 00000000 */   nop
    /* 2FEE8 8003F6E8 1E19050C */  jal        func_80146478
    /* 2FEEC 8003F6EC 00000000 */   nop
    /* 2FEF0 8003F6F0 E4FD0008 */  j          .L8003F790
    /* 2FEF4 8003F6F4 00000000 */   nop
    /* 2FEF8 8003F6F8 70CB040C */  jal        func_80132DC0
    /* 2FEFC 8003F6FC 00000000 */   nop
    /* 2FF00 8003F700 E4FD0008 */  j          .L8003F790
    /* 2FF04 8003F704 00000000 */   nop
    /* 2FF08 8003F708 5795040C */  jal        func_8012555C
    /* 2FF0C 8003F70C 00000000 */   nop
    /* 2FF10 8003F710 E4FD0008 */  j          .L8003F790
    /* 2FF14 8003F714 00000000 */   nop
    /* 2FF18 8003F718 BFF6040C */  jal        func_8013DAFC
    /* 2FF1C 8003F71C 00000000 */   nop
    /* 2FF20 8003F720 E4FD0008 */  j          .L8003F790
    /* 2FF24 8003F724 00000000 */   nop
    /* 2FF28 8003F728 B3D8040C */  jal        func_801362CC
    /* 2FF2C 8003F72C 00000000 */   nop
    /* 2FF30 8003F730 E4FD0008 */  j          .L8003F790
    /* 2FF34 8003F734 00000000 */   nop
    /* 2FF38 8003F738 5AF5040C */  jal        func_8013D568
    /* 2FF3C 8003F73C 00000000 */   nop
    /* 2FF40 8003F740 E4FD0008 */  j          .L8003F790
    /* 2FF44 8003F744 00000000 */   nop
    /* 2FF48 8003F748 68B8040C */  jal        func_8012E1A0
    /* 2FF4C 8003F74C 00000000 */   nop
    /* 2FF50 8003F750 E4FD0008 */  j          .L8003F790
    /* 2FF54 8003F754 00000000 */   nop
    /* 2FF58 8003F758 77AA040C */  jal        func_8012A9DC
    /* 2FF5C 8003F75C 00000000 */   nop
    /* 2FF60 8003F760 E4FD0008 */  j          .L8003F790
    /* 2FF64 8003F764 00000000 */   nop
    /* 2FF68 8003F768 C55A040C */  jal        func_80116B14
    /* 2FF6C 8003F76C 00000000 */   nop
    /* 2FF70 8003F770 E4FD0008 */  j          .L8003F790
    /* 2FF74 8003F774 00000000 */   nop
    /* 2FF78 8003F778 6E2C040C */  jal        func_8010B1B8
    /* 2FF7C 8003F77C 00000000 */   nop
    /* 2FF80 8003F780 E4FD0008 */  j          .L8003F790
    /* 2FF84 8003F784 00000000 */   nop
  .L8003F788:
    /* 2FF88 8003F788 F700020C */  jal        func_800803DC
    /* 2FF8C 8003F78C 00000000 */   nop
  .L8003F790:
    /* 2FF90 8003F790 1000BF8F */  lw         $ra, 0x10($sp)
    /* 2FF94 8003F794 00000000 */  nop
    /* 2FF98 8003F798 0800E003 */  jr         $ra
    /* 2FF9C 8003F79C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8003F698
