/* Handwritten function */
nonmatching func_8003F174, 0xF0

glabel func_8003F174
    /* 2F974 8003F174 B0FFBD27 */  addiu      $sp, $sp, -0x50
    /* 2F978 8003F178 4000B2AF */  sw         $s2, 0x40($sp)
    /* 2F97C 8003F17C 21908000 */  addu       $s2, $a0, $zero
    /* 2F980 8003F180 4C00BFAF */  sw         $ra, 0x4C($sp)
    /* 2F984 8003F184 4800B4AF */  sw         $s4, 0x48($sp)
    /* 2F988 8003F188 4400B3AF */  sw         $s3, 0x44($sp)
    /* 2F98C 8003F18C 3C00B1AF */  sw         $s1, 0x3C($sp)
    /* 2F990 8003F190 3800B0AF */  sw         $s0, 0x38($sp)
    /* 2F994 8003F194 08004292 */  lbu        $v0, 0x8($s2)
    /* 2F998 8003F198 00000000 */  nop
    /* 2F99C 8003F19C 29004010 */  beqz       $v0, .L8003F244
    /* 2F9A0 8003F1A0 21A0A000 */   addu      $s4, $a1, $zero
    /* 2F9A4 8003F1A4 09004292 */  lbu        $v0, 0x9($s2)
    /* 2F9A8 8003F1A8 00000000 */  nop
    /* 2F9AC 8003F1AC 25004010 */  beqz       $v0, .L8003F244
    /* 2F9B0 8003F1B0 21800000 */   addu      $s0, $zero, $zero
    /* 2F9B4 8003F1B4 0F80133C */  lui        $s3, %hi(D_800ED8C8)
    /* 2F9B8 8003F1B8 21884002 */  addu       $s1, $s2, $zero
  .L8003F1BC:
    /* 2F9BC 8003F1BC 08004292 */  lbu        $v0, 0x8($s2)
    /* 2F9C0 8003F1C0 00000000 */  nop
    /* 2F9C4 8003F1C4 2A100202 */  slt        $v0, $s0, $v0
    /* 2F9C8 8003F1C8 1E004010 */  beqz       $v0, .L8003F244
    /* 2F9CC 8003F1CC 00000000 */   nop
    /* 2F9D0 8003F1D0 C000238E */  lw         $v1, 0xC0($s1)
    /* 2F9D4 8003F1D4 00000000 */  nop
    /* 2F9D8 8003F1D8 18006224 */  addiu      $v0, $v1, 0x18
    /* 2F9DC 8003F1DC 00004C8C */  lw         $t4, 0x0($v0)
    /* 2F9E0 8003F1E0 04004D8C */  lw         $t5, 0x4($v0)
    /* 2F9E4 8003F1E4 0000CC48 */  ctc2       $t4, $0 /* handwritten instruction */
    /* 2F9E8 8003F1E8 0008CD48 */  ctc2       $t5, $1 /* handwritten instruction */
    /* 2F9EC 8003F1EC 08004C8C */  lw         $t4, 0x8($v0)
    /* 2F9F0 8003F1F0 0C004D8C */  lw         $t5, 0xC($v0)
    /* 2F9F4 8003F1F4 10004E8C */  lw         $t6, 0x10($v0)
    /* 2F9F8 8003F1F8 0010CC48 */  ctc2       $t4, $2 /* handwritten instruction */
    /* 2F9FC 8003F1FC 0018CD48 */  ctc2       $t5, $3 /* handwritten instruction */
    /* 2FA00 8003F200 0020CE48 */  ctc2       $t6, $4 /* handwritten instruction */
    /* 2FA04 8003F204 14004C8C */  lw         $t4, 0x14($v0)
    /* 2FA08 8003F208 18004D8C */  lw         $t5, 0x18($v0)
    /* 2FA0C 8003F20C 0028CC48 */  ctc2       $t4, $5 /* handwritten instruction */
    /* 2FA10 8003F210 1C004E8C */  lw         $t6, 0x1C($v0)
    /* 2FA14 8003F214 0030CD48 */  ctc2       $t5, $6 /* handwritten instruction */
    /* 2FA18 8003F218 0038CE48 */  ctc2       $t6, $7 /* handwritten instruction */
    /* 2FA1C 8003F21C 04003126 */  addiu      $s1, $s1, 0x4
    /* 2FA20 8003F220 4000648C */  lw         $a0, 0x40($v1)
    /* 2FA24 8003F224 C8D8658E */  lw         $a1, %lo(D_800ED8C8)($s3)
    /* 2FA28 8003F228 A6FD000C */  jal        func_8003F698
    /* 2FA2C 8003F22C 21308002 */   addu      $a2, $s4, $zero
    /* 2FA30 8003F230 09004292 */  lbu        $v0, 0x9($s2)
    /* 2FA34 8003F234 01001026 */  addiu      $s0, $s0, 0x1
    /* 2FA38 8003F238 2A100202 */  slt        $v0, $s0, $v0
    /* 2FA3C 8003F23C DFFF4014 */  bnez       $v0, .L8003F1BC
    /* 2FA40 8003F240 00000000 */   nop
  .L8003F244:
    /* 2FA44 8003F244 4C00BF8F */  lw         $ra, 0x4C($sp)
    /* 2FA48 8003F248 4800B48F */  lw         $s4, 0x48($sp)
    /* 2FA4C 8003F24C 4400B38F */  lw         $s3, 0x44($sp)
    /* 2FA50 8003F250 4000B28F */  lw         $s2, 0x40($sp)
    /* 2FA54 8003F254 3C00B18F */  lw         $s1, 0x3C($sp)
    /* 2FA58 8003F258 3800B08F */  lw         $s0, 0x38($sp)
    /* 2FA5C 8003F25C 0800E003 */  jr         $ra
    /* 2FA60 8003F260 5000BD27 */   addiu     $sp, $sp, 0x50
endlabel func_8003F174
