nonmatching func_8003BB50, 0x1A4

glabel func_8003BB50
    /* 2C350 8003BB50 801F023C */  lui        $v0, (0x1F800136 >> 16)
    /* 2C354 8003BB54 36014290 */  lbu        $v0, (0x1F800136 & 0xFFFF)($v0)
    /* 2C358 8003BB58 D8FFBD27 */  addiu      $sp, $sp, -0x28
    /* 2C35C 8003BB5C 2000BFAF */  sw         $ra, 0x20($sp)
    /* 2C360 8003BB60 1C00B3AF */  sw         $s3, 0x1C($sp)
    /* 2C364 8003BB64 1800B2AF */  sw         $s2, 0x18($sp)
    /* 2C368 8003BB68 1400B1AF */  sw         $s1, 0x14($sp)
    /* 2C36C 8003BB6C 0D004014 */  bnez       $v0, .L8003BBA4
    /* 2C370 8003BB70 1000B0AF */   sw        $s0, 0x10($sp)
    /* 2C374 8003BB74 801F023C */  lui        $v0, (0x1F800144 >> 16)
    /* 2C378 8003BB78 44014594 */  lhu        $a1, (0x1F800144 & 0xFFFF)($v0)
    /* 2C37C 8003BB7C 801F033C */  lui        $v1, (0x1F80013C >> 16)
    /* 2C380 8003BB80 440140A4 */  sh         $zero, (0x1F800144 & 0xFFFF)($v0)
    /* 2C384 8003BB84 0F80023C */  lui        $v0, %hi(D_800F2410)
    /* 2C388 8003BB88 3C01648C */  lw         $a0, (0x1F80013C & 0xFFFF)($v1)
    /* 2C38C 8003BB8C 10244224 */  addiu      $v0, $v0, %lo(D_800F2410)
    /* 2C390 8003BB90 3C0162AC */  sw         $v0, (0x1F80013C & 0xFFFF)($v1)
    /* 2C394 8003BB94 801F023C */  lui        $v0, (0x1F800146 >> 16)
    /* 2C398 8003BB98 460145A4 */  sh         $a1, (0x1F800146 & 0xFFFF)($v0)
    /* 2C39C 8003BB9C 801F023C */  lui        $v0, (0x1F800140 >> 16)
    /* 2C3A0 8003BBA0 400144AC */  sw         $a0, (0x1F800140 & 0xFFFF)($v0)
  .L8003BBA4:
    /* 2C3A4 8003BBA4 801F023C */  lui        $v0, (0x1F800146 >> 16)
    /* 2C3A8 8003BBA8 46015184 */  lh         $s1, (0x1F800146 & 0xFFFF)($v0)
    /* 2C3AC 8003BBAC 801F023C */  lui        $v0, (0x1F800140 >> 16)
    /* 2C3B0 8003BBB0 4001528C */  lw         $s2, (0x1F800140 & 0xFFFF)($v0)
    /* 2C3B4 8003BBB4 48002012 */  beqz       $s1, .L8003BCD8
    /* 2C3B8 8003BBB8 0180023C */   lui       $v0, %hi(jtbl_80014A70)
    /* 2C3BC 8003BBBC 704A5324 */  addiu      $s3, $v0, %lo(jtbl_80014A70)
  .L8003BBC0:
    /* 2C3C0 8003BBC0 0000508E */  lw         $s0, 0x0($s2)
    /* 2C3C4 8003BBC4 04005226 */  addiu      $s2, $s2, 0x4
    /* 2C3C8 8003BBC8 01000292 */  lbu        $v0, 0x1($s0)
    /* 2C3CC 8003BBCC 00000000 */  nop
    /* 2C3D0 8003BBD0 3F004010 */  beqz       $v0, .L8003BCD0
    /* 2C3D4 8003BBD4 FFFF3126 */   addiu     $s1, $s1, -0x1
    /* 2C3D8 8003BBD8 0B000392 */  lbu        $v1, 0xB($s0)
    /* 2C3DC 8003BBDC 00000000 */  nop
    /* 2C3E0 8003BBE0 9000622C */  sltiu      $v0, $v1, 0x90
    /* 2C3E4 8003BBE4 3A004010 */  beqz       $v0, .L8003BCD0
    /* 2C3E8 8003BBE8 80100300 */   sll       $v0, $v1, 2
    /* 2C3EC 8003BBEC 21105300 */  addu       $v0, $v0, $s3
    /* 2C3F0 8003BBF0 0000428C */  lw         $v0, 0x0($v0)
    /* 2C3F4 8003BBF4 00000000 */  nop
    /* 2C3F8 8003BBF8 08004000 */  jr         $v0
    /* 2C3FC 8003BBFC 00000000 */   nop
    /* 2C400 8003BC00 29F3000C */  jal        func_8003CCA4
    /* 2C404 8003BC04 21200002 */   addu      $a0, $s0, $zero
    /* 2C408 8003BC08 0B000392 */  lbu        $v1, 0xB($s0)
    /* 2C40C 8003BC0C 00000000 */  nop
    /* 2C410 8003BC10 40006230 */  andi       $v0, $v1, 0x40
    /* 2C414 8003BC14 0C004010 */  beqz       $v0, .L8003BC48
    /* 2C418 8003BC18 21200002 */   addu      $a0, $s0, $zero
    /* 2C41C 8003BC1C 17EF0008 */  j          .L8003BC5C
    /* 2C420 8003BC20 50000524 */   addiu     $a1, $zero, 0x50
    /* 2C424 8003BC24 5D8A040C */  jal        func_80122974
    /* 2C428 8003BC28 21200002 */   addu      $a0, $s0, $zero
    /* 2C42C 8003BC2C 0B000392 */  lbu        $v1, 0xB($s0)
    /* 2C430 8003BC30 00000000 */  nop
    /* 2C434 8003BC34 40006230 */  andi       $v0, $v1, 0x40
    /* 2C438 8003BC38 03004010 */  beqz       $v0, .L8003BC48
    /* 2C43C 8003BC3C 21200002 */   addu      $a0, $s0, $zero
    /* 2C440 8003BC40 17EF0008 */  j          .L8003BC5C
    /* 2C444 8003BC44 50000524 */   addiu     $a1, $zero, 0x50
  .L8003BC48:
    /* 2C448 8003BC48 80006230 */  andi       $v0, $v1, 0x80
    /* 2C44C 8003BC4C 20004010 */  beqz       $v0, .L8003BCD0
    /* 2C450 8003BC50 00000000 */   nop
    /* 2C454 8003BC54 21200002 */  addu       $a0, $s0, $zero
    /* 2C458 8003BC58 80000586 */  lh         $a1, 0x80($s0)
  .L8003BC5C:
    /* 2C45C 8003BC5C 83AB000C */  jal        func_8002AE0C
    /* 2C460 8003BC60 21300000 */   addu      $a2, $zero, $zero
    /* 2C464 8003BC64 34EF0008 */  j          .L8003BCD0
    /* 2C468 8003BC68 00000000 */   nop
    /* 2C46C 8003BC6C B5F0000C */  jal        func_8003C2D4
    /* 2C470 8003BC70 21200002 */   addu      $a0, $s0, $zero
    /* 2C474 8003BC74 34EF0008 */  j          .L8003BCD0
    /* 2C478 8003BC78 00000000 */   nop
    /* 2C47C 8003BC7C 19F1000C */  jal        func_8003C464
    /* 2C480 8003BC80 21200002 */   addu      $a0, $s0, $zero
    /* 2C484 8003BC84 34EF0008 */  j          .L8003BCD0
    /* 2C488 8003BC88 00000000 */   nop
    /* 2C48C 8003BC8C 7EF1000C */  jal        func_8003C5F8
    /* 2C490 8003BC90 21200002 */   addu      $a0, $s0, $zero
    /* 2C494 8003BC94 34EF0008 */  j          .L8003BCD0
    /* 2C498 8003BC98 00000000 */   nop
    /* 2C49C 8003BC9C E2F1000C */  jal        func_8003C788
    /* 2C4A0 8003BCA0 21200002 */   addu      $a0, $s0, $zero
    /* 2C4A4 8003BCA4 34EF0008 */  j          .L8003BCD0
    /* 2C4A8 8003BCA8 00000000 */   nop
    /* 2C4AC 8003BCAC B5F0000C */  jal        func_8003C2D4
    /* 2C4B0 8003BCB0 21200002 */   addu      $a0, $s0, $zero
    /* 2C4B4 8003BCB4 7C00028E */  lw         $v0, 0x7C($s0)
    /* 2C4B8 8003BCB8 31EF0008 */  j          .L8003BCC4
    /* 2C4BC 8003BCBC 00000000 */   nop
    /* 2C4C0 8003BCC0 1800028E */  lw         $v0, 0x18($s0)
  .L8003BCC4:
    /* 2C4C4 8003BCC4 00000000 */  nop
    /* 2C4C8 8003BCC8 09F84000 */  jalr       $v0
    /* 2C4CC 8003BCCC 21200002 */   addu      $a0, $s0, $zero
  .L8003BCD0:
    /* 2C4D0 8003BCD0 BBFF2016 */  bnez       $s1, .L8003BBC0
    /* 2C4D4 8003BCD4 00000000 */   nop
  .L8003BCD8:
    /* 2C4D8 8003BCD8 2000BF8F */  lw         $ra, 0x20($sp)
    /* 2C4DC 8003BCDC 1C00B38F */  lw         $s3, 0x1C($sp)
    /* 2C4E0 8003BCE0 1800B28F */  lw         $s2, 0x18($sp)
    /* 2C4E4 8003BCE4 1400B18F */  lw         $s1, 0x14($sp)
    /* 2C4E8 8003BCE8 1000B08F */  lw         $s0, 0x10($sp)
    /* 2C4EC 8003BCEC 0800E003 */  jr         $ra
    /* 2C4F0 8003BCF0 2800BD27 */   addiu     $sp, $sp, 0x28
endlabel func_8003BB50
