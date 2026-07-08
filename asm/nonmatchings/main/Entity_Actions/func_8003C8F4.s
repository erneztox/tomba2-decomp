/* Handwritten function */
nonmatching func_8003C8F4, 0x3B0

glabel func_8003C8F4
    /* 2D0F4 8003C8F4 A0FFBD27 */  addiu      $sp, $sp, -0x60
    /* 2D0F8 8003C8F8 4400B1AF */  sw         $s1, 0x44($sp)
    /* 2D0FC 8003C8FC 21888000 */  addu       $s1, $a0, $zero
    /* 2D100 8003C900 5800B6AF */  sw         $s6, 0x58($sp)
    /* 2D104 8003C904 21B0A000 */  addu       $s6, $a1, $zero
    /* 2D108 8003C908 5C00BFAF */  sw         $ra, 0x5C($sp)
    /* 2D10C 8003C90C 5400B5AF */  sw         $s5, 0x54($sp)
    /* 2D110 8003C910 5000B4AF */  sw         $s4, 0x50($sp)
    /* 2D114 8003C914 4C00B3AF */  sw         $s3, 0x4C($sp)
    /* 2D118 8003C918 4800B2AF */  sw         $s2, 0x48($sp)
    /* 2D11C 8003C91C 4000B0AF */  sw         $s0, 0x40($sp)
    /* 2D120 8003C920 3800228E */  lw         $v0, 0x38($s1)
    /* 2D124 8003C924 00000000 */  nop
    /* 2D128 8003C928 D4004010 */  beqz       $v0, .L8003CC7C
    /* 2D12C 8003C92C 801F103C */   lui       $s0, (0x1F800018 >> 16)
    /* 2D130 8003C930 3000B227 */  addiu      $s2, $sp, 0x30
    /* 2D134 8003C934 FFFF1524 */  addiu      $s5, $zero, -0x1
    /* 2D138 8003C938 00004284 */  lh         $v0, 0x0($v0)
    /* 2D13C 8003C93C 3C00238E */  lw         $v1, 0x3C($s1)
    /* 2D140 8003C940 80100200 */  sll        $v0, $v0, 2
    /* 2D144 8003C944 21186200 */  addu       $v1, $v1, $v0
    /* 2D148 8003C948 02006484 */  lh         $a0, 0x2($v1)
    /* 2D14C 8003C94C 3C00228E */  lw         $v0, 0x3C($s1)
    /* 2D150 8003C950 00007484 */  lh         $s4, 0x0($v1)
    /* 2D154 8003C954 21984400 */  addu       $s3, $v0, $a0
  .L8003C958:
    /* 2D158 8003C958 1000A427 */  addiu      $a0, $sp, 0x10
    /* 2D15C 8003C95C 21280000 */  addu       $a1, $zero, $zero
    /* 2D160 8003C960 88EC000C */  jal        func_8003B220
    /* 2D164 8003C964 21306002 */   addu      $a2, $s3, $zero
    /* 2D168 8003C968 1000A227 */  addiu      $v0, $sp, 0x10
    /* 2D16C 8003C96C 000040C8 */  lwc2       $0, 0x0($v0)
    /* 2D170 8003C970 040041C8 */  lwc2       $1, 0x4($v0)
    /* 2D174 8003C974 080042C8 */  lwc2       $2, 0x8($v0)
    /* 2D178 8003C978 0C0043C8 */  lwc2       $3, 0xC($v0)
    /* 2D17C 8003C97C 100044C8 */  lwc2       $4, 0x10($v0)
    /* 2D180 8003C980 140045C8 */  lwc2       $5, 0x14($v0)
    /* 2D184 8003C984 00000000 */  nop
    /* 2D188 8003C988 00000000 */  nop
    /* 2D18C 8003C98C 3000284A */  rtpt
    /* 2D190 8003C990 00F84C48 */  cfc2       $t4, $31 /* handwritten instruction */
    /* 2D194 8003C994 00000000 */  nop
    /* 2D198 8003C998 00004CAE */  sw         $t4, 0x0($s2)
    /* 2D19C 8003C99C 0000428E */  lw         $v0, 0x0($s2)
    /* 2D1A0 8003C9A0 00000000 */  nop
    /* 2D1A4 8003C9A4 15004004 */  bltz       $v0, .L8003C9FC
    /* 2D1A8 8003C9A8 00000000 */   nop
    /* 2D1AC 8003C9AC 08000CEA */  swc2       $12, (0x1F800008 & 0xFFFF)($s0)
    /* 2D1B0 8003C9B0 10000DEA */  swc2       $13, (0x1F800010 & 0xFFFF)($s0)
    /* 2D1B4 8003C9B4 18000EEA */  swc2       $14, (0x1F800018 & 0xFFFF)($s0)
    /* 2D1B8 8003C9B8 00000000 */  nop
    /* 2D1BC 8003C9BC 00000000 */  nop
    /* 2D1C0 8003C9C0 0600404B */  nclip
    /* 2D1C4 8003C9C4 000058EA */  swc2       $24, 0x0($s2)
    /* 2D1C8 8003C9C8 2800A227 */  addiu      $v0, $sp, 0x28
    /* 2D1CC 8003C9CC 000040C8 */  lwc2       $0, 0x0($v0)
    /* 2D1D0 8003C9D0 040041C8 */  lwc2       $1, 0x4($v0)
    /* 2D1D4 8003C9D4 00000000 */  nop
    /* 2D1D8 8003C9D8 00000000 */  nop
    /* 2D1DC 8003C9DC 0100184A */  rtps
    /* 2D1E0 8003C9E0 00F84C48 */  cfc2       $t4, $31 /* handwritten instruction */
    /* 2D1E4 8003C9E4 00000000 */  nop
    /* 2D1E8 8003C9E8 00004CAE */  sw         $t4, 0x0($s2)
    /* 2D1EC 8003C9EC 0000428E */  lw         $v0, 0x0($s2)
    /* 2D1F0 8003C9F0 00000000 */  nop
    /* 2D1F4 8003C9F4 03004104 */  bgez       $v0, .L8003CA04
    /* 2D1F8 8003C9F8 20000226 */   addiu     $v0, $s0, %lo(D_1F800020)
  .L8003C9FC:
    /* 2D1FC 8003C9FC 8AF20008 */  j          .L8003CA28
    /* 2D200 8003CA00 3800B5AF */   sw        $s5, 0x38($sp)
  .L8003CA04:
    /* 2D204 8003CA04 00004EE8 */  swc2       $14, 0x0($v0)
    /* 2D208 8003CA08 00000000 */  nop
    /* 2D20C 8003CA0C 00000000 */  nop
    /* 2D210 8003CA10 2E00684B */  avsz4
    /* 2D214 8003CA14 3400A227 */  addiu      $v0, $sp, 0x34
    /* 2D218 8003CA18 000047E8 */  swc2       $7, 0x0($v0)
    /* 2D21C 8003CA1C 3400A28F */  lw         $v0, 0x34($sp)
    /* 2D220 8003CA20 00000000 */  nop
    /* 2D224 8003CA24 3800A2AF */  sw         $v0, 0x38($sp)
  .L8003CA28:
    /* 2D228 8003CA28 08000296 */  lhu        $v0, (0x1F800008 & 0xFFFF)($s0)
    /* 2D22C 8003CA2C 00000000 */  nop
    /* 2D230 8003CA30 4001422C */  sltiu      $v0, $v0, 0x140
    /* 2D234 8003CA34 10004014 */  bnez       $v0, .L8003CA78
    /* 2D238 8003CA38 00000000 */   nop
    /* 2D23C 8003CA3C 10000296 */  lhu        $v0, (0x1F800010 & 0xFFFF)($s0)
    /* 2D240 8003CA40 00000000 */  nop
    /* 2D244 8003CA44 4001422C */  sltiu      $v0, $v0, 0x140
    /* 2D248 8003CA48 0B004014 */  bnez       $v0, .L8003CA78
    /* 2D24C 8003CA4C 00000000 */   nop
    /* 2D250 8003CA50 18000296 */  lhu        $v0, (0x1F800018 & 0xFFFF)($s0)
    /* 2D254 8003CA54 00000000 */  nop
    /* 2D258 8003CA58 4001422C */  sltiu      $v0, $v0, 0x140
    /* 2D25C 8003CA5C 06004014 */  bnez       $v0, .L8003CA78
    /* 2D260 8003CA60 00000000 */   nop
    /* 2D264 8003CA64 20000296 */  lhu        $v0, (0x1F800020 & 0xFFFF)($s0)
    /* 2D268 8003CA68 00000000 */  nop
    /* 2D26C 8003CA6C 4001422C */  sltiu      $v0, $v0, 0x140
    /* 2D270 8003CA70 7F004010 */  beqz       $v0, .L8003CC70
    /* 2D274 8003CA74 00000000 */   nop
  .L8003CA78:
    /* 2D278 8003CA78 0A000296 */  lhu        $v0, (0x1F80000A & 0xFFFF)($s0)
    /* 2D27C 8003CA7C 00000000 */  nop
    /* 2D280 8003CA80 F000422C */  sltiu      $v0, $v0, 0xF0
    /* 2D284 8003CA84 10004014 */  bnez       $v0, .L8003CAC8
    /* 2D288 8003CA88 00000000 */   nop
    /* 2D28C 8003CA8C 12000296 */  lhu        $v0, (0x1F800012 & 0xFFFF)($s0)
    /* 2D290 8003CA90 00000000 */  nop
    /* 2D294 8003CA94 F000422C */  sltiu      $v0, $v0, 0xF0
    /* 2D298 8003CA98 0B004014 */  bnez       $v0, .L8003CAC8
    /* 2D29C 8003CA9C 00000000 */   nop
    /* 2D2A0 8003CAA0 1A000296 */  lhu        $v0, (0x1F80001A & 0xFFFF)($s0)
    /* 2D2A4 8003CAA4 00000000 */  nop
    /* 2D2A8 8003CAA8 F000422C */  sltiu      $v0, $v0, 0xF0
    /* 2D2AC 8003CAAC 06004014 */  bnez       $v0, .L8003CAC8
    /* 2D2B0 8003CAB0 00000000 */   nop
    /* 2D2B4 8003CAB4 22000296 */  lhu        $v0, (0x1F800022 & 0xFFFF)($s0)
    /* 2D2B8 8003CAB8 00000000 */  nop
    /* 2D2BC 8003CABC F000422C */  sltiu      $v0, $v0, 0xF0
    /* 2D2C0 8003CAC0 6B004010 */  beqz       $v0, .L8003CC70
    /* 2D2C4 8003CAC4 00000000 */   nop
  .L8003CAC8:
    /* 2D2C8 8003CAC8 08002282 */  lb         $v0, 0x8($s1)
    /* 2D2CC 8003CACC 3800A38F */  lw         $v1, 0x38($sp)
    /* 2D2D0 8003CAD0 00000000 */  nop
    /* 2D2D4 8003CAD4 21186200 */  addu       $v1, $v1, $v0
    /* 2D2D8 8003CAD8 83120300 */  sra        $v0, $v1, 10
    /* 2D2DC 8003CADC 07184300 */  srav       $v1, $v1, $v0
    /* 2D2E0 8003CAE0 40120200 */  sll        $v0, $v0, 9
    /* 2D2E4 8003CAE4 21186200 */  addu       $v1, $v1, $v0
    /* 2D2E8 8003CAE8 3800A3AF */  sw         $v1, 0x38($sp)
    /* 2D2EC 8003CAEC FCFF6324 */  addiu      $v1, $v1, -0x4
    /* 2D2F0 8003CAF0 FC07632C */  sltiu      $v1, $v1, 0x7FC
    /* 2D2F4 8003CAF4 02006014 */  bnez       $v1, .L8003CB00
    /* 2D2F8 8003CAF8 00000000 */   nop
    /* 2D2FC 8003CAFC 3800B5AF */  sw         $s5, 0x38($sp)
  .L8003CB00:
    /* 2D300 8003CB00 3800A28F */  lw         $v0, 0x38($sp)
    /* 2D304 8003CB04 00000000 */  nop
    /* 2D308 8003CB08 59004004 */  bltz       $v0, .L8003CC70
    /* 2D30C 8003CB0C 21200002 */   addu      $a0, $s0, $zero
    /* 2D310 8003CB10 21286002 */  addu       $a1, $s3, $zero
    /* 2D314 8003CB14 15EC000C */  jal        func_8003B054
    /* 2D318 8003CB18 2130C002 */   addu      $a2, $s6, $zero
    /* 2D31C 8003CB1C 5C002296 */  lhu        $v0, 0x5C($s1)
    /* 2D320 8003CB20 00000000 */  nop
    /* 2D324 8003CB24 02004010 */  beqz       $v0, .L8003CB30
    /* 2D328 8003CB28 00000000 */   nop
    /* 2D32C 8003CB2C 0E0002A6 */  sh         $v0, (0x1F80000E & 0xFFFF)($s0)
  .L8003CB30:
    /* 2D330 8003CB30 0D002392 */  lbu        $v1, 0xD($s1)
    /* 2D334 8003CB34 00000000 */  nop
    /* 2D338 8003CB38 2100622C */  sltiu      $v0, $v1, 0x21
    /* 2D33C 8003CB3C 22004010 */  beqz       $v0, .L8003CBC8
    /* 2D340 8003CB40 0180023C */   lui       $v0, %hi(jtbl_80014E40)
    /* 2D344 8003CB44 404E4224 */  addiu      $v0, $v0, %lo(jtbl_80014E40)
    /* 2D348 8003CB48 80180300 */  sll        $v1, $v1, 2
    /* 2D34C 8003CB4C 21186200 */  addu       $v1, $v1, $v0
    /* 2D350 8003CB50 0000628C */  lw         $v0, 0x0($v1)
    /* 2D354 8003CB54 00000000 */  nop
    /* 2D358 8003CB58 08004000 */  jr         $v0
    /* 2D35C 8003CB5C 00000000 */   nop
    /* 2D360 8003CB60 2D000224 */  addiu      $v0, $zero, 0x2D
    /* 2D364 8003CB64 F2F20008 */  j          .L8003CBC8
    /* 2D368 8003CB68 070002A2 */   sb        $v0, 0x7($s0)
    /* 2D36C 8003CB6C 2F000224 */  addiu      $v0, $zero, 0x2F
    /* 2D370 8003CB70 F2F20008 */  j          .L8003CBC8
    /* 2D374 8003CB74 070002A2 */   sb        $v0, 0x7($s0)
    /* 2D378 8003CB78 1800228E */  lw         $v0, 0x18($s1)
    /* 2D37C 8003CB7C 00000000 */  nop
    /* 2D380 8003CB80 040002AE */  sw         $v0, 0x4($s0)
    /* 2D384 8003CB84 2C000224 */  addiu      $v0, $zero, 0x2C
    /* 2D388 8003CB88 F2F20008 */  j          .L8003CBC8
    /* 2D38C 8003CB8C 070002A2 */   sb        $v0, 0x7($s0)
    /* 2D390 8003CB90 1800228E */  lw         $v0, 0x18($s1)
    /* 2D394 8003CB94 00000000 */  nop
    /* 2D398 8003CB98 040002AE */  sw         $v0, 0x4($s0)
    /* 2D39C 8003CB9C 2E000224 */  addiu      $v0, $zero, 0x2E
    /* 2D3A0 8003CBA0 F2F20008 */  j          .L8003CBC8
    /* 2D3A4 8003CBA4 070002A2 */   sb        $v0, 0x7($s0)
    /* 2D3A8 8003CBA8 2D000224 */  addiu      $v0, $zero, 0x2D
    /* 2D3AC 8003CBAC 070002A2 */  sb         $v0, 0x7($s0)
    /* 2D3B0 8003CBB0 18002292 */  lbu        $v0, 0x18($s1)
    /* 2D3B4 8003CBB4 00000000 */  nop
    /* 2D3B8 8003CBB8 02004014 */  bnez       $v0, .L8003CBC4
    /* 2D3BC 8003CBBC 7B400224 */   addiu     $v0, $zero, 0x407B
    /* 2D3C0 8003CBC0 3B400224 */  addiu      $v0, $zero, 0x403B
  .L8003CBC4:
    /* 2D3C4 8003CBC4 0E0002A6 */  sh         $v0, 0xE($s0)
  .L8003CBC8:
    /* 2D3C8 8003CBC8 0C80063C */  lui        $a2, %hi(D_800BF544)
    /* 2D3CC 8003CBCC 44F5C48C */  lw         $a0, %lo(D_800BF544)($a2)
    /* 2D3D0 8003CBD0 0F80033C */  lui        $v1, %hi(D_800ED8C8)
    /* 2D3D4 8003CBD4 3800A28F */  lw         $v0, 0x38($sp)
    /* 2D3D8 8003CBD8 C8D8658C */  lw         $a1, %lo(D_800ED8C8)($v1)
    /* 2D3DC 8003CBDC 80100200 */  sll        $v0, $v0, 2
    /* 2D3E0 8003CBE0 2128A200 */  addu       $a1, $a1, $v0
    /* 2D3E4 8003CBE4 0000A28C */  lw         $v0, 0x0($a1)
    /* 2D3E8 8003CBE8 0009033C */  lui        $v1, (0x9000000 >> 16)
    /* 2D3EC 8003CBEC 25104300 */  or         $v0, $v0, $v1
    /* 2D3F0 8003CBF0 000082AC */  sw         $v0, 0x0($a0)
    /* 2D3F4 8003CBF4 0000A4AC */  sw         $a0, 0x0($a1)
    /* 2D3F8 8003CBF8 04008424 */  addiu      $a0, $a0, 0x4
    /* 2D3FC 8003CBFC 0400028E */  lw         $v0, (0x1F800004 & 0xFFFF)($s0)
    /* 2D400 8003CC00 00000000 */  nop
    /* 2D404 8003CC04 000082AC */  sw         $v0, 0x0($a0)
    /* 2D408 8003CC08 0800028E */  lw         $v0, (0x1F800008 & 0xFFFF)($s0)
    /* 2D40C 8003CC0C 04008424 */  addiu      $a0, $a0, 0x4
    /* 2D410 8003CC10 000082AC */  sw         $v0, 0x0($a0)
    /* 2D414 8003CC14 0C00028E */  lw         $v0, (0x1F80000C & 0xFFFF)($s0)
    /* 2D418 8003CC18 04008424 */  addiu      $a0, $a0, 0x4
    /* 2D41C 8003CC1C 000082AC */  sw         $v0, 0x0($a0)
    /* 2D420 8003CC20 1000028E */  lw         $v0, (0x1F800010 & 0xFFFF)($s0)
    /* 2D424 8003CC24 04008424 */  addiu      $a0, $a0, 0x4
    /* 2D428 8003CC28 000082AC */  sw         $v0, 0x0($a0)
    /* 2D42C 8003CC2C 1400028E */  lw         $v0, (0x1F800014 & 0xFFFF)($s0)
    /* 2D430 8003CC30 04008424 */  addiu      $a0, $a0, 0x4
    /* 2D434 8003CC34 000082AC */  sw         $v0, 0x0($a0)
    /* 2D438 8003CC38 1800028E */  lw         $v0, (0x1F800018 & 0xFFFF)($s0)
    /* 2D43C 8003CC3C 04008424 */  addiu      $a0, $a0, 0x4
    /* 2D440 8003CC40 000082AC */  sw         $v0, 0x0($a0)
    /* 2D444 8003CC44 1C00028E */  lw         $v0, (0x1F80001C & 0xFFFF)($s0)
    /* 2D448 8003CC48 04008424 */  addiu      $a0, $a0, 0x4
    /* 2D44C 8003CC4C 000082AC */  sw         $v0, 0x0($a0)
    /* 2D450 8003CC50 2000028E */  lw         $v0, (0x1F800020 & 0xFFFF)($s0)
    /* 2D454 8003CC54 04008424 */  addiu      $a0, $a0, 0x4
    /* 2D458 8003CC58 000082AC */  sw         $v0, 0x0($a0)
    /* 2D45C 8003CC5C 2400028E */  lw         $v0, (0x1F800024 & 0xFFFF)($s0)
    /* 2D460 8003CC60 04008424 */  addiu      $a0, $a0, 0x4
    /* 2D464 8003CC64 000082AC */  sw         $v0, 0x0($a0)
    /* 2D468 8003CC68 04008424 */  addiu      $a0, $a0, 0x4
    /* 2D46C 8003CC6C 44F5C4AC */  sw         $a0, %lo(D_800BF544)($a2)
  .L8003CC70:
    /* 2D470 8003CC70 FFFF9426 */  addiu      $s4, $s4, -0x1
    /* 2D474 8003CC74 38FF8016 */  bnez       $s4, .L8003C958
    /* 2D478 8003CC78 10007326 */   addiu     $s3, $s3, 0x10
  .L8003CC7C:
    /* 2D47C 8003CC7C 5C00BF8F */  lw         $ra, 0x5C($sp)
    /* 2D480 8003CC80 5800B68F */  lw         $s6, 0x58($sp)
    /* 2D484 8003CC84 5400B58F */  lw         $s5, 0x54($sp)
    /* 2D488 8003CC88 5000B48F */  lw         $s4, 0x50($sp)
    /* 2D48C 8003CC8C 4C00B38F */  lw         $s3, 0x4C($sp)
    /* 2D490 8003CC90 4800B28F */  lw         $s2, 0x48($sp)
    /* 2D494 8003CC94 4400B18F */  lw         $s1, 0x44($sp)
    /* 2D498 8003CC98 4000B08F */  lw         $s0, 0x40($sp)
    /* 2D49C 8003CC9C 0800E003 */  jr         $ra
    /* 2D4A0 8003CCA0 6000BD27 */   addiu     $sp, $sp, 0x60
endlabel func_8003C8F4
