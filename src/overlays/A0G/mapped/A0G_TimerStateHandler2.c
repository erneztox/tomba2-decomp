// A0G_TimerStateHandler2 - Timer state handler variant 2

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 A0G_TimerStateHandler2(int param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  
  bVar1 = *(byte *)(param_1 + 5);
  if (bVar1 == 1) {
    sVar2 = *(short *)(param_1 + 0x40) + -1;
    *(short *)(param_1 + 0x40) = sVar2;
    if (sVar2 == -1) {
      *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
      DAT_1f800137 = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    return 0;
  }
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      *(undefined2 *)(param_1 + 0x40) = 0xf;
      *(undefined1 *)(param_1 + 5) = 1;
      *(undefined2 *)(param_1 + 0x50) = 0x400;
      func_0x00072efc(param_1);
      DAT_800bf81f = 0;
      DAT_800e7e84 = 4;
      DAT_800e7e85 = 0x24;
      DAT_800e7e86 = 0;
      DAT_800e7eaa = *(undefined1 *)(param_1 + 0x2a);
      _DAT_800e7eae = *(undefined2 *)(param_1 + 0x2e);
      _DAT_800e7eb2 =
           (*(short *)(param_1 + 0x84) +
           *(short *)(param_1 + 0x32) + *(short *)((uint)*(byte *)(param_1 + 3) * 0xc + -0x7fef2d2a)
           ) - _DAT_800e7f04;
      _DAT_800e7eb6 = *(undefined2 *)(param_1 + 0x36);
      halt_baddata();
    }
  }
  else {
    if (bVar1 == 2) {
      iVar3 = func_0x00072f14(param_1);
      if (iVar3 != 0) {
        *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
        halt_baddata();
      }
      return 0;
    }
    if (bVar1 == 3) {
      if (DAT_800bf80f != '\0') {
        return 0;
      }
      *(undefined1 *)(param_1 + 5) = 0;
      _DAT_800bf850 = 0;
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

