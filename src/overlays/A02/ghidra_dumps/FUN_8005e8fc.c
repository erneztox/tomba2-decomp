// FUN_8005e8fc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8005e8fc(byte *param_1)

{
  undefined2 uVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  
  switch(param_1[6]) {
  case 0:
    param_1[0x61] = 0x30;
    FUN_80054198(param_1);
    uVar1 = _DAT_1f80018a;
    *(undefined2 *)(param_1 + 0x2e) = _DAT_1f800188;
    *(undefined2 *)(param_1 + 0x36) = uVar1;
    FUN_80054d14(param_1,2,4);
    param_1[6] = param_1[6] + 1;
    _DAT_1f800194 = _DAT_1f80018c & 0xfff;
  case 1:
  case 3:
    uVar4 = (uint)_DAT_1f800194;
    sVar2 = FUN_800776f8(uVar4 & 0xfff,(int)*(short *)(param_1 + 0x56),0x100);
    *(short *)(param_1 + 0x56) = sVar2;
    if ((int)sVar2 == (uVar4 & 0xfff)) {
      param_1[6] = param_1[6] + 1;
    }
    goto LAB_8005e9dc;
  case 2:
    FUN_80055e28(param_1,0);
    iVar3 = FUN_800558b4(param_1);
    if (iVar3 == 2) {
      DAT_800bf840 = 0x81;
      param_1[0x61] = 0x31;
      param_1[6] = 5;
      param_1[0x147] = 0;
      *param_1 = *param_1 | 4;
      FUN_80054198(param_1);
    }
    else {
      param_1[0x61] = 0;
      param_1[6] = param_1[6] + 1;
      param_1[0x147] = param_1[0x14a] & 1;
      FUN_80054198(param_1);
      if (param_1[0x147] == 0) {
        _DAT_1f800194 = *(ushort *)(param_1 + 0x140);
      }
      else {
        _DAT_1f800194 = *(short *)(param_1 + 0x140) - 0x800U & 0xfff;
      }
    }
LAB_8005e9dc:
    FUN_80076d68(param_1);
    break;
  case 4:
    param_1[0x61] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    *param_1 = *param_1 & 3;
    FUN_80076d68(param_1);
    break;
  case 5:
    param_1[0x2a] = 0;
    DAT_1f800207 = 0;
    param_1[0x58] = 0;
    param_1[0x59] = 0;
    FUN_80054d14(param_1,99,0);
    param_1[0x16b] = 2;
    param_1[0x4a] = 0;
    param_1[0x4b] = 0xd0;
    param_1[0x29] = 0;
    param_1[0x44] = 0;
    param_1[0x45] = 10;
    param_1[6] = param_1[6] + 1;
  case 6:
    FUN_80076d68(param_1);
    FUN_80056b48(param_1,1);
    FUN_80055d5c(param_1);
    FUN_800574e0(param_1,0x11);
    if (param_1[0x145] == 2) {
      FUN_80054d14(param_1,100,6);
    }
    if (param_1[0x29] == 0) {
      return;
    }
    FUN_80054d14(param_1,0x17,1);
    param_1[0x44] = 0;
    param_1[0x45] = 0;
    param_1[0x16b] = 1;
    param_1[6] = param_1[6] + 1;
    return;
  case 7:
    iVar3 = FUN_80055824();
    if (iVar3 == 0) {
      if (((((_DAT_800ecf54 & 0x40) != 0) || (iVar3 = FUN_80076d68(param_1), iVar3 == 1)) ||
          (FUN_80055e28(param_1,0), (_DAT_800ecf54 & 0x40) != 0)) || ((param_1[0x14a] & 2) == 0)) {
        param_1[0x61] = 0;
        param_1[5] = 0;
        param_1[6] = 0;
        param_1[7] = 0;
        *param_1 = *param_1 & 3;
        FUN_80054d14(param_1,2);
      }
    }
    else {
      param_1[0x61] = 0;
      param_1[5] = 2;
      param_1[6] = 0;
      param_1[7] = 0;
      *param_1 = *param_1 & 3;
    }
    break;
  default:
    goto switchD_8005e938_default;
  }
  *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + 8;
  FUN_80056c00(param_1,1);
switchD_8005e938_default:
  return;
}

