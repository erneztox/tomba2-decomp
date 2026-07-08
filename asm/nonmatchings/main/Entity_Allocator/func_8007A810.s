nonmatching func_8007A810, 0xD0

glabel func_8007A810
    /* 6B010 8007A810 D8FFBD27 */  addiu      $sp, $sp, -0x28
    /* 6B014 8007A814 0E80043C */  lui        $a0, %hi(D_800E7E80)
    /* 6B018 8007A818 807E8424 */  addiu      $a0, $a0, %lo(D_800E7E80)
    /* 6B01C 8007A81C 21280000 */  addu       $a1, $zero, $zero
    /* 6B020 8007A820 84010624 */  addiu      $a2, $zero, 0x184
    /* 6B024 8007A824 2000BFAF */  sw         $ra, 0x20($sp)
    /* 6B028 8007A828 1C00B3AF */  sw         $s3, 0x1C($sp)
    /* 6B02C 8007A82C 1800B2AF */  sw         $s2, 0x18($sp)
    /* 6B030 8007A830 1400B1AF */  sw         $s1, 0x14($sp)
    /* 6B034 8007A834 0869020C */  jal        func_8009A420
    /* 6B038 8007A838 1000B0AF */   sw        $s0, 0x10($sp)
    /* 6B03C 8007A83C 21880000 */  addu       $s1, $zero, $zero
    /* 6B040 8007A840 05001324 */  addiu      $s3, $zero, 0x5
    /* 6B044 8007A844 1080023C */  lui        $v0, %hi(D_80100690)
    /* 6B048 8007A848 90064224 */  addiu      $v0, $v0, %lo(D_80100690)
    /* 6B04C 8007A84C 08015224 */  addiu      $s2, $v0, 0x108
    /* 6B050 8007A850 21804000 */  addu       $s0, $v0, $zero
    /* 6B054 8007A854 0F80023C */  lui        $v0, %hi(g_BackgroundEntitiesList)
    /* 6B058 8007A858 382740AC */  sw         $zero, %lo(g_BackgroundEntitiesList)($v0)
    /* 6B05C 8007A85C 0F80023C */  lui        $v0, %hi(D_800F23A0)
    /* 6B060 8007A860 A02340AC */  sw         $zero, %lo(D_800F23A0)($v0)
  .L8007A864:
    /* 6B064 8007A864 21200002 */  addu       $a0, $s0, $zero
    /* 6B068 8007A868 21280000 */  addu       $a1, $zero, $zero
    /* 6B06C 8007A86C 0869020C */  jal        func_8009A420
    /* 6B070 8007A870 08010624 */   addiu     $a2, $zero, 0x108
    /* 6B074 8007A874 240012AE */  sw         $s2, 0x24($s0)
    /* 6B078 8007A878 08015226 */  addiu      $s2, $s2, 0x108
    /* 6B07C 8007A87C 280013A2 */  sb         $s3, 0x28($s0)
    /* 6B080 8007A880 01003126 */  addiu      $s1, $s1, 0x1
    /* 6B084 8007A884 0400222A */  slti       $v0, $s1, 0x4
    /* 6B088 8007A888 F6FF4014 */  bnez       $v0, .L8007A864
    /* 6B08C 8007A88C 08011026 */   addiu     $s0, $s0, 0x108
    /* 6B090 8007A890 1080043C */  lui        $a0, %hi(D_80100690)
    /* 6B094 8007A894 90068424 */  addiu      $a0, $a0, %lo(D_80100690)
    /* 6B098 8007A898 FFFF2326 */  addiu      $v1, $s1, -0x1
    /* 6B09C 8007A89C 40110300 */  sll        $v0, $v1, 5
    /* 6B0A0 8007A8A0 21104300 */  addu       $v0, $v0, $v1
    /* 6B0A4 8007A8A4 C0100200 */  sll        $v0, $v0, 3
    /* 6B0A8 8007A8A8 21104400 */  addu       $v0, $v0, $a0
    /* 6B0AC 8007A8AC 240040AC */  sw         $zero, 0x24($v0)
    /* 6B0B0 8007A8B0 0F80023C */  lui        $v0, %hi(D_800F273C)
    /* 6B0B4 8007A8B4 2000BF8F */  lw         $ra, 0x20($sp)
    /* 6B0B8 8007A8B8 1C00B38F */  lw         $s3, 0x1C($sp)
    /* 6B0BC 8007A8BC 1800B28F */  lw         $s2, 0x18($sp)
    /* 6B0C0 8007A8C0 1400B18F */  lw         $s1, 0x14($sp)
    /* 6B0C4 8007A8C4 1000B08F */  lw         $s0, 0x10($sp)
    /* 6B0C8 8007A8C8 0F80033C */  lui        $v1, %hi(D_800F2410)
    /* 6B0CC 8007A8CC 3C2744AC */  sw         $a0, %lo(D_800F273C)($v0)
    /* 6B0D0 8007A8D0 04000224 */  addiu      $v0, $zero, 0x4
    /* 6B0D4 8007A8D4 102462A0 */  sb         $v0, %lo(D_800F2410)($v1)
    /* 6B0D8 8007A8D8 0800E003 */  jr         $ra
    /* 6B0DC 8007A8DC 2800BD27 */   addiu     $sp, $sp, 0x28
endlabel func_8007A810
