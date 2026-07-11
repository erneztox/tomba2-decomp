// FUN_0801dda0

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801dda0(int param_1)

{
  byte bVar1;
  short sVar2;
  undefined2 uVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 < 4) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      return;
    }
    if (bVar1 != 0) {
      halt_baddata();
    }
    *(undefined1 *)(param_1 + 4) = 1;
    *(undefined1 *)(param_1 + 5) = 0;
    *(undefined1 *)(param_1 + 0x29) = 0;
    uVar5 = (uint)DAT_800e7fc7;
    *(undefined4 *)(param_1 + 0x3c) = 0x80144bec;
    *(undefined2 *)(param_1 + 0x4e) = 0;
    *(undefined2 *)(param_1 + 0x32) = 0xffec;
    *(uint *)(param_1 + 0x58) = uVar5;
  }
  if (DAT_800e8001 == '\0') {
    *(undefined1 *)(param_1 + 4) = 2;
  }
  cVar4 = *(char *)(param_1 + 5) + '\x01';
  *(char *)(param_1 + 5) = cVar4;
  if (cVar4 == '\x03') {
    *(undefined1 *)(param_1 + 5) = 0;
    *(char *)(param_1 + 0x29) = *(char *)(param_1 + 0x29) + ' ';
  }
  uVar3 = _DAT_1f800164;
  *(undefined2 *)(param_1 + 0x2c) = _DAT_1f800160;
  sVar2 = _DAT_1f800162;
  *(undefined2 *)(param_1 + 0x30) = uVar3;
  *(short *)(param_1 + 0x2e) = sVar2 + 0x14;
  *(short *)(param_1 + 0x2c) = *(short *)(param_1 + 0x2c) + (short)(_DAT_800e7f18 * 0xf >> 0xb);
  *(short *)(param_1 + 0x2e) = *(short *)(param_1 + 0x2e) + (short)(_DAT_800e7f1e * 0xf >> 0xb);
  iVar6 = (int)_DAT_800e7f24;
  *(undefined2 *)(param_1 + 0x48) = 0;
  *(short *)(param_1 + 0x30) = *(short *)(param_1 + 0x30) + (short)(iVar6 * 0xf >> 0xb);
  *(undefined2 *)(param_1 + 0x4a) = _DAT_800e7ed6;
  *(undefined2 *)(param_1 + 0x4c) = _DAT_800e7ed8;
  if (*(uint *)(param_1 + 0x58) != (uint)DAT_800e7fc7) {
    *(uint *)(param_1 + 0x58) = (uint)DAT_800e7fc7;
    *(undefined2 *)(param_1 + 0x4e) = 0;
  }
  iVar6 = (int)((uint)_DAT_800e7ec4 << 0x10) >> 0x11;
  if (iVar6 < 0) {
    iVar6 = -iVar6;
  }
  iVar6 = (uint)*(ushort *)(param_1 + 0x4e) + (iVar6 - *(short *)(param_1 + 0x4e) >> 3);
  uVar5 = (iVar6 * 0x10000 >> 0x19) + 5;
  *(short *)(param_1 + 0x4e) = (short)iVar6;
  if (0xf < (int)uVar5) {
    uVar5 = 0xf;
  }
  *(uint *)(param_1 + 0x50) = (uVar5 + 0x10) * 0x10000 | uVar5 | 0x1000;
  iVar6 = (int)(short)_DAT_800e7ec4;
  if (iVar6 < 0) {
    iVar6 = -iVar6;
  }
  iVar6 = iVar6 + -0x28;
  if ((iVar6 < 0x1001) && (-1 < iVar6)) {
    *(int *)(param_1 + 0x54) = 0x1000 - iVar6;
    *(undefined1 *)(param_1 + 1) = DAT_800e7e81;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

