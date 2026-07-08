
/* WARNING: Control flow encountered bad instruction data */

void FUN_800116cc(void)

{
  undefined2 uVar1;
  short sVar2;
  int iVar3;
  int unaff_s4;
  int unaff_s5;
  int unaff_s6;
  uint uVar4;
  undefined2 unaff_s8;
  undefined2 in_stack_0000007c;
  undefined2 uStack0000007e;
  undefined2 in_stack_00000080;
  undefined2 uStack00000082;
  undefined1 in_stack_00000084;
  undefined2 in_stack_0000013c;
  undefined2 uStack0000013e;
  undefined2 in_stack_00000140;
  undefined2 uStack00000142;
  undefined1 in_stack_00000144;
  
  if (unaff_s5 == 1) {
    uVar4 = 0x808080;
    if (unaff_s4 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else if (unaff_s5 < 2) {
    if (unaff_s5 != 0) {
      halt_baddata();
    }
    uVar4 = unaff_s4 << 0x11 | unaff_s4 << 9 | unaff_s4 << 1;
    if (0x3d < unaff_s4 + 1) {
      halt_baddata();
    }
  }
  else {
    if (unaff_s5 != 2) {
      if (unaff_s5 != 3) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      FUN_800131b0(0);
      FUN_8001768c(&stack0x00000018,0,0,0x140);
      FUN_8001768c(&stack0x000000d8,0,0x100,0x140);
      FUN_8001774c(&stack0x00000074,0,0x100,0x140);
      FUN_8001774c(&stack0x00000134,0,0,0x140);
      in_stack_0000007c = 0;
      uStack0000007e = 8;
      in_stack_00000080 = 0x100;
      uStack00000082 = 0xf0;
      in_stack_0000013c = 0;
      uStack0000013e = 8;
      in_stack_00000140 = 0x100;
      uStack00000142 = 0xf0;
      in_stack_00000144 = 0;
      in_stack_00000084 = 0;
      FUN_80013a78(unaff_s6 + 0x5c);
      FUN_800138ac();
      return;
    }
    uVar4 = unaff_s4 << 0x11 | unaff_s4 << 9 | unaff_s4 << 1;
  }
  uVar1 = FUN_800177cc(0x370,0x1ff);
  sVar2 = FUN_8001778c(0,0,0x340,0x100);
  FUN_8001784c(unaff_s6 + 0xb4,1,0,(int)sVar2);
  FUN_800177ec(unaff_s6 + 0x70,unaff_s6 + 0xb4);
  *(uint *)(unaff_s6 + 0x7c) = uVar4;
  FUN_8001782c(unaff_s6 + 0x78);
  iVar3 = unaff_s6 + 0x74;
  *(undefined2 *)(unaff_s6 + 0x82) = 200;
  *(undefined2 *)(unaff_s6 + 0x80) = 0x18;
  *(undefined1 *)(unaff_s6 + 0x84) = 0;
  *(undefined1 *)(unaff_s6 + 0x85) = 0;
  *(undefined2 *)(unaff_s6 + 0x88) = 0x100;
  *(undefined2 *)(unaff_s6 + 0x8a) = unaff_s8;
  *(undefined2 *)(unaff_s6 + 0x86) = uVar1;
  FUN_800177ec(iVar3);
  *(uint *)(unaff_s6 + 0x90) = uVar4;
  FUN_8001782c(unaff_s6 + 0x8c);
  *(undefined2 *)(unaff_s6 + 0x96) = 200;
  *(undefined2 *)(unaff_s6 + 0x94) = 0x118;
  *(undefined1 *)(unaff_s6 + 0x98) = 0;
  *(char *)(unaff_s6 + 0x99) = (char)unaff_s8;
  *(undefined2 *)(unaff_s6 + 0x9c) = 0x100;
  *(undefined2 *)(unaff_s6 + 0x9e) = unaff_s8;
  *(undefined2 *)(unaff_s6 + 0x9a) = uVar1;
  FUN_800177ec(iVar3);
  *(uint *)(unaff_s6 + 0xa4) = uVar4;
  FUN_8001782c(unaff_s6 + 0xa0);
  *(undefined2 *)(unaff_s6 + 0xa8) = 0x218;
  *(undefined1 *)(unaff_s6 + 0xad) = 0x80;
  *(undefined2 *)(unaff_s6 + 0xaa) = 200;
  *(undefined1 *)(unaff_s6 + 0xac) = 0;
  *(undefined2 *)(unaff_s6 + 0xb0) = unaff_s8;
  *(undefined2 *)(unaff_s6 + 0xb2) = 0x20;
  *(undefined2 *)(unaff_s6 + 0xae) = uVar1;
  FUN_800177ec(iVar3);
  FUN_80013248(0);
                    /* WARNING: Subroutine does not return */
  FUN_80017e4c(0);
}

