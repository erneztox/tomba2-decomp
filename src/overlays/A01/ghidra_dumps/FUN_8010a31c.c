// FUN_8010a31c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8010a31c(undefined1 *param_1)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint extraout_v1;
  int iVar5;
  
  uVar4 = (uint)(byte)param_1[5];
  iVar5 = *(int *)(*(int *)(param_1 + 0x10) + 0xc0);
  if (uVar4 == 1) {
    uVar2 = 2;
    if ((DAT_800bfa06 & 2) == 0) {
LAB_8010a3fc:
      *(undefined2 *)(param_1 + 0x2e) = *(undefined2 *)(iVar5 + 0x2c);
      *(short *)(param_1 + 0x32) = *(short *)(iVar5 + 0x30) + -0x48;
      *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(iVar5 + 0x34);
      iVar5 = func_0x8007778c(param_1);
      if (iVar5 != 0) {
        func_0x80051844(param_1);
        func_0x8004b374(param_1,1);
      }
      return;
    }
    param_1[5] = 2;
    param_1[6] = 0;
  }
  else {
    uVar2 = 2;
    if (uVar4 < 2) {
      uVar2 = 0x800c0000;
      if (uVar4 == 0) {
        if ((DAT_800bfa06 & 2) != 0) {
          param_1[5] = 3;
          FUN_8011332c();
          return;
        }
        param_1[5] = 1;
        *param_1 = 1;
        func_0x8004b354(param_1);
        uVar2 = 0x1800;
        *(undefined2 *)(param_1 + 0xb8) = 0x1800;
        *(undefined2 *)(param_1 + 0xba) = 0x1800;
        *(undefined2 *)(param_1 + 0xbc) = 0x1800;
        uVar4 = extraout_v1;
      }
    }
    else if (uVar4 == 2) {
      iVar3 = FUN_801130cc(param_1);
      if (iVar3 != 0) {
        param_1[5] = param_1[5] + '\x01';
      }
      goto LAB_8010a3fc;
    }
  }
  if (uVar4 == uVar2) {
    sVar1 = *(short *)(param_1 + 0x40);
    *(short *)(param_1 + 0x40) = sVar1 + -1;
    if (sVar1 == 1) {
      param_1[5] = 0;
      param_1[6] = 0;
      param_1[0x5e] = 0;
    }
    FUN_8011aff0(param_1);
    iVar5 = func_0x800778e4(param_1,(int)(((uint)_DAT_1f800162 - (uint)*(ushort *)(param_1 + 0x32))
                                         * 0x10000) >> 0x10);
    if (iVar5 != 0) {
      func_0x800517f8(param_1);
    }
    return;
  }
  FUN_8011c378();
  return;
}

