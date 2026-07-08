nonmatching Entity_UpdateMovement, 0x88

glabel Entity_UpdateMovement
    /* 2F79C 8003EF9C E0FFBD27 */  addiu      $sp, $sp, -0x20
    /* 2F7A0 8003EFA0 1800B2AF */  sw         $s2, 0x18($sp)
    /* 2F7A4 8003EFA4 21908000 */  addu       $s2, $a0, $zero
    /* 2F7A8 8003EFA8 1C00BFAF */  sw         $ra, 0x1C($sp)
    /* 2F7AC 8003EFAC 1400B1AF */  sw         $s1, 0x14($sp)
    /* 2F7B0 8003EFB0 1000B0AF */  sw         $s0, 0x10($sp)
    /* 2F7B4 8003EFB4 0B004292 */  lbu        $v0, 0xB($s2)
    /* 2F7B8 8003EFB8 0D004392 */  lbu        $v1, 0xD($s2)
    /* 2F7BC 8003EFBC 0F004238 */  xori       $v0, $v0, 0xF
    /* 2F7C0 8003EFC0 0F006330 */  andi       $v1, $v1, 0xF
    /* 2F7C4 8003EFC4 06006010 */  beqz       $v1, .L8003EFE0
    /* 2F7C8 8003EFC8 0100452C */   sltiu     $a1, $v0, 0x1
    /* 2F7CC 8003EFCC 02000224 */  addiu      $v0, $zero, 0x2
    /* 2F7D0 8003EFD0 07006210 */  beq        $v1, $v0, .L8003EFF0
    /* 2F7D4 8003EFD4 0C80103C */   lui       $s0, %hi(D_800BF544)
    /* 2F7D8 8003EFD8 03FC0008 */  j          .L8003F00C
    /* 2F7DC 8003EFDC 00000000 */   nop
  .L8003EFE0:
    /* 2F7E0 8003EFE0 1FFC000C */  jal        func_8003F07C
    /* 2F7E4 8003EFE4 21204002 */   addu      $a0, $s2, $zero
    /* 2F7E8 8003EFE8 03FC0008 */  j          .L8003F00C
    /* 2F7EC 8003EFEC 00000000 */   nop
  .L8003EFF0:
    /* 2F7F0 8003EFF0 44F5118E */  lw         $s1, %lo(D_800BF544)($s0)
    /* 2F7F4 8003EFF4 1FFC000C */  jal        func_8003F07C
    /* 2F7F8 8003EFF8 21204002 */   addu      $a0, $s2, $zero
    /* 2F7FC 8003EFFC 21204002 */  addu       $a0, $s2, $zero
    /* 2F800 8003F000 44F5068E */  lw         $a2, %lo(D_800BF544)($s0)
    /* 2F804 8003F004 61F5000C */  jal        func_8003D584
    /* 2F808 8003F008 21282002 */   addu      $a1, $s1, $zero
  .L8003F00C:
    /* 2F80C 8003F00C 1C00BF8F */  lw         $ra, 0x1C($sp)
    /* 2F810 8003F010 1800B28F */  lw         $s2, 0x18($sp)
    /* 2F814 8003F014 1400B18F */  lw         $s1, 0x14($sp)
    /* 2F818 8003F018 1000B08F */  lw         $s0, 0x10($sp)
    /* 2F81C 8003F01C 0800E003 */  jr         $ra
    /* 2F820 8003F020 2000BD27 */   addiu     $sp, $sp, 0x20
endlabel Entity_UpdateMovement
