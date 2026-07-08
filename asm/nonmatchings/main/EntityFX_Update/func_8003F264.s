nonmatching func_8003F264, 0x94

glabel func_8003F264
    /* 2FA64 8003F264 0A80023C */  lui        $v0, %hi(D_800A3B0C)
    /* 2FA68 8003F268 0C3B4390 */  lbu        $v1, %lo(D_800A3B0C)($v0)
    /* 2FA6C 8003F26C E0FFBD27 */  addiu      $sp, $sp, -0x20
    /* 2FA70 8003F270 1800BFAF */  sw         $ra, 0x18($sp)
    /* 2FA74 8003F274 1400B1AF */  sw         $s1, 0x14($sp)
    /* 2FA78 8003F278 03006228 */  slti       $v0, $v1, 0x3
    /* 2FA7C 8003F27C 19004010 */  beqz       $v0, .L8003F2E4
    /* 2FA80 8003F280 1000B0AF */   sw        $s0, 0x10($sp)
    /* 2FA84 8003F284 17006010 */  beqz       $v1, .L8003F2E4
    /* 2FA88 8003F288 0C80113C */   lui       $s1, %hi(D_800BF544)
    /* 2FA8C 8003F28C 44F5308E */  lw         $s0, %lo(D_800BF544)($s1)
    /* 2FA90 8003F290 01000524 */  addiu      $a1, $zero, 0x1
    /* 2FA94 8003F294 6C0F020C */  jal        func_80083DB0
    /* 2FA98 8003F298 21200002 */   addu      $a0, $s0, $zero
    /* 2FA9C 8003F29C FF00043C */  lui        $a0, (0xFFFFFF >> 16)
    /* 2FAA0 8003F2A0 FFFF8434 */  ori        $a0, $a0, (0xFFFFFF & 0xFFFF)
    /* 2FAA4 8003F2A4 0F80023C */  lui        $v0, %hi(D_800ED8C8)
    /* 2FAA8 8003F2A8 00FF063C */  lui        $a2, (0xFF000000 >> 16)
    /* 2FAAC 8003F2AC C8D8458C */  lw         $a1, %lo(D_800ED8C8)($v0)
    /* 2FAB0 8003F2B0 0000038E */  lw         $v1, 0x0($s0)
    /* 2FAB4 8003F2B4 FC1FA28C */  lw         $v0, 0x1FFC($a1)
    /* 2FAB8 8003F2B8 24186600 */  and        $v1, $v1, $a2
    /* 2FABC 8003F2BC 24104400 */  and        $v0, $v0, $a0
    /* 2FAC0 8003F2C0 25186200 */  or         $v1, $v1, $v0
    /* 2FAC4 8003F2C4 24200402 */  and        $a0, $s0, $a0
    /* 2FAC8 8003F2C8 000003AE */  sw         $v1, 0x0($s0)
    /* 2FACC 8003F2CC FC1FA28C */  lw         $v0, 0x1FFC($a1)
    /* 2FAD0 8003F2D0 0C001026 */  addiu      $s0, $s0, 0xC
    /* 2FAD4 8003F2D4 44F530AE */  sw         $s0, %lo(D_800BF544)($s1)
    /* 2FAD8 8003F2D8 24104600 */  and        $v0, $v0, $a2
    /* 2FADC 8003F2DC 25104400 */  or         $v0, $v0, $a0
    /* 2FAE0 8003F2E0 FC1FA2AC */  sw         $v0, 0x1FFC($a1)
  .L8003F2E4:
    /* 2FAE4 8003F2E4 1800BF8F */  lw         $ra, 0x18($sp)
    /* 2FAE8 8003F2E8 1400B18F */  lw         $s1, 0x14($sp)
    /* 2FAEC 8003F2EC 1000B08F */  lw         $s0, 0x10($sp)
    /* 2FAF0 8003F2F0 0800E003 */  jr         $ra
    /* 2FAF4 8003F2F4 2000BD27 */   addiu     $sp, $sp, 0x20
endlabel func_8003F264
