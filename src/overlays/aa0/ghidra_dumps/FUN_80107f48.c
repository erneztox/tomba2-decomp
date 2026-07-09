// FUN_80107f48

undefined4 FUN_80107f48(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  short sVar5;
  int iVar7;
  int iVar8;
  char cVar9;
  int iVar6;
  
  iVar7 = 3;
  iVar8 = *(int *)(param_1 + 0x10);
  iVar4 = *(int *)(iVar8 + 0xc4);
  iVar6 = (uint)*(ushort *)(param_1 + 0x36) - (uint)*(ushort *)(iVar4 + 0x34);
  sVar5 = (short)iVar6;
  cVar9 = '\x02';
  if ((*(byte *)(param_1 + 0x5e) & 1) != 0) {
    if (*(byte *)(param_1 + 0x5e) == 3) {
      func_0x80083f50((int)*(short *)(iVar4 + 10));
      uVar2 = FUN_80110f90();
      return uVar2;
    }
    iVar3 = func_0x80083f50((int)*(short *)(iVar4 + 10));
    sVar1 = (short)((uint)(iVar3 * 0x91) >> 10);
    iVar6 = iVar6 * 0x10000 >> 0x10;
    if (iVar6 < 0) {
      sVar1 = -sVar1;
      iVar7 = 2;
    }
    iVar3 = func_0x80083f50((int)*(short *)(iVar4 + 8));
    sVar1 = (short)(iVar3 * sVar1 >> 0xc);
    if (iVar6 < 0) {
      if (iVar6 < sVar1) {
        cVar9 = '\0';
        *(short *)(param_1 + 0x36) = *(short *)(iVar4 + 0x34) + sVar1;
        sVar5 = sVar1;
      }
    }
    else if (sVar1 < iVar6) {
      uVar2 = FUN_80111010();
      return uVar2;
    }
  }
  iVar6 = func_0x80083e80((int)*(short *)(iVar4 + 10));
  iVar3 = func_0x80083e80((int)*(short *)(iVar4 + 8));
  *(short *)(param_1 + 0x2e) = *(short *)(iVar4 + 0x2c) + (short)(iVar6 * sVar5 >> 0xc);
  if (*(char *)(param_1 + 0x5e) == '\x03') {
    uVar2 = FUN_801110a8(((uint)*(ushort *)(*(int *)(iVar8 + iVar7 * 4 + 0xc0) + 0x30) -
                         ((uint)*(ushort *)(param_1 + 0x86) - (uint)*(ushort *)(param_1 + 0x84))) -
                         (uint)*(ushort *)(iVar8 + 0x84));
    return uVar2;
  }
  iVar4 = ((uint)*(ushort *)(iVar4 + 0x30) - (iVar3 * sVar5 >> 0xc)) -
          (((uint)*(ushort *)(param_1 + 0x86) - (uint)*(ushort *)(param_1 + 0x84)) + 100);
  uVar2 = 0;
  if ((iVar4 * 0x10000 >> 0x10 <= (int)*(short *)(param_1 + 0x32)) &&
     (uVar2 = 0, (*(byte *)(param_1 + 0xbf) & 1) == 0)) {
    uVar2 = 1;
    *(short *)(param_1 + 0x32) = (short)iVar4;
    if (*(char *)(param_1 + 0x5e) == '\x01') {
      if (cVar9 == *(char *)(param_1 + 0x5f)) {
        *(undefined1 *)(param_1 + 0x5e) = 3;
      }
      uVar2 = 1;
    }
  }
  return uVar2;
}

