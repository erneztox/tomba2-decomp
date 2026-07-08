nonmatching EntityLoop_NPC, 0x20C

glabel EntityLoop_NPC
    /* 2C4F4 8003BCF4 801F023C */  lui        $v0, (0x1F800136 >> 16)
    /* 2C4F8 8003BCF8 36014290 */  lbu        $v0, (0x1F800136 & 0xFFFF)($v0)
    /* 2C4FC 8003BCFC D8FFBD27 */  addiu      $sp, $sp, -0x28
    /* 2C500 8003BD00 2400BFAF */  sw         $ra, 0x24($sp)
    /* 2C504 8003BD04 2000B4AF */  sw         $s4, 0x20($sp)
    /* 2C508 8003BD08 1C00B3AF */  sw         $s3, 0x1C($sp)
    /* 2C50C 8003BD0C 1800B2AF */  sw         $s2, 0x18($sp)
    /* 2C510 8003BD10 1400B1AF */  sw         $s1, 0x14($sp)
    /* 2C514 8003BD14 0D004014 */  bnez       $v0, .L8003BD4C
    /* 2C518 8003BD18 1000B0AF */   sw        $s0, 0x10($sp)
    /* 2C51C 8003BD1C 801F023C */  lui        $v0, (0x1F800150 >> 16)
    /* 2C520 8003BD20 50014594 */  lhu        $a1, (0x1F800150 & 0xFFFF)($v0)
    /* 2C524 8003BD24 801F033C */  lui        $v1, (0x1F800148 >> 16)
    /* 2C528 8003BD28 500140A4 */  sh         $zero, (0x1F800150 & 0xFFFF)($v0)
    /* 2C52C 8003BD2C 0F80023C */  lui        $v0, %hi(D_800F26C8)
    /* 2C530 8003BD30 4801648C */  lw         $a0, (0x1F800148 & 0xFFFF)($v1)
    /* 2C534 8003BD34 C8264224 */  addiu      $v0, $v0, %lo(D_800F26C8)
    /* 2C538 8003BD38 480162AC */  sw         $v0, (0x1F800148 & 0xFFFF)($v1)
    /* 2C53C 8003BD3C 801F023C */  lui        $v0, (0x1F800152 >> 16)
    /* 2C540 8003BD40 520145A4 */  sh         $a1, (0x1F800152 & 0xFFFF)($v0)
    /* 2C544 8003BD44 801F023C */  lui        $v0, (0x1F80014C >> 16)
    /* 2C548 8003BD48 4C0144AC */  sw         $a0, (0x1F80014C & 0xFFFF)($v0)
  .L8003BD4C:
    /* 2C54C 8003BD4C 801F023C */  lui        $v0, (0x1F800152 >> 16)
    /* 2C550 8003BD50 52015184 */  lh         $s1, (0x1F800152 & 0xFFFF)($v0)
    /* 2C554 8003BD54 801F023C */  lui        $v0, (0x1F80014C >> 16)
    /* 2C558 8003BD58 4C01528C */  lw         $s2, (0x1F80014C & 0xFFFF)($v0)
    /* 2C55C 8003BD5C 60002012 */  beqz       $s1, .L8003BEE0
    /* 2C560 8003BD60 0180023C */   lui       $v0, %hi(jtbl_80014CB0)
    /* 2C564 8003BD64 B04C5424 */  addiu      $s4, $v0, %lo(jtbl_80014CB0)
    /* 2C568 8003BD68 0C80133C */  lui        $s3, (0x800C0000 >> 16)
  .L8003BD6C:
    /* 2C56C 8003BD6C 0000508E */  lw         $s0, 0x0($s2)
    /* 2C570 8003BD70 04005226 */  addiu      $s2, $s2, 0x4
    /* 2C574 8003BD74 01000292 */  lbu        $v0, 0x1($s0)
    /* 2C578 8003BD78 00000000 */  nop
    /* 2C57C 8003BD7C 56004010 */  beqz       $v0, .L8003BED8
    /* 2C580 8003BD80 FFFF3126 */   addiu     $s1, $s1, -0x1
    /* 2C584 8003BD84 0B000392 */  lbu        $v1, 0xB($s0)
    /* 2C588 8003BD88 00000000 */  nop
    /* 2C58C 8003BD8C 2100622C */  sltiu      $v0, $v1, 0x21
    /* 2C590 8003BD90 51004010 */  beqz       $v0, .L8003BED8
    /* 2C594 8003BD94 80100300 */   sll       $v0, $v1, 2
    /* 2C598 8003BD98 21105400 */  addu       $v0, $v0, $s4
    /* 2C59C 8003BD9C 0000428C */  lw         $v0, 0x0($v0)
    /* 2C5A0 8003BDA0 00000000 */  nop
    /* 2C5A4 8003BDA4 08004000 */  jr         $v0
    /* 2C5A8 8003BDA8 00000000 */   nop
    /* 2C5AC 8003BDAC 29F3000C */  jal        func_8003CCA4
    /* 2C5B0 8003BDB0 21200002 */   addu      $a0, $s0, $zero
    /* 2C5B4 8003BDB4 B6EF0008 */  j          .L8003BED8
    /* 2C5B8 8003BDB8 00000000 */   nop
    /* 2C5BC 8003BDBC 70F86392 */  lbu        $v1, -0x790($s3)
    /* 2C5C0 8003BDC0 00000000 */  nop
    /* 2C5C4 8003BDC4 05006014 */  bnez       $v1, .L8003BDDC
    /* 2C5C8 8003BDC8 06000224 */   addiu     $v0, $zero, 0x6
    /* 2C5CC 8003BDCC 7AD0040C */  jal        func_801341E8
    /* 2C5D0 8003BDD0 21200002 */   addu      $a0, $s0, $zero
    /* 2C5D4 8003BDD4 B6EF0008 */  j          .L8003BED8
    /* 2C5D8 8003BDD8 00000000 */   nop
  .L8003BDDC:
    /* 2C5DC 8003BDDC 3E006214 */  bne        $v1, $v0, .L8003BED8
    /* 2C5E0 8003BDE0 00000000 */   nop
    /* 2C5E4 8003BDE4 058F040C */  jal        func_80123C14
    /* 2C5E8 8003BDE8 21200002 */   addu      $a0, $s0, $zero
    /* 2C5EC 8003BDEC B6EF0008 */  j          .L8003BED8
    /* 2C5F0 8003BDF0 00000000 */   nop
    /* 2C5F4 8003BDF4 70F86392 */  lbu        $v1, -0x790($s3)
    /* 2C5F8 8003BDF8 01000224 */  addiu      $v0, $zero, 0x1
    /* 2C5FC 8003BDFC 05006214 */  bne        $v1, $v0, .L8003BE14
    /* 2C600 8003BE00 06000224 */   addiu     $v0, $zero, 0x6
    /* 2C604 8003BE04 45A4040C */  jal        func_80129114
    /* 2C608 8003BE08 21200002 */   addu      $a0, $s0, $zero
    /* 2C60C 8003BE0C B6EF0008 */  j          .L8003BED8
    /* 2C610 8003BE10 00000000 */   nop
  .L8003BE14:
    /* 2C614 8003BE14 05006214 */  bne        $v1, $v0, .L8003BE2C
    /* 2C618 8003BE18 07000224 */   addiu     $v0, $zero, 0x7
    /* 2C61C 8003BE1C 4B83040C */  jal        func_80120D2C
    /* 2C620 8003BE20 21200002 */   addu      $a0, $s0, $zero
    /* 2C624 8003BE24 B6EF0008 */  j          .L8003BED8
    /* 2C628 8003BE28 00000000 */   nop
  .L8003BE2C:
    /* 2C62C 8003BE2C 05006214 */  bne        $v1, $v0, .L8003BE44
    /* 2C630 8003BE30 0A000224 */   addiu     $v0, $zero, 0xA
    /* 2C634 8003BE34 516B040C */  jal        func_8011AD44
    /* 2C638 8003BE38 21200002 */   addu      $a0, $s0, $zero
    /* 2C63C 8003BE3C B6EF0008 */  j          .L8003BED8
    /* 2C640 8003BE40 00000000 */   nop
  .L8003BE44:
    /* 2C644 8003BE44 05006214 */  bne        $v1, $v0, .L8003BE5C
    /* 2C648 8003BE48 0F000224 */   addiu     $v0, $zero, 0xF
    /* 2C64C 8003BE4C CE54040C */  jal        func_80115338
    /* 2C650 8003BE50 21200002 */   addu      $a0, $s0, $zero
    /* 2C654 8003BE54 B6EF0008 */  j          .L8003BED8
    /* 2C658 8003BE58 00000000 */   nop
  .L8003BE5C:
    /* 2C65C 8003BE5C 1E006214 */  bne        $v1, $v0, .L8003BED8
    /* 2C660 8003BE60 00000000 */   nop
    /* 2C664 8003BE64 615E040C */  jal        func_80117984
    /* 2C668 8003BE68 21200002 */   addu      $a0, $s0, $zero
    /* 2C66C 8003BE6C B6EF0008 */  j          .L8003BED8
    /* 2C670 8003BE70 00000000 */   nop
    /* 2C674 8003BE74 D2D9040C */  jal        func_80136748
    /* 2C678 8003BE78 21200002 */   addu      $a0, $s0, $zero
    /* 2C67C 8003BE7C B6EF0008 */  j          .L8003BED8
    /* 2C680 8003BE80 00000000 */   nop
    /* 2C684 8003BE84 B5F0000C */  jal        func_8003C2D4
    /* 2C688 8003BE88 21200002 */   addu      $a0, $s0, $zero
    /* 2C68C 8003BE8C B6EF0008 */  j          .L8003BED8
    /* 2C690 8003BE90 00000000 */   nop
    /* 2C694 8003BE94 7C00028E */  lw         $v0, 0x7C($s0)
    /* 2C698 8003BE98 00000000 */  nop
    /* 2C69C 8003BE9C 09F84000 */  jalr       $v0
    /* 2C6A0 8003BEA0 21200002 */   addu      $a0, $s0, $zero
    /* 2C6A4 8003BEA4 19F1000C */  jal        func_8003C464
    /* 2C6A8 8003BEA8 21200002 */   addu      $a0, $s0, $zero
    /* 2C6AC 8003BEAC B6EF0008 */  j          .L8003BED8
    /* 2C6B0 8003BEB0 00000000 */   nop
    /* 2C6B4 8003BEB4 B5F0000C */  jal        func_8003C2D4
    /* 2C6B8 8003BEB8 21200002 */   addu      $a0, $s0, $zero
    /* 2C6BC 8003BEBC 7C00028E */  lw         $v0, 0x7C($s0)
    /* 2C6C0 8003BEC0 B3EF0008 */  j          .L8003BECC
    /* 2C6C4 8003BEC4 00000000 */   nop
    /* 2C6C8 8003BEC8 1800028E */  lw         $v0, 0x18($s0)
  .L8003BECC:
    /* 2C6CC 8003BECC 00000000 */  nop
    /* 2C6D0 8003BED0 09F84000 */  jalr       $v0
    /* 2C6D4 8003BED4 21200002 */   addu      $a0, $s0, $zero
  .L8003BED8:
    /* 2C6D8 8003BED8 A4FF2016 */  bnez       $s1, .L8003BD6C
    /* 2C6DC 8003BEDC 00000000 */   nop
  .L8003BEE0:
    /* 2C6E0 8003BEE0 2400BF8F */  lw         $ra, 0x24($sp)
    /* 2C6E4 8003BEE4 2000B48F */  lw         $s4, 0x20($sp)
    /* 2C6E8 8003BEE8 1C00B38F */  lw         $s3, 0x1C($sp)
    /* 2C6EC 8003BEEC 1800B28F */  lw         $s2, 0x18($sp)
    /* 2C6F0 8003BEF0 1400B18F */  lw         $s1, 0x14($sp)
    /* 2C6F4 8003BEF4 1000B08F */  lw         $s0, 0x10($sp)
    /* 2C6F8 8003BEF8 0800E003 */  jr         $ra
    /* 2C6FC 8003BEFC 2800BD27 */   addiu     $sp, $sp, 0x28
endlabel EntityLoop_NPC
