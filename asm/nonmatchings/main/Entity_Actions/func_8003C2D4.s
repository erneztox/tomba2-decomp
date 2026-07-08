/* Handwritten function */
nonmatching func_8003C2D4, 0x190

glabel func_8003C2D4
    /* 2CAD4 8003C2D4 D8FFBD27 */  addiu      $sp, $sp, -0x28
    /* 2CAD8 8003C2D8 1C00B3AF */  sw         $s3, 0x1C($sp)
    /* 2CADC 8003C2DC 21988000 */  addu       $s3, $a0, $zero
    /* 2CAE0 8003C2E0 2000BFAF */  sw         $ra, 0x20($sp)
    /* 2CAE4 8003C2E4 1800B2AF */  sw         $s2, 0x18($sp)
    /* 2CAE8 8003C2E8 1400B1AF */  sw         $s1, 0x14($sp)
    /* 2CAEC 8003C2EC 1000B0AF */  sw         $s0, 0x10($sp)
    /* 2CAF0 8003C2F0 3800628E */  lw         $v0, 0x38($s3)
    /* 2CAF4 8003C2F4 00000000 */  nop
    /* 2CAF8 8003C2F8 53004010 */  beqz       $v0, .L8003C448
    /* 2CAFC 8003C2FC 801F113C */   lui       $s1, %hi(D_1F800000)
    /* 2CB00 8003C300 00003126 */  addiu      $s1, $s1, %lo(D_1F800000)
    /* 2CB04 8003C304 E545010C */  jal        func_80051794
    /* 2CB08 8003C308 21202002 */   addu      $a0, $s1, $zero
    /* 2CB0C 8003C30C 801F103C */  lui        $s0, %hi(D_1F800020)
    /* 2CB10 8003C310 20001026 */  addiu      $s0, $s0, %lo(D_1F800020)
    /* 2CB14 8003C314 E545010C */  jal        func_80051794
    /* 2CB18 8003C318 21200002 */   addu      $a0, $s0, $zero
    /* 2CB1C 8003C31C 5A006486 */  lh         $a0, 0x5A($s3)
    /* 2CB20 8003C320 1414020C */  jal        func_80085050
    /* 2CB24 8003C324 21280002 */   addu      $a1, $s0, $zero
    /* 2CB28 8003C328 21200002 */  addu       $a0, $s0, $zero
    /* 2CB2C 8003C32C 21282002 */  addu       $a1, $s1, $zero
    /* 2CB30 8003C330 801F103C */  lui        $s0, %hi(D_1F800040)
    /* 2CB34 8003C334 40001026 */  addiu      $s0, $s0, %lo(D_1F800040)
    /* 2CB38 8003C338 47007292 */  lbu        $s2, 0x47($s3)
    /* 2CB3C 8003C33C 21300002 */  addu       $a2, $s0, $zero
    /* 2CB40 8003C340 4410020C */  jal        func_80084110
    /* 2CB44 8003C344 01005232 */   andi      $s2, $s2, 0x1
    /* 2CB48 8003C348 801F023C */  lui        $v0, (0x1F8000C0 >> 16)
    /* 2CB4C 8003C34C 2E006396 */  lhu        $v1, 0x2E($s3)
    /* 2CB50 8003C350 801F073C */  lui        $a3, %hi(D_1F8000F8)
    /* 2CB54 8003C354 C00043A4 */  sh         $v1, (0x1F8000C0 & 0xFFFF)($v0)
    /* 2CB58 8003C358 32006396 */  lhu        $v1, 0x32($s3)
    /* 2CB5C 8003C35C C0004224 */  addiu      $v0, $v0, %lo(D_1F8000C0)
    /* 2CB60 8003C360 020043A4 */  sh         $v1, 0x2($v0)
    /* 2CB64 8003C364 36006396 */  lhu        $v1, 0x36($s3)
    /* 2CB68 8003C368 F800E724 */  addiu      $a3, $a3, %lo(D_1F8000F8)
    /* 2CB6C 8003C36C 040043A4 */  sh         $v1, 0x4($v0)
    /* 2CB70 8003C370 0000EC8C */  lw         $t4, 0x0($a3)
    /* 2CB74 8003C374 0400ED8C */  lw         $t5, 0x4($a3)
    /* 2CB78 8003C378 0000CC48 */  ctc2       $t4, $0 /* handwritten instruction */
    /* 2CB7C 8003C37C 0008CD48 */  ctc2       $t5, $1 /* handwritten instruction */
    /* 2CB80 8003C380 0800EC8C */  lw         $t4, 0x8($a3)
    /* 2CB84 8003C384 0C00ED8C */  lw         $t5, 0xC($a3)
    /* 2CB88 8003C388 1000EE8C */  lw         $t6, 0x10($a3)
    /* 2CB8C 8003C38C 0010CC48 */  ctc2       $t4, $2 /* handwritten instruction */
    /* 2CB90 8003C390 0018CD48 */  ctc2       $t5, $3 /* handwritten instruction */
    /* 2CB94 8003C394 0020CE48 */  ctc2       $t6, $4 /* handwritten instruction */
    /* 2CB98 8003C398 000040C8 */  lwc2       $0, 0x0($v0)
    /* 2CB9C 8003C39C 040041C8 */  lwc2       $1, 0x4($v0)
    /* 2CBA0 8003C3A0 00000000 */  nop
    /* 2CBA4 8003C3A4 00000000 */  nop
    /* 2CBA8 8003C3A8 1260484A */  mvmva      1, 0, 0, 3, 0
    /* 2CBAC 8003C3AC 801F073C */  lui        $a3, %hi(D_1F800054)
    /* 2CBB0 8003C3B0 5400E724 */  addiu      $a3, $a3, %lo(D_1F800054)
    /* 2CBB4 8003C3B4 0000F9E8 */  swc2       $25, 0x0($a3)
    /* 2CBB8 8003C3B8 0400FAE8 */  swc2       $26, 0x4($a3) /* handwritten instruction */
    /* 2CBBC 8003C3BC 0800FBE8 */  swc2       $27, 0x8($a3) /* handwritten instruction */
    /* 2CBC0 8003C3C0 801F043C */  lui        $a0, %hi(D_1F8000D0)
    /* 2CBC4 8003C3C4 D0008424 */  addiu      $a0, $a0, %lo(D_1F8000D0)
    /* 2CBC8 8003C3C8 1400028E */  lw         $v0, 0x14($s0)
    /* 2CBCC 8003C3CC 3C00838C */  lw         $v1, 0x3C($a0)
    /* 2CBD0 8003C3D0 00000000 */  nop
    /* 2CBD4 8003C3D4 21104300 */  addu       $v0, $v0, $v1
    /* 2CBD8 8003C3D8 140002AE */  sw         $v0, 0x14($s0)
    /* 2CBDC 8003C3DC 1800028E */  lw         $v0, 0x18($s0)
    /* 2CBE0 8003C3E0 4000858C */  lw         $a1, 0x40($a0)
    /* 2CBE4 8003C3E4 1C00038E */  lw         $v1, 0x1C($s0)
    /* 2CBE8 8003C3E8 4400848C */  lw         $a0, 0x44($a0)
    /* 2CBEC 8003C3EC 21104500 */  addu       $v0, $v0, $a1
    /* 2CBF0 8003C3F0 21186400 */  addu       $v1, $v1, $a0
    /* 2CBF4 8003C3F4 180002AE */  sw         $v0, 0x18($s0)
    /* 2CBF8 8003C3F8 1C0003AE */  sw         $v1, 0x1C($s0)
    /* 2CBFC 8003C3FC 00000C8E */  lw         $t4, 0x0($s0)
    /* 2CC00 8003C400 04000D8E */  lw         $t5, 0x4($s0)
    /* 2CC04 8003C404 0000CC48 */  ctc2       $t4, $0 /* handwritten instruction */
    /* 2CC08 8003C408 0008CD48 */  ctc2       $t5, $1 /* handwritten instruction */
    /* 2CC0C 8003C40C 08000C8E */  lw         $t4, 0x8($s0)
    /* 2CC10 8003C410 0C000D8E */  lw         $t5, 0xC($s0)
    /* 2CC14 8003C414 10000E8E */  lw         $t6, 0x10($s0)
    /* 2CC18 8003C418 0010CC48 */  ctc2       $t4, $2 /* handwritten instruction */
    /* 2CC1C 8003C41C 0018CD48 */  ctc2       $t5, $3 /* handwritten instruction */
    /* 2CC20 8003C420 0020CE48 */  ctc2       $t6, $4 /* handwritten instruction */
    /* 2CC24 8003C424 14000C8E */  lw         $t4, 0x14($s0)
    /* 2CC28 8003C428 18000D8E */  lw         $t5, 0x18($s0)
    /* 2CC2C 8003C42C 0028CC48 */  ctc2       $t4, $5 /* handwritten instruction */
    /* 2CC30 8003C430 1C000E8E */  lw         $t6, 0x1C($s0)
    /* 2CC34 8003C434 0030CD48 */  ctc2       $t5, $6 /* handwritten instruction */
    /* 2CC38 8003C438 0038CE48 */  ctc2       $t6, $7 /* handwritten instruction */
    /* 2CC3C 8003C43C 21206002 */  addu       $a0, $s3, $zero
    /* 2CC40 8003C440 3DF2000C */  jal        func_8003C8F4
    /* 2CC44 8003C444 21284002 */   addu      $a1, $s2, $zero
  .L8003C448:
    /* 2CC48 8003C448 2000BF8F */  lw         $ra, 0x20($sp)
    /* 2CC4C 8003C44C 1C00B38F */  lw         $s3, 0x1C($sp)
    /* 2CC50 8003C450 1800B28F */  lw         $s2, 0x18($sp)
    /* 2CC54 8003C454 1400B18F */  lw         $s1, 0x14($sp)
    /* 2CC58 8003C458 1000B08F */  lw         $s0, 0x10($sp)
    /* 2CC5C 8003C45C 0800E003 */  jr         $ra
    /* 2CC60 8003C460 2800BD27 */   addiu     $sp, $sp, 0x28
endlabel func_8003C2D4
