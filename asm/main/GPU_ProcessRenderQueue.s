.set noreorder
nonmatching GPU_ProcessRenderQueue, 0x154

glabel GPU_ProcessRenderQueue
    /* 40530 8004FD30 D8FFBD27 */  addiu      $sp, $sp, -0x28
    /* 40534 8004FD34 0C80023C */  lui        $v0, %hi(D_800BF548)
    /* 40538 8004FD38 2000B2AF */  sw         $s2, 0x20($sp)
    /* 4053C 8004FD3C 48F55224 */  addiu      $s2, $v0, %lo(D_800BF548)
    /* 40540 8004FD40 2400BFAF */  sw         $ra, 0x24($sp)
    /* 40544 8004FD44 1C00B1AF */  sw         $s1, 0x1C($sp)
    /* 40548 8004FD48 1800B0AF */  sw         $s0, 0x18($sp)
    /* 4054C 8004FD4C 08004286 */  lh         $v0, 0x8($s2)
    /* 40550 8004FD50 00000000 */  nop
    /* 40554 8004FD54 45004010 */  beqz       $v0, .L8004FE6C
    /* 40558 8004FD58 01000224 */   addiu     $v0, $zero, 0x1
    /* 4055C 8004FD5C 01004392 */  lbu        $v1, 0x1($s2)
    /* 40560 8004FD60 00000000 */  nop
    /* 40564 8004FD64 18006214 */  bne        $v1, $v0, .L8004FDC8
    /* 40568 8004FD68 0C80063C */   lui       $a2, %hi(D_800BF544)
    /* 4056C 8004FD6C 40010224 */  addiu      $v0, $zero, 0x140
    /* 40570 8004FD70 1400A2A7 */  sh         $v0, 0x14($sp)
    /* 40574 8004FD74 F0000224 */  addiu      $v0, $zero, 0xF0
    /* 40578 8004FD78 1600A2A7 */  sh         $v0, 0x16($sp)
    /* 4057C 8004FD7C 801F023C */  lui        $v0, (0x1F800135 >> 16)
    /* 40580 8004FD80 44F5D08C */  lw         $s0, %lo(D_800BF544)($a2)
    /* 40584 8004FD84 35014290 */  lbu        $v0, (0x1F800135 & 0xFFFF)($v0)
    /* 40588 8004FD88 1000A527 */  addiu      $a1, $sp, 0x10
    /* 4058C 8004FD8C 1000A0A7 */  sh         $zero, 0x10($sp)
    /* 40590 8004FD90 21200002 */  addu       $a0, $s0, $zero
    /* 40594 8004FD94 0C000326 */  addiu      $v1, $s0, 0xC
    /* 40598 8004FD98 00120200 */  sll        $v0, $v0, 8
    /* 4059C 8004FD9C 44F5C3AC */  sw         $v1, %lo(D_800BF544)($a2)
    /* 405A0 8004FDA0 3E07020C */  jal        func_80081CF8
    /* 405A4 8004FDA4 1200A2A7 */   sh        $v0, 0x12($sp)
    /* 405A8 8004FDA8 0F80023C */  lui        $v0, %hi(D_800ED8C8)
    /* 405AC 8004FDAC C8D8448C */  lw         $a0, %lo(D_800ED8C8)($v0)
    /* 405B0 8004FDB0 00000000 */  nop
    /* 405B4 8004FDB4 0C00828C */  lw         $v0, 0xC($a0)
    /* 405B8 8004FDB8 0002033C */  lui        $v1, (0x2000000 >> 16)
    /* 405BC 8004FDBC 25104300 */  or         $v0, $v0, $v1
    /* 405C0 8004FDC0 000002AE */  sw         $v0, 0x0($s0)
    /* 405C4 8004FDC4 0C0090AC */  sw         $s0, 0xC($a0)
  .L8004FDC8:
    /* 405C8 8004FDC8 08004286 */  lh         $v0, 0x8($s2)
    /* 405CC 8004FDCC 00000000 */  nop
    /* 405D0 8004FDD0 09004018 */  blez       $v0, .L8004FDF8
    /* 405D4 8004FDD4 21800000 */   addu      $s0, $zero, $zero
    /* 405D8 8004FDD8 0C001124 */  addiu      $s1, $zero, 0xC
  .L8004FDDC:
    /* 405DC 8004FDDC D33E010C */  jal        func_8004FB4C
    /* 405E0 8004FDE0 21205102 */   addu      $a0, $s2, $s1
    /* 405E4 8004FDE4 08004286 */  lh         $v0, 0x8($s2)
    /* 405E8 8004FDE8 01001026 */  addiu      $s0, $s0, 0x1
    /* 405EC 8004FDEC 2A100202 */  slt        $v0, $s0, $v0
    /* 405F0 8004FDF0 FAFF4014 */  bnez       $v0, .L8004FDDC
    /* 405F4 8004FDF4 8C003126 */   addiu     $s1, $s1, 0x8C
  .L8004FDF8:
    /* 405F8 8004FDF8 01004392 */  lbu        $v1, 0x1($s2)
    /* 405FC 8004FDFC 01000224 */  addiu      $v0, $zero, 0x1
    /* 40600 8004FE00 1A006214 */  bne        $v1, $v0, .L8004FE6C
    /* 40604 8004FE04 1000A527 */   addiu     $a1, $sp, 0x10
    /* 40608 8004FE08 0C80063C */  lui        $a2, %hi(D_800BF544)
    /* 4060C 8004FE0C 10000224 */  addiu      $v0, $zero, 0x10
    /* 40610 8004FE10 1000A2A7 */  sh         $v0, 0x10($sp)
    /* 40614 8004FE14 20010224 */  addiu      $v0, $zero, 0x120
    /* 40618 8004FE18 1400A2A7 */  sh         $v0, 0x14($sp)
    /* 4061C 8004FE1C 36000224 */  addiu      $v0, $zero, 0x36
    /* 40620 8004FE20 1600A2A7 */  sh         $v0, 0x16($sp)
    /* 40624 8004FE24 801F023C */  lui        $v0, (0x1F800135 >> 16)
    /* 40628 8004FE28 44F5D08C */  lw         $s0, %lo(D_800BF544)($a2)
    /* 4062C 8004FE2C 35014290 */  lbu        $v0, (0x1F800135 & 0xFFFF)($v0)
    /* 40630 8004FE30 21200002 */  addu       $a0, $s0, $zero
    /* 40634 8004FE34 0C000326 */  addiu      $v1, $s0, 0xC
    /* 40638 8004FE38 00120200 */  sll        $v0, $v0, 8
    /* 4063C 8004FE3C 99004224 */  addiu      $v0, $v0, 0x99
    /* 40640 8004FE40 44F5C3AC */  sw         $v1, %lo(D_800BF544)($a2)
    /* 40644 8004FE44 3E07020C */  jal        func_80081CF8
    /* 40648 8004FE48 1200A2A7 */   sh        $v0, 0x12($sp)
    /* 4064C 8004FE4C 0F80023C */  lui        $v0, %hi(D_800ED8C8)
    /* 40650 8004FE50 C8D8448C */  lw         $a0, %lo(D_800ED8C8)($v0)
    /* 40654 8004FE54 00000000 */  nop
    /* 40658 8004FE58 0C00828C */  lw         $v0, 0xC($a0)
    /* 4065C 8004FE5C 0002033C */  lui        $v1, (0x2000000 >> 16)
    /* 40660 8004FE60 25104300 */  or         $v0, $v0, $v1
    /* 40664 8004FE64 000002AE */  sw         $v0, 0x0($s0)
    /* 40668 8004FE68 0C0090AC */  sw         $s0, 0xC($a0)
  .L8004FE6C:
    /* 4066C 8004FE6C 2400BF8F */  lw         $ra, 0x24($sp)
    /* 40670 8004FE70 2000B28F */  lw         $s2, 0x20($sp)
    /* 40674 8004FE74 1C00B18F */  lw         $s1, 0x1C($sp)
    /* 40678 8004FE78 1800B08F */  lw         $s0, 0x18($sp)
    /* 4067C 8004FE7C 0800E003 */  jr         $ra
    /* 40680 8004FE80 2800BD27 */   addiu     $sp, $sp, 0x28
endlabel GPU_ProcessRenderQueue
