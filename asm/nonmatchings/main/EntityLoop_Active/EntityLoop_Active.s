nonmatching EntityLoop_Active, 0x28C

glabel EntityLoop_Active
    /* 2C848 8003C048 90FFBD27 */  addiu      $sp, $sp, -0x70
    /* 2C84C 8003C04C 0F80023C */  lui        $v0, %hi(g_ActiveEntitiesList)
    /* 2C850 8003C050 5800B0AF */  sw         $s0, 0x58($sp)
    /* 2C854 8003C054 2426508C */  lw         $s0, %lo(g_ActiveEntitiesList)($v0)
    /* 2C858 8003C058 6800BFAF */  sw         $ra, 0x68($sp)
    /* 2C85C 8003C05C 6400B3AF */  sw         $s3, 0x64($sp)
    /* 2C860 8003C060 6000B2AF */  sw         $s2, 0x60($sp)
    /* 2C864 8003C064 94000012 */  beqz       $s0, .L8003C2B8
    /* 2C868 8003C068 5C00B1AF */   sw        $s1, 0x5C($sp)
    /* 2C86C 8003C06C 0180023C */  lui        $v0, %hi(jtbl_80014DB8)
    /* 2C870 8003C070 B84D5324 */  addiu      $s3, $v0, %lo(jtbl_80014DB8)
    /* 2C874 8003C074 801F023C */  lui        $v0, %hi(D_1F8000F8)
    /* 2C878 8003C078 F8005224 */  addiu      $s2, $v0, %lo(D_1F8000F8)
  .L8003C07C:
    /* 2C87C 8003C07C 01000292 */  lbu        $v0, 0x1($s0)
    /* 2C880 8003C080 2400118E */  lw         $s1, 0x24($s0)
    /* 2C884 8003C084 89004010 */  beqz       $v0, .L8003C2AC
    /* 2C888 8003C088 00000000 */   nop
    /* 2C88C 8003C08C 0B000392 */  lbu        $v1, 0xB($s0)
    /* 2C890 8003C090 00000000 */  nop
    /* 2C894 8003C094 2100622C */  sltiu      $v0, $v1, 0x21
    /* 2C898 8003C098 84004010 */  beqz       $v0, .L8003C2AC
    /* 2C89C 8003C09C 80100300 */   sll       $v0, $v1, 2
    /* 2C8A0 8003C0A0 21105300 */  addu       $v0, $v0, $s3
    /* 2C8A4 8003C0A4 0000428C */  lw         $v0, 0x0($v0)
    /* 2C8A8 8003C0A8 00000000 */  nop
    /* 2C8AC 8003C0AC 08004000 */  jr         $v0
    /* 2C8B0 8003C0B0 00000000 */   nop
    /* 2C8B4 8003C0B4 29F3000C */  jal        func_8003CCA4
    /* 2C8B8 8003C0B8 21200002 */   addu      $a0, $s0, $zero
    /* 2C8BC 8003C0BC ACF00008 */  j          .L8003C2B0
    /* 2C8C0 8003C0C0 21802002 */   addu      $s0, $s1, $zero
    /* 2C8C4 8003C0C4 21200002 */  addu       $a0, $s0, $zero
    /* 2C8C8 8003C0C8 5DFC000C */  jal        func_8003F174
    /* 2C8CC 8003C0CC 21280000 */   addu      $a1, $zero, $zero
    /* 2C8D0 8003C0D0 ACF00008 */  j          .L8003C2B0
    /* 2C8D4 8003C0D4 21802002 */   addu      $s0, $s1, $zero
    /* 2C8D8 8003C0D8 E7FB000C */  jal        func_8003EF9C
    /* 2C8DC 8003C0DC 21200002 */   addu      $a0, $s0, $zero
    /* 2C8E0 8003C0E0 ACF00008 */  j          .L8003C2B0
    /* 2C8E4 8003C0E4 21802002 */   addu      $s0, $s1, $zero
    /* 2C8E8 8003C0E8 D3E7000C */  jal        func_80039F4C
    /* 2C8EC 8003C0EC 21200002 */   addu      $a0, $s0, $zero
    /* 2C8F0 8003C0F0 ACF00008 */  j          .L8003C2B0
    /* 2C8F4 8003C0F4 21802002 */   addu      $s0, $s1, $zero
    /* 2C8F8 8003C0F8 0FA9040C */  jal        func_8012A43C
    /* 2C8FC 8003C0FC 21200002 */   addu      $a0, $s0, $zero
    /* 2C900 8003C100 ACF00008 */  j          .L8003C2B0
    /* 2C904 8003C104 21802002 */   addu      $s0, $s1, $zero
    /* 2C908 8003C108 6DA5040C */  jal        func_801295B4
    /* 2C90C 8003C10C 21200002 */   addu      $a0, $s0, $zero
    /* 2C910 8003C110 ACF00008 */  j          .L8003C2B0
    /* 2C914 8003C114 21802002 */   addu      $s0, $s1, $zero
    /* 2C918 8003C118 45A4040C */  jal        func_80129114
    /* 2C91C 8003C11C 21200002 */   addu      $a0, $s0, $zero
    /* 2C920 8003C120 ACF00008 */  j          .L8003C2B0
    /* 2C924 8003C124 21802002 */   addu      $s0, $s1, $zero
    /* 2C928 8003C128 56F7040C */  jal        func_8013DD58
    /* 2C92C 8003C12C 21200002 */   addu      $a0, $s0, $zero
    /* 2C930 8003C130 ACF00008 */  j          .L8003C2B0
    /* 2C934 8003C134 21802002 */   addu      $s0, $s1, $zero
    /* 2C938 8003C138 B5C9010C */  jal        func_800726D4
    /* 2C93C 8003C13C 21200002 */   addu      $a0, $s0, $zero
    /* 2C940 8003C140 ACF00008 */  j          .L8003C2B0
    /* 2C944 8003C144 21802002 */   addu      $s0, $s1, $zero
    /* 2C948 8003C148 B5F0000C */  jal        func_8003C2D4
    /* 2C94C 8003C14C 21200002 */   addu      $a0, $s0, $zero
    /* 2C950 8003C150 ACF00008 */  j          .L8003C2B0
    /* 2C954 8003C154 21802002 */   addu      $s0, $s1, $zero
    /* 2C958 8003C158 19F1000C */  jal        func_8003C464
    /* 2C95C 8003C15C 21200002 */   addu      $a0, $s0, $zero
    /* 2C960 8003C160 ACF00008 */  j          .L8003C2B0
    /* 2C964 8003C164 21802002 */   addu      $s0, $s1, $zero
    /* 2C968 8003C168 7EF1000C */  jal        func_8003C5F8
    /* 2C96C 8003C16C 21200002 */   addu      $a0, $s0, $zero
    /* 2C970 8003C170 ACF00008 */  j          .L8003C2B0
    /* 2C974 8003C174 21802002 */   addu      $s0, $s1, $zero
    /* 2C978 8003C178 E2F1000C */  jal        func_8003C788
    /* 2C97C 8003C17C 21200002 */   addu      $a0, $s0, $zero
    /* 2C980 8003C180 ACF00008 */  j          .L8003C2B0
    /* 2C984 8003C184 21802002 */   addu      $s0, $s1, $zero
    /* 2C988 8003C188 0C80023C */  lui        $v0, %hi(D_800BF870)
    /* 2C98C 8003C18C 70F84390 */  lbu        $v1, %lo(D_800BF870)($v0)
    /* 2C990 8003C190 04000224 */  addiu      $v0, $zero, 0x4
    /* 2C994 8003C194 05006214 */  bne        $v1, $v0, .L8003C1AC
    /* 2C998 8003C198 00000000 */   nop
    /* 2C99C 8003C19C 976F040C */  jal        func_8011BE5C
    /* 2C9A0 8003C1A0 21200002 */   addu      $a0, $s0, $zero
    /* 2C9A4 8003C1A4 ACF00008 */  j          .L8003C2B0
    /* 2C9A8 8003C1A8 21802002 */   addu      $s0, $s1, $zero
  .L8003C1AC:
    /* 2C9AC 8003C1AC 3800028E */  lw         $v0, 0x38($s0)
    /* 2C9B0 8003C1B0 00000000 */  nop
    /* 2C9B4 8003C1B4 3D004010 */  beqz       $v0, .L8003C2AC
    /* 2C9B8 8003C1B8 21300000 */   addu      $a2, $zero, $zero
    /* 2C9BC 8003C1BC 1000A427 */  addiu      $a0, $sp, 0x10
    /* 2C9C0 8003C1C0 00004284 */  lh         $v0, 0x0($v0)
    /* 2C9C4 8003C1C4 3C00038E */  lw         $v1, 0x3C($s0)
    /* 2C9C8 8003C1C8 3C00058E */  lw         $a1, 0x3C($s0)
    /* 2C9CC 8003C1CC 80100200 */  sll        $v0, $v0, 2
    /* 2C9D0 8003C1D0 21186200 */  addu       $v1, $v1, $v0
    /* 2C9D4 8003C1D4 02006284 */  lh         $v0, 0x2($v1)
    /* 2C9D8 8003C1D8 15EC000C */  jal        func_8003B054
    /* 2C9DC 8003C1DC 2128A200 */   addu      $a1, $a1, $v0
    /* 2C9E0 8003C1E0 2D000224 */  addiu      $v0, $zero, 0x2D
    /* 2C9E4 8003C1E4 1700A2A3 */  sb         $v0, 0x17($sp)
    /* 2C9E8 8003C1E8 60000296 */  lhu        $v0, 0x60($s0)
    /* 2C9EC 8003C1EC 00000000 */  nop
    /* 2C9F0 8003C1F0 3800A2A7 */  sh         $v0, 0x38($sp)
    /* 2C9F4 8003C1F4 62000296 */  lhu        $v0, 0x62($s0)
    /* 2C9F8 8003C1F8 00000000 */  nop
    /* 2C9FC 8003C1FC 3A00A2A7 */  sh         $v0, 0x3A($sp)
    /* 2CA00 8003C200 64000296 */  lhu        $v0, 0x64($s0)
    /* 2CA04 8003C204 00000000 */  nop
    /* 2CA08 8003C208 3C00A2A7 */  sh         $v0, 0x3C($sp)
    /* 2CA0C 8003C20C 66000296 */  lhu        $v0, 0x66($s0)
    /* 2CA10 8003C210 00000000 */  nop
    /* 2CA14 8003C214 4000A2A7 */  sh         $v0, 0x40($sp)
    /* 2CA18 8003C218 68000296 */  lhu        $v0, 0x68($s0)
    /* 2CA1C 8003C21C 00000000 */  nop
    /* 2CA20 8003C220 4200A2A7 */  sh         $v0, 0x42($sp)
    /* 2CA24 8003C224 6A000296 */  lhu        $v0, 0x6A($s0)
    /* 2CA28 8003C228 00000000 */  nop
    /* 2CA2C 8003C22C 4400A2A7 */  sh         $v0, 0x44($sp)
    /* 2CA30 8003C230 6C000296 */  lhu        $v0, 0x6C($s0)
    /* 2CA34 8003C234 00000000 */  nop
    /* 2CA38 8003C238 4800A2A7 */  sh         $v0, 0x48($sp)
    /* 2CA3C 8003C23C 6E000296 */  lhu        $v0, 0x6E($s0)
    /* 2CA40 8003C240 00000000 */  nop
    /* 2CA44 8003C244 4A00A2A7 */  sh         $v0, 0x4A($sp)
    /* 2CA48 8003C248 70000296 */  lhu        $v0, 0x70($s0)
    /* 2CA4C 8003C24C 00000000 */  nop
    /* 2CA50 8003C250 4C00A2A7 */  sh         $v0, 0x4C($sp)
    /* 2CA54 8003C254 72000296 */  lhu        $v0, 0x72($s0)
    /* 2CA58 8003C258 00000000 */  nop
    /* 2CA5C 8003C25C 5000A2A7 */  sh         $v0, 0x50($sp)
    /* 2CA60 8003C260 74000296 */  lhu        $v0, 0x74($s0)
    /* 2CA64 8003C264 00000000 */  nop
    /* 2CA68 8003C268 5200A2A7 */  sh         $v0, 0x52($sp)
    /* 2CA6C 8003C26C 76000296 */  lhu        $v0, 0x76($s0)
    /* 2CA70 8003C270 21204002 */  addu       $a0, $s2, $zero
    /* 2CA74 8003C274 9811020C */  jal        func_80084660
    /* 2CA78 8003C278 5400A2A7 */   sh        $v0, 0x54($sp)
    /* 2CA7C 8003C27C A411020C */  jal        func_80084690
    /* 2CA80 8003C280 21204002 */   addu      $a0, $s2, $zero
    /* 2CA84 8003C284 1000A427 */  addiu      $a0, $sp, 0x10
    /* 2CA88 8003C288 3800A527 */  addiu      $a1, $sp, 0x38
    /* 2CA8C 8003C28C C8EC000C */  jal        func_8003B320
    /* 2CA90 8003C290 10000624 */   addiu     $a2, $zero, 0x10
    /* 2CA94 8003C294 ACF00008 */  j          .L8003C2B0
    /* 2CA98 8003C298 21802002 */   addu      $s0, $s1, $zero
    /* 2CA9C 8003C29C 1800028E */  lw         $v0, 0x18($s0)
    /* 2CAA0 8003C2A0 00000000 */  nop
    /* 2CAA4 8003C2A4 09F84000 */  jalr       $v0
    /* 2CAA8 8003C2A8 21200002 */   addu      $a0, $s0, $zero
  .L8003C2AC:
    /* 2CAAC 8003C2AC 21802002 */  addu       $s0, $s1, $zero
  .L8003C2B0:
    /* 2CAB0 8003C2B0 72FF0016 */  bnez       $s0, .L8003C07C
    /* 2CAB4 8003C2B4 00000000 */   nop
  .L8003C2B8:
    /* 2CAB8 8003C2B8 6800BF8F */  lw         $ra, 0x68($sp)
    /* 2CABC 8003C2BC 6400B38F */  lw         $s3, 0x64($sp)
    /* 2CAC0 8003C2C0 6000B28F */  lw         $s2, 0x60($sp)
    /* 2CAC4 8003C2C4 5C00B18F */  lw         $s1, 0x5C($sp)
    /* 2CAC8 8003C2C8 5800B08F */  lw         $s0, 0x58($sp)
    /* 2CACC 8003C2CC 0800E003 */  jr         $ra
    /* 2CAD0 8003C2D0 7000BD27 */   addiu     $sp, $sp, 0x70
endlabel EntityLoop_Active
