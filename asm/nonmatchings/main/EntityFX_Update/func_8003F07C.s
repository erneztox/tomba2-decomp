/* Handwritten function */
nonmatching func_8003F07C, 0xF8

glabel func_8003F07C
    /* 2F87C 8003F07C D8FFBD27 */  addiu      $sp, $sp, -0x28
    /* 2F880 8003F080 1800B2AF */  sw         $s2, 0x18($sp)
    /* 2F884 8003F084 21908000 */  addu       $s2, $a0, $zero
    /* 2F888 8003F088 2400BFAF */  sw         $ra, 0x24($sp)
    /* 2F88C 8003F08C 2000B4AF */  sw         $s4, 0x20($sp)
    /* 2F890 8003F090 1C00B3AF */  sw         $s3, 0x1C($sp)
    /* 2F894 8003F094 1400B1AF */  sw         $s1, 0x14($sp)
    /* 2F898 8003F098 1000B0AF */  sw         $s0, 0x10($sp)
    /* 2F89C 8003F09C 08004292 */  lbu        $v0, 0x8($s2)
    /* 2F8A0 8003F0A0 00000000 */  nop
    /* 2F8A4 8003F0A4 2B004010 */  beqz       $v0, .L8003F154
    /* 2F8A8 8003F0A8 21A0A000 */   addu      $s4, $a1, $zero
    /* 2F8AC 8003F0AC 801F033C */  lui        $v1, %hi(D_1F8000F8)
    /* 2F8B0 8003F0B0 F8006324 */  addiu      $v1, $v1, %lo(D_1F8000F8)
    /* 2F8B4 8003F0B4 00006C8C */  lw         $t4, 0x0($v1)
    /* 2F8B8 8003F0B8 04006D8C */  lw         $t5, 0x4($v1)
    /* 2F8BC 8003F0BC 0000CC48 */  ctc2       $t4, $0 /* handwritten instruction */
    /* 2F8C0 8003F0C0 0008CD48 */  ctc2       $t5, $1 /* handwritten instruction */
    /* 2F8C4 8003F0C4 08006C8C */  lw         $t4, 0x8($v1)
    /* 2F8C8 8003F0C8 0C006D8C */  lw         $t5, 0xC($v1)
    /* 2F8CC 8003F0CC 10006E8C */  lw         $t6, 0x10($v1)
    /* 2F8D0 8003F0D0 0010CC48 */  ctc2       $t4, $2 /* handwritten instruction */
    /* 2F8D4 8003F0D4 0018CD48 */  ctc2       $t5, $3 /* handwritten instruction */
    /* 2F8D8 8003F0D8 0020CE48 */  ctc2       $t6, $4 /* handwritten instruction */
    /* 2F8DC 8003F0DC 801F033C */  lui        $v1, %hi(D_1F8000F8)
    /* 2F8E0 8003F0E0 F8006324 */  addiu      $v1, $v1, %lo(D_1F8000F8)
    /* 2F8E4 8003F0E4 14006C8C */  lw         $t4, 0x14($v1)
    /* 2F8E8 8003F0E8 18006D8C */  lw         $t5, 0x18($v1)
    /* 2F8EC 8003F0EC 0028CC48 */  ctc2       $t4, $5 /* handwritten instruction */
    /* 2F8F0 8003F0F0 1C006E8C */  lw         $t6, 0x1C($v1)
    /* 2F8F4 8003F0F4 0030CD48 */  ctc2       $t5, $6 /* handwritten instruction */
    /* 2F8F8 8003F0F8 0038CE48 */  ctc2       $t6, $7 /* handwritten instruction */
    /* 2F8FC 8003F0FC 09004292 */  lbu        $v0, 0x9($s2)
    /* 2F900 8003F100 00000000 */  nop
    /* 2F904 8003F104 13004010 */  beqz       $v0, .L8003F154
    /* 2F908 8003F108 21800000 */   addu      $s0, $zero, $zero
    /* 2F90C 8003F10C 0F80133C */  lui        $s3, %hi(D_800ED8C8)
    /* 2F910 8003F110 21884002 */  addu       $s1, $s2, $zero
  .L8003F114:
    /* 2F914 8003F114 08004292 */  lbu        $v0, 0x8($s2)
    /* 2F918 8003F118 00000000 */  nop
    /* 2F91C 8003F11C 2A100202 */  slt        $v0, $s0, $v0
    /* 2F920 8003F120 0C004010 */  beqz       $v0, .L8003F154
    /* 2F924 8003F124 00000000 */   nop
    /* 2F928 8003F128 C000228E */  lw         $v0, 0xC0($s1)
    /* 2F92C 8003F12C 04003126 */  addiu      $s1, $s1, 0x4
    /* 2F930 8003F130 C8D8658E */  lw         $a1, %lo(D_800ED8C8)($s3)
    /* 2F934 8003F134 4000448C */  lw         $a0, 0x40($v0)
    /* 2F938 8003F138 A6FD000C */  jal        func_8003F698
    /* 2F93C 8003F13C 21308002 */   addu      $a2, $s4, $zero
    /* 2F940 8003F140 09004292 */  lbu        $v0, 0x9($s2)
    /* 2F944 8003F144 01001026 */  addiu      $s0, $s0, 0x1
    /* 2F948 8003F148 2A100202 */  slt        $v0, $s0, $v0
    /* 2F94C 8003F14C F1FF4014 */  bnez       $v0, .L8003F114
    /* 2F950 8003F150 00000000 */   nop
  .L8003F154:
    /* 2F954 8003F154 2400BF8F */  lw         $ra, 0x24($sp)
    /* 2F958 8003F158 2000B48F */  lw         $s4, 0x20($sp)
    /* 2F95C 8003F15C 1C00B38F */  lw         $s3, 0x1C($sp)
    /* 2F960 8003F160 1800B28F */  lw         $s2, 0x18($sp)
    /* 2F964 8003F164 1400B18F */  lw         $s1, 0x14($sp)
    /* 2F968 8003F168 1000B08F */  lw         $s0, 0x10($sp)
    /* 2F96C 8003F16C 0800E003 */  jr         $ra
    /* 2F970 8003F170 2800BD27 */   addiu     $sp, $sp, 0x28
endlabel func_8003F07C
