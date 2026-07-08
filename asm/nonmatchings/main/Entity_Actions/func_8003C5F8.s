/* Handwritten function */
nonmatching func_8003C5F8, 0x190

glabel func_8003C5F8
    /* 2CDF8 8003C5F8 D8FFBD27 */  addiu      $sp, $sp, -0x28
    /* 2CDFC 8003C5FC 1C00B3AF */  sw         $s3, 0x1C($sp)
    /* 2CE00 8003C600 21988000 */  addu       $s3, $a0, $zero
    /* 2CE04 8003C604 2000BFAF */  sw         $ra, 0x20($sp)
    /* 2CE08 8003C608 1800B2AF */  sw         $s2, 0x18($sp)
    /* 2CE0C 8003C60C 1400B1AF */  sw         $s1, 0x14($sp)
    /* 2CE10 8003C610 1000B0AF */  sw         $s0, 0x10($sp)
    /* 2CE14 8003C614 3800628E */  lw         $v0, 0x38($s3)
    /* 2CE18 8003C618 00000000 */  nop
    /* 2CE1C 8003C61C 53004010 */  beqz       $v0, .L8003C76C
    /* 2CE20 8003C620 801F113C */   lui       $s1, %hi(D_1F800000)
    /* 2CE24 8003C624 00003126 */  addiu      $s1, $s1, %lo(D_1F800000)
    /* 2CE28 8003C628 E545010C */  jal        func_80051794
    /* 2CE2C 8003C62C 21202002 */   addu      $a0, $s1, $zero
    /* 2CE30 8003C630 801F103C */  lui        $s0, %hi(D_1F800020)
    /* 2CE34 8003C634 20001026 */  addiu      $s0, $s0, %lo(D_1F800020)
    /* 2CE38 8003C638 E545010C */  jal        func_80051794
    /* 2CE3C 8003C63C 21200002 */   addu      $a0, $s0, $zero
    /* 2CE40 8003C640 54006426 */  addiu      $a0, $s3, 0x54
    /* 2CE44 8003C644 FC11020C */  jal        func_800847F0
    /* 2CE48 8003C648 21280002 */   addu      $a1, $s0, $zero
    /* 2CE4C 8003C64C 21200002 */  addu       $a0, $s0, $zero
    /* 2CE50 8003C650 21282002 */  addu       $a1, $s1, $zero
    /* 2CE54 8003C654 801F103C */  lui        $s0, %hi(D_1F800040)
    /* 2CE58 8003C658 40001026 */  addiu      $s0, $s0, %lo(D_1F800040)
    /* 2CE5C 8003C65C 47007292 */  lbu        $s2, 0x47($s3)
    /* 2CE60 8003C660 21300002 */  addu       $a2, $s0, $zero
    /* 2CE64 8003C664 4410020C */  jal        func_80084110
    /* 2CE68 8003C668 01005232 */   andi      $s2, $s2, 0x1
    /* 2CE6C 8003C66C 801F023C */  lui        $v0, (0x1F8000C0 >> 16)
    /* 2CE70 8003C670 2E006396 */  lhu        $v1, 0x2E($s3)
    /* 2CE74 8003C674 801F073C */  lui        $a3, %hi(D_1F8000F8)
    /* 2CE78 8003C678 C00043A4 */  sh         $v1, (0x1F8000C0 & 0xFFFF)($v0)
    /* 2CE7C 8003C67C 32006396 */  lhu        $v1, 0x32($s3)
    /* 2CE80 8003C680 C0004224 */  addiu      $v0, $v0, %lo(D_1F8000C0)
    /* 2CE84 8003C684 020043A4 */  sh         $v1, 0x2($v0)
    /* 2CE88 8003C688 36006396 */  lhu        $v1, 0x36($s3)
    /* 2CE8C 8003C68C F800E724 */  addiu      $a3, $a3, %lo(D_1F8000F8)
    /* 2CE90 8003C690 040043A4 */  sh         $v1, 0x4($v0)
    /* 2CE94 8003C694 0000EC8C */  lw         $t4, 0x0($a3)
    /* 2CE98 8003C698 0400ED8C */  lw         $t5, 0x4($a3)
    /* 2CE9C 8003C69C 0000CC48 */  ctc2       $t4, $0 /* handwritten instruction */
    /* 2CEA0 8003C6A0 0008CD48 */  ctc2       $t5, $1 /* handwritten instruction */
    /* 2CEA4 8003C6A4 0800EC8C */  lw         $t4, 0x8($a3)
    /* 2CEA8 8003C6A8 0C00ED8C */  lw         $t5, 0xC($a3)
    /* 2CEAC 8003C6AC 1000EE8C */  lw         $t6, 0x10($a3)
    /* 2CEB0 8003C6B0 0010CC48 */  ctc2       $t4, $2 /* handwritten instruction */
    /* 2CEB4 8003C6B4 0018CD48 */  ctc2       $t5, $3 /* handwritten instruction */
    /* 2CEB8 8003C6B8 0020CE48 */  ctc2       $t6, $4 /* handwritten instruction */
    /* 2CEBC 8003C6BC 000040C8 */  lwc2       $0, 0x0($v0)
    /* 2CEC0 8003C6C0 040041C8 */  lwc2       $1, 0x4($v0)
    /* 2CEC4 8003C6C4 00000000 */  nop
    /* 2CEC8 8003C6C8 00000000 */  nop
    /* 2CECC 8003C6CC 1260484A */  mvmva      1, 0, 0, 3, 0
    /* 2CED0 8003C6D0 801F073C */  lui        $a3, %hi(D_1F800054)
    /* 2CED4 8003C6D4 5400E724 */  addiu      $a3, $a3, %lo(D_1F800054)
    /* 2CED8 8003C6D8 0000F9E8 */  swc2       $25, 0x0($a3)
    /* 2CEDC 8003C6DC 0400FAE8 */  swc2       $26, 0x4($a3) /* handwritten instruction */
    /* 2CEE0 8003C6E0 0800FBE8 */  swc2       $27, 0x8($a3) /* handwritten instruction */
    /* 2CEE4 8003C6E4 801F043C */  lui        $a0, %hi(D_1F8000D0)
    /* 2CEE8 8003C6E8 D0008424 */  addiu      $a0, $a0, %lo(D_1F8000D0)
    /* 2CEEC 8003C6EC 1400028E */  lw         $v0, 0x14($s0)
    /* 2CEF0 8003C6F0 3C00838C */  lw         $v1, 0x3C($a0)
    /* 2CEF4 8003C6F4 00000000 */  nop
    /* 2CEF8 8003C6F8 21104300 */  addu       $v0, $v0, $v1
    /* 2CEFC 8003C6FC 140002AE */  sw         $v0, 0x14($s0)
    /* 2CF00 8003C700 1800028E */  lw         $v0, 0x18($s0)
    /* 2CF04 8003C704 4000858C */  lw         $a1, 0x40($a0)
    /* 2CF08 8003C708 1C00038E */  lw         $v1, 0x1C($s0)
    /* 2CF0C 8003C70C 4400848C */  lw         $a0, 0x44($a0)
    /* 2CF10 8003C710 21104500 */  addu       $v0, $v0, $a1
    /* 2CF14 8003C714 21186400 */  addu       $v1, $v1, $a0
    /* 2CF18 8003C718 180002AE */  sw         $v0, 0x18($s0)
    /* 2CF1C 8003C71C 1C0003AE */  sw         $v1, 0x1C($s0)
    /* 2CF20 8003C720 00000C8E */  lw         $t4, 0x0($s0)
    /* 2CF24 8003C724 04000D8E */  lw         $t5, 0x4($s0)
    /* 2CF28 8003C728 0000CC48 */  ctc2       $t4, $0 /* handwritten instruction */
    /* 2CF2C 8003C72C 0008CD48 */  ctc2       $t5, $1 /* handwritten instruction */
    /* 2CF30 8003C730 08000C8E */  lw         $t4, 0x8($s0)
    /* 2CF34 8003C734 0C000D8E */  lw         $t5, 0xC($s0)
    /* 2CF38 8003C738 10000E8E */  lw         $t6, 0x10($s0)
    /* 2CF3C 8003C73C 0010CC48 */  ctc2       $t4, $2 /* handwritten instruction */
    /* 2CF40 8003C740 0018CD48 */  ctc2       $t5, $3 /* handwritten instruction */
    /* 2CF44 8003C744 0020CE48 */  ctc2       $t6, $4 /* handwritten instruction */
    /* 2CF48 8003C748 14000C8E */  lw         $t4, 0x14($s0)
    /* 2CF4C 8003C74C 18000D8E */  lw         $t5, 0x18($s0)
    /* 2CF50 8003C750 0028CC48 */  ctc2       $t4, $5 /* handwritten instruction */
    /* 2CF54 8003C754 1C000E8E */  lw         $t6, 0x1C($s0)
    /* 2CF58 8003C758 0030CD48 */  ctc2       $t5, $6 /* handwritten instruction */
    /* 2CF5C 8003C75C 0038CE48 */  ctc2       $t6, $7 /* handwritten instruction */
    /* 2CF60 8003C760 21206002 */  addu       $a0, $s3, $zero
    /* 2CF64 8003C764 3DF2000C */  jal        func_8003C8F4
    /* 2CF68 8003C768 21284002 */   addu      $a1, $s2, $zero
  .L8003C76C:
    /* 2CF6C 8003C76C 2000BF8F */  lw         $ra, 0x20($sp)
    /* 2CF70 8003C770 1C00B38F */  lw         $s3, 0x1C($sp)
    /* 2CF74 8003C774 1800B28F */  lw         $s2, 0x18($sp)
    /* 2CF78 8003C778 1400B18F */  lw         $s1, 0x14($sp)
    /* 2CF7C 8003C77C 1000B08F */  lw         $s0, 0x10($sp)
    /* 2CF80 8003C780 0800E003 */  jr         $ra
    /* 2CF84 8003C784 2800BD27 */   addiu     $sp, $sp, 0x28
endlabel func_8003C5F8
