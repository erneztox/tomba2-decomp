nonmatching func_8007A12C, 0x19C

glabel func_8007A12C
    /* 6A92C 8007A12C 0F800A3C */  lui        $t2, %hi(D_800ED8D4)
    /* 6A930 8007A130 D4D8488D */  lw         $t0, %lo(D_800ED8D4)($t2)
    /* 6A934 8007A134 00000000 */  nop
    /* 6A938 8007A138 61000011 */  beqz       $t0, .L8007A2C0
    /* 6A93C 8007A13C 21488000 */   addu      $t1, $a0, $zero
    /* 6A940 8007A140 0F80033C */  lui        $v1, %hi(D_800ED8C5)
    /* 6A944 8007A144 C5D86290 */  lbu        $v0, %lo(D_800ED8C5)($v1)
    /* 6A948 8007A148 2400048D */  lw         $a0, 0x24($t0)
    /* 6A94C 8007A14C FFFF4224 */  addiu      $v0, $v0, -0x1
    /* 6A950 8007A150 C5D862A0 */  sb         $v0, %lo(D_800ED8C5)($v1)
    /* 6A954 8007A154 01000224 */  addiu      $v0, $zero, 0x1
    /* 6A958 8007A158 0B00E210 */  beq        $a3, $v0, .L8007A188
    /* 6A95C 8007A15C D4D844AD */   sw        $a0, %lo(D_800ED8D4)($t2)
    /* 6A960 8007A160 0200E228 */  slti       $v0, $a3, 0x2
    /* 6A964 8007A164 04004014 */  bnez       $v0, .L8007A178
    /* 6A968 8007A168 1080023C */   lui       $v0, %hi(g_InactiveEntitiesList)
    /* 6A96C 8007A16C 02000224 */  addiu      $v0, $zero, 0x2
    /* 6A970 8007A170 0A00E210 */  beq        $a3, $v0, .L8007A19C
    /* 6A974 8007A174 1080023C */   lui       $v0, %hi(g_InactiveEntitiesList)
  .L8007A178:
    /* 6A978 8007A178 68B14424 */  addiu      $a0, $v0, %lo(g_InactiveEntitiesList)
    /* 6A97C 8007A17C 0F80023C */  lui        $v0, %hi(D_800F23A8)
    /* 6A980 8007A180 6BE80108 */  j          .L8007A1AC
    /* 6A984 8007A184 A8234324 */   addiu     $v1, $v0, %lo(D_800F23A8)
  .L8007A188:
    /* 6A988 8007A188 0F80023C */  lui        $v0, %hi(g_ActiveEntitiesList)
    /* 6A98C 8007A18C 24264424 */  addiu      $a0, $v0, %lo(g_ActiveEntitiesList)
    /* 6A990 8007A190 0F80023C */  lui        $v0, %hi(D_800F239C)
    /* 6A994 8007A194 6BE80108 */  j          .L8007A1AC
    /* 6A998 8007A198 9C234324 */   addiu     $v1, $v0, %lo(D_800F239C)
  .L8007A19C:
    /* 6A99C 8007A19C 0F80023C */  lui        $v0, %hi(g_BackgroundEntitiesList)
    /* 6A9A0 8007A1A0 38274424 */  addiu      $a0, $v0, %lo(g_BackgroundEntitiesList)
    /* 6A9A4 8007A1A4 0F80023C */  lui        $v0, %hi(D_800F23A0)
    /* 6A9A8 8007A1A8 A0234324 */  addiu      $v1, $v0, %lo(D_800F23A0)
  .L8007A1AC:
    /* 6A9AC 8007A1AC 01000224 */  addiu      $v0, $zero, 0x1
    /* 6A9B0 8007A1B0 1800C210 */  beq        $a2, $v0, .L8007A214
    /* 6A9B4 8007A1B4 0200C228 */   slti      $v0, $a2, 0x2
    /* 6A9B8 8007A1B8 05004010 */  beqz       $v0, .L8007A1D0
    /* 6A9BC 8007A1BC 02000224 */   addiu     $v0, $zero, 0x2
    /* 6A9C0 8007A1C0 0900C010 */  beqz       $a2, .L8007A1E8
    /* 6A9C4 8007A1C4 21100001 */   addu      $v0, $t0, $zero
    /* 6A9C8 8007A1C8 ACE80108 */  j          .L8007A2B0
    /* 6A9CC 8007A1CC 02000324 */   addiu     $v1, $zero, 0x2
  .L8007A1D0:
    /* 6A9D0 8007A1D0 1D00C210 */  beq        $a2, $v0, .L8007A248
    /* 6A9D4 8007A1D4 03000224 */   addiu     $v0, $zero, 0x3
    /* 6A9D8 8007A1D8 2800C210 */  beq        $a2, $v0, .L8007A27C
    /* 6A9DC 8007A1DC 21100001 */   addu      $v0, $t0, $zero
    /* 6A9E0 8007A1E0 ACE80108 */  j          .L8007A2B0
    /* 6A9E4 8007A1E4 02000324 */   addiu     $v1, $zero, 0x2
  .L8007A1E8:
    /* 6A9E8 8007A1E8 2000228D */  lw         $v0, 0x20($t1)
    /* 6A9EC 8007A1EC 00000000 */  nop
    /* 6A9F0 8007A1F0 08004010 */  beqz       $v0, .L8007A214
    /* 6A9F4 8007A1F4 00000000 */   nop
    /* 6A9F8 8007A1F8 200002AD */  sw         $v0, 0x20($t0)
    /* 6A9FC 8007A1FC 240009AD */  sw         $t1, 0x24($t0)
    /* 6AA00 8007A200 2000228D */  lw         $v0, 0x20($t1)
    /* 6AA04 8007A204 00000000 */  nop
    /* 6AA08 8007A208 240048AC */  sw         $t0, 0x24($v0)
    /* 6AA0C 8007A20C AAE80108 */  j          .L8007A2A8
    /* 6AA10 8007A210 200028AD */   sw        $t0, 0x20($t1)
  .L8007A214:
    /* 6AA14 8007A214 200000AD */  sw         $zero, 0x20($t0)
    /* 6AA18 8007A218 0000828C */  lw         $v0, 0x0($a0)
    /* 6AA1C 8007A21C 00000000 */  nop
    /* 6AA20 8007A220 240002AD */  sw         $v0, 0x24($t0)
    /* 6AA24 8007A224 0000828C */  lw         $v0, 0x0($a0)
    /* 6AA28 8007A228 00000000 */  nop
    /* 6AA2C 8007A22C 03004014 */  bnez       $v0, .L8007A23C
    /* 6AA30 8007A230 00000000 */   nop
    /* 6AA34 8007A234 90E80108 */  j          .L8007A240
    /* 6AA38 8007A238 000068AC */   sw        $t0, 0x0($v1)
  .L8007A23C:
    /* 6AA3C 8007A23C 200048AC */  sw         $t0, 0x20($v0)
  .L8007A240:
    /* 6AA40 8007A240 AAE80108 */  j          .L8007A2A8
    /* 6AA44 8007A244 000088AC */   sw        $t0, 0x0($a0)
  .L8007A248:
    /* 6AA48 8007A248 2400228D */  lw         $v0, 0x24($t1)
    /* 6AA4C 8007A24C 00000000 */  nop
    /* 6AA50 8007A250 0A004010 */  beqz       $v0, .L8007A27C
    /* 6AA54 8007A254 00000000 */   nop
    /* 6AA58 8007A258 200009AD */  sw         $t1, 0x20($t0)
    /* 6AA5C 8007A25C 2400228D */  lw         $v0, 0x24($t1)
    /* 6AA60 8007A260 00000000 */  nop
    /* 6AA64 8007A264 240002AD */  sw         $v0, 0x24($t0)
    /* 6AA68 8007A268 2400228D */  lw         $v0, 0x24($t1)
    /* 6AA6C 8007A26C 00000000 */  nop
    /* 6AA70 8007A270 200048AC */  sw         $t0, 0x20($v0)
    /* 6AA74 8007A274 AAE80108 */  j          .L8007A2A8
    /* 6AA78 8007A278 240028AD */   sw        $t0, 0x24($t1)
  .L8007A27C:
    /* 6AA7C 8007A27C 0000628C */  lw         $v0, 0x0($v1)
    /* 6AA80 8007A280 240000AD */  sw         $zero, 0x24($t0)
    /* 6AA84 8007A284 200002AD */  sw         $v0, 0x20($t0)
    /* 6AA88 8007A288 0000628C */  lw         $v0, 0x0($v1)
    /* 6AA8C 8007A28C 00000000 */  nop
    /* 6AA90 8007A290 03004014 */  bnez       $v0, .L8007A2A0
    /* 6AA94 8007A294 00000000 */   nop
    /* 6AA98 8007A298 A9E80108 */  j          .L8007A2A4
    /* 6AA9C 8007A29C 000088AC */   sw        $t0, 0x0($a0)
  .L8007A2A0:
    /* 6AAA0 8007A2A0 240048AC */  sw         $t0, 0x24($v0)
  .L8007A2A4:
    /* 6AAA4 8007A2A4 000068AC */  sw         $t0, 0x0($v1)
  .L8007A2A8:
    /* 6AAA8 8007A2A8 21100001 */  addu       $v0, $t0, $zero
    /* 6AAAC 8007A2AC 02000324 */  addiu      $v1, $zero, 0x2
  .L8007A2B0:
    /* 6AAB0 8007A2B0 0A0047A0 */  sb         $a3, 0xA($v0)
    /* 6AAB4 8007A2B4 000043A0 */  sb         $v1, 0x0($v0)
    /* 6AAB8 8007A2B8 0800E003 */  jr         $ra
    /* 6AABC 8007A2BC 0C0045A0 */   sb        $a1, 0xC($v0)
  .L8007A2C0:
    /* 6AAC0 8007A2C0 0800E003 */  jr         $ra
    /* 6AAC4 8007A2C4 21100000 */   addu      $v0, $zero, $zero
endlabel func_8007A12C
