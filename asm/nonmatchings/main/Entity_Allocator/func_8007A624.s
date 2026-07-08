nonmatching func_8007A624, 0x1EC

glabel func_8007A624
    /* 6AE24 8007A624 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 6AE28 8007A628 1000B0AF */  sw         $s0, 0x10($sp)
    /* 6AE2C 8007A62C 21808000 */  addu       $s0, $a0, $zero
    /* 6AE30 8007A630 1400BFAF */  sw         $ra, 0x14($sp)
    /* 6AE34 8007A634 0A000292 */  lbu        $v0, 0xA($s0)
    /* 6AE38 8007A638 00000000 */  nop
    /* 6AE3C 8007A63C 05004010 */  beqz       $v0, .L8007A654
    /* 6AE40 8007A640 0F80023C */   lui       $v0, %hi(g_ActiveEntitiesList)
    /* 6AE44 8007A644 24264424 */  addiu      $a0, $v0, %lo(g_ActiveEntitiesList)
    /* 6AE48 8007A648 0F80023C */  lui        $v0, %hi(D_800F239C)
    /* 6AE4C 8007A64C 99E90108 */  j          .L8007A664
    /* 6AE50 8007A650 9C234524 */   addiu     $a1, $v0, %lo(D_800F239C)
  .L8007A654:
    /* 6AE54 8007A654 1080023C */  lui        $v0, %hi(g_InactiveEntitiesList)
    /* 6AE58 8007A658 68B14424 */  addiu      $a0, $v0, %lo(g_InactiveEntitiesList)
    /* 6AE5C 8007A65C 0F80023C */  lui        $v0, %hi(D_800F23A8)
    /* 6AE60 8007A660 A8234524 */  addiu      $a1, $v0, %lo(D_800F23A8)
  .L8007A664:
    /* 6AE64 8007A664 2000038E */  lw         $v1, 0x20($s0)
    /* 6AE68 8007A668 00000000 */  nop
    /* 6AE6C 8007A66C 04006010 */  beqz       $v1, .L8007A680
    /* 6AE70 8007A670 00000000 */   nop
    /* 6AE74 8007A674 2400028E */  lw         $v0, 0x24($s0)
    /* 6AE78 8007A678 A8E90108 */  j          .L8007A6A0
    /* 6AE7C 8007A67C 240062AC */   sw        $v0, 0x24($v1)
  .L8007A680:
    /* 6AE80 8007A680 2400028E */  lw         $v0, 0x24($s0)
    /* 6AE84 8007A684 00000000 */  nop
    /* 6AE88 8007A688 000082AC */  sw         $v0, 0x0($a0)
    /* 6AE8C 8007A68C 2400028E */  lw         $v0, 0x24($s0)
    /* 6AE90 8007A690 00000000 */  nop
    /* 6AE94 8007A694 09004010 */  beqz       $v0, .L8007A6BC
    /* 6AE98 8007A698 00000000 */   nop
    /* 6AE9C 8007A69C 200040AC */  sw         $zero, 0x20($v0)
  .L8007A6A0:
    /* 6AEA0 8007A6A0 2400038E */  lw         $v1, 0x24($s0)
    /* 6AEA4 8007A6A4 00000000 */  nop
    /* 6AEA8 8007A6A8 04006010 */  beqz       $v1, .L8007A6BC
    /* 6AEAC 8007A6AC 00000000 */   nop
    /* 6AEB0 8007A6B0 2000028E */  lw         $v0, 0x20($s0)
    /* 6AEB4 8007A6B4 B7E90108 */  j          .L8007A6DC
    /* 6AEB8 8007A6B8 200062AC */   sw        $v0, 0x20($v1)
  .L8007A6BC:
    /* 6AEBC 8007A6BC 2000028E */  lw         $v0, 0x20($s0)
    /* 6AEC0 8007A6C0 00000000 */  nop
    /* 6AEC4 8007A6C4 0000A2AC */  sw         $v0, 0x0($a1)
    /* 6AEC8 8007A6C8 2000028E */  lw         $v0, 0x20($s0)
    /* 6AECC 8007A6CC 00000000 */  nop
    /* 6AED0 8007A6D0 02004010 */  beqz       $v0, .L8007A6DC
    /* 6AED4 8007A6D4 00000000 */   nop
    /* 6AED8 8007A6D8 240040AC */  sw         $zero, 0x24($v0)
  .L8007A6DC:
    /* 6AEDC 8007A6DC 28000292 */  lbu        $v0, 0x28($s0)
    /* 6AEE0 8007A6E0 00000000 */  nop
    /* 6AEE4 8007A6E4 7F004230 */  andi       $v0, $v0, 0x7F
    /* 6AEE8 8007A6E8 280002A2 */  sb         $v0, 0x28($s0)
    /* 6AEEC 8007A6EC FF004330 */  andi       $v1, $v0, 0xFF
    /* 6AEF0 8007A6F0 0500622C */  sltiu      $v0, $v1, 0x5
    /* 6AEF4 8007A6F4 36004010 */  beqz       $v0, .L8007A7D0
    /* 6AEF8 8007A6F8 0180023C */   lui       $v0, %hi(jtbl_80016E34)
    /* 6AEFC 8007A6FC 346E4224 */  addiu      $v0, $v0, %lo(jtbl_80016E34)
    /* 6AF00 8007A700 80180300 */  sll        $v1, $v1, 2
    /* 6AF04 8007A704 21186200 */  addu       $v1, $v1, $v0
    /* 6AF08 8007A708 0000628C */  lw         $v0, 0x0($v1)
    /* 6AF0C 8007A70C 00000000 */  nop
    /* 6AF10 8007A710 08004000 */  jr         $v0
    /* 6AF14 8007A714 00000000 */   nop
    /* 6AF18 8007A718 0E80043C */  lui        $a0, %hi(D_800E7E7C)
    /* 6AF1C 8007A71C 0F80033C */  lui        $v1, %hi(D_800E8098)
    /* 6AF20 8007A720 7C7E8290 */  lbu        $v0, %lo(D_800E7E7C)($a0)
    /* 6AF24 8007A724 9880658C */  lw         $a1, %lo(D_800E8098)($v1)
    /* 6AF28 8007A728 988070AC */  sw         $s0, %lo(D_800E8098)($v1)
    /* 6AF2C 8007A72C 01004224 */  addiu      $v0, $v0, 0x1
    /* 6AF30 8007A730 7C7E82A0 */  sb         $v0, %lo(D_800E7E7C)($a0)
    /* 6AF34 8007A734 F4E90108 */  j          .L8007A7D0
    /* 6AF38 8007A738 240005AE */   sw        $a1, 0x24($s0)
    /* 6AF3C 8007A73C 0E80053C */  lui        $a1, %hi(D_800E7E7D)
    /* 6AF40 8007A740 0F80033C */  lui        $v1, %hi(D_800E80A0)
    /* 6AF44 8007A744 7D7EA290 */  lbu        $v0, %lo(D_800E7E7D)($a1)
    /* 6AF48 8007A748 A080668C */  lw         $a2, %lo(D_800E80A0)($v1)
    /* 6AF4C 8007A74C 21200002 */  addu       $a0, $s0, $zero
    /* 6AF50 8007A750 A08070AC */  sw         $s0, %lo(D_800E80A0)($v1)
    /* 6AF54 8007A754 01004224 */  addiu      $v0, $v0, 0x1
    /* 6AF58 8007A758 F2E90108 */  j          .L8007A7C8
    /* 6AF5C 8007A75C 7D7EA2A0 */   sb        $v0, %lo(D_800E7E7D)($a1)
    /* 6AF60 8007A760 0F80053C */  lui        $a1, %hi(D_800ED8CC)
    /* 6AF64 8007A764 0F80033C */  lui        $v1, %hi(D_800F2398)
    /* 6AF68 8007A768 CCD8A290 */  lbu        $v0, %lo(D_800ED8CC)($a1)
    /* 6AF6C 8007A76C 9823668C */  lw         $a2, %lo(D_800F2398)($v1)
    /* 6AF70 8007A770 21200002 */  addu       $a0, $s0, $zero
    /* 6AF74 8007A774 982370AC */  sw         $s0, %lo(D_800F2398)($v1)
    /* 6AF78 8007A778 01004224 */  addiu      $v0, $v0, 0x1
    /* 6AF7C 8007A77C F2E90108 */  j          .L8007A7C8
    /* 6AF80 8007A780 CCD8A2A0 */   sb        $v0, %lo(D_800ED8CC)($a1)
    /* 6AF84 8007A784 0F80053C */  lui        $a1, %hi(D_800ED8C5)
    /* 6AF88 8007A788 0F80033C */  lui        $v1, %hi(D_800ED8D4)
    /* 6AF8C 8007A78C C5D8A290 */  lbu        $v0, %lo(D_800ED8C5)($a1)
    /* 6AF90 8007A790 D4D8668C */  lw         $a2, %lo(D_800ED8D4)($v1)
    /* 6AF94 8007A794 21200002 */  addu       $a0, $s0, $zero
    /* 6AF98 8007A798 D4D870AC */  sw         $s0, %lo(D_800ED8D4)($v1)
    /* 6AF9C 8007A79C 01004224 */  addiu      $v0, $v0, 0x1
    /* 6AFA0 8007A7A0 F2E90108 */  j          .L8007A7C8
    /* 6AFA4 8007A7A4 C5D8A2A0 */   sb        $v0, %lo(D_800ED8C5)($a1)
    /* 6AFA8 8007A7A8 0F80053C */  lui        $a1, %hi(D_800ED8C4)
    /* 6AFAC 8007A7AC 0F80033C */  lui        $v1, %hi(D_800ED8D0)
    /* 6AFB0 8007A7B0 C4D8A290 */  lbu        $v0, %lo(D_800ED8C4)($a1)
    /* 6AFB4 8007A7B4 D0D8668C */  lw         $a2, %lo(D_800ED8D0)($v1)
    /* 6AFB8 8007A7B8 21200002 */  addu       $a0, $s0, $zero
    /* 6AFBC 8007A7BC D0D870AC */  sw         $s0, %lo(D_800ED8D0)($v1)
    /* 6AFC0 8007A7C0 01004224 */  addiu      $v0, $v0, 0x1
    /* 6AFC4 8007A7C4 C4D8A2A0 */  sb         $v0, %lo(D_800ED8C4)($a1)
  .L8007A7C8:
    /* 6AFC8 8007A7C8 77EB010C */  jal        func_8007ADDC
    /* 6AFCC 8007A7CC 240006AE */   sw        $a2, 0x24($s0)
  .L8007A7D0:
    /* 6AFD0 8007A7D0 000000AE */  sw         $zero, 0x0($s0)
    /* 6AFD4 8007A7D4 040000AE */  sw         $zero, 0x4($s0)
    /* 6AFD8 8007A7D8 080000AE */  sw         $zero, 0x8($s0)
    /* 6AFDC 8007A7DC 0C0000AE */  sw         $zero, 0xC($s0)
    /* 6AFE0 8007A7E0 100000AE */  sw         $zero, 0x10($s0)
    /* 6AFE4 8007A7E4 140000AE */  sw         $zero, 0x14($s0)
    /* 6AFE8 8007A7E8 180000AE */  sw         $zero, 0x18($s0)
    /* 6AFEC 8007A7EC 380000AE */  sw         $zero, 0x38($s0)
    /* 6AFF0 8007A7F0 2A0000A2 */  sb         $zero, 0x2A($s0)
    /* 6AFF4 8007A7F4 2B0000A2 */  sb         $zero, 0x2B($s0)
    /* 6AFF8 8007A7F8 290000A2 */  sb         $zero, 0x29($s0)
    /* 6AFFC 8007A7FC 5E0000A2 */  sb         $zero, 0x5E($s0)
    /* 6B000 8007A800 1400BF8F */  lw         $ra, 0x14($sp)
    /* 6B004 8007A804 1000B08F */  lw         $s0, 0x10($sp)
    /* 6B008 8007A808 0800E003 */  jr         $ra
    /* 6B00C 8007A80C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8007A624
