/* Handwritten function */
nonmatching func_8003C788, 0x16C

glabel func_8003C788
    /* 2CF88 8003C788 E0FFBD27 */  addiu      $sp, $sp, -0x20
    /* 2CF8C 8003C78C 1800B2AF */  sw         $s2, 0x18($sp)
    /* 2CF90 8003C790 21908000 */  addu       $s2, $a0, $zero
    /* 2CF94 8003C794 1C00BFAF */  sw         $ra, 0x1C($sp)
    /* 2CF98 8003C798 1400B1AF */  sw         $s1, 0x14($sp)
    /* 2CF9C 8003C79C 1000B0AF */  sw         $s0, 0x10($sp)
    /* 2CFA0 8003C7A0 3800428E */  lw         $v0, 0x38($s2)
    /* 2CFA4 8003C7A4 00000000 */  nop
    /* 2CFA8 8003C7A8 4C004010 */  beqz       $v0, .L8003C8DC
    /* 2CFAC 8003C7AC 801F103C */   lui       $s0, %hi(D_1F800000)
    /* 2CFB0 8003C7B0 00001026 */  addiu      $s0, $s0, %lo(D_1F800000)
    /* 2CFB4 8003C7B4 E545010C */  jal        func_80051794
    /* 2CFB8 8003C7B8 21200002 */   addu      $a0, $s0, $zero
    /* 2CFBC 8003C7BC 98004426 */  addiu      $a0, $s2, 0x98
    /* 2CFC0 8003C7C0 21280002 */  addu       $a1, $s0, $zero
    /* 2CFC4 8003C7C4 801F103C */  lui        $s0, %hi(D_1F800020)
    /* 2CFC8 8003C7C8 20001026 */  addiu      $s0, $s0, %lo(D_1F800020)
    /* 2CFCC 8003C7CC 47005192 */  lbu        $s1, 0x47($s2)
    /* 2CFD0 8003C7D0 21300002 */  addu       $a2, $s0, $zero
    /* 2CFD4 8003C7D4 4410020C */  jal        func_80084110
    /* 2CFD8 8003C7D8 01003132 */   andi      $s1, $s1, 0x1
    /* 2CFDC 8003C7DC 801F023C */  lui        $v0, (0x1F8000C0 >> 16)
    /* 2CFE0 8003C7E0 2E004396 */  lhu        $v1, 0x2E($s2)
    /* 2CFE4 8003C7E4 801F073C */  lui        $a3, %hi(D_1F8000F8)
    /* 2CFE8 8003C7E8 C00043A4 */  sh         $v1, (0x1F8000C0 & 0xFFFF)($v0)
    /* 2CFEC 8003C7EC 32004396 */  lhu        $v1, 0x32($s2)
    /* 2CFF0 8003C7F0 C0004224 */  addiu      $v0, $v0, %lo(D_1F8000C0)
    /* 2CFF4 8003C7F4 020043A4 */  sh         $v1, 0x2($v0)
    /* 2CFF8 8003C7F8 36004396 */  lhu        $v1, 0x36($s2)
    /* 2CFFC 8003C7FC F800E724 */  addiu      $a3, $a3, %lo(D_1F8000F8)
    /* 2D000 8003C800 040043A4 */  sh         $v1, 0x4($v0)
    /* 2D004 8003C804 0000EC8C */  lw         $t4, 0x0($a3)
    /* 2D008 8003C808 0400ED8C */  lw         $t5, 0x4($a3)
    /* 2D00C 8003C80C 0000CC48 */  ctc2       $t4, $0 /* handwritten instruction */
    /* 2D010 8003C810 0008CD48 */  ctc2       $t5, $1 /* handwritten instruction */
    /* 2D014 8003C814 0800EC8C */  lw         $t4, 0x8($a3)
    /* 2D018 8003C818 0C00ED8C */  lw         $t5, 0xC($a3)
    /* 2D01C 8003C81C 1000EE8C */  lw         $t6, 0x10($a3)
    /* 2D020 8003C820 0010CC48 */  ctc2       $t4, $2 /* handwritten instruction */
    /* 2D024 8003C824 0018CD48 */  ctc2       $t5, $3 /* handwritten instruction */
    /* 2D028 8003C828 0020CE48 */  ctc2       $t6, $4 /* handwritten instruction */
    /* 2D02C 8003C82C 000040C8 */  lwc2       $0, 0x0($v0)
    /* 2D030 8003C830 040041C8 */  lwc2       $1, 0x4($v0)
    /* 2D034 8003C834 00000000 */  nop
    /* 2D038 8003C838 00000000 */  nop
    /* 2D03C 8003C83C 1260484A */  mvmva      1, 0, 0, 3, 0
    /* 2D040 8003C840 801F073C */  lui        $a3, %hi(D_1F800034)
    /* 2D044 8003C844 3400E724 */  addiu      $a3, $a3, %lo(D_1F800034)
    /* 2D048 8003C848 0000F9E8 */  swc2       $25, 0x0($a3)
    /* 2D04C 8003C84C 0400FAE8 */  swc2       $26, 0x4($a3) /* handwritten instruction */
    /* 2D050 8003C850 0800FBE8 */  swc2       $27, 0x8($a3) /* handwritten instruction */
    /* 2D054 8003C854 801F043C */  lui        $a0, %hi(D_1F8000D0)
    /* 2D058 8003C858 D0008424 */  addiu      $a0, $a0, %lo(D_1F8000D0)
    /* 2D05C 8003C85C 1400028E */  lw         $v0, 0x14($s0)
    /* 2D060 8003C860 3C00838C */  lw         $v1, 0x3C($a0)
    /* 2D064 8003C864 00000000 */  nop
    /* 2D068 8003C868 21104300 */  addu       $v0, $v0, $v1
    /* 2D06C 8003C86C 140002AE */  sw         $v0, 0x14($s0)
    /* 2D070 8003C870 1800028E */  lw         $v0, 0x18($s0)
    /* 2D074 8003C874 4000858C */  lw         $a1, 0x40($a0)
    /* 2D078 8003C878 1C00038E */  lw         $v1, 0x1C($s0)
    /* 2D07C 8003C87C 4400848C */  lw         $a0, 0x44($a0)
    /* 2D080 8003C880 21104500 */  addu       $v0, $v0, $a1
    /* 2D084 8003C884 21186400 */  addu       $v1, $v1, $a0
    /* 2D088 8003C888 180002AE */  sw         $v0, 0x18($s0)
    /* 2D08C 8003C88C 1C0003AE */  sw         $v1, 0x1C($s0)
    /* 2D090 8003C890 00000C8E */  lw         $t4, 0x0($s0)
    /* 2D094 8003C894 04000D8E */  lw         $t5, 0x4($s0)
    /* 2D098 8003C898 0000CC48 */  ctc2       $t4, $0 /* handwritten instruction */
    /* 2D09C 8003C89C 0008CD48 */  ctc2       $t5, $1 /* handwritten instruction */
    /* 2D0A0 8003C8A0 08000C8E */  lw         $t4, 0x8($s0)
    /* 2D0A4 8003C8A4 0C000D8E */  lw         $t5, 0xC($s0)
    /* 2D0A8 8003C8A8 10000E8E */  lw         $t6, 0x10($s0)
    /* 2D0AC 8003C8AC 0010CC48 */  ctc2       $t4, $2 /* handwritten instruction */
    /* 2D0B0 8003C8B0 0018CD48 */  ctc2       $t5, $3 /* handwritten instruction */
    /* 2D0B4 8003C8B4 0020CE48 */  ctc2       $t6, $4 /* handwritten instruction */
    /* 2D0B8 8003C8B8 14000C8E */  lw         $t4, 0x14($s0)
    /* 2D0BC 8003C8BC 18000D8E */  lw         $t5, 0x18($s0)
    /* 2D0C0 8003C8C0 0028CC48 */  ctc2       $t4, $5 /* handwritten instruction */
    /* 2D0C4 8003C8C4 1C000E8E */  lw         $t6, 0x1C($s0)
    /* 2D0C8 8003C8C8 0030CD48 */  ctc2       $t5, $6 /* handwritten instruction */
    /* 2D0CC 8003C8CC 0038CE48 */  ctc2       $t6, $7 /* handwritten instruction */
    /* 2D0D0 8003C8D0 21204002 */  addu       $a0, $s2, $zero
    /* 2D0D4 8003C8D4 3DF2000C */  jal        func_8003C8F4
    /* 2D0D8 8003C8D8 21282002 */   addu      $a1, $s1, $zero
  .L8003C8DC:
    /* 2D0DC 8003C8DC 1C00BF8F */  lw         $ra, 0x1C($sp)
    /* 2D0E0 8003C8E0 1800B28F */  lw         $s2, 0x18($sp)
    /* 2D0E4 8003C8E4 1400B18F */  lw         $s1, 0x14($sp)
    /* 2D0E8 8003C8E8 1000B08F */  lw         $s0, 0x10($sp)
    /* 2D0EC 8003C8EC 0800E003 */  jr         $ra
    /* 2D0F0 8003C8F0 2000BD27 */   addiu     $sp, $sp, 0x20
endlabel func_8003C788
