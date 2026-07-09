// FUN_8010ffb4

undefined4 FUN_8010ffb4(byte *param_1)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint extraout_v1;
  int iVar6;
  
  uVar5 = (uint)param_1[5];
  iVar6 = *(int *)(param_1 + 0x10);
  if (uVar5 == 1) {
    if (-1 < *(short *)(param_1 + 0x4a)) {
      *param_1 = param_1[5];
      param_1[5] = param_1[5] + 1;
    }
    iVar6 = (int)*(short *)(param_1 + 0x44);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + iVar6 * *(short *)(param_1 + 0x48);
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + iVar6 * *(short *)(param_1 + 0x4a);
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + iVar6 * *(short *)(param_1 + 0x4c);
    func_0x8004766c(param_1);
    iVar6 = func_0x80049250(param_1,0,0x32);
    if (iVar6 != 1) {
      sVar1 = *(short *)(param_1 + 0x4a);
      *(short *)(param_1 + 0x4a) = sVar1 + 0x30;
      if (0x1000 < (short)(sVar1 + 0x30)) {
        param_1[0x4a] = 0;
        param_1[0x4b] = 0x10;
      }
      goto LAB_80110198;
    }
    param_1[0x4a] = 0;
    param_1[0x4b] = 0xff;
    uVar2 = param_1[5] + 1;
    uVar5 = (int)((uint)*(ushort *)(param_1 + 0x44) << 0x10) >> 0x11;
    param_1[5] = (byte)uVar2;
    *(short *)(param_1 + 0x44) = (short)*(ushort *)(param_1 + 0x44) >> 1;
  }
  else {
    uVar2 = (uint)(uVar5 < 4);
    if (1 < uVar5) {
      if (uVar2 != 0) {
        uVar4 = FUN_801220ec();
        return uVar4;
      }
LAB_80110198:
      iVar6 = func_0x8007778c(param_1);
      uVar4 = 0;
      if (iVar6 != 0) {
        uVar4 = func_0x80077b5c(param_1);
      }
      return uVar4;
    }
    if (uVar5 == 0) {
      *(undefined2 *)(param_1 + 0x2e) = *(undefined2 *)(iVar6 + 0x2e);
      *(short *)(param_1 + 0x32) = *(short *)(iVar6 + 0x32) + -0xa0;
      *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(iVar6 + 0x36);
      if (0 < *(short *)(param_1 + 0x78)) {
        iVar3 = func_0x80083f50((int)*(short *)(iVar6 + 0x56));
        *(short *)(param_1 + 0x48) = (short)(iVar3 >> 4);
        func_0x80083e80((int)*(short *)(iVar6 + 0x56));
        uVar4 = FUN_80119014();
        return uVar4;
      }
      iVar3 = func_0x80083f50((int)*(short *)(iVar6 + 0x56));
      *(short *)(param_1 + 0x48) = (short)(-iVar3 >> 4);
      iVar6 = func_0x80083e80((int)*(short *)(iVar6 + 0x56));
      *(short *)(param_1 + 0x4c) = (short)(iVar6 >> 4);
      param_1[0x4a] = 0;
      param_1[0x4b] = 0xfe;
      param_1[0x44] = 0;
      param_1[0x45] = 0x10;
      param_1[0x29] = 0;
      func_0x8004766c(param_1);
      uVar2 = param_1[5] + 1;
      param_1[5] = (byte)uVar2;
      uVar5 = extraout_v1;
    }
  }
  if (uVar5 != uVar2) {
    return 0;
  }
  func_0x80042310();
  uVar4 = FUN_801220ec();
  return uVar4;
}

