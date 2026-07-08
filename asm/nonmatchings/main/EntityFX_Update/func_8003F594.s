nonmatching func_8003F594, 0x104

glabel func_8003F594
    /* 2FD94 8003F594 1800878C */  lw         $a3, 0x18($a0)
    /* 2FD98 8003F598 2B10A600 */  sltu       $v0, $a1, $a2
    /* 2FD9C 8003F59C 3C004010 */  beqz       $v0, .L8003F690
    /* 2FDA0 8003F5A0 0180023C */   lui       $v0, %hi(jtbl_800151F0)
    /* 2FDA4 8003F5A4 F0514824 */  addiu      $t0, $v0, %lo(jtbl_800151F0)
    /* 2FDA8 8003F5A8 0700A324 */  addiu      $v1, $a1, 0x7
  .L8003F5AC:
    /* 2FDAC 8003F5AC 00006290 */  lbu        $v0, 0x0($v1)
    /* 2FDB0 8003F5B0 00000000 */  nop
    /* 2FDB4 8003F5B4 FC004230 */  andi       $v0, $v0, 0xFC
    /* 2FDB8 8003F5B8 E0FF4424 */  addiu      $a0, $v0, -0x20
    /* 2FDBC 8003F5BC 1D00822C */  sltiu      $v0, $a0, 0x1D
    /* 2FDC0 8003F5C0 31004010 */  beqz       $v0, .L8003F688
    /* 2FDC4 8003F5C4 2B10A600 */   sltu      $v0, $a1, $a2
    /* 2FDC8 8003F5C8 80100400 */  sll        $v0, $a0, 2
    /* 2FDCC 8003F5CC 21104800 */  addu       $v0, $v0, $t0
    /* 2FDD0 8003F5D0 0000428C */  lw         $v0, 0x0($v0)
    /* 2FDD4 8003F5D4 00000000 */  nop
    /* 2FDD8 8003F5D8 08004000 */  jr         $v0
    /* 2FDDC 8003F5DC 00000000 */   nop
    /* 2FDE0 8003F5E0 00006290 */  lbu        $v0, 0x0($v1)
    /* 2FDE4 8003F5E4 2800A524 */  addiu      $a1, $a1, 0x28
    /* 2FDE8 8003F5E8 FDFF67AC */  sw         $a3, -0x3($v1)
    /* 2FDEC 8003F5EC 090067AC */  sw         $a3, 0x9($v1)
    /* 2FDF0 8003F5F0 92FD0008 */  j          .L8003F648
    /* 2FDF4 8003F5F4 150067AC */   sw        $a3, 0x15($v1)
    /* 2FDF8 8003F5F8 00006290 */  lbu        $v0, 0x0($v1)
    /* 2FDFC 8003F5FC 3400A524 */  addiu      $a1, $a1, 0x34
    /* 2FE00 8003F600 FDFF67AC */  sw         $a3, -0x3($v1)
    /* 2FE04 8003F604 090067AC */  sw         $a3, 0x9($v1)
    /* 2FE08 8003F608 150067AC */  sw         $a3, 0x15($v1)
    /* 2FE0C 8003F60C 210067AC */  sw         $a3, 0x21($v1)
    /* 2FE10 8003F610 02004234 */  ori        $v0, $v0, 0x2
    /* 2FE14 8003F614 000062A0 */  sb         $v0, 0x0($v1)
    /* 2FE18 8003F618 A1FD0008 */  j          .L8003F684
    /* 2FE1C 8003F61C 34006324 */   addiu     $v1, $v1, 0x34
    /* 2FE20 8003F620 00006290 */  lbu        $v0, 0x0($v1)
    /* 2FE24 8003F624 2000A524 */  addiu      $a1, $a1, 0x20
    /* 2FE28 8003F628 FDFF67AC */  sw         $a3, -0x3($v1)
    /* 2FE2C 8003F62C 02004234 */  ori        $v0, $v0, 0x2
    /* 2FE30 8003F630 000062A0 */  sb         $v0, 0x0($v1)
    /* 2FE34 8003F634 A1FD0008 */  j          .L8003F684
    /* 2FE38 8003F638 20006324 */   addiu     $v1, $v1, 0x20
    /* 2FE3C 8003F63C 00006290 */  lbu        $v0, 0x0($v1)
    /* 2FE40 8003F640 2800A524 */  addiu      $a1, $a1, 0x28
    /* 2FE44 8003F644 FDFF67AC */  sw         $a3, -0x3($v1)
  .L8003F648:
    /* 2FE48 8003F648 02004234 */  ori        $v0, $v0, 0x2
    /* 2FE4C 8003F64C 000062A0 */  sb         $v0, 0x0($v1)
    /* 2FE50 8003F650 A1FD0008 */  j          .L8003F684
    /* 2FE54 8003F654 28006324 */   addiu     $v1, $v1, 0x28
    /* 2FE58 8003F658 1C006324 */  addiu      $v1, $v1, 0x1C
    /* 2FE5C 8003F65C A1FD0008 */  j          .L8003F684
    /* 2FE60 8003F660 1C00A524 */   addiu     $a1, $a1, 0x1C
    /* 2FE64 8003F664 24006324 */  addiu      $v1, $v1, 0x24
    /* 2FE68 8003F668 A1FD0008 */  j          .L8003F684
    /* 2FE6C 8003F66C 2400A524 */   addiu     $a1, $a1, 0x24
    /* 2FE70 8003F670 14006324 */  addiu      $v1, $v1, 0x14
    /* 2FE74 8003F674 A1FD0008 */  j          .L8003F684
    /* 2FE78 8003F678 1400A524 */   addiu     $a1, $a1, 0x14
    /* 2FE7C 8003F67C 18006324 */  addiu      $v1, $v1, 0x18
    /* 2FE80 8003F680 1800A524 */  addiu      $a1, $a1, 0x18
  .L8003F684:
    /* 2FE84 8003F684 2B10A600 */  sltu       $v0, $a1, $a2
  .L8003F688:
    /* 2FE88 8003F688 C8FF4014 */  bnez       $v0, .L8003F5AC
    /* 2FE8C 8003F68C 00000000 */   nop
  .L8003F690:
    /* 2FE90 8003F690 0800E003 */  jr         $ra
    /* 2FE94 8003F694 00000000 */   nop
endlabel func_8003F594
