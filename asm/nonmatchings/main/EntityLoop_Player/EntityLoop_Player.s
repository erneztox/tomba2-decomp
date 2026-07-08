nonmatching EntityLoop_Player, 0x17C

glabel EntityLoop_Player
    /* 2BD88 8003B588 E0FFBD27 */  addiu      $sp, $sp, -0x20
    /* 2BD8C 8003B58C 0E80023C */  lui        $v0, %hi(D_800E7E80)
    /* 2BD90 8003B590 1000B0AF */  sw         $s0, 0x10($sp)
    /* 2BD94 8003B594 807E5024 */  addiu      $s0, $v0, %lo(D_800E7E80)
    /* 2BD98 8003B598 1800BFAF */  sw         $ra, 0x18($sp)
    /* 2BD9C 8003B59C 1400B1AF */  sw         $s1, 0x14($sp)
    /* 2BDA0 8003B5A0 0D000392 */  lbu        $v1, 0xD($s0)
    /* 2BDA4 8003B5A4 00000000 */  nop
    /* 2BDA8 8003B5A8 D0006230 */  andi       $v0, $v1, 0xD0
    /* 2BDAC 8003B5AC 3A004010 */  beqz       $v0, .L8003B698
    /* 2BDB0 8003B5B0 02006334 */   ori       $v1, $v1, 0x2
    /* 2BDB4 8003B5B4 20006230 */  andi       $v0, $v1, 0x20
    /* 2BDB8 8003B5B8 38004014 */  bnez       $v0, .L8003B69C
    /* 2BDBC 8003B5BC 0D0003A2 */   sb        $v1, 0xD($s0)
    /* 2BDC0 8003B5C0 10006230 */  andi       $v0, $v1, 0x10
    /* 2BDC4 8003B5C4 21004010 */  beqz       $v0, .L8003B64C
    /* 2BDC8 8003B5C8 801F023C */   lui       $v0, (0x1F800247 >> 16)
    /* 2BDCC 8003B5CC 47024390 */  lbu        $v1, (0x1F800247 & 0xFFFF)($v0)
    /* 2BDD0 8003B5D0 00000000 */  nop
    /* 2BDD4 8003B5D4 30006230 */  andi       $v0, $v1, 0x30
    /* 2BDD8 8003B5D8 06004014 */  bnez       $v0, .L8003B5F4
    /* 2BDDC 8003B5DC 03006230 */   andi      $v0, $v1, 0x3
    /* 2BDE0 8003B5E0 0200422C */  sltiu      $v0, $v0, 0x2
    /* 2BDE4 8003B5E4 03004014 */  bnez       $v0, .L8003B5F4
    /* 2BDE8 8003B5E8 D0000224 */   addiu     $v0, $zero, 0xD0
    /* 2BDEC 8003B5EC A3ED0008 */  j          .L8003B68C
    /* 2BDF0 8003B5F0 180002A2 */   sb        $v0, 0x18($s0)
  .L8003B5F4:
    /* 2BDF4 8003B5F4 0D000392 */  lbu        $v1, 0xD($s0)
    /* 2BDF8 8003B5F8 00000000 */  nop
    /* 2BDFC 8003B5FC 80006230 */  andi       $v0, $v1, 0x80
    /* 2BE00 8003B600 0A004010 */  beqz       $v0, .L8003B62C
    /* 2BE04 8003B604 801F023C */   lui       $v0, (0x1F800247 >> 16)
    /* 2BE08 8003B608 47024490 */  lbu        $a0, (0x1F800247 & 0xFFFF)($v0)
    /* 2BE0C 8003B60C 00000000 */  nop
    /* 2BE10 8003B610 0F008430 */  andi       $a0, $a0, 0xF
    /* 2BE14 8003B614 A00F020C */  jal        func_80083E80
    /* 2BE18 8003B618 C0210400 */   sll       $a0, $a0, 7
    /* 2BE1C 8003B61C 00140200 */  sll        $v0, $v0, 16
    /* 2BE20 8003B620 83150200 */  sra        $v0, $v0, 22
    /* 2BE24 8003B624 A1ED0008 */  j          .L8003B684
    /* 2BE28 8003B628 30004224 */   addiu     $v0, $v0, 0x30
  .L8003B62C:
    /* 2BE2C 8003B62C 40006230 */  andi       $v0, $v1, 0x40
    /* 2BE30 8003B630 03004010 */  beqz       $v0, .L8003B640
    /* 2BE34 8003B634 20000224 */   addiu     $v0, $zero, 0x20
    /* 2BE38 8003B638 A3ED0008 */  j          .L8003B68C
    /* 2BE3C 8003B63C 180002A2 */   sb        $v0, 0x18($s0)
  .L8003B640:
    /* 2BE40 8003B640 80000224 */  addiu      $v0, $zero, 0x80
    /* 2BE44 8003B644 A3ED0008 */  j          .L8003B68C
    /* 2BE48 8003B648 180002A2 */   sb        $v0, 0x18($s0)
  .L8003B64C:
    /* 2BE4C 8003B64C 80006230 */  andi       $v0, $v1, 0x80
    /* 2BE50 8003B650 0A004010 */  beqz       $v0, .L8003B67C
    /* 2BE54 8003B654 801F023C */   lui       $v0, (0x1F800247 >> 16)
    /* 2BE58 8003B658 47024490 */  lbu        $a0, (0x1F800247 & 0xFFFF)($v0)
    /* 2BE5C 8003B65C 00000000 */  nop
    /* 2BE60 8003B660 0F008430 */  andi       $a0, $a0, 0xF
    /* 2BE64 8003B664 A00F020C */  jal        func_80083E80
    /* 2BE68 8003B668 C0210400 */   sll       $a0, $a0, 7
    /* 2BE6C 8003B66C 00140200 */  sll        $v0, $v0, 16
    /* 2BE70 8003B670 83150200 */  sra        $v0, $v0, 22
    /* 2BE74 8003B674 A0ED0008 */  j          .L8003B680
    /* 2BE78 8003B678 10004224 */   addiu     $v0, $v0, 0x10
  .L8003B67C:
    /* 2BE7C 8003B67C 21100000 */  addu       $v0, $zero, $zero
  .L8003B680:
    /* 2BE80 8003B680 20004224 */  addiu      $v0, $v0, 0x20
  .L8003B684:
    /* 2BE84 8003B684 180002A2 */  sb         $v0, 0x18($s0)
    /* 2BE88 8003B688 20000224 */  addiu      $v0, $zero, 0x20
  .L8003B68C:
    /* 2BE8C 8003B68C 190002A2 */  sb         $v0, 0x19($s0)
    /* 2BE90 8003B690 A7ED0008 */  j          .L8003B69C
    /* 2BE94 8003B694 1A0002A2 */   sb        $v0, 0x1A($s0)
  .L8003B698:
    /* 2BE98 8003B698 0D0000A2 */  sb         $zero, 0xD($s0)
  .L8003B69C:
    /* 2BE9C 8003B69C EB65010C */  jal        func_800597AC
    /* 2BEA0 8003B6A0 21200002 */   addu      $a0, $s0, $zero
    /* 2BEA4 8003B6A4 01000292 */  lbu        $v0, 0x1($s0)
    /* 2BEA8 8003B6A8 00000000 */  nop
    /* 2BEAC 8003B6AC 10004010 */  beqz       $v0, .L8003B6F0
    /* 2BEB0 8003B6B0 00000000 */   nop
    /* 2BEB4 8003B6B4 7E010296 */  lhu        $v0, 0x17E($s0)
    /* 2BEB8 8003B6B8 08001192 */  lbu        $s1, 0x8($s0)
    /* 2BEBC 8003B6BC 20004230 */  andi       $v0, $v0, 0x20
    /* 2BEC0 8003B6C0 08004010 */  beqz       $v0, .L8003B6E4
    /* 2BEC4 8003B6C4 00000000 */   nop
    /* 2BEC8 8003B6C8 79010292 */  lbu        $v0, 0x179($s0)
    /* 2BECC 8003B6CC 00000000 */  nop
    /* 2BED0 8003B6D0 04004010 */  beqz       $v0, .L8003B6E4
    /* 2BED4 8003B6D4 00000000 */   nop
    /* 2BED8 8003B6D8 09000292 */  lbu        $v0, 0x9($s0)
    /* 2BEDC 8003B6DC 00000000 */  nop
    /* 2BEE0 8003B6E0 080002A2 */  sb         $v0, 0x8($s0)
  .L8003B6E4:
    /* 2BEE4 8003B6E4 29F3000C */  jal        func_8003CCA4
    /* 2BEE8 8003B6E8 21200002 */   addu      $a0, $s0, $zero
    /* 2BEEC 8003B6EC 080011A2 */  sb         $s1, 0x8($s0)
  .L8003B6F0:
    /* 2BEF0 8003B6F0 1800BF8F */  lw         $ra, 0x18($sp)
    /* 2BEF4 8003B6F4 1400B18F */  lw         $s1, 0x14($sp)
    /* 2BEF8 8003B6F8 1000B08F */  lw         $s0, 0x10($sp)
    /* 2BEFC 8003B6FC 0800E003 */  jr         $ra
    /* 2BF00 8003B700 2000BD27 */   addiu     $sp, $sp, 0x20
endlabel EntityLoop_Player
