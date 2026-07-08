nonmatching func_8003CCA4, 0x134

glabel func_8003CCA4
    /* 2D4A4 8003CCA4 E0FFBD27 */  addiu      $sp, $sp, -0x20
    /* 2D4A8 8003CCA8 1800B2AF */  sw         $s2, 0x18($sp)
    /* 2D4AC 8003CCAC 21908000 */  addu       $s2, $a0, $zero
    /* 2D4B0 8003CCB0 1C00BFAF */  sw         $ra, 0x1C($sp)
    /* 2D4B4 8003CCB4 1400B1AF */  sw         $s1, 0x14($sp)
    /* 2D4B8 8003CCB8 1000B0AF */  sw         $s0, 0x10($sp)
    /* 2D4BC 8003CCBC 0B004392 */  lbu        $v1, 0xB($s2)
    /* 2D4C0 8003CCC0 801F023C */  lui        $v0, (0x1F80028C >> 16)
    /* 2D4C4 8003CCC4 8C0252AC */  sw         $s2, (0x1F80028C & 0xFFFF)($v0)
    /* 2D4C8 8003CCC8 0D004292 */  lbu        $v0, 0xD($s2)
    /* 2D4CC 8003CCCC 0F006338 */  xori       $v1, $v1, 0xF
    /* 2D4D0 8003CCD0 0100652C */  sltiu      $a1, $v1, 0x1
    /* 2D4D4 8003CCD4 0B004330 */  andi       $v1, $v0, 0xB
    /* 2D4D8 8003CCD8 0900622C */  sltiu      $v0, $v1, 0x9
    /* 2D4DC 8003CCDC 38004010 */  beqz       $v0, .L8003CDC0
    /* 2D4E0 8003CCE0 0180023C */   lui       $v0, %hi(jtbl_80014EC8)
    /* 2D4E4 8003CCE4 C84E4224 */  addiu      $v0, $v0, %lo(jtbl_80014EC8)
    /* 2D4E8 8003CCE8 80180300 */  sll        $v1, $v1, 2
    /* 2D4EC 8003CCEC 21186200 */  addu       $v1, $v1, $v0
    /* 2D4F0 8003CCF0 0000628C */  lw         $v0, 0x0($v1)
    /* 2D4F4 8003CCF4 00000000 */  nop
    /* 2D4F8 8003CCF8 08004000 */  jr         $v0
    /* 2D4FC 8003CCFC 00000000 */   nop
    /* 2D500 8003CD00 76F3000C */  jal        func_8003CDD8
    /* 2D504 8003CD04 21204002 */   addu      $a0, $s2, $zero
    /* 2D508 8003CD08 70F30008 */  j          .L8003CDC0
    /* 2D50C 8003CD0C 00000000 */   nop
    /* 2D510 8003CD10 0C80103C */  lui        $s0, %hi(D_800BF544)
    /* 2D514 8003CD14 44F5118E */  lw         $s1, %lo(D_800BF544)($s0)
    /* 2D518 8003CD18 76F3000C */  jal        func_8003CDD8
    /* 2D51C 8003CD1C 21204002 */   addu      $a0, $s2, $zero
    /* 2D520 8003CD20 21204002 */  addu       $a0, $s2, $zero
    /* 2D524 8003CD24 44F5068E */  lw         $a2, %lo(D_800BF544)($s0)
    /* 2D528 8003CD28 61F5000C */  jal        func_8003D584
    /* 2D52C 8003CD2C 21282002 */   addu      $a1, $s1, $zero
    /* 2D530 8003CD30 70F30008 */  j          .L8003CDC0
    /* 2D534 8003CD34 00000000 */   nop
    /* 2D538 8003CD38 0C80103C */  lui        $s0, %hi(D_800BF544)
    /* 2D53C 8003CD3C 44F5118E */  lw         $s1, %lo(D_800BF544)($s0)
    /* 2D540 8003CD40 76F3000C */  jal        func_8003CDD8
    /* 2D544 8003CD44 21204002 */   addu      $a0, $s2, $zero
    /* 2D548 8003CD48 21204002 */  addu       $a0, $s2, $zero
    /* 2D54C 8003CD4C 44F5068E */  lw         $a2, %lo(D_800BF544)($s0)
    /* 2D550 8003CD50 D1FC000C */  jal        func_8003F344
    /* 2D554 8003CD54 21282002 */   addu      $a1, $s1, $zero
    /* 2D558 8003CD58 70F30008 */  j          .L8003CDC0
    /* 2D55C 8003CD5C 00000000 */   nop
    /* 2D560 8003CD60 0C80103C */  lui        $s0, %hi(D_800BF544)
    /* 2D564 8003CD64 44F5118E */  lw         $s1, %lo(D_800BF544)($s0)
    /* 2D568 8003CD68 76F3000C */  jal        func_8003CDD8
    /* 2D56C 8003CD6C 21204002 */   addu      $a0, $s2, $zero
    /* 2D570 8003CD70 1B004292 */  lbu        $v0, 0x1B($s2)
    /* 2D574 8003CD74 44F5068E */  lw         $a2, %lo(D_800BF544)($s0)
    /* 2D578 8003CD78 05004010 */  beqz       $v0, .L8003CD90
    /* 2D57C 8003CD7C 21204002 */   addu      $a0, $s2, $zero
    /* 2D580 8003CD80 FDFC000C */  jal        func_8003F3F4
    /* 2D584 8003CD84 21282002 */   addu      $a1, $s1, $zero
    /* 2D588 8003CD88 70F30008 */  j          .L8003CDC0
    /* 2D58C 8003CD8C 00000000 */   nop
  .L8003CD90:
    /* 2D590 8003CD90 31FD000C */  jal        func_8003F4C4
    /* 2D594 8003CD94 21282002 */   addu      $a1, $s1, $zero
    /* 2D598 8003CD98 70F30008 */  j          .L8003CDC0
    /* 2D59C 8003CD9C 00000000 */   nop
    /* 2D5A0 8003CDA0 0C80103C */  lui        $s0, %hi(D_800BF544)
    /* 2D5A4 8003CDA4 44F5118E */  lw         $s1, %lo(D_800BF544)($s0)
    /* 2D5A8 8003CDA8 76F3000C */  jal        func_8003CDD8
    /* 2D5AC 8003CDAC 21204002 */   addu      $a0, $s2, $zero
    /* 2D5B0 8003CDB0 21204002 */  addu       $a0, $s2, $zero
    /* 2D5B4 8003CDB4 44F5068E */  lw         $a2, %lo(D_800BF544)($s0)
    /* 2D5B8 8003CDB8 65FD000C */  jal        func_8003F594
    /* 2D5BC 8003CDBC 21282002 */   addu      $a1, $s1, $zero
  .L8003CDC0:
    /* 2D5C0 8003CDC0 1C00BF8F */  lw         $ra, 0x1C($sp)
    /* 2D5C4 8003CDC4 1800B28F */  lw         $s2, 0x18($sp)
    /* 2D5C8 8003CDC8 1400B18F */  lw         $s1, 0x14($sp)
    /* 2D5CC 8003CDCC 1000B08F */  lw         $s0, 0x10($sp)
    /* 2D5D0 8003CDD0 0800E003 */  jr         $ra
    /* 2D5D4 8003CDD4 2000BD27 */   addiu     $sp, $sp, 0x20
endlabel func_8003CCA4
