// FUN_8011dc64

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_8011dc64(int param_1)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  if ((DAT_800e7eaa != '\x03') && ((DAT_800e7eaa != '\n' || (0x170c < _DAT_1f800160)))) {
    *(undefined4 *)(param_1 + 0x14) = 0;
LAB_8011dcb0:
    iVar2 = FUN_80126e34();
    return iVar2;
  }
  if (*(int *)(param_1 + 0x14) == 0) {
    sVar1 = FUN_80126e4c(param_1);
    *(int *)(param_1 + 0x20) = (int)sVar1;
    *(undefined4 *)(param_1 + 0x14) = 1;
  }
  if (DAT_800e7eaa != '\x03') {
    return 0;
  }
  if (-0x9c4 < _DAT_1f800162) {
    return 0;
  }
  if ((*(int *)(param_1 + 0x1c) == 0) && (_DAT_800e7e84 != 0x1401)) {
    return 0;
  }
  uVar4 = (uint)DAT_800bfaec;
  uVar5 = (uint)DAT_800bfaed;
  uVar3 = uVar4 + uVar5;
  if (uVar3 == 1) {
    if (uVar5 != 0) {
      iVar2 = FUN_80126e28(param_1,0x39);
      return iVar2;
    }
  }
  else {
    if (uVar3 < 2) {
      if (uVar3 != 0) {
        iVar2 = FUN_80126e34();
        return iVar2;
      }
      if (DAT_800bfb01 == 1) {
        iVar2 = FUN_80126dc4();
        return iVar2;
      }
      if (1 < DAT_800bfb01) {
        if (DAT_800bfb01 != 2) {
          return 2;
        }
        if ((DAT_800bf9f3 & 0xf) == 0) {
          return 0;
        }
        FUN_8012763c(param_1);
        iVar2 = FUN_80126e34();
        return iVar2;
      }
      if (DAT_800bfb01 != 0) {
        return 0xff;
      }
      if (DAT_800bf8f2 != -1) {
        return 0;
      }
      if (((int)_DAT_800e7ffe & 0x8000U) == 0) {
        return 0;
      }
      if (DAT_800bfb08 != '\0') {
        FUN_80127720(param_1);
        iVar2 = FUN_80126e34();
        return iVar2;
      }
      goto LAB_8011dcb0;
    }
    if (uVar3 != 2) {
      iVar2 = FUN_80126e34();
      return iVar2;
    }
    if (uVar5 != 0) {
      if (uVar4 == 0) {
        iVar2 = FUN_80126e28(param_1,0x39);
        return iVar2;
      }
      if ((DAT_800bf9f2 & 4) == 0) {
        iVar2 = FUN_80126e28(param_1,0x39);
        return iVar2;
      }
    }
  }
  FUN_80127510(param_1,0x38);
  return uVar4 + uVar5;
}

