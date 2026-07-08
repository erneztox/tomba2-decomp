nonmatching func_8007A2C8, 0x19C

glabel func_8007A2C8
    /* 6AAC8 8007A2C8 0F800A3C */  lui        $t2, %hi(D_800ED8D0)
    /* 6AACC 8007A2CC D0D8488D */  lw         $t0, %lo(D_800ED8D0)($t2)
    /* 6AAD0 8007A2D0 00000000 */  nop
    /* 6AAD4 8007A2D4 61000011 */  beqz       $t0, .L8007A45C
    /* 6AAD8 8007A2D8 21488000 */   addu      $t1, $a0, $zero
    /* 6AADC 8007A2DC 0F80033C */  lui        $v1, %hi(D_800ED8C4)
    /* 6AAE0 8007A2E0 C4D86290 */  lbu        $v0, %lo(D_800ED8C4)($v1)
    /* 6AAE4 8007A2E4 2400048D */  lw         $a0, 0x24($t0)
    /* 6AAE8 8007A2E8 FFFF4224 */  addiu      $v0, $v0, -0x1
    /* 6AAEC 8007A2EC C4D862A0 */  sb         $v0, %lo(D_800ED8C4)($v1)
    /* 6AAF0 8007A2F0 01000224 */  addiu      $v0, $zero, 0x1
    /* 6AAF4 8007A2F4 0B00E210 */  beq        $a3, $v0, .L8007A324
    /* 6AAF8 8007A2F8 D0D844AD */   sw        $a0, %lo(D_800ED8D0)($t2)
    /* 6AAFC 8007A2FC 0200E228 */  slti       $v0, $a3, 0x2
    /* 6AB00 8007A300 04004014 */  bnez       $v0, .L8007A314
    /* 6AB04 8007A304 1080023C */   lui       $v0, %hi(g_InactiveEntitiesList)
    /* 6AB08 8007A308 02000224 */  addiu      $v0, $zero, 0x2
    /* 6AB0C 8007A30C 0A00E210 */  beq        $a3, $v0, .L8007A338
    /* 6AB10 8007A310 1080023C */   lui       $v0, %hi(g_InactiveEntitiesList)
  .L8007A314:
    /* 6AB14 8007A314 68B14424 */  addiu      $a0, $v0, %lo(g_InactiveEntitiesList)
    /* 6AB18 8007A318 0F80023C */  lui        $v0, %hi(D_800F23A8)
    /* 6AB1C 8007A31C D2E80108 */  j          .L8007A348
    /* 6AB20 8007A320 A8234324 */   addiu     $v1, $v0, %lo(D_800F23A8)
  .L8007A324:
    /* 6AB24 8007A324 0F80023C */  lui        $v0, %hi(g_ActiveEntitiesList)
    /* 6AB28 8007A328 24264424 */  addiu      $a0, $v0, %lo(g_ActiveEntitiesList)
    /* 6AB2C 8007A32C 0F80023C */  lui        $v0, %hi(D_800F239C)
    /* 6AB30 8007A330 D2E80108 */  j          .L8007A348
    /* 6AB34 8007A334 9C234324 */   addiu     $v1, $v0, %lo(D_800F239C)
  .L8007A338:
    /* 6AB38 8007A338 0F80023C */  lui        $v0, %hi(g_BackgroundEntitiesList)
    /* 6AB3C 8007A33C 38274424 */  addiu      $a0, $v0, %lo(g_BackgroundEntitiesList)
    /* 6AB40 8007A340 0F80023C */  lui        $v0, %hi(D_800F23A0)
    /* 6AB44 8007A344 A0234324 */  addiu      $v1, $v0, %lo(D_800F23A0)
  .L8007A348:
    /* 6AB48 8007A348 01000224 */  addiu      $v0, $zero, 0x1
    /* 6AB4C 8007A34C 1800C210 */  beq        $a2, $v0, .L8007A3B0
    /* 6AB50 8007A350 0200C228 */   slti      $v0, $a2, 0x2
    /* 6AB54 8007A354 05004010 */  beqz       $v0, .L8007A36C
    /* 6AB58 8007A358 02000224 */   addiu     $v0, $zero, 0x2
    /* 6AB5C 8007A35C 0900C010 */  beqz       $a2, .L8007A384
    /* 6AB60 8007A360 21100001 */   addu      $v0, $t0, $zero
    /* 6AB64 8007A364 13E90108 */  j          .L8007A44C
    /* 6AB68 8007A368 02000324 */   addiu     $v1, $zero, 0x2
  .L8007A36C:
    /* 6AB6C 8007A36C 1D00C210 */  beq        $a2, $v0, .L8007A3E4
    /* 6AB70 8007A370 03000224 */   addiu     $v0, $zero, 0x3
    /* 6AB74 8007A374 2800C210 */  beq        $a2, $v0, .L8007A418
    /* 6AB78 8007A378 21100001 */   addu      $v0, $t0, $zero
    /* 6AB7C 8007A37C 13E90108 */  j          .L8007A44C
    /* 6AB80 8007A380 02000324 */   addiu     $v1, $zero, 0x2
  .L8007A384:
    /* 6AB84 8007A384 2000228D */  lw         $v0, 0x20($t1)
    /* 6AB88 8007A388 00000000 */  nop
    /* 6AB8C 8007A38C 08004010 */  beqz       $v0, .L8007A3B0
    /* 6AB90 8007A390 00000000 */   nop
    /* 6AB94 8007A394 200002AD */  sw         $v0, 0x20($t0)
    /* 6AB98 8007A398 240009AD */  sw         $t1, 0x24($t0)
    /* 6AB9C 8007A39C 2000228D */  lw         $v0, 0x20($t1)
    /* 6ABA0 8007A3A0 00000000 */  nop
    /* 6ABA4 8007A3A4 240048AC */  sw         $t0, 0x24($v0)
    /* 6ABA8 8007A3A8 11E90108 */  j          .L8007A444
    /* 6ABAC 8007A3AC 200028AD */   sw        $t0, 0x20($t1)
  .L8007A3B0:
    /* 6ABB0 8007A3B0 200000AD */  sw         $zero, 0x20($t0)
    /* 6ABB4 8007A3B4 0000828C */  lw         $v0, 0x0($a0)
    /* 6ABB8 8007A3B8 00000000 */  nop
    /* 6ABBC 8007A3BC 240002AD */  sw         $v0, 0x24($t0)
    /* 6ABC0 8007A3C0 0000828C */  lw         $v0, 0x0($a0)
    /* 6ABC4 8007A3C4 00000000 */  nop
    /* 6ABC8 8007A3C8 03004014 */  bnez       $v0, .L8007A3D8
    /* 6ABCC 8007A3CC 00000000 */   nop
    /* 6ABD0 8007A3D0 F7E80108 */  j          .L8007A3DC
    /* 6ABD4 8007A3D4 000068AC */   sw        $t0, 0x0($v1)
  .L8007A3D8:
    /* 6ABD8 8007A3D8 200048AC */  sw         $t0, 0x20($v0)
  .L8007A3DC:
    /* 6ABDC 8007A3DC 11E90108 */  j          .L8007A444
    /* 6ABE0 8007A3E0 000088AC */   sw        $t0, 0x0($a0)
  .L8007A3E4:
    /* 6ABE4 8007A3E4 2400228D */  lw         $v0, 0x24($t1)
    /* 6ABE8 8007A3E8 00000000 */  nop
    /* 6ABEC 8007A3EC 0A004010 */  beqz       $v0, .L8007A418
    /* 6ABF0 8007A3F0 00000000 */   nop
    /* 6ABF4 8007A3F4 200009AD */  sw         $t1, 0x20($t0)
    /* 6ABF8 8007A3F8 2400228D */  lw         $v0, 0x24($t1)
    /* 6ABFC 8007A3FC 00000000 */  nop
    /* 6AC00 8007A400 240002AD */  sw         $v0, 0x24($t0)
    /* 6AC04 8007A404 2400228D */  lw         $v0, 0x24($t1)
    /* 6AC08 8007A408 00000000 */  nop
    /* 6AC0C 8007A40C 200048AC */  sw         $t0, 0x20($v0)
    /* 6AC10 8007A410 11E90108 */  j          .L8007A444
    /* 6AC14 8007A414 240028AD */   sw        $t0, 0x24($t1)
  .L8007A418:
    /* 6AC18 8007A418 0000628C */  lw         $v0, 0x0($v1)
    /* 6AC1C 8007A41C 240000AD */  sw         $zero, 0x24($t0)
    /* 6AC20 8007A420 200002AD */  sw         $v0, 0x20($t0)
    /* 6AC24 8007A424 0000628C */  lw         $v0, 0x0($v1)
    /* 6AC28 8007A428 00000000 */  nop
    /* 6AC2C 8007A42C 03004014 */  bnez       $v0, .L8007A43C
    /* 6AC30 8007A430 00000000 */   nop
    /* 6AC34 8007A434 10E90108 */  j          .L8007A440
    /* 6AC38 8007A438 000088AC */   sw        $t0, 0x0($a0)
  .L8007A43C:
    /* 6AC3C 8007A43C 240048AC */  sw         $t0, 0x24($v0)
  .L8007A440:
    /* 6AC40 8007A440 000068AC */  sw         $t0, 0x0($v1)
  .L8007A444:
    /* 6AC44 8007A444 21100001 */  addu       $v0, $t0, $zero
    /* 6AC48 8007A448 02000324 */  addiu      $v1, $zero, 0x2
  .L8007A44C:
    /* 6AC4C 8007A44C 0A0047A0 */  sb         $a3, 0xA($v0)
    /* 6AC50 8007A450 000043A0 */  sb         $v1, 0x0($v0)
    /* 6AC54 8007A454 0800E003 */  jr         $ra
    /* 6AC58 8007A458 0C0045A0 */   sb        $a1, 0xC($v0)
  .L8007A45C:
    /* 6AC5C 8007A45C 0800E003 */  jr         $ra
    /* 6AC60 8007A460 21100000 */   addu      $v0, $zero, $zero
endlabel func_8007A2C8
