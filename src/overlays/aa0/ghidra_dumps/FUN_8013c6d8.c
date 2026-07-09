// FUN_8013c6d8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8013c6d8(int param_1)

{
  byte bVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  uVar3 = (uint)DAT_800e7eaa;
  if ((uVar3 < 4) || (uVar3 == 7)) {
    FUN_801456e0();
    return;
  }
  iVar4 = 2;
  if (uVar3 - 4 < 8) {
    iVar4 = 1;
  }
  *(int *)(param_1 + 0x48) = iVar4;
  if (iVar4 == 1) {
    if (0x14a0 < _DAT_1f800160 - 0x1324) {
      *(undefined4 *)(param_1 + 0x48) = 0xffffffff;
    }
  }
  else if (iVar4 == 0) {
    FUN_8014571c();
    return;
  }
  bVar1 = *(byte *)(param_1 + 5);
  if (bVar1 == 1) {
LAB_8013c7d4:
    *(undefined4 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
    *(undefined2 *)(param_1 + 8) = 0;
    *(undefined1 *)(param_1 + 5) = 2;
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        FUN_801458c0();
        return;
      }
      *(undefined1 *)(param_1 + 5) = 1;
      goto LAB_8013c7d4;
    }
    if (bVar1 != 2) {
      if (bVar1 != 3) {
        FUN_801458c0();
        return;
      }
      goto LAB_8013c824;
    }
  }
  if (0xb < DAT_800e7eaa) {
    return;
  }
  *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
LAB_8013c824:
  iVar4 = 0;
  if (0xb < DAT_800e7eaa) {
    *(undefined1 *)(param_1 + 5) = 1;
    FUN_801458c0();
    return;
  }
  iVar5 = -0x7feb40a0;
  iVar6 = param_1;
  while (((*(uint *)(iVar6 + 0xc) & 3) != 0 || (0xb < DAT_800e7eaa))) {
    iVar6 = iVar6 + 4;
    iVar4 = iVar4 + 1;
    iVar5 = iVar5 + 0xc;
    if (4 < iVar4) {
      return;
    }
  }
  uVar2 = *(undefined1 *)(iVar5 + 8);
  iVar4 = func_0x80072ddc(0,3,2,3);
  if (iVar4 == 0) {
    return;
  }
  *(undefined4 *)(iVar4 + 0x1c) = 0x80145230;
  *(undefined1 *)(iVar4 + 3) = uVar2;
  *(undefined4 *)(iVar4 + 0x10) = 0;
  *(int *)(iVar4 + 0x14) = param_1;
  if (iVar4 == 0) {
    return;
  }
  *(undefined2 *)(iVar4 + 0x2e) = *(undefined2 *)(iVar5 + 2);
  *(undefined2 *)(iVar4 + 0x32) = *(undefined2 *)(iVar5 + 4);
  *(undefined2 *)(iVar4 + 0x36) = *(undefined2 *)(iVar5 + 6);
  *(undefined2 *)(iVar4 + 0x56) = *(undefined2 *)(iVar5 + 10);
  *(ushort *)(iVar4 + 0x62) = *(ushort *)(iVar4 + 0x62) | 2;
  *(uint *)(iVar6 + 0xc) = *(uint *)(iVar6 + 0xc) | 1;
  FUN_801458c0();
  return;
}

