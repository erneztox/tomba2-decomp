// FUN_801149ec

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

int FUN_801149ec(int param_1)

{
  byte bVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  bVar1 = *(byte *)(param_1 + 4);
  uVar3 = (uint)(bVar1 < 2);
  if (bVar1 == 1) {
    func_0x8007778c(param_1);
    iVar4 = *(byte *)(param_1 + 0x2b) - 1;
    if (*(byte *)(param_1 + 0x2b) != 0) {
      *(char *)(param_1 + 0x2b) = (char)iVar4;
      return iVar4;
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
    switch(*(undefined1 *)(param_1 + 5)) {
    case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
switchD_80114c30_default:
    *(undefined1 *)(param_1 + 0x29) = 0;
    if (*(char *)(param_1 + 1) == '\0') {
      return 0;
    }
    uVar3 = func_0x800518fc(param_1);
  }
  else if (uVar3 == 0) {
    uVar3 = 3;
    if (bVar1 == 2) {
      func_0x8007778c(param_1);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
      switch(*(undefined1 *)(param_1 + 5)) {
      case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      goto switchD_80114c30_default;
    }
    if (bVar1 == 3) {
      uVar3 = *(byte *)(param_1 + 0x1b) & 0xbf;
      if ((*(byte *)(param_1 + 0x1b) & 0x40) == 0) {
        *(undefined4 *)(*(int *)(param_1 + 0x10) + 0xc) = 0;
        iVar4 = func_0x8007a624(param_1);
        return iVar4;
      }
      *(char *)(param_1 + 0x1b) = (char)uVar3;
    }
  }
  else if (bVar1 == 0) {
    uVar3 = FUN_8011dcac(param_1);
  }
  if ((int)uVar3 < 0x170d) {
    if (*(int *)(param_1 + 0x14) == 0) {
      sVar2 = FUN_80126e4c(param_1);
      *(int *)(param_1 + 0x20) = (int)sVar2;
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
    uVar5 = (uint)DAT_800bfaec;
    uVar6 = (uint)DAT_800bfaed;
    uVar3 = uVar5 + uVar6;
    if (uVar3 == 1) {
      if (uVar6 != 0) {
        iVar4 = FUN_80126e28(param_1,0x39);
        return iVar4;
      }
    }
    else {
      if (uVar3 < 2) {
        if (uVar3 != 0) {
          iVar4 = FUN_80126e34();
          return iVar4;
        }
        if (DAT_800bfb01 == 1) {
          iVar4 = FUN_80126dc4();
          return iVar4;
        }
        if (1 < DAT_800bfb01) {
          if (DAT_800bfb01 != 2) {
            return 2;
          }
          if ((DAT_800bf9f3 & 0xf) == 0) {
            return 0;
          }
          FUN_8012763c(param_1);
          iVar4 = FUN_80126e34();
          return iVar4;
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
          iVar4 = FUN_80126e34();
          return iVar4;
        }
        goto LAB_8011dcb0;
      }
      if (uVar3 != 2) {
        iVar4 = FUN_80126e34();
        return iVar4;
      }
      if (uVar6 != 0) {
        if (uVar5 == 0) {
          iVar4 = FUN_80126e28(param_1,0x39);
          return iVar4;
        }
        if ((DAT_800bf9f2 & 4) == 0) {
          iVar4 = FUN_80126e28(param_1,0x39);
          return iVar4;
        }
      }
    }
    FUN_80127510(param_1,0x38);
    return uVar5 + uVar6;
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
LAB_8011dcb0:
  iVar4 = FUN_80126e34();
  return iVar4;
}

