// FUN_80135488

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80135488(int param_1)

{
  byte bVar1;
  short sVar2;
  undefined2 uVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
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
      FUN_8013e610();
      return;
    }
    *(undefined2 *)(param_1 + 4) = 1;
    *(undefined1 *)(param_1 + 0x29) = 0;
    uVar5 = (uint)DAT_800e7fc7;
    *(undefined4 *)(param_1 + 0x3c) = 0x8014b80c;
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
  uVar3 = _DAT_800e7ed6;
  *(undefined2 *)(param_1 + 0x4c) = 0;
  *(undefined2 *)(param_1 + 0x4a) = uVar3;
  if (*(uint *)(param_1 + 0x58) != (uint)DAT_800e7fc7) {
    *(uint *)(param_1 + 0x58) = (uint)DAT_800e7fc7;
    *(undefined2 *)(param_1 + 0x4e) = 0;
  }
  iVar6 = (int)_DAT_800e7ec4;
  if (iVar6 < 0) {
    iVar6 = -iVar6;
  }
  iVar7 = (uint)*(ushort *)(param_1 + 0x4e) + (iVar6 - *(short *)(param_1 + 0x4e) >> 3);
  iVar6 = iVar7 * 0x10000 >> 0x19;
  *(short *)(param_1 + 0x4e) = (short)iVar7;
  *(uint *)(param_1 + 0x50) = (iVar6 + 0x15) * 0x10000 | iVar6 + 5U | 0x1000;
  iVar6 = (int)_DAT_800e7ec4;
  if (iVar6 < 0) {
    iVar6 = -iVar6;
  }
  if (0x1000 < iVar6) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(int *)(param_1 + 0x54) = 0x1000 - iVar6;
  *(undefined1 *)(param_1 + 1) = DAT_800e7e81;
  FUN_8013e610();
  return;
}

