/* Handwritten function */
nonmatching func_8003C464, 0x194

glabel func_8003C464
    /* 2CC64 8003C464 E0FFBD27 */  addiu      $sp, $sp, -0x20
    /* 2CC68 8003C468 1800B2AF */  sw         $s2, 0x18($sp)
    /* 2CC6C 8003C46C 21908000 */  addu       $s2, $a0, $zero
    /* 2CC70 8003C470 1C00BFAF */  sw         $ra, 0x1C($sp)
    /* 2CC74 8003C474 1400B1AF */  sw         $s1, 0x14($sp)
    /* 2CC78 8003C478 1000B0AF */  sw         $s0, 0x10($sp)
    /* 2CC7C 8003C47C 3800428E */  lw         $v0, 0x38($s2)
    /* 2CC80 8003C480 00000000 */  nop
    /* 2CC84 8003C484 56004010 */  beqz       $v0, .L8003C5E0
    /* 2CC88 8003C488 801F113C */   lui       $s1, %hi(D_1F800000)
    /* 2CC8C 8003C48C 00003126 */  addiu      $s1, $s1, %lo(D_1F800000)
    /* 2CC90 8003C490 7A004586 */  lh         $a1, 0x7A($s2)
    /* 2CC94 8003C494 7C004686 */  lh         $a2, 0x7C($s2)
    /* 2CC98 8003C498 7E004786 */  lh         $a3, 0x7E($s2)
    /* 2CC9C 8003C49C EF45010C */  jal        func_800517BC
    /* 2CCA0 8003C4A0 21202002 */   addu      $a0, $s1, $zero
    /* 2CCA4 8003C4A4 801F103C */  lui        $s0, %hi(D_1F800020)
    /* 2CCA8 8003C4A8 20001026 */  addiu      $s0, $s0, %lo(D_1F800020)
    /* 2CCAC 8003C4AC E545010C */  jal        func_80051794
    /* 2CCB0 8003C4B0 21200002 */   addu      $a0, $s0, $zero
    /* 2CCB4 8003C4B4 5A004486 */  lh         $a0, 0x5A($s2)
    /* 2CCB8 8003C4B8 1414020C */  jal        func_80085050
    /* 2CCBC 8003C4BC 21280002 */   addu      $a1, $s0, $zero
    /* 2CCC0 8003C4C0 21200002 */  addu       $a0, $s0, $zero
    /* 2CCC4 8003C4C4 21282002 */  addu       $a1, $s1, $zero
    /* 2CCC8 8003C4C8 801F103C */  lui        $s0, %hi(D_1F800040)
    /* 2CCCC 8003C4CC 40001026 */  addiu      $s0, $s0, %lo(D_1F800040)
    /* 2CCD0 8003C4D0 47005192 */  lbu        $s1, 0x47($s2)
    /* 2CCD4 8003C4D4 21300002 */  addu       $a2, $s0, $zero
    /* 2CCD8 8003C4D8 4410020C */  jal        func_80084110
    /* 2CCDC 8003C4DC 01003132 */   andi      $s1, $s1, 0x1
    /* 2CCE0 8003C4E0 801F023C */  lui        $v0, (0x1F8000C0 >> 16)
    /* 2CCE4 8003C4E4 2E004396 */  lhu        $v1, 0x2E($s2)
    /* 2CCE8 8003C4E8 801F083C */  lui        $t0, %hi(D_1F8000F8)
    /* 2CCEC 8003C4EC C00043A4 */  sh         $v1, (0x1F8000C0 & 0xFFFF)($v0)
    /* 2CCF0 8003C4F0 32004396 */  lhu        $v1, 0x32($s2)
    /* 2CCF4 8003C4F4 C0004224 */  addiu      $v0, $v0, %lo(D_1F8000C0)
    /* 2CCF8 8003C4F8 020043A4 */  sh         $v1, 0x2($v0)
    /* 2CCFC 8003C4FC 36004396 */  lhu        $v1, 0x36($s2)
    /* 2CD00 8003C500 F8000825 */  addiu      $t0, $t0, %lo(D_1F8000F8)
    /* 2CD04 8003C504 040043A4 */  sh         $v1, 0x4($v0)
    /* 2CD08 8003C508 00000C8D */  lw         $t4, 0x0($t0)
    /* 2CD0C 8003C50C 04000D8D */  lw         $t5, 0x4($t0)
    /* 2CD10 8003C510 0000CC48 */  ctc2       $t4, $0 /* handwritten instruction */
    /* 2CD14 8003C514 0008CD48 */  ctc2       $t5, $1 /* handwritten instruction */
    /* 2CD18 8003C518 08000C8D */  lw         $t4, 0x8($t0)
    /* 2CD1C 8003C51C 0C000D8D */  lw         $t5, 0xC($t0)
    /* 2CD20 8003C520 10000E8D */  lw         $t6, 0x10($t0)
    /* 2CD24 8003C524 0010CC48 */  ctc2       $t4, $2 /* handwritten instruction */
    /* 2CD28 8003C528 0018CD48 */  ctc2       $t5, $3 /* handwritten instruction */
    /* 2CD2C 8003C52C 0020CE48 */  ctc2       $t6, $4 /* handwritten instruction */
    /* 2CD30 8003C530 000040C8 */  lwc2       $0, 0x0($v0)
    /* 2CD34 8003C534 040041C8 */  lwc2       $1, 0x4($v0)
    /* 2CD38 8003C538 00000000 */  nop
    /* 2CD3C 8003C53C 00000000 */  nop
    /* 2CD40 8003C540 1260484A */  mvmva      1, 0, 0, 3, 0
    /* 2CD44 8003C544 801F083C */  lui        $t0, %hi(D_1F800054)
    /* 2CD48 8003C548 54000825 */  addiu      $t0, $t0, %lo(D_1F800054)
    /* 2CD4C 8003C54C 000019E9 */  swc2       $25, 0x0($t0)
    /* 2CD50 8003C550 04001AE9 */  swc2       $26, 0x4($t0) /* handwritten instruction */
    /* 2CD54 8003C554 08001BE9 */  swc2       $27, 0x8($t0) /* handwritten instruction */
    /* 2CD58 8003C558 801F043C */  lui        $a0, %hi(D_1F8000D0)
    /* 2CD5C 8003C55C D0008424 */  addiu      $a0, $a0, %lo(D_1F8000D0)
    /* 2CD60 8003C560 1400028E */  lw         $v0, 0x14($s0)
    /* 2CD64 8003C564 3C00838C */  lw         $v1, 0x3C($a0)
    /* 2CD68 8003C568 00000000 */  nop
    /* 2CD6C 8003C56C 21104300 */  addu       $v0, $v0, $v1
    /* 2CD70 8003C570 140002AE */  sw         $v0, 0x14($s0)
    /* 2CD74 8003C574 1800028E */  lw         $v0, 0x18($s0)
    /* 2CD78 8003C578 4000858C */  lw         $a1, 0x40($a0)
    /* 2CD7C 8003C57C 1C00038E */  lw         $v1, 0x1C($s0)
    /* 2CD80 8003C580 4400848C */  lw         $a0, 0x44($a0)
    /* 2CD84 8003C584 21104500 */  addu       $v0, $v0, $a1
    /* 2CD88 8003C588 21186400 */  addu       $v1, $v1, $a0
    /* 2CD8C 8003C58C 180002AE */  sw         $v0, 0x18($s0)
    /* 2CD90 8003C590 1C0003AE */  sw         $v1, 0x1C($s0)
    /* 2CD94 8003C594 00000C8E */  lw         $t4, 0x0($s0)
    /* 2CD98 8003C598 04000D8E */  lw         $t5, 0x4($s0)
    /* 2CD9C 8003C59C 0000CC48 */  ctc2       $t4, $0 /* handwritten instruction */
    /* 2CDA0 8003C5A0 0008CD48 */  ctc2       $t5, $1 /* handwritten instruction */
    /* 2CDA4 8003C5A4 08000C8E */  lw         $t4, 0x8($s0)
    /* 2CDA8 8003C5A8 0C000D8E */  lw         $t5, 0xC($s0)
    /* 2CDAC 8003C5AC 10000E8E */  lw         $t6, 0x10($s0)
    /* 2CDB0 8003C5B0 0010CC48 */  ctc2       $t4, $2 /* handwritten instruction */
    /* 2CDB4 8003C5B4 0018CD48 */  ctc2       $t5, $3 /* handwritten instruction */
    /* 2CDB8 8003C5B8 0020CE48 */  ctc2       $t6, $4 /* handwritten instruction */
    /* 2CDBC 8003C5BC 14000C8E */  lw         $t4, 0x14($s0)
    /* 2CDC0 8003C5C0 18000D8E */  lw         $t5, 0x18($s0)
    /* 2CDC4 8003C5C4 0028CC48 */  ctc2       $t4, $5 /* handwritten instruction */
    /* 2CDC8 8003C5C8 1C000E8E */  lw         $t6, 0x1C($s0)
    /* 2CDCC 8003C5CC 0030CD48 */  ctc2       $t5, $6 /* handwritten instruction */
    /* 2CDD0 8003C5D0 0038CE48 */  ctc2       $t6, $7 /* handwritten instruction */
    /* 2CDD4 8003C5D4 21204002 */  addu       $a0, $s2, $zero
    /* 2CDD8 8003C5D8 3DF2000C */  jal        func_8003C8F4
    /* 2CDDC 8003C5DC 21282002 */   addu      $a1, $s1, $zero
  .L8003C5E0:
    /* 2CDE0 8003C5E0 1C00BF8F */  lw         $ra, 0x1C($sp)
    /* 2CDE4 8003C5E4 1800B28F */  lw         $s2, 0x18($sp)
    /* 2CDE8 8003C5E8 1400B18F */  lw         $s1, 0x14($sp)
    /* 2CDEC 8003C5EC 1000B08F */  lw         $s0, 0x10($sp)
    /* 2CDF0 8003C5F0 0800E003 */  jr         $ra
    /* 2CDF4 8003C5F4 2000BD27 */   addiu     $sp, $sp, 0x20
endlabel func_8003C464
