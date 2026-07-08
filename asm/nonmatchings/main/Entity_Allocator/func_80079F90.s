nonmatching func_80079F90, 0x19C

glabel func_80079F90
    /* 6A790 80079F90 0F800A3C */  lui        $t2, %hi(D_800F2398)
    /* 6A794 80079F94 9823488D */  lw         $t0, %lo(D_800F2398)($t2)
    /* 6A798 80079F98 00000000 */  nop
    /* 6A79C 80079F9C 61000011 */  beqz       $t0, .L8007A124
    /* 6A7A0 80079FA0 21488000 */   addu      $t1, $a0, $zero
    /* 6A7A4 80079FA4 0F80033C */  lui        $v1, %hi(D_800ED8CC)
    /* 6A7A8 80079FA8 CCD86290 */  lbu        $v0, %lo(D_800ED8CC)($v1)
    /* 6A7AC 80079FAC 2400048D */  lw         $a0, 0x24($t0)
    /* 6A7B0 80079FB0 FFFF4224 */  addiu      $v0, $v0, -0x1
    /* 6A7B4 80079FB4 CCD862A0 */  sb         $v0, %lo(D_800ED8CC)($v1)
    /* 6A7B8 80079FB8 01000224 */  addiu      $v0, $zero, 0x1
    /* 6A7BC 80079FBC 0B00E210 */  beq        $a3, $v0, .L80079FEC
    /* 6A7C0 80079FC0 982344AD */   sw        $a0, %lo(D_800F2398)($t2)
    /* 6A7C4 80079FC4 0200E228 */  slti       $v0, $a3, 0x2
    /* 6A7C8 80079FC8 04004014 */  bnez       $v0, .L80079FDC
    /* 6A7CC 80079FCC 1080023C */   lui       $v0, %hi(g_InactiveEntitiesList)
    /* 6A7D0 80079FD0 02000224 */  addiu      $v0, $zero, 0x2
    /* 6A7D4 80079FD4 0A00E210 */  beq        $a3, $v0, .L8007A000
    /* 6A7D8 80079FD8 1080023C */   lui       $v0, %hi(g_InactiveEntitiesList)
  .L80079FDC:
    /* 6A7DC 80079FDC 68B14424 */  addiu      $a0, $v0, %lo(g_InactiveEntitiesList)
    /* 6A7E0 80079FE0 0F80023C */  lui        $v0, %hi(D_800F23A8)
    /* 6A7E4 80079FE4 04E80108 */  j          .L8007A010
    /* 6A7E8 80079FE8 A8234324 */   addiu     $v1, $v0, %lo(D_800F23A8)
  .L80079FEC:
    /* 6A7EC 80079FEC 0F80023C */  lui        $v0, %hi(g_ActiveEntitiesList)
    /* 6A7F0 80079FF0 24264424 */  addiu      $a0, $v0, %lo(g_ActiveEntitiesList)
    /* 6A7F4 80079FF4 0F80023C */  lui        $v0, %hi(D_800F239C)
    /* 6A7F8 80079FF8 04E80108 */  j          .L8007A010
    /* 6A7FC 80079FFC 9C234324 */   addiu     $v1, $v0, %lo(D_800F239C)
  .L8007A000:
    /* 6A800 8007A000 0F80023C */  lui        $v0, %hi(g_BackgroundEntitiesList)
    /* 6A804 8007A004 38274424 */  addiu      $a0, $v0, %lo(g_BackgroundEntitiesList)
    /* 6A808 8007A008 0F80023C */  lui        $v0, %hi(D_800F23A0)
    /* 6A80C 8007A00C A0234324 */  addiu      $v1, $v0, %lo(D_800F23A0)
  .L8007A010:
    /* 6A810 8007A010 01000224 */  addiu      $v0, $zero, 0x1
    /* 6A814 8007A014 1800C210 */  beq        $a2, $v0, .L8007A078
    /* 6A818 8007A018 0200C228 */   slti      $v0, $a2, 0x2
    /* 6A81C 8007A01C 05004010 */  beqz       $v0, .L8007A034
    /* 6A820 8007A020 02000224 */   addiu     $v0, $zero, 0x2
    /* 6A824 8007A024 0900C010 */  beqz       $a2, .L8007A04C
    /* 6A828 8007A028 21100001 */   addu      $v0, $t0, $zero
    /* 6A82C 8007A02C 45E80108 */  j          .L8007A114
    /* 6A830 8007A030 02000324 */   addiu     $v1, $zero, 0x2
  .L8007A034:
    /* 6A834 8007A034 1D00C210 */  beq        $a2, $v0, .L8007A0AC
    /* 6A838 8007A038 03000224 */   addiu     $v0, $zero, 0x3
    /* 6A83C 8007A03C 2800C210 */  beq        $a2, $v0, .L8007A0E0
    /* 6A840 8007A040 21100001 */   addu      $v0, $t0, $zero
    /* 6A844 8007A044 45E80108 */  j          .L8007A114
    /* 6A848 8007A048 02000324 */   addiu     $v1, $zero, 0x2
  .L8007A04C:
    /* 6A84C 8007A04C 2000228D */  lw         $v0, 0x20($t1)
    /* 6A850 8007A050 00000000 */  nop
    /* 6A854 8007A054 08004010 */  beqz       $v0, .L8007A078
    /* 6A858 8007A058 00000000 */   nop
    /* 6A85C 8007A05C 200002AD */  sw         $v0, 0x20($t0)
    /* 6A860 8007A060 240009AD */  sw         $t1, 0x24($t0)
    /* 6A864 8007A064 2000228D */  lw         $v0, 0x20($t1)
    /* 6A868 8007A068 00000000 */  nop
    /* 6A86C 8007A06C 240048AC */  sw         $t0, 0x24($v0)
    /* 6A870 8007A070 43E80108 */  j          .L8007A10C
    /* 6A874 8007A074 200028AD */   sw        $t0, 0x20($t1)
  .L8007A078:
    /* 6A878 8007A078 200000AD */  sw         $zero, 0x20($t0)
    /* 6A87C 8007A07C 0000828C */  lw         $v0, 0x0($a0)
    /* 6A880 8007A080 00000000 */  nop
    /* 6A884 8007A084 240002AD */  sw         $v0, 0x24($t0)
    /* 6A888 8007A088 0000828C */  lw         $v0, 0x0($a0)
    /* 6A88C 8007A08C 00000000 */  nop
    /* 6A890 8007A090 03004014 */  bnez       $v0, .L8007A0A0
    /* 6A894 8007A094 00000000 */   nop
    /* 6A898 8007A098 29E80108 */  j          .L8007A0A4
    /* 6A89C 8007A09C 000068AC */   sw        $t0, 0x0($v1)
  .L8007A0A0:
    /* 6A8A0 8007A0A0 200048AC */  sw         $t0, 0x20($v0)
  .L8007A0A4:
    /* 6A8A4 8007A0A4 43E80108 */  j          .L8007A10C
    /* 6A8A8 8007A0A8 000088AC */   sw        $t0, 0x0($a0)
  .L8007A0AC:
    /* 6A8AC 8007A0AC 2400228D */  lw         $v0, 0x24($t1)
    /* 6A8B0 8007A0B0 00000000 */  nop
    /* 6A8B4 8007A0B4 0A004010 */  beqz       $v0, .L8007A0E0
    /* 6A8B8 8007A0B8 00000000 */   nop
    /* 6A8BC 8007A0BC 200009AD */  sw         $t1, 0x20($t0)
    /* 6A8C0 8007A0C0 2400228D */  lw         $v0, 0x24($t1)
    /* 6A8C4 8007A0C4 00000000 */  nop
    /* 6A8C8 8007A0C8 240002AD */  sw         $v0, 0x24($t0)
    /* 6A8CC 8007A0CC 2400228D */  lw         $v0, 0x24($t1)
    /* 6A8D0 8007A0D0 00000000 */  nop
    /* 6A8D4 8007A0D4 200048AC */  sw         $t0, 0x20($v0)
    /* 6A8D8 8007A0D8 43E80108 */  j          .L8007A10C
    /* 6A8DC 8007A0DC 240028AD */   sw        $t0, 0x24($t1)
  .L8007A0E0:
    /* 6A8E0 8007A0E0 0000628C */  lw         $v0, 0x0($v1)
    /* 6A8E4 8007A0E4 240000AD */  sw         $zero, 0x24($t0)
    /* 6A8E8 8007A0E8 200002AD */  sw         $v0, 0x20($t0)
    /* 6A8EC 8007A0EC 0000628C */  lw         $v0, 0x0($v1)
    /* 6A8F0 8007A0F0 00000000 */  nop
    /* 6A8F4 8007A0F4 03004014 */  bnez       $v0, .L8007A104
    /* 6A8F8 8007A0F8 00000000 */   nop
    /* 6A8FC 8007A0FC 42E80108 */  j          .L8007A108
    /* 6A900 8007A100 000088AC */   sw        $t0, 0x0($a0)
  .L8007A104:
    /* 6A904 8007A104 240048AC */  sw         $t0, 0x24($v0)
  .L8007A108:
    /* 6A908 8007A108 000068AC */  sw         $t0, 0x0($v1)
  .L8007A10C:
    /* 6A90C 8007A10C 21100001 */  addu       $v0, $t0, $zero
    /* 6A910 8007A110 02000324 */  addiu      $v1, $zero, 0x2
  .L8007A114:
    /* 6A914 8007A114 0A0047A0 */  sb         $a3, 0xA($v0)
    /* 6A918 8007A118 000043A0 */  sb         $v1, 0x0($v0)
    /* 6A91C 8007A11C 0800E003 */  jr         $ra
    /* 6A920 8007A120 0C0045A0 */   sb        $a1, 0xC($v0)
  .L8007A124:
    /* 6A924 8007A124 0800E003 */  jr         $ra
    /* 6A928 8007A128 21100000 */   addu      $v0, $zero, $zero
endlabel func_80079F90
