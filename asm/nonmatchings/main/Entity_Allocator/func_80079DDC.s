nonmatching func_80079DDC, 0x1B4

glabel func_80079DDC
    /* 6A5DC 80079DDC E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 6A5E0 80079DE0 0F800A3C */  lui        $t2, %hi(D_800E80A0)
    /* 6A5E4 80079DE4 A080488D */  lw         $t0, %lo(D_800E80A0)($t2)
    /* 6A5E8 80079DE8 21488000 */  addu       $t1, $a0, $zero
    /* 6A5EC 80079DEC 61000011 */  beqz       $t0, .L80079F74
    /* 6A5F0 80079DF0 1000BFAF */   sw        $ra, 0x10($sp)
    /* 6A5F4 80079DF4 0E80033C */  lui        $v1, %hi(D_800E7E7D)
    /* 6A5F8 80079DF8 7D7E6290 */  lbu        $v0, %lo(D_800E7E7D)($v1)
    /* 6A5FC 80079DFC 2400048D */  lw         $a0, 0x24($t0)
    /* 6A600 80079E00 FFFF4224 */  addiu      $v0, $v0, -0x1
    /* 6A604 80079E04 7D7E62A0 */  sb         $v0, %lo(D_800E7E7D)($v1)
    /* 6A608 80079E08 01000224 */  addiu      $v0, $zero, 0x1
    /* 6A60C 80079E0C 0B00E210 */  beq        $a3, $v0, .L80079E3C
    /* 6A610 80079E10 A08044AD */   sw        $a0, %lo(D_800E80A0)($t2)
    /* 6A614 80079E14 0200E228 */  slti       $v0, $a3, 0x2
    /* 6A618 80079E18 04004014 */  bnez       $v0, .L80079E2C
    /* 6A61C 80079E1C 1080023C */   lui       $v0, %hi(g_InactiveEntitiesList)
    /* 6A620 80079E20 02000224 */  addiu      $v0, $zero, 0x2
    /* 6A624 80079E24 0A00E210 */  beq        $a3, $v0, .L80079E50
    /* 6A628 80079E28 1080023C */   lui       $v0, %hi(g_InactiveEntitiesList)
  .L80079E2C:
    /* 6A62C 80079E2C 68B14424 */  addiu      $a0, $v0, %lo(g_InactiveEntitiesList)
    /* 6A630 80079E30 0F80023C */  lui        $v0, %hi(D_800F23A8)
    /* 6A634 80079E34 98E70108 */  j          .L80079E60
    /* 6A638 80079E38 A8234324 */   addiu     $v1, $v0, %lo(D_800F23A8)
  .L80079E3C:
    /* 6A63C 80079E3C 0F80023C */  lui        $v0, %hi(g_ActiveEntitiesList)
    /* 6A640 80079E40 24264424 */  addiu      $a0, $v0, %lo(g_ActiveEntitiesList)
    /* 6A644 80079E44 0F80023C */  lui        $v0, %hi(D_800F239C)
    /* 6A648 80079E48 98E70108 */  j          .L80079E60
    /* 6A64C 80079E4C 9C234324 */   addiu     $v1, $v0, %lo(D_800F239C)
  .L80079E50:
    /* 6A650 80079E50 0F80023C */  lui        $v0, %hi(g_BackgroundEntitiesList)
    /* 6A654 80079E54 38274424 */  addiu      $a0, $v0, %lo(g_BackgroundEntitiesList)
    /* 6A658 80079E58 0F80023C */  lui        $v0, %hi(D_800F23A0)
    /* 6A65C 80079E5C A0234324 */  addiu      $v1, $v0, %lo(D_800F23A0)
  .L80079E60:
    /* 6A660 80079E60 01000224 */  addiu      $v0, $zero, 0x1
    /* 6A664 80079E64 1800C210 */  beq        $a2, $v0, .L80079EC8
    /* 6A668 80079E68 0200C228 */   slti      $v0, $a2, 0x2
    /* 6A66C 80079E6C 05004010 */  beqz       $v0, .L80079E84
    /* 6A670 80079E70 02000224 */   addiu     $v0, $zero, 0x2
    /* 6A674 80079E74 0900C010 */  beqz       $a2, .L80079E9C
    /* 6A678 80079E78 21100001 */   addu      $v0, $t0, $zero
    /* 6A67C 80079E7C D9E70108 */  j          .L80079F64
    /* 6A680 80079E80 02000324 */   addiu     $v1, $zero, 0x2
  .L80079E84:
    /* 6A684 80079E84 1D00C210 */  beq        $a2, $v0, .L80079EFC
    /* 6A688 80079E88 03000224 */   addiu     $v0, $zero, 0x3
    /* 6A68C 80079E8C 2800C210 */  beq        $a2, $v0, .L80079F30
    /* 6A690 80079E90 21100001 */   addu      $v0, $t0, $zero
    /* 6A694 80079E94 D9E70108 */  j          .L80079F64
    /* 6A698 80079E98 02000324 */   addiu     $v1, $zero, 0x2
  .L80079E9C:
    /* 6A69C 80079E9C 2000228D */  lw         $v0, 0x20($t1)
    /* 6A6A0 80079EA0 00000000 */  nop
    /* 6A6A4 80079EA4 08004010 */  beqz       $v0, .L80079EC8
    /* 6A6A8 80079EA8 00000000 */   nop
    /* 6A6AC 80079EAC 200002AD */  sw         $v0, 0x20($t0)
    /* 6A6B0 80079EB0 240009AD */  sw         $t1, 0x24($t0)
    /* 6A6B4 80079EB4 2000228D */  lw         $v0, 0x20($t1)
    /* 6A6B8 80079EB8 00000000 */  nop
    /* 6A6BC 80079EBC 240048AC */  sw         $t0, 0x24($v0)
    /* 6A6C0 80079EC0 D7E70108 */  j          .L80079F5C
    /* 6A6C4 80079EC4 200028AD */   sw        $t0, 0x20($t1)
  .L80079EC8:
    /* 6A6C8 80079EC8 200000AD */  sw         $zero, 0x20($t0)
    /* 6A6CC 80079ECC 0000828C */  lw         $v0, 0x0($a0)
    /* 6A6D0 80079ED0 00000000 */  nop
    /* 6A6D4 80079ED4 240002AD */  sw         $v0, 0x24($t0)
    /* 6A6D8 80079ED8 0000828C */  lw         $v0, 0x0($a0)
    /* 6A6DC 80079EDC 00000000 */  nop
    /* 6A6E0 80079EE0 03004014 */  bnez       $v0, .L80079EF0
    /* 6A6E4 80079EE4 00000000 */   nop
    /* 6A6E8 80079EE8 BDE70108 */  j          .L80079EF4
    /* 6A6EC 80079EEC 000068AC */   sw        $t0, 0x0($v1)
  .L80079EF0:
    /* 6A6F0 80079EF0 200048AC */  sw         $t0, 0x20($v0)
  .L80079EF4:
    /* 6A6F4 80079EF4 D7E70108 */  j          .L80079F5C
    /* 6A6F8 80079EF8 000088AC */   sw        $t0, 0x0($a0)
  .L80079EFC:
    /* 6A6FC 80079EFC 2400228D */  lw         $v0, 0x24($t1)
    /* 6A700 80079F00 00000000 */  nop
    /* 6A704 80079F04 0A004010 */  beqz       $v0, .L80079F30
    /* 6A708 80079F08 00000000 */   nop
    /* 6A70C 80079F0C 200009AD */  sw         $t1, 0x20($t0)
    /* 6A710 80079F10 2400228D */  lw         $v0, 0x24($t1)
    /* 6A714 80079F14 00000000 */  nop
    /* 6A718 80079F18 240002AD */  sw         $v0, 0x24($t0)
    /* 6A71C 80079F1C 2400228D */  lw         $v0, 0x24($t1)
    /* 6A720 80079F20 00000000 */  nop
    /* 6A724 80079F24 200048AC */  sw         $t0, 0x20($v0)
    /* 6A728 80079F28 D7E70108 */  j          .L80079F5C
    /* 6A72C 80079F2C 240028AD */   sw        $t0, 0x24($t1)
  .L80079F30:
    /* 6A730 80079F30 0000628C */  lw         $v0, 0x0($v1)
    /* 6A734 80079F34 240000AD */  sw         $zero, 0x24($t0)
    /* 6A738 80079F38 200002AD */  sw         $v0, 0x20($t0)
    /* 6A73C 80079F3C 0000628C */  lw         $v0, 0x0($v1)
    /* 6A740 80079F40 00000000 */  nop
    /* 6A744 80079F44 03004014 */  bnez       $v0, .L80079F54
    /* 6A748 80079F48 00000000 */   nop
    /* 6A74C 80079F4C D6E70108 */  j          .L80079F58
    /* 6A750 80079F50 000088AC */   sw        $t0, 0x0($a0)
  .L80079F54:
    /* 6A754 80079F54 240048AC */  sw         $t0, 0x24($v0)
  .L80079F58:
    /* 6A758 80079F58 000068AC */  sw         $t0, 0x0($v1)
  .L80079F5C:
    /* 6A75C 80079F5C 21100001 */  addu       $v0, $t0, $zero
    /* 6A760 80079F60 02000324 */  addiu      $v1, $zero, 0x2
  .L80079F64:
    /* 6A764 80079F64 0A0047A0 */  sb         $a3, 0xA($v0)
    /* 6A768 80079F68 000043A0 */  sb         $v1, 0x0($v0)
    /* 6A76C 80079F6C E0E70108 */  j          .L80079F80
    /* 6A770 80079F70 0C0045A0 */   sb        $a1, 0xC($v0)
  .L80079F74:
    /* 6A774 80079F74 21202001 */  addu       $a0, $t1, $zero
    /* 6A778 80079F78 E4E7010C */  jal        func_80079F90
    /* 6A77C 80079F7C FF00A530 */   andi      $a1, $a1, 0xFF
  .L80079F80:
    /* 6A780 80079F80 1000BF8F */  lw         $ra, 0x10($sp)
    /* 6A784 80079F84 00000000 */  nop
    /* 6A788 80079F88 0800E003 */  jr         $ra
    /* 6A78C 80079F8C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80079DDC
