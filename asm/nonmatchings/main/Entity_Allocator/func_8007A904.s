nonmatching func_8007A904, 0x7C

glabel func_8007A904
    /* 6B104 8007A904 1080023C */  lui        $v0, %hi(g_InactiveEntitiesList)
    /* 6B108 8007A908 68B1448C */  lw         $a0, %lo(g_InactiveEntitiesList)($v0)
    /* 6B10C 8007A90C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 6B110 8007A910 1400BFAF */  sw         $ra, 0x14($sp)
    /* 6B114 8007A914 09008010 */  beqz       $a0, .L8007A93C
    /* 6B118 8007A918 1000B0AF */   sw        $s0, 0x10($sp)
  .L8007A91C:
    /* 6B11C 8007A91C 2400908C */  lw         $s0, 0x24($a0)
    /* 6B120 8007A920 1C00828C */  lw         $v0, 0x1C($a0)
    /* 6B124 8007A924 00000000 */  nop
    /* 6B128 8007A928 09F84000 */  jalr       $v0
    /* 6B12C 8007A92C 010080A0 */   sb        $zero, 0x1($a0)
    /* 6B130 8007A930 21200002 */  addu       $a0, $s0, $zero
    /* 6B134 8007A934 F9FF8014 */  bnez       $a0, .L8007A91C
    /* 6B138 8007A938 00000000 */   nop
  .L8007A93C:
    /* 6B13C 8007A93C 0F80023C */  lui        $v0, %hi(g_ActiveEntitiesList)
    /* 6B140 8007A940 2426448C */  lw         $a0, %lo(g_ActiveEntitiesList)($v0)
    /* 6B144 8007A944 00000000 */  nop
    /* 6B148 8007A948 09008010 */  beqz       $a0, .L8007A970
    /* 6B14C 8007A94C 00000000 */   nop
  .L8007A950:
    /* 6B150 8007A950 2400908C */  lw         $s0, 0x24($a0)
    /* 6B154 8007A954 1C00828C */  lw         $v0, 0x1C($a0)
    /* 6B158 8007A958 00000000 */  nop
    /* 6B15C 8007A95C 09F84000 */  jalr       $v0
    /* 6B160 8007A960 010080A0 */   sb        $zero, 0x1($a0)
    /* 6B164 8007A964 21200002 */  addu       $a0, $s0, $zero
    /* 6B168 8007A968 F9FF8014 */  bnez       $a0, .L8007A950
    /* 6B16C 8007A96C 00000000 */   nop
  .L8007A970:
    /* 6B170 8007A970 1400BF8F */  lw         $ra, 0x14($sp)
    /* 6B174 8007A974 1000B08F */  lw         $s0, 0x10($sp)
    /* 6B178 8007A978 0800E003 */  jr         $ra
    /* 6B17C 8007A97C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8007A904
