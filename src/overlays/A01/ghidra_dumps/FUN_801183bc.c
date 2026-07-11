// FUN_801183bc

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_801183bc(undefined1 param_1,undefined4 param_2,int param_3)

{
  short sVar1;
  ushort uVar2;
  int in_v0;
  int iVar3;
  uint uVar4;
  int unaff_s0;
  
  *(char *)(unaff_s0 + 6) = (char)in_v0;
  *(undefined1 *)(unaff_s0 + 7) = 0;
  *(undefined1 *)(in_v0 + 0x5e) = param_1;
  iVar3 = *(int *)(unaff_s0 + 0x3c);
  *(undefined1 *)(iVar3 + 0x46) = 0;
  *(short *)(param_3 + 0x10) = (short)(iVar3 << 4);
  if (*(char *)(unaff_s0 + 3) != '\b') {
    sVar1 = (*(short *)(unaff_s0 + 0x32) - *(short *)(param_3 + 2)) + 200;
    *(short *)(unaff_s0 + 0x86) = sVar1;
    *(short *)(unaff_s0 + 0x84) = sVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined2 *)(unaff_s0 + 0x84) = 0;
  iVar3 = (int)*(short *)(unaff_s0 + 0x32) - (int)*(short *)(param_3 + 2);
  if (iVar3 < 0) {
    iVar3 = -iVar3;
  }
  *(short *)(unaff_s0 + 0x86) = (short)iVar3 + 200;
  *(undefined2 *)(unaff_s0 + 0x80) = 100;
  *(undefined2 *)(unaff_s0 + 0x82) = 200;
  *(undefined2 *)(unaff_s0 + 0x54) = 0;
  sVar1 = _DAT_1f8000f2;
  *(undefined2 *)(unaff_s0 + 0x58) = 0;
  *(short *)(unaff_s0 + 0x56) = -sVar1;
  if (*(char *)(unaff_s0 + 0x29) == '\0') {
    uVar2 = *(short *)(unaff_s0 + 0x44) - 0x10;
    *(ushort *)(unaff_s0 + 0x44) = uVar2;
    if ((int)((uint)uVar2 << 0x10) < 0) {
      *(undefined2 *)(unaff_s0 + 0x44) = 0;
    }
  }
  else {
    uVar4 = func_0x8009a450();
    uVar4 = uVar4 & 3;
    if (((uVar4 == 1) || (uVar4 < 2)) || (uVar4 != 2)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    sVar1 = *(short *)(unaff_s0 + 0x44) + 0x40;
    *(short *)(unaff_s0 + 0x44) = sVar1;
    if (0x1000 < sVar1) {
      *(undefined2 *)(unaff_s0 + 0x44) = 0x1000;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  func_0x8007703c();
  *(undefined1 *)(unaff_s0 + 0x29) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

