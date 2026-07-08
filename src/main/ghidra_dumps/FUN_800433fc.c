
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_800433fc(int param_1)

{
  short sVar1;
  undefined2 uVar2;
  short sVar3;
  int iVar4;
  short sVar5;
  int iVar6;
  
  uVar2 = _DAT_1f800164;
  if (*(char *)(param_1 + 0x78) == '\0') {
    if (*(short *)(param_1 + 0x72) == 1) {
      uVar2 = *(undefined2 *)(param_1 + 0x66);
      *(undefined2 *)(param_1 + 0x48) = *(undefined2 *)(param_1 + 100);
    }
    else {
      *(undefined2 *)(param_1 + 0x48) = _DAT_1f800160;
    }
    *(undefined2 *)(param_1 + 0x4c) = uVar2;
    sVar1 = FUN_80085690((int)*(short *)(param_1 + 0x4c) - (int)*(short *)(param_1 + 0x36),
                         (int)*(short *)(param_1 + 0x2e) - (int)*(short *)(param_1 + 0x48));
    iVar4 = (int)(((uint)*(ushort *)(param_1 + 0x48) - (uint)*(ushort *)(param_1 + 0x2e)) * 0x10000)
            >> 0x10;
    iVar6 = (int)(((uint)*(ushort *)(param_1 + 0x4c) - (uint)*(ushort *)(param_1 + 0x36)) * 0x10000)
            >> 0x10;
    *(ushort *)(param_1 + 100) = -sVar1 & 0xfff;
    uVar2 = FUN_80084080(iVar4 * iVar4 + iVar6 * iVar6);
    *(undefined2 *)(param_1 + 0x66) = uVar2;
    if (*(short *)(param_1 + 0x76) < 0) {
      sVar1 = *(short *)(param_1 + 100) - *(short *)(param_1 + 0x74);
    }
    else {
      sVar1 = *(short *)(param_1 + 100) + *(short *)(param_1 + 0x74);
    }
    *(short *)(param_1 + 0x72) = sVar1;
    *(char *)(param_1 + 0x78) = *(char *)(param_1 + 0x78) + '\x01';
  }
  else {
    if (*(char *)(param_1 + 0x78) != '\x01') {
      return 0;
    }
    sVar1 = *(short *)(param_1 + 100) + *(short *)(param_1 + 0x76);
    *(short *)(param_1 + 100) = sVar1;
    iVar4 = FUN_80083f50((int)sVar1);
    iVar4 = iVar4 * *(short *)(param_1 + 0x66);
    if (iVar4 < 0) {
      iVar4 = iVar4 + 0xfff;
    }
    *(short *)(param_1 + 0x2e) = *(short *)(param_1 + 0x48) + (short)(iVar4 >> 0xc);
    iVar4 = FUN_80083e80((int)*(short *)(param_1 + 100));
    iVar4 = iVar4 * *(short *)(param_1 + 0x66);
    if (iVar4 < 0) {
      iVar4 = iVar4 + 0xfff;
    }
    iVar4 = (uint)*(ushort *)(param_1 + 0x4c) + (iVar4 >> 0xc);
    *(short *)(param_1 + 0x36) = (short)iVar4;
    if (*(short *)(param_1 + 0x76) < 0) {
      sVar3 = FUN_80085690((iVar4 * 0x10000 >> 0x10) - (int)*(short *)(param_1 + 0x4c),
                           (int)*(short *)(param_1 + 0x48) - (int)*(short *)(param_1 + 0x2e));
      sVar1 = *(short *)(param_1 + 100);
      sVar5 = *(short *)(param_1 + 0x72);
      sVar3 = sVar3 + -0x400;
    }
    else {
      sVar3 = FUN_80085690((iVar4 * 0x10000 >> 0x10) - (int)*(short *)(param_1 + 0x4c),
                           (int)*(short *)(param_1 + 0x48) - (int)*(short *)(param_1 + 0x2e));
      sVar1 = *(short *)(param_1 + 0x72);
      sVar5 = *(short *)(param_1 + 100);
      sVar3 = sVar3 + 0x400;
    }
    *(short *)(param_1 + 0x56) = sVar3;
    if (sVar1 <= sVar5) {
      return 1;
    }
    FUN_80042ea4(param_1,param_1 + 0x68,(int)*(short *)(param_1 + 0x6a));
  }
  return 0;
}

