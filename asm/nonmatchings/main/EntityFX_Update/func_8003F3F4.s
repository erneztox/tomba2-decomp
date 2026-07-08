nonmatching func_8003F3F4, 0xD0

glabel func_8003F3F4
    /* 2FBF4 8003F3F4 2B10A600 */  sltu       $v0, $a1, $a2
    /* 2FBF8 8003F3F8 30004010 */  beqz       $v0, .L8003F4BC
    /* 2FBFC 8003F3FC 0180023C */   lui       $v0, %hi(jtbl_80015100)
    /* 2FC00 8003F400 00514724 */  addiu      $a3, $v0, %lo(jtbl_80015100)
    /* 2FC04 8003F404 0700A324 */  addiu      $v1, $a1, 0x7
  .L8003F408:
    /* 2FC08 8003F408 00006290 */  lbu        $v0, 0x0($v1)
    /* 2FC0C 8003F40C 00000000 */  nop
    /* 2FC10 8003F410 FC004230 */  andi       $v0, $v0, 0xFC
    /* 2FC14 8003F414 E0FF4424 */  addiu      $a0, $v0, -0x20
    /* 2FC18 8003F418 1D00822C */  sltiu      $v0, $a0, 0x1D
    /* 2FC1C 8003F41C 25004010 */  beqz       $v0, .L8003F4B4
    /* 2FC20 8003F420 2B10A600 */   sltu      $v0, $a1, $a2
    /* 2FC24 8003F424 80100400 */  sll        $v0, $a0, 2
    /* 2FC28 8003F428 21104700 */  addu       $v0, $v0, $a3
    /* 2FC2C 8003F42C 0000428C */  lw         $v0, 0x0($v0)
    /* 2FC30 8003F430 00000000 */  nop
    /* 2FC34 8003F434 08004000 */  jr         $v0
    /* 2FC38 8003F438 00000000 */   nop
    /* 2FC3C 8003F43C 00006290 */  lbu        $v0, 0x0($v1)
    /* 2FC40 8003F440 3400A524 */  addiu      $a1, $a1, 0x34
    /* 2FC44 8003F444 02004234 */  ori        $v0, $v0, 0x2
    /* 2FC48 8003F448 000062A0 */  sb         $v0, 0x0($v1)
    /* 2FC4C 8003F44C 2CFD0008 */  j          .L8003F4B0
    /* 2FC50 8003F450 34006324 */   addiu     $v1, $v1, 0x34
    /* 2FC54 8003F454 00006290 */  lbu        $v0, 0x0($v1)
    /* 2FC58 8003F458 2000A524 */  addiu      $a1, $a1, 0x20
    /* 2FC5C 8003F45C 02004234 */  ori        $v0, $v0, 0x2
    /* 2FC60 8003F460 000062A0 */  sb         $v0, 0x0($v1)
    /* 2FC64 8003F464 2CFD0008 */  j          .L8003F4B0
    /* 2FC68 8003F468 20006324 */   addiu     $v1, $v1, 0x20
    /* 2FC6C 8003F46C 00006290 */  lbu        $v0, 0x0($v1)
    /* 2FC70 8003F470 2800A524 */  addiu      $a1, $a1, 0x28
    /* 2FC74 8003F474 02004234 */  ori        $v0, $v0, 0x2
    /* 2FC78 8003F478 000062A0 */  sb         $v0, 0x0($v1)
    /* 2FC7C 8003F47C 2CFD0008 */  j          .L8003F4B0
    /* 2FC80 8003F480 28006324 */   addiu     $v1, $v1, 0x28
    /* 2FC84 8003F484 1C006324 */  addiu      $v1, $v1, 0x1C
    /* 2FC88 8003F488 2CFD0008 */  j          .L8003F4B0
    /* 2FC8C 8003F48C 1C00A524 */   addiu     $a1, $a1, 0x1C
    /* 2FC90 8003F490 24006324 */  addiu      $v1, $v1, 0x24
    /* 2FC94 8003F494 2CFD0008 */  j          .L8003F4B0
    /* 2FC98 8003F498 2400A524 */   addiu     $a1, $a1, 0x24
    /* 2FC9C 8003F49C 14006324 */  addiu      $v1, $v1, 0x14
    /* 2FCA0 8003F4A0 2CFD0008 */  j          .L8003F4B0
    /* 2FCA4 8003F4A4 1400A524 */   addiu     $a1, $a1, 0x14
    /* 2FCA8 8003F4A8 18006324 */  addiu      $v1, $v1, 0x18
    /* 2FCAC 8003F4AC 1800A524 */  addiu      $a1, $a1, 0x18
  .L8003F4B0:
    /* 2FCB0 8003F4B0 2B10A600 */  sltu       $v0, $a1, $a2
  .L8003F4B4:
    /* 2FCB4 8003F4B4 D4FF4014 */  bnez       $v0, .L8003F408
    /* 2FCB8 8003F4B8 00000000 */   nop
  .L8003F4BC:
    /* 2FCBC 8003F4BC 0800E003 */  jr         $ra
    /* 2FCC0 8003F4C0 00000000 */   nop
endlabel func_8003F3F4
