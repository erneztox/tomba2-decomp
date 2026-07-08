/* Handwritten function */
nonmatching func_8003CDD8, 0x2E4

glabel func_8003CDD8
    /* 2D5D8 8003CDD8 C8FFBD27 */  addiu      $sp, $sp, -0x38
    /* 2D5DC 8003CDDC 1800B2AF */  sw         $s2, 0x18($sp)
    /* 2D5E0 8003CDE0 21908000 */  addu       $s2, $a0, $zero
    /* 2D5E4 8003CDE4 3000BFAF */  sw         $ra, 0x30($sp)
    /* 2D5E8 8003CDE8 2C00B7AF */  sw         $s7, 0x2C($sp)
    /* 2D5EC 8003CDEC 2800B6AF */  sw         $s6, 0x28($sp)
    /* 2D5F0 8003CDF0 2400B5AF */  sw         $s5, 0x24($sp)
    /* 2D5F4 8003CDF4 2000B4AF */  sw         $s4, 0x20($sp)
    /* 2D5F8 8003CDF8 1C00B3AF */  sw         $s3, 0x1C($sp)
    /* 2D5FC 8003CDFC 1400B1AF */  sw         $s1, 0x14($sp)
    /* 2D600 8003CE00 1000B0AF */  sw         $s0, 0x10($sp)
    /* 2D604 8003CE04 08004292 */  lbu        $v0, 0x8($s2)
    /* 2D608 8003CE08 00000000 */  nop
    /* 2D60C 8003CE0C A0004010 */  beqz       $v0, .L8003D090
    /* 2D610 8003CE10 21B0A000 */   addu      $s6, $a1, $zero
    /* 2D614 8003CE14 09004292 */  lbu        $v0, 0x9($s2)
    /* 2D618 8003CE18 00000000 */  nop
    /* 2D61C 8003CE1C 9C004010 */  beqz       $v0, .L8003D090
    /* 2D620 8003CE20 21800000 */   addu      $s0, $zero, $zero
    /* 2D624 8003CE24 801F173C */  lui        $s7, (0x1F8000C0 >> 16)
    /* 2D628 8003CE28 C000F526 */  addiu      $s5, $s7, %lo(D_1F8000C0)
    /* 2D62C 8003CE2C 801F023C */  lui        $v0, %hi(D_1F800000)
    /* 2D630 8003CE30 00005124 */  addiu      $s1, $v0, %lo(D_1F800000)
    /* 2D634 8003CE34 801F023C */  lui        $v0, %hi(D_1F8000D0)
    /* 2D638 8003CE38 D0005324 */  addiu      $s3, $v0, %lo(D_1F8000D0)
    /* 2D63C 8003CE3C 0F80143C */  lui        $s4, %hi(D_800ED8C8)
  .L8003CE40:
    /* 2D640 8003CE40 08004292 */  lbu        $v0, 0x8($s2)
    /* 2D644 8003CE44 00000000 */  nop
    /* 2D648 8003CE48 2A100202 */  slt        $v0, $s0, $v0
    /* 2D64C 8003CE4C 90004010 */  beqz       $v0, .L8003D090
    /* 2D650 8003CE50 80101000 */   sll       $v0, $s0, 2
    /* 2D654 8003CE54 21104202 */  addu       $v0, $s2, $v0
    /* 2D658 8003CE58 C000478C */  lw         $a3, 0xC0($v0)
    /* 2D65C 8003CE5C 00000000 */  nop
    /* 2D660 8003CE60 4000E28C */  lw         $v0, 0x40($a3)
    /* 2D664 8003CE64 00000000 */  nop
    /* 2D668 8003CE68 84004010 */  beqz       $v0, .L8003D07C
    /* 2D66C 8003CE6C 801F083C */   lui       $t0, %hi(D_1F8000F8)
    /* 2D670 8003CE70 2C00E294 */  lhu        $v0, 0x2C($a3)
    /* 2D674 8003CE74 00000000 */  nop
    /* 2D678 8003CE78 C000E2A6 */  sh         $v0, (0x1F8000C0 & 0xFFFF)($s7)
    /* 2D67C 8003CE7C 3000E294 */  lhu        $v0, 0x30($a3)
    /* 2D680 8003CE80 00000000 */  nop
    /* 2D684 8003CE84 0200A2A6 */  sh         $v0, 0x2($s5)
    /* 2D688 8003CE88 3400E294 */  lhu        $v0, 0x34($a3)
    /* 2D68C 8003CE8C F8000825 */  addiu      $t0, $t0, %lo(D_1F8000F8)
    /* 2D690 8003CE90 0400A2A6 */  sh         $v0, 0x4($s5)
    /* 2D694 8003CE94 00000C8D */  lw         $t4, 0x0($t0)
    /* 2D698 8003CE98 04000D8D */  lw         $t5, 0x4($t0)
    /* 2D69C 8003CE9C 0000CC48 */  ctc2       $t4, $0 /* handwritten instruction */
    /* 2D6A0 8003CEA0 0008CD48 */  ctc2       $t5, $1 /* handwritten instruction */
    /* 2D6A4 8003CEA4 08000C8D */  lw         $t4, 0x8($t0)
    /* 2D6A8 8003CEA8 0C000D8D */  lw         $t5, 0xC($t0)
    /* 2D6AC 8003CEAC 10000E8D */  lw         $t6, 0x10($t0)
    /* 2D6B0 8003CEB0 0010CC48 */  ctc2       $t4, $2 /* handwritten instruction */
    /* 2D6B4 8003CEB4 0018CD48 */  ctc2       $t5, $3 /* handwritten instruction */
    /* 2D6B8 8003CEB8 0020CE48 */  ctc2       $t6, $4 /* handwritten instruction */
    /* 2D6BC 8003CEBC 1800E224 */  addiu      $v0, $a3, 0x18
    /* 2D6C0 8003CEC0 00004C94 */  lhu        $t4, 0x0($v0)
    /* 2D6C4 8003CEC4 06004D94 */  lhu        $t5, 0x6($v0)
    /* 2D6C8 8003CEC8 0C004E94 */  lhu        $t6, 0xC($v0)
    /* 2D6CC 8003CECC 00488C48 */  mtc2       $t4, $9 /* handwritten instruction */
    /* 2D6D0 8003CED0 00508D48 */  mtc2       $t5, $10 /* handwritten instruction */
    /* 2D6D4 8003CED4 00588E48 */  mtc2       $t6, $11 /* handwritten instruction */
    /* 2D6D8 8003CED8 00000000 */  nop
    /* 2D6DC 8003CEDC 00000000 */  nop
    /* 2D6E0 8003CEE0 12E0494A */  mvmva      1, 0, 3, 3, 0
    /* 2D6E4 8003CEE4 801F083C */  lui        $t0, %hi(D_1F800000)
    /* 2D6E8 8003CEE8 00000825 */  addiu      $t0, $t0, %lo(D_1F800000)
    /* 2D6EC 8003CEEC 00480C48 */  mfc2       $t4, $9 /* handwritten instruction */
    /* 2D6F0 8003CEF0 00500D48 */  mfc2       $t5, $10 /* handwritten instruction */
    /* 2D6F4 8003CEF4 00580E48 */  mfc2       $t6, $11 /* handwritten instruction */
    /* 2D6F8 8003CEF8 00000CA5 */  sh         $t4, 0x0($t0)
    /* 2D6FC 8003CEFC 06000DA5 */  sh         $t5, 0x6($t0)
    /* 2D700 8003CF00 0C000EA5 */  sh         $t6, 0xC($t0)
    /* 2D704 8003CF04 1A00E224 */  addiu      $v0, $a3, 0x1A
    /* 2D708 8003CF08 00004C94 */  lhu        $t4, 0x0($v0)
    /* 2D70C 8003CF0C 06004D94 */  lhu        $t5, 0x6($v0)
    /* 2D710 8003CF10 0C004E94 */  lhu        $t6, 0xC($v0)
    /* 2D714 8003CF14 00488C48 */  mtc2       $t4, $9 /* handwritten instruction */
    /* 2D718 8003CF18 00508D48 */  mtc2       $t5, $10 /* handwritten instruction */
    /* 2D71C 8003CF1C 00588E48 */  mtc2       $t6, $11 /* handwritten instruction */
    /* 2D720 8003CF20 00000000 */  nop
    /* 2D724 8003CF24 00000000 */  nop
    /* 2D728 8003CF28 12E0494A */  mvmva      1, 0, 3, 3, 0
    /* 2D72C 8003CF2C 801F083C */  lui        $t0, %hi(D_1F800002)
    /* 2D730 8003CF30 02000825 */  addiu      $t0, $t0, %lo(D_1F800002)
    /* 2D734 8003CF34 00480C48 */  mfc2       $t4, $9 /* handwritten instruction */
    /* 2D738 8003CF38 00500D48 */  mfc2       $t5, $10 /* handwritten instruction */
    /* 2D73C 8003CF3C 00580E48 */  mfc2       $t6, $11 /* handwritten instruction */
    /* 2D740 8003CF40 00000CA5 */  sh         $t4, 0x0($t0)
    /* 2D744 8003CF44 06000DA5 */  sh         $t5, 0x6($t0)
    /* 2D748 8003CF48 0C000EA5 */  sh         $t6, 0xC($t0)
    /* 2D74C 8003CF4C 1C00E224 */  addiu      $v0, $a3, 0x1C
    /* 2D750 8003CF50 00004C94 */  lhu        $t4, 0x0($v0)
    /* 2D754 8003CF54 06004D94 */  lhu        $t5, 0x6($v0)
    /* 2D758 8003CF58 0C004E94 */  lhu        $t6, 0xC($v0)
    /* 2D75C 8003CF5C 00488C48 */  mtc2       $t4, $9 /* handwritten instruction */
    /* 2D760 8003CF60 00508D48 */  mtc2       $t5, $10 /* handwritten instruction */
    /* 2D764 8003CF64 00588E48 */  mtc2       $t6, $11 /* handwritten instruction */
    /* 2D768 8003CF68 00000000 */  nop
    /* 2D76C 8003CF6C 00000000 */  nop
    /* 2D770 8003CF70 12E0494A */  mvmva      1, 0, 3, 3, 0
    /* 2D774 8003CF74 801F083C */  lui        $t0, %hi(D_1F800004)
    /* 2D778 8003CF78 04000825 */  addiu      $t0, $t0, %lo(D_1F800004)
    /* 2D77C 8003CF7C 00480C48 */  mfc2       $t4, $9 /* handwritten instruction */
    /* 2D780 8003CF80 00500D48 */  mfc2       $t5, $10 /* handwritten instruction */
    /* 2D784 8003CF84 00580E48 */  mfc2       $t6, $11 /* handwritten instruction */
    /* 2D788 8003CF88 00000CA5 */  sh         $t4, 0x0($t0)
    /* 2D78C 8003CF8C 06000DA5 */  sh         $t5, 0x6($t0)
    /* 2D790 8003CF90 0C000EA5 */  sh         $t6, 0xC($t0)
    /* 2D794 8003CF94 801F083C */  lui        $t0, %hi(D_1F8000C0)
    /* 2D798 8003CF98 C0000825 */  addiu      $t0, $t0, %lo(D_1F8000C0)
    /* 2D79C 8003CF9C 000000C9 */  lwc2       $0, 0x0($t0)
    /* 2D7A0 8003CFA0 040001C9 */  lwc2       $1, 0x4($t0)
    /* 2D7A4 8003CFA4 00000000 */  nop
    /* 2D7A8 8003CFA8 00000000 */  nop
    /* 2D7AC 8003CFAC 1260484A */  mvmva      1, 0, 0, 3, 0
    /* 2D7B0 8003CFB0 801F083C */  lui        $t0, %hi(D_1F800014)
    /* 2D7B4 8003CFB4 14000825 */  addiu      $t0, $t0, %lo(D_1F800014)
    /* 2D7B8 8003CFB8 000019E9 */  swc2       $25, 0x0($t0)
    /* 2D7BC 8003CFBC 04001AE9 */  swc2       $26, 0x4($t0) /* handwritten instruction */
    /* 2D7C0 8003CFC0 08001BE9 */  swc2       $27, 0x8($t0) /* handwritten instruction */
    /* 2D7C4 8003CFC4 801F083C */  lui        $t0, %hi(D_1F800000)
    /* 2D7C8 8003CFC8 1400228E */  lw         $v0, 0x14($s1)
    /* 2D7CC 8003CFCC 3C00638E */  lw         $v1, 0x3C($s3)
    /* 2D7D0 8003CFD0 00000825 */  addiu      $t0, $t0, %lo(D_1F800000)
    /* 2D7D4 8003CFD4 21104300 */  addu       $v0, $v0, $v1
    /* 2D7D8 8003CFD8 140022AE */  sw         $v0, 0x14($s1)
    /* 2D7DC 8003CFDC 1800228E */  lw         $v0, 0x18($s1)
    /* 2D7E0 8003CFE0 4000648E */  lw         $a0, 0x40($s3)
    /* 2D7E4 8003CFE4 1C00238E */  lw         $v1, 0x1C($s1)
    /* 2D7E8 8003CFE8 4400658E */  lw         $a1, 0x44($s3)
    /* 2D7EC 8003CFEC 21104400 */  addu       $v0, $v0, $a0
    /* 2D7F0 8003CFF0 21186500 */  addu       $v1, $v1, $a1
    /* 2D7F4 8003CFF4 180022AE */  sw         $v0, 0x18($s1)
    /* 2D7F8 8003CFF8 1C0023AE */  sw         $v1, 0x1C($s1)
    /* 2D7FC 8003CFFC 00000C8D */  lw         $t4, 0x0($t0)
    /* 2D800 8003D000 04000D8D */  lw         $t5, 0x4($t0)
    /* 2D804 8003D004 0000CC48 */  ctc2       $t4, $0 /* handwritten instruction */
    /* 2D808 8003D008 0008CD48 */  ctc2       $t5, $1 /* handwritten instruction */
    /* 2D80C 8003D00C 08000C8D */  lw         $t4, 0x8($t0)
    /* 2D810 8003D010 0C000D8D */  lw         $t5, 0xC($t0)
    /* 2D814 8003D014 10000E8D */  lw         $t6, 0x10($t0)
    /* 2D818 8003D018 0010CC48 */  ctc2       $t4, $2 /* handwritten instruction */
    /* 2D81C 8003D01C 0018CD48 */  ctc2       $t5, $3 /* handwritten instruction */
    /* 2D820 8003D020 0020CE48 */  ctc2       $t6, $4 /* handwritten instruction */
    /* 2D824 8003D024 801F083C */  lui        $t0, %hi(D_1F800000)
    /* 2D828 8003D028 00000825 */  addiu      $t0, $t0, %lo(D_1F800000)
    /* 2D82C 8003D02C 14000C8D */  lw         $t4, 0x14($t0)
    /* 2D830 8003D030 18000D8D */  lw         $t5, 0x18($t0)
    /* 2D834 8003D034 0028CC48 */  ctc2       $t4, $5 /* handwritten instruction */
    /* 2D838 8003D038 1C000E8D */  lw         $t6, 0x1C($t0)
    /* 2D83C 8003D03C 0030CD48 */  ctc2       $t5, $6 /* handwritten instruction */
    /* 2D840 8003D040 0038CE48 */  ctc2       $t6, $7 /* handwritten instruction */
    /* 2D844 8003D044 04000324 */  addiu      $v1, $zero, 0x4
    /* 2D848 8003D048 0D004292 */  lbu        $v0, 0xD($s2)
    /* 2D84C 8003D04C 4000E48C */  lw         $a0, 0x40($a3)
    /* 2D850 8003D050 0F004230 */  andi       $v0, $v0, 0xF
    /* 2D854 8003D054 06004314 */  bne        $v0, $v1, .L8003D070
    /* 2D858 8003D058 2130C002 */   addu      $a2, $s6, $zero
    /* 2D85C 8003D05C 3F00E580 */  lb         $a1, 0x3F($a3)
    /* 2D860 8003D060 C8D8828E */  lw         $v0, %lo(D_800ED8C8)($s4)
    /* 2D864 8003D064 80280500 */  sll        $a1, $a1, 2
    /* 2D868 8003D068 1DF40008 */  j          .L8003D074
    /* 2D86C 8003D06C 21284500 */   addu      $a1, $v0, $a1
  .L8003D070:
    /* 2D870 8003D070 C8D8858E */  lw         $a1, %lo(D_800ED8C8)($s4)
  .L8003D074:
    /* 2D874 8003D074 A6FD000C */  jal        func_8003F698
    /* 2D878 8003D078 00000000 */   nop
  .L8003D07C:
    /* 2D87C 8003D07C 09004292 */  lbu        $v0, 0x9($s2)
    /* 2D880 8003D080 01001026 */  addiu      $s0, $s0, 0x1
    /* 2D884 8003D084 2A100202 */  slt        $v0, $s0, $v0
    /* 2D888 8003D088 6DFF4014 */  bnez       $v0, .L8003CE40
    /* 2D88C 8003D08C 00000000 */   nop
  .L8003D090:
    /* 2D890 8003D090 3000BF8F */  lw         $ra, 0x30($sp)
    /* 2D894 8003D094 2C00B78F */  lw         $s7, 0x2C($sp)
    /* 2D898 8003D098 2800B68F */  lw         $s6, 0x28($sp)
    /* 2D89C 8003D09C 2400B58F */  lw         $s5, 0x24($sp)
    /* 2D8A0 8003D0A0 2000B48F */  lw         $s4, 0x20($sp)
    /* 2D8A4 8003D0A4 1C00B38F */  lw         $s3, 0x1C($sp)
    /* 2D8A8 8003D0A8 1800B28F */  lw         $s2, 0x18($sp)
    /* 2D8AC 8003D0AC 1400B18F */  lw         $s1, 0x14($sp)
    /* 2D8B0 8003D0B0 1000B08F */  lw         $s0, 0x10($sp)
    /* 2D8B4 8003D0B4 0800E003 */  jr         $ra
    /* 2D8B8 8003D0B8 3800BD27 */   addiu     $sp, $sp, 0x38
endlabel func_8003CDD8
