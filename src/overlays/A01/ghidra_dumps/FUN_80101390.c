// FUN_80101390

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80101390(byte *param_1,undefined4 param_2)

{
  byte bVar1;
  undefined2 uVar2;
  short sVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  sVar3 = *(short *)(param_1 + 0x42);
  *(short *)(param_1 + 0x42) = sVar3 + 1;
  if (((short)(sVar3 + 1) < 6) ||
     ((((_DAT_800ecf54 & _DAT_1f80016c) == 0 || (param_1[0x147] != 0)) &&
      (((_DAT_800ecf54 & _DAT_1f80016e) == 0 || (param_1[0x147] != 1)))))) {
    if ((((_DAT_800ecf54 & _DAT_1f80016c) == 0) || (param_1[0x147] != 1)) &&
       (((_DAT_800ecf54 & _DAT_1f80016e) == 0 || (param_1[0x147] != 0)))) {
      if ((_DAT_800ecf54 & 0x10) == 0) {
        if ((_DAT_800ecf54 & 0x40) == 0) {
          if (0x96 < *(short *)(param_1 + 0x42)) {
            DAT_800bf840 = 0x48;
          }
          if (DAT_1f800137 == '\0') {
            func_0x80062a30(param_1,param_2,3);
          }
          return;
        }
        param_1[7] = 5;
        uVar5 = func_0x80054d14(param_1,0x3d,0);
        uVar4 = 1;
      }
      else {
        param_1[7] = 5;
        uVar5 = func_0x80054d14(param_1,0x34,0);
        uVar4 = 0;
      }
      if ((int)((ulonglong)uVar5 >> 0x20) == (int)uVar5) {
        sVar3 = *(short *)(param_1 + 0x4a);
        *(short *)(param_1 + 0x4a) = sVar3 + 0x300;
        if (0x3000 < (short)(sVar3 + 0x300)) {
          param_1[0x4a] = 0;
          param_1[0x4b] = 0x30;
        }
        *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(short *)(param_1 + 0x4a) * 0x100;
        if (param_1[0x29] == 0) {
          func_0x8004766c(param_1,param_2,uVar4);
          func_0x80049250(param_1,0,
                          (int)(((uint)*(ushort *)(param_1 + 0x86) -
                                (uint)*(ushort *)(param_1 + 0x84)) * 0x10000) >> 0x10);
        }
        func_0x8007778c(param_1);
        param_1[0x29] = 0;
        return;
      }
    }
    else {
      param_1[7] = 6;
      func_0x80054d14(param_1,0xa8,0);
    }
  }
  else {
    param_1[7] = 0;
    param_1[0x154] = 0;
    param_1[0x155] = 0;
    param_1[0x42] = 0;
    param_1[0x43] = 0;
    *param_1 = *param_1 | 4;
    func_0x80054d14(param_1,0x37,0);
  }
  bVar1 = param_1[4];
  if (bVar1 == 1) {
    func_0x8007778c(param_1);
    uVar2 = FUN_8011df24(param_1,3);
    *(undefined2 *)(param_1 + 0x6a) = uVar2;
    if ((param_1[3] & 0x80) == 0) {
      if (((param_1[0x5e] & 2) == 0) && (sVar3 = FUN_8011d2c4(param_1), sVar3 != 0)) {
        param_1[0x5e] = 2;
        param_1[5] = 2;
        param_1[6] = 0;
      }
      bVar1 = param_1[5];
      if (bVar1 == 1) {
        FUN_8011c998(param_1);
        FUN_8011c5f0();
        return;
      }
      if (bVar1 < 2) {
        if (bVar1 == 0) {
          FUN_8011c854(param_1);
          FUN_8011c5f0();
          return;
        }
        FUN_8011c5f0();
        return;
      }
      if (bVar1 != 2) {
        FUN_8011c5f0();
        return;
      }
      FUN_8011ccb4(param_1);
    }
    if ((param_1[1] != 0) && (FUN_8011d8c8(param_1), *(short *)(param_1 + 0x72) != 0)) {
      FUN_8011d754(param_1);
      FUN_8011c6d4();
      return;
    }
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        FUN_8011c6e4(param_1);
        FUN_8011c6d4();
        return;
      }
      FUN_8011c6d4();
      return;
    }
    if (bVar1 == 2) {
      func_0x8007778c(param_1);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(param_1[5]) {
      case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 1:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (param_1[1] != 0) {
        FUN_8011d8c8(param_1);
        FUN_8011c6d4();
        return;
      }
    }
    else {
      if (bVar1 != 3) {
        FUN_8011c6d4();
        return;
      }
      func_0x8007a624(param_1);
    }
  }
  return;
}

