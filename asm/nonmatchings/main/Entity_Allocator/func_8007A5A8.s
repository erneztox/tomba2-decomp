nonmatching func_8007A5A8, 0x7C

glabel func_8007A5A8
    /* 6ADA8 8007A5A8 0F80083C */  lui        $t0, %hi(D_800E8098)
    /* 6ADAC 8007A5AC 9880068D */  lw         $a2, %lo(D_800E8098)($t0)
    /* 6ADB0 8007A5B0 00000000 */  nop
    /* 6ADB4 8007A5B4 1900C010 */  beqz       $a2, .L8007A61C
    /* 6ADB8 8007A5B8 21488000 */   addu      $t1, $a0, $zero
    /* 6ADBC 8007A5BC 0E80033C */  lui        $v1, %hi(D_800E7E7C)
    /* 6ADC0 8007A5C0 0F80043C */  lui        $a0, %hi(D_800F239C)
    /* 6ADC4 8007A5C4 2400C58C */  lw         $a1, 0x24($a2)
    /* 6ADC8 8007A5C8 7C7E6290 */  lbu        $v0, %lo(D_800E7E7C)($v1)
    /* 6ADCC 8007A5CC 9C23878C */  lw         $a3, %lo(D_800F239C)($a0)
    /* 6ADD0 8007A5D0 9C238424 */  addiu      $a0, $a0, %lo(D_800F239C)
    /* 6ADD4 8007A5D4 2400C0AC */  sw         $zero, 0x24($a2)
    /* 6ADD8 8007A5D8 FFFF4224 */  addiu      $v0, $v0, -0x1
    /* 6ADDC 8007A5DC 7C7E62A0 */  sb         $v0, %lo(D_800E7E7C)($v1)
    /* 6ADE0 8007A5E0 988005AD */  sw         $a1, %lo(D_800E8098)($t0)
    /* 6ADE4 8007A5E4 0400E014 */  bnez       $a3, .L8007A5F8
    /* 6ADE8 8007A5E8 2000C7AC */   sw        $a3, 0x20($a2)
    /* 6ADEC 8007A5EC 0F80023C */  lui        $v0, %hi(g_ActiveEntitiesList)
    /* 6ADF0 8007A5F0 7FE90108 */  j          .L8007A5FC
    /* 6ADF4 8007A5F4 242646AC */   sw        $a2, %lo(g_ActiveEntitiesList)($v0)
  .L8007A5F8:
    /* 6ADF8 8007A5F8 2400E6AC */  sw         $a2, 0x24($a3)
  .L8007A5FC:
    /* 6ADFC 8007A5FC 2110C000 */  addu       $v0, $a2, $zero
    /* 6AE00 8007A600 01000324 */  addiu      $v1, $zero, 0x1
    /* 6AE04 8007A604 000082AC */  sw         $v0, 0x0($a0)
    /* 6AE08 8007A608 0A0043A0 */  sb         $v1, 0xA($v0)
    /* 6AE0C 8007A60C 02000324 */  addiu      $v1, $zero, 0x2
    /* 6AE10 8007A610 000043A0 */  sb         $v1, 0x0($v0)
    /* 6AE14 8007A614 0800E003 */  jr         $ra
    /* 6AE18 8007A618 0C0049A0 */   sb        $t1, 0xC($v0)
  .L8007A61C:
    /* 6AE1C 8007A61C 0800E003 */  jr         $ra
    /* 6AE20 8007A620 21100000 */   addu      $v0, $zero, $zero
endlabel func_8007A5A8
