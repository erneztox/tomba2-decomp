// FUN_80111510

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_80111510(undefined1 *param_1)

{
  byte bVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 unaff_s1;
  undefined1 unaff_s5;
  int unaff_s6;
  
  bVar1 = param_1[6];
  if (bVar1 != 1) {
    if (bVar1 < 2) {
      uVar2 = 0;
      if (bVar1 == 0) {
        if (param_1[0x2b] != '\x03') {
          return 0;
        }
        param_1[6] = 1;
        func_0x80042354(1,1);
        uVar2 = 0;
      }
    }
    else {
      uVar2 = 0;
      if (bVar1 == 2) {
        func_0x80041098(param_1);
        if (param_1[0x70] != -1) {
          return 0;
        }
        param_1[6] = 0;
        func_0x80042310();
        uVar2 = 1;
      }
    }
    goto LAB_8011a60c;
  }
  param_1[6] = 2;
  iVar4 = (int)_DAT_800bf8aa;
  if (DAT_800bf939 == -1) {
    iVar4 = iVar4 + -1;
  }
  if (DAT_800bf93a == -1) {
    iVar4 = iVar4 + -1;
  }
  if (DAT_800bf93c == -1) {
    iVar4 = iVar4 + -1;
  }
  if (DAT_800bf93d == -1) {
    iVar4 = iVar4 + -1;
  }
  if (iVar4 == 0x7e) {
    iVar4 = -0x7fec9f94;
LAB_8011a5cc:
    *(undefined4 *)(iVar4 + 0x1c) = 0x80112100;
    *(undefined1 *)(iVar4 + 3) = unaff_s1;
    *(byte *)(iVar4 + 0x28) = *(byte *)(iVar4 + 0x28) | 0x80;
    *param_1 = 2;
    *(undefined4 *)(param_1 + 0x2c) = 0x30700000;
    *(undefined4 *)(param_1 + 0x30) = 0xef520000;
    *(undefined4 *)(param_1 + 0x34) = 0x3a340000;
  }
  else {
    if (iVar4 < 100) {
      iVar4 = -0x7fec9fc4;
      goto LAB_8011a5cc;
    }
    func_0x80040cdc(param_1,0x8013995c,0x80136054);
    param_1[0x70] = 1;
  }
  uVar2 = 0xf;
LAB_8011a60c:
  param_1[0x2a] = uVar2;
  *(undefined2 *)(param_1 + 0x56) = 0xc00;
  uVar3 = FUN_8012b654();
  *(undefined4 *)(param_1 + 0x14) = uVar3;
  uVar3 = func_0x80041718(param_1,param_1[0x7b],0);
  *(undefined1 *)(unaff_s6 + 0x5e) = unaff_s5;
  return uVar3;
}

