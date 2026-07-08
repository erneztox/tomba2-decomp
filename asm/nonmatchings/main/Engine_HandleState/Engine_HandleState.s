nonmatching Engine_HandleState, 0x12C

glabel Engine_HandleState
    /* 2E704 8003DF04 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 2E708 8003DF08 0C80043C */  lui        $a0, %hi(D_800BF870)
    /* 2E70C 8003DF0C 70F88524 */  addiu      $a1, $a0, %lo(D_800BF870)
    /* 2E710 8003DF10 70F88390 */  lbu        $v1, %lo(D_800BF870)($a0)
    /* 2E714 8003DF14 15000224 */  addiu      $v0, $zero, 0x15
    /* 2E718 8003DF18 06006214 */  bne        $v1, $v0, .L8003DF34
    /* 2E71C 8003DF1C 1000BFAF */   sw        $ra, 0x10($sp)
    /* 2E720 8003DF20 0F80043C */  lui        $a0, %hi(D_800ED018)
    /* 2E724 8003DF24 8C2F040C */  jal        func_8010BE30
    /* 2E728 8003DF28 18D08424 */   addiu     $a0, $a0, %lo(D_800ED018)
    /* 2E72C 8003DF2C 08F80008 */  j          .L8003E020
    /* 2E730 8003DF30 00000000 */   nop
  .L8003DF34:
    /* 2E734 8003DF34 0300A290 */  lbu        $v0, 0x3($a1)
    /* 2E738 8003DF38 00000000 */  nop
    /* 2E73C 8003DF3C 38004014 */  bnez       $v0, .L8003E020
    /* 2E740 8003DF40 00000000 */   nop
    /* 2E744 8003DF44 70F88390 */  lbu        $v1, %lo(D_800BF870)($a0)
    /* 2E748 8003DF48 00000000 */  nop
    /* 2E74C 8003DF4C 1000622C */  sltiu      $v0, $v1, 0x10
    /* 2E750 8003DF50 33004010 */  beqz       $v0, .L8003E020
    /* 2E754 8003DF54 0180023C */   lui       $v0, %hi(jtbl_80014FC0)
    /* 2E758 8003DF58 C04F4224 */  addiu      $v0, $v0, %lo(jtbl_80014FC0)
    /* 2E75C 8003DF5C 80180300 */  sll        $v1, $v1, 2
    /* 2E760 8003DF60 21186200 */  addu       $v1, $v1, $v0
    /* 2E764 8003DF64 0000628C */  lw         $v0, 0x0($v1)
    /* 2E768 8003DF68 00000000 */  nop
    /* 2E76C 8003DF6C 08004000 */  jr         $v0
    /* 2E770 8003DF70 00000000 */   nop
    /* 2E774 8003DF74 0F80043C */  lui        $a0, %hi(D_800ED018)
    /* 2E778 8003DF78 6655040C */  jal        func_80115598
    /* 2E77C 8003DF7C 18D08424 */   addiu     $a0, $a0, %lo(D_800ED018)
    /* 2E780 8003DF80 08F80008 */  j          .L8003E020
    /* 2E784 8003DF84 00000000 */   nop
    /* 2E788 8003DF88 0F80043C */  lui        $a0, %hi(D_800ED018)
    /* 2E78C 8003DF8C 37FC040C */  jal        func_8013F0DC
    /* 2E790 8003DF90 18D08424 */   addiu     $a0, $a0, %lo(D_800ED018)
    /* 2E794 8003DF94 08F80008 */  j          .L8003E020
    /* 2E798 8003DF98 00000000 */   nop
    /* 2E79C 8003DF9C 0F80043C */  lui        $a0, %hi(D_800ED018)
    /* 2E7A0 8003DFA0 CADB040C */  jal        func_80136F28
    /* 2E7A4 8003DFA4 18D08424 */   addiu     $a0, $a0, %lo(D_800ED018)
    /* 2E7A8 8003DFA8 08F80008 */  j          .L8003E020
    /* 2E7AC 8003DFAC 00000000 */   nop
    /* 2E7B0 8003DFB0 0F80043C */  lui        $a0, %hi(D_800ED018)
    /* 2E7B4 8003DFB4 A506050C */  jal        func_80141A94
    /* 2E7B8 8003DFB8 18D08424 */   addiu     $a0, $a0, %lo(D_800ED018)
    /* 2E7BC 8003DFBC 08F80008 */  j          .L8003E020
    /* 2E7C0 8003DFC0 00000000 */   nop
    /* 2E7C4 8003DFC4 0F80043C */  lui        $a0, %hi(D_800ED018)
    /* 2E7C8 8003DFC8 4EBE040C */  jal        func_8012F938
    /* 2E7CC 8003DFCC 18D08424 */   addiu     $a0, $a0, %lo(D_800ED018)
    /* 2E7D0 8003DFD0 08F80008 */  j          .L8003E020
    /* 2E7D4 8003DFD4 00000000 */   nop
    /* 2E7D8 8003DFD8 0F80043C */  lui        $a0, %hi(D_800ED018)
    /* 2E7DC 8003DFDC BB50040C */  jal        func_801142EC
    /* 2E7E0 8003DFE0 18D08424 */   addiu     $a0, $a0, %lo(D_800ED018)
    /* 2E7E4 8003DFE4 08F80008 */  j          .L8003E020
    /* 2E7E8 8003DFE8 00000000 */   nop
    /* 2E7EC 8003DFEC 0F80043C */  lui        $a0, %hi(D_800ED018)
    /* 2E7F0 8003DFF0 6C50040C */  jal        func_801141B0
    /* 2E7F4 8003DFF4 18D08424 */   addiu     $a0, $a0, %lo(D_800ED018)
    /* 2E7F8 8003DFF8 08F80008 */  j          .L8003E020
    /* 2E7FC 8003DFFC 00000000 */   nop
    /* 2E800 8003E000 0F80043C */  lui        $a0, %hi(D_800ED018)
    /* 2E804 8003E004 E75A040C */  jal        func_80116B9C
    /* 2E808 8003E008 18D08424 */   addiu     $a0, $a0, %lo(D_800ED018)
    /* 2E80C 8003E00C 08F80008 */  j          .L8003E020
    /* 2E810 8003E010 00000000 */   nop
    /* 2E814 8003E014 0F80043C */  lui        $a0, %hi(D_800ED018)
    /* 2E818 8003E018 DE59040C */  jal        func_80116778
    /* 2E81C 8003E01C 18D08424 */   addiu     $a0, $a0, %lo(D_800ED018)
  .L8003E020:
    /* 2E820 8003E020 1000BF8F */  lw         $ra, 0x10($sp)
    /* 2E824 8003E024 00000000 */  nop
    /* 2E828 8003E028 0800E003 */  jr         $ra
    /* 2E82C 8003E02C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel Engine_HandleState
