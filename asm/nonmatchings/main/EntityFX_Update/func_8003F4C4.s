nonmatching func_8003F4C4, 0xD0

glabel func_8003F4C4
    /* 2FCC4 8003F4C4 2B10A600 */  sltu       $v0, $a1, $a2
    /* 2FCC8 8003F4C8 30004010 */  beqz       $v0, .L8003F58C
    /* 2FCCC 8003F4CC 0180023C */   lui       $v0, %hi(jtbl_80015178)
    /* 2FCD0 8003F4D0 78514724 */  addiu      $a3, $v0, %lo(jtbl_80015178)
    /* 2FCD4 8003F4D4 0700A324 */  addiu      $v1, $a1, 0x7
  .L8003F4D8:
    /* 2FCD8 8003F4D8 00006290 */  lbu        $v0, 0x0($v1)
    /* 2FCDC 8003F4DC 00000000 */  nop
    /* 2FCE0 8003F4E0 FC004230 */  andi       $v0, $v0, 0xFC
    /* 2FCE4 8003F4E4 E0FF4424 */  addiu      $a0, $v0, -0x20
    /* 2FCE8 8003F4E8 1D00822C */  sltiu      $v0, $a0, 0x1D
    /* 2FCEC 8003F4EC 25004010 */  beqz       $v0, .L8003F584
    /* 2FCF0 8003F4F0 2B10A600 */   sltu      $v0, $a1, $a2
    /* 2FCF4 8003F4F4 80100400 */  sll        $v0, $a0, 2
    /* 2FCF8 8003F4F8 21104700 */  addu       $v0, $v0, $a3
    /* 2FCFC 8003F4FC 0000428C */  lw         $v0, 0x0($v0)
    /* 2FD00 8003F500 00000000 */  nop
    /* 2FD04 8003F504 08004000 */  jr         $v0
    /* 2FD08 8003F508 00000000 */   nop
    /* 2FD0C 8003F50C 00006290 */  lbu        $v0, 0x0($v1)
    /* 2FD10 8003F510 3400A524 */  addiu      $a1, $a1, 0x34
    /* 2FD14 8003F514 FD004230 */  andi       $v0, $v0, 0xFD
    /* 2FD18 8003F518 000062A0 */  sb         $v0, 0x0($v1)
    /* 2FD1C 8003F51C 60FD0008 */  j          .L8003F580
    /* 2FD20 8003F520 34006324 */   addiu     $v1, $v1, 0x34
    /* 2FD24 8003F524 00006290 */  lbu        $v0, 0x0($v1)
    /* 2FD28 8003F528 2000A524 */  addiu      $a1, $a1, 0x20
    /* 2FD2C 8003F52C FD004230 */  andi       $v0, $v0, 0xFD
    /* 2FD30 8003F530 000062A0 */  sb         $v0, 0x0($v1)
    /* 2FD34 8003F534 60FD0008 */  j          .L8003F580
    /* 2FD38 8003F538 20006324 */   addiu     $v1, $v1, 0x20
    /* 2FD3C 8003F53C 00006290 */  lbu        $v0, 0x0($v1)
    /* 2FD40 8003F540 2800A524 */  addiu      $a1, $a1, 0x28
    /* 2FD44 8003F544 FD004230 */  andi       $v0, $v0, 0xFD
    /* 2FD48 8003F548 000062A0 */  sb         $v0, 0x0($v1)
    /* 2FD4C 8003F54C 60FD0008 */  j          .L8003F580
    /* 2FD50 8003F550 28006324 */   addiu     $v1, $v1, 0x28
    /* 2FD54 8003F554 1C006324 */  addiu      $v1, $v1, 0x1C
    /* 2FD58 8003F558 60FD0008 */  j          .L8003F580
    /* 2FD5C 8003F55C 1C00A524 */   addiu     $a1, $a1, 0x1C
    /* 2FD60 8003F560 24006324 */  addiu      $v1, $v1, 0x24
    /* 2FD64 8003F564 60FD0008 */  j          .L8003F580
    /* 2FD68 8003F568 2400A524 */   addiu     $a1, $a1, 0x24
    /* 2FD6C 8003F56C 14006324 */  addiu      $v1, $v1, 0x14
    /* 2FD70 8003F570 60FD0008 */  j          .L8003F580
    /* 2FD74 8003F574 1400A524 */   addiu     $a1, $a1, 0x14
    /* 2FD78 8003F578 18006324 */  addiu      $v1, $v1, 0x18
    /* 2FD7C 8003F57C 1800A524 */  addiu      $a1, $a1, 0x18
  .L8003F580:
    /* 2FD80 8003F580 2B10A600 */  sltu       $v0, $a1, $a2
  .L8003F584:
    /* 2FD84 8003F584 D4FF4014 */  bnez       $v0, .L8003F4D8
    /* 2FD88 8003F588 00000000 */   nop
  .L8003F58C:
    /* 2FD8C 8003F58C 0800E003 */  jr         $ra
    /* 2FD90 8003F590 00000000 */   nop
endlabel func_8003F4C4
