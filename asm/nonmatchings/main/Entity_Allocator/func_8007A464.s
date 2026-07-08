nonmatching func_8007A464, 0x144

glabel func_8007A464
    /* 6AC64 8007A464 0F80083C */  lui        $t0, %hi(D_800F273C)
    /* 6AC68 8007A468 3C27068D */  lw         $a2, %lo(D_800F273C)($t0)
    /* 6AC6C 8007A46C 00000000 */  nop
    /* 6AC70 8007A470 4B00C010 */  beqz       $a2, .L8007A5A0
    /* 6AC74 8007A474 21388000 */   addu      $a3, $a0, $zero
    /* 6AC78 8007A478 0F80033C */  lui        $v1, %hi(D_800F2410)
    /* 6AC7C 8007A47C 10246290 */  lbu        $v0, %lo(D_800F2410)($v1)
    /* 6AC80 8007A480 2400C48C */  lw         $a0, 0x24($a2)
    /* 6AC84 8007A484 FFFF4224 */  addiu      $v0, $v0, -0x1
    /* 6AC88 8007A488 102462A0 */  sb         $v0, %lo(D_800F2410)($v1)
    /* 6AC8C 8007A48C 0F80023C */  lui        $v0, %hi(g_BackgroundEntitiesList)
    /* 6AC90 8007A490 3C2704AD */  sw         $a0, %lo(D_800F273C)($t0)
    /* 6AC94 8007A494 38274824 */  addiu      $t0, $v0, %lo(g_BackgroundEntitiesList)
    /* 6AC98 8007A498 0F80023C */  lui        $v0, %hi(D_800F23A0)
    /* 6AC9C 8007A49C A0234424 */  addiu      $a0, $v0, %lo(D_800F23A0)
    /* 6ACA0 8007A4A0 01000224 */  addiu      $v0, $zero, 0x1
    /* 6ACA4 8007A4A4 1800A210 */  beq        $a1, $v0, .L8007A508
    /* 6ACA8 8007A4A8 0200A228 */   slti      $v0, $a1, 0x2
    /* 6ACAC 8007A4AC 05004010 */  beqz       $v0, .L8007A4C4
    /* 6ACB0 8007A4B0 02000224 */   addiu     $v0, $zero, 0x2
    /* 6ACB4 8007A4B4 0900A010 */  beqz       $a1, .L8007A4DC
    /* 6ACB8 8007A4B8 2110C000 */   addu      $v0, $a2, $zero
    /* 6ACBC 8007A4BC 64E90108 */  j          .L8007A590
    /* 6ACC0 8007A4C0 02000324 */   addiu     $v1, $zero, 0x2
  .L8007A4C4:
    /* 6ACC4 8007A4C4 1A00A210 */  beq        $a1, $v0, .L8007A530
    /* 6ACC8 8007A4C8 03000224 */   addiu     $v0, $zero, 0x3
    /* 6ACCC 8007A4CC 2500A210 */  beq        $a1, $v0, .L8007A564
    /* 6ACD0 8007A4D0 2110C000 */   addu      $v0, $a2, $zero
    /* 6ACD4 8007A4D4 64E90108 */  j          .L8007A590
    /* 6ACD8 8007A4D8 02000324 */   addiu     $v1, $zero, 0x2
  .L8007A4DC:
    /* 6ACDC 8007A4DC 2000E28C */  lw         $v0, 0x20($a3)
    /* 6ACE0 8007A4E0 00000000 */  nop
    /* 6ACE4 8007A4E4 08004010 */  beqz       $v0, .L8007A508
    /* 6ACE8 8007A4E8 00000000 */   nop
    /* 6ACEC 8007A4EC 2000C2AC */  sw         $v0, 0x20($a2)
    /* 6ACF0 8007A4F0 2400C7AC */  sw         $a3, 0x24($a2)
    /* 6ACF4 8007A4F4 2000E28C */  lw         $v0, 0x20($a3)
    /* 6ACF8 8007A4F8 00000000 */  nop
    /* 6ACFC 8007A4FC 240046AC */  sw         $a2, 0x24($v0)
    /* 6AD00 8007A500 62E90108 */  j          .L8007A588
    /* 6AD04 8007A504 2000E6AC */   sw        $a2, 0x20($a3)
  .L8007A508:
    /* 6AD08 8007A508 0000028D */  lw         $v0, 0x0($t0)
    /* 6AD0C 8007A50C 2000C0AC */  sw         $zero, 0x20($a2)
    /* 6AD10 8007A510 21184000 */  addu       $v1, $v0, $zero
    /* 6AD14 8007A514 03006014 */  bnez       $v1, .L8007A524
    /* 6AD18 8007A518 2400C2AC */   sw        $v0, 0x24($a2)
    /* 6AD1C 8007A51C 4AE90108 */  j          .L8007A528
    /* 6AD20 8007A520 000086AC */   sw        $a2, 0x0($a0)
  .L8007A524:
    /* 6AD24 8007A524 200066AC */  sw         $a2, 0x20($v1)
  .L8007A528:
    /* 6AD28 8007A528 62E90108 */  j          .L8007A588
    /* 6AD2C 8007A52C 000006AD */   sw        $a2, 0x0($t0)
  .L8007A530:
    /* 6AD30 8007A530 2400E28C */  lw         $v0, 0x24($a3)
    /* 6AD34 8007A534 00000000 */  nop
    /* 6AD38 8007A538 0A004010 */  beqz       $v0, .L8007A564
    /* 6AD3C 8007A53C 00000000 */   nop
    /* 6AD40 8007A540 2000C7AC */  sw         $a3, 0x20($a2)
    /* 6AD44 8007A544 2400E28C */  lw         $v0, 0x24($a3)
    /* 6AD48 8007A548 00000000 */  nop
    /* 6AD4C 8007A54C 2400C2AC */  sw         $v0, 0x24($a2)
    /* 6AD50 8007A550 2400E28C */  lw         $v0, 0x24($a3)
    /* 6AD54 8007A554 00000000 */  nop
    /* 6AD58 8007A558 200046AC */  sw         $a2, 0x20($v0)
    /* 6AD5C 8007A55C 62E90108 */  j          .L8007A588
    /* 6AD60 8007A560 2400E6AC */   sw        $a2, 0x24($a3)
  .L8007A564:
    /* 6AD64 8007A564 0000828C */  lw         $v0, 0x0($a0)
    /* 6AD68 8007A568 2400C0AC */  sw         $zero, 0x24($a2)
    /* 6AD6C 8007A56C 21184000 */  addu       $v1, $v0, $zero
    /* 6AD70 8007A570 03006014 */  bnez       $v1, .L8007A580
    /* 6AD74 8007A574 2000C2AC */   sw        $v0, 0x20($a2)
    /* 6AD78 8007A578 61E90108 */  j          .L8007A584
    /* 6AD7C 8007A57C 000006AD */   sw        $a2, 0x0($t0)
  .L8007A580:
    /* 6AD80 8007A580 240066AC */  sw         $a2, 0x24($v1)
  .L8007A584:
    /* 6AD84 8007A584 000086AC */  sw         $a2, 0x0($a0)
  .L8007A588:
    /* 6AD88 8007A588 2110C000 */  addu       $v0, $a2, $zero
    /* 6AD8C 8007A58C 02000324 */  addiu      $v1, $zero, 0x2
  .L8007A590:
    /* 6AD90 8007A590 000043A0 */  sb         $v1, 0x0($v0)
    /* 6AD94 8007A594 01000324 */  addiu      $v1, $zero, 0x1
    /* 6AD98 8007A598 0800E003 */  jr         $ra
    /* 6AD9C 8007A59C 0C0043A0 */   sb        $v1, 0xC($v0)
  .L8007A5A0:
    /* 6ADA0 8007A5A0 0800E003 */  jr         $ra
    /* 6ADA4 8007A5A4 21100000 */   addu      $v0, $zero, $zero
endlabel func_8007A464
