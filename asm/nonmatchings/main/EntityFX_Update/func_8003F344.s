nonmatching func_8003F344, 0xB0

glabel func_8003F344
    /* 2FB44 8003F344 2B10A600 */  sltu       $v0, $a1, $a2
    /* 2FB48 8003F348 28004010 */  beqz       $v0, .L8003F3EC
    /* 2FB4C 8003F34C 0180023C */   lui       $v0, %hi(jtbl_80015088)
    /* 2FB50 8003F350 88504724 */  addiu      $a3, $v0, %lo(jtbl_80015088)
  .L8003F354:
    /* 2FB54 8003F354 0700A290 */  lbu        $v0, 0x7($a1)
    /* 2FB58 8003F358 00000000 */  nop
    /* 2FB5C 8003F35C FC004230 */  andi       $v0, $v0, 0xFC
    /* 2FB60 8003F360 E0FF4324 */  addiu      $v1, $v0, -0x20
    /* 2FB64 8003F364 1D00622C */  sltiu      $v0, $v1, 0x1D
    /* 2FB68 8003F368 1E004010 */  beqz       $v0, .L8003F3E4
    /* 2FB6C 8003F36C 2B10A600 */   sltu      $v0, $a1, $a2
    /* 2FB70 8003F370 80100300 */  sll        $v0, $v1, 2
    /* 2FB74 8003F374 21104700 */  addu       $v0, $v0, $a3
    /* 2FB78 8003F378 0000428C */  lw         $v0, 0x0($v0)
    /* 2FB7C 8003F37C 00000000 */  nop
    /* 2FB80 8003F380 08004000 */  jr         $v0
    /* 2FB84 8003F384 00000000 */   nop
    /* 2FB88 8003F388 5C008294 */  lhu        $v0, 0x5C($a0)
    /* 2FB8C 8003F38C 00000000 */  nop
    /* 2FB90 8003F390 0E00A2A4 */  sh         $v0, 0xE($a1)
    /* 2FB94 8003F394 F8FC0008 */  j          .L8003F3E0
    /* 2FB98 8003F398 3400A524 */   addiu     $a1, $a1, 0x34
    /* 2FB9C 8003F39C 5C008294 */  lhu        $v0, 0x5C($a0)
    /* 2FBA0 8003F3A0 00000000 */  nop
    /* 2FBA4 8003F3A4 0E00A2A4 */  sh         $v0, 0xE($a1)
    /* 2FBA8 8003F3A8 F8FC0008 */  j          .L8003F3E0
    /* 2FBAC 8003F3AC 2000A524 */   addiu     $a1, $a1, 0x20
    /* 2FBB0 8003F3B0 5C008294 */  lhu        $v0, 0x5C($a0)
    /* 2FBB4 8003F3B4 00000000 */  nop
    /* 2FBB8 8003F3B8 0E00A2A4 */  sh         $v0, 0xE($a1)
    /* 2FBBC 8003F3BC F8FC0008 */  j          .L8003F3E0
    /* 2FBC0 8003F3C0 2800A524 */   addiu     $a1, $a1, 0x28
    /* 2FBC4 8003F3C4 F8FC0008 */  j          .L8003F3E0
    /* 2FBC8 8003F3C8 1C00A524 */   addiu     $a1, $a1, 0x1C
    /* 2FBCC 8003F3CC F8FC0008 */  j          .L8003F3E0
    /* 2FBD0 8003F3D0 2400A524 */   addiu     $a1, $a1, 0x24
    /* 2FBD4 8003F3D4 F8FC0008 */  j          .L8003F3E0
    /* 2FBD8 8003F3D8 1400A524 */   addiu     $a1, $a1, 0x14
    /* 2FBDC 8003F3DC 1800A524 */  addiu      $a1, $a1, 0x18
  .L8003F3E0:
    /* 2FBE0 8003F3E0 2B10A600 */  sltu       $v0, $a1, $a2
  .L8003F3E4:
    /* 2FBE4 8003F3E4 DBFF4014 */  bnez       $v0, .L8003F354
    /* 2FBE8 8003F3E8 00000000 */   nop
  .L8003F3EC:
    /* 2FBEC 8003F3EC 0800E003 */  jr         $ra
    /* 2FBF0 8003F3F0 00000000 */   nop
endlabel func_8003F344
