// FUN_0803580c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0803580c(int param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  
  bVar1 = *(byte *)(param_1 + 6);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        if ((ushort)(_DAT_1f800162 + 0xa26U) < 0x11b) {
          *(undefined1 *)(param_1 + 6) = 3;
          halt_baddata();
        }
        sVar2 = *(short *)(param_1 + 0x50) + 0x40;
        *(short *)(param_1 + 0x50) = sVar2;
        iVar3 = func_0x00083e80((int)sVar2);
        iVar3 = *(int *)(param_1 + 0x70) + iVar3 * -0x60;
        *(int *)(param_1 + 0x70) = iVar3;
        *(int *)(param_1 + 0x30) = *(short *)(param_1 + 0x66) * 0x10000 + iVar3;
        halt_baddata();
      }
      if (bVar1 != 3) {
        halt_baddata();
      }
      iVar3 = (int)_DAT_1f800162 - (int)*(short *)(param_1 + 0x32);
      if (0x14 < (iVar3 + 10U & 0xffff)) {
        *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + iVar3 * 0x2000;
        halt_baddata();
      }
      *(undefined1 *)(param_1 + 6) = 0;
      *(short *)(param_1 + 0x32) = _DAT_1f800162;
      if (-0x90c < *(short *)(param_1 + 0x32)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (*(short *)(param_1 + 0x32) < -0xa26) {
        *(undefined2 *)(param_1 + 0x32) = 0xf5da;
      }
      return;
    }
    if (bVar1 != 0) {
      halt_baddata();
    }
    *(undefined1 *)(param_1 + 6) = 1;
    *(undefined2 *)(param_1 + 0x50) = 0;
    *(undefined4 *)(param_1 + 0x70) = 0;
  }
  if (0x11a < (ushort)(_DAT_1f800162 + 0xa26U)) {
    *(undefined2 *)(param_1 + 0x50) = 0;
    *(undefined2 *)(param_1 + 0x66) = *(undefined2 *)(param_1 + 0x32);
    *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
    *(undefined4 *)(param_1 + 0x70) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(short *)(param_1 + 0x32) = _DAT_1f800162;
  sVar2 = *(short *)(param_1 + 0x50) + 0x40;
  *(short *)(param_1 + 0x50) = sVar2;
  iVar3 = func_0x00083e80((int)sVar2);
  *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + iVar3 * -0x60;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

