nonmatching func_8003BF00, 0x148

glabel func_8003BF00
    /* 2C700 8003BF00 801F023C */  lui        $v0, (0x1F800136 >> 16)
    /* 2C704 8003BF04 36014290 */  lbu        $v0, (0x1F800136 & 0xFFFF)($v0)
    /* 2C708 8003BF08 E0FFBD27 */  addiu      $sp, $sp, -0x20
    /* 2C70C 8003BF0C 1C00BFAF */  sw         $ra, 0x1C($sp)
    /* 2C710 8003BF10 1800B2AF */  sw         $s2, 0x18($sp)
    /* 2C714 8003BF14 1400B1AF */  sw         $s1, 0x14($sp)
    /* 2C718 8003BF18 0D004014 */  bnez       $v0, .L8003BF50
    /* 2C71C 8003BF1C 1000B0AF */   sw        $s0, 0x10($sp)
    /* 2C720 8003BF20 801F023C */  lui        $v0, (0x1F80015C >> 16)
    /* 2C724 8003BF24 5C014594 */  lhu        $a1, (0x1F80015C & 0xFFFF)($v0)
    /* 2C728 8003BF28 801F033C */  lui        $v1, (0x1F800154 >> 16)
    /* 2C72C 8003BF2C 5C0140A4 */  sh         $zero, (0x1F80015C & 0xFFFF)($v0)
    /* 2C730 8003BF30 0F80023C */  lui        $v0, %hi(g_BackgroundEntitiesList)
    /* 2C734 8003BF34 5401648C */  lw         $a0, (0x1F800154 & 0xFFFF)($v1)
    /* 2C738 8003BF38 38274224 */  addiu      $v0, $v0, %lo(g_BackgroundEntitiesList)
    /* 2C73C 8003BF3C 540162AC */  sw         $v0, (0x1F800154 & 0xFFFF)($v1)
    /* 2C740 8003BF40 801F023C */  lui        $v0, (0x1F80015E >> 16)
    /* 2C744 8003BF44 5E0145A4 */  sh         $a1, (0x1F80015E & 0xFFFF)($v0)
    /* 2C748 8003BF48 801F023C */  lui        $v0, (0x1F800158 >> 16)
    /* 2C74C 8003BF4C 580144AC */  sw         $a0, (0x1F800158 & 0xFFFF)($v0)
  .L8003BF50:
    /* 2C750 8003BF50 801F023C */  lui        $v0, (0x1F80015E >> 16)
    /* 2C754 8003BF54 5E015084 */  lh         $s0, (0x1F80015E & 0xFFFF)($v0)
    /* 2C758 8003BF58 801F023C */  lui        $v0, (0x1F800158 >> 16)
    /* 2C75C 8003BF5C 5801518C */  lw         $s1, (0x1F800158 & 0xFFFF)($v0)
    /* 2C760 8003BF60 33000012 */  beqz       $s0, .L8003C030
    /* 2C764 8003BF64 0180023C */   lui       $v0, %hi(jtbl_80014D38)
    /* 2C768 8003BF68 384D5224 */  addiu      $s2, $v0, %lo(jtbl_80014D38)
  .L8003BF6C:
    /* 2C76C 8003BF6C 0000248E */  lw         $a0, 0x0($s1)
    /* 2C770 8003BF70 04003126 */  addiu      $s1, $s1, 0x4
    /* 2C774 8003BF74 01008290 */  lbu        $v0, 0x1($a0)
    /* 2C778 8003BF78 00000000 */  nop
    /* 2C77C 8003BF7C 2A004010 */  beqz       $v0, .L8003C028
    /* 2C780 8003BF80 FFFF1026 */   addiu     $s0, $s0, -0x1
    /* 2C784 8003BF84 0B008390 */  lbu        $v1, 0xB($a0)
    /* 2C788 8003BF88 00000000 */  nop
    /* 2C78C 8003BF8C 2000622C */  sltiu      $v0, $v1, 0x20
    /* 2C790 8003BF90 25004010 */  beqz       $v0, .L8003C028
    /* 2C794 8003BF94 80100300 */   sll       $v0, $v1, 2
    /* 2C798 8003BF98 21105200 */  addu       $v0, $v0, $s2
    /* 2C79C 8003BF9C 0000428C */  lw         $v0, 0x0($v0)
    /* 2C7A0 8003BFA0 00000000 */  nop
    /* 2C7A4 8003BFA4 08004000 */  jr         $v0
    /* 2C7A8 8003BFA8 00000000 */   nop
    /* 2C7AC 8003BFAC 29F3000C */  jal        func_8003CCA4
    /* 2C7B0 8003BFB0 00000000 */   nop
    /* 2C7B4 8003BFB4 0AF00008 */  j          .L8003C028
    /* 2C7B8 8003BFB8 00000000 */   nop
    /* 2C7BC 8003BFBC B5F0000C */  jal        func_8003C2D4
    /* 2C7C0 8003BFC0 00000000 */   nop
    /* 2C7C4 8003BFC4 0AF00008 */  j          .L8003C028
    /* 2C7C8 8003BFC8 00000000 */   nop
    /* 2C7CC 8003BFCC 19F1000C */  jal        func_8003C464
    /* 2C7D0 8003BFD0 00000000 */   nop
    /* 2C7D4 8003BFD4 0AF00008 */  j          .L8003C028
    /* 2C7D8 8003BFD8 00000000 */   nop
    /* 2C7DC 8003BFDC 7EF1000C */  jal        func_8003C5F8
    /* 2C7E0 8003BFE0 00000000 */   nop
    /* 2C7E4 8003BFE4 0AF00008 */  j          .L8003C028
    /* 2C7E8 8003BFE8 00000000 */   nop
    /* 2C7EC 8003BFEC E2F1000C */  jal        func_8003C788
    /* 2C7F0 8003BFF0 00000000 */   nop
    /* 2C7F4 8003BFF4 0AF00008 */  j          .L8003C028
    /* 2C7F8 8003BFF8 00000000 */   nop
    /* 2C7FC 8003BFFC 0C80023C */  lui        $v0, %hi(D_800BF870)
    /* 2C800 8003C000 70F84390 */  lbu        $v1, %lo(D_800BF870)($v0)
    /* 2C804 8003C004 14000224 */  addiu      $v0, $zero, 0x14
    /* 2C808 8003C008 05006214 */  bne        $v1, $v0, .L8003C020
    /* 2C80C 8003C00C 00000000 */   nop
    /* 2C810 8003C010 1C3F040C */  jal        func_8010FC70
    /* 2C814 8003C014 00000000 */   nop
    /* 2C818 8003C018 0AF00008 */  j          .L8003C028
    /* 2C81C 8003C01C 00000000 */   nop
  .L8003C020:
    /* 2C820 8003C020 2233010C */  jal        func_8004CC88
    /* 2C824 8003C024 00000000 */   nop
  .L8003C028:
    /* 2C828 8003C028 D0FF0016 */  bnez       $s0, .L8003BF6C
    /* 2C82C 8003C02C 00000000 */   nop
  .L8003C030:
    /* 2C830 8003C030 1C00BF8F */  lw         $ra, 0x1C($sp)
    /* 2C834 8003C034 1800B28F */  lw         $s2, 0x18($sp)
    /* 2C838 8003C038 1400B18F */  lw         $s1, 0x14($sp)
    /* 2C83C 8003C03C 1000B08F */  lw         $s0, 0x10($sp)
    /* 2C840 8003C040 0800E003 */  jr         $ra
    /* 2C844 8003C044 2000BD27 */   addiu     $sp, $sp, 0x20
endlabel func_8003BF00
