// FUN_8005ec70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8005ec70(byte *param_1)

{
  byte bVar1;
  undefined2 uVar2;
  short sVar3;
  int iVar4;
  uint uVar5;
  
  bVar1 = param_1[6];
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        uVar5 = (uint)_DAT_1f800194;
        sVar3 = FUN_800776f8(uVar5 & 0xfff,(int)*(short *)(param_1 + 0x56),0x100);
        *(short *)(param_1 + 0x56) = sVar3;
        if ((int)sVar3 == (uVar5 & 0xfff)) {
          param_1[6] = param_1[6] + 1;
        }
        FUN_80076d68(param_1);
      }
      else {
        if (bVar1 != 3) {
          return;
        }
        iVar4 = FUN_80055824();
        if (iVar4 == 0) {
          if (((((_DAT_800ecf54 & 0x50) != 0) || (iVar4 = FUN_80076d68(param_1), iVar4 == 1)) ||
              (FUN_80055e28(param_1,0), (_DAT_800ecf54 & 0x50) != 0)) || ((param_1[0x14a] & 2) == 0)
             ) {
            param_1[0x61] = 0;
            param_1[5] = 0;
            param_1[6] = 0;
            param_1[7] = 0;
            *param_1 = *param_1 & 3;
            FUN_80054d14(param_1,2,2);
          }
        }
        else {
          param_1[0x61] = 0;
          param_1[5] = 2;
          param_1[6] = 0;
          param_1[7] = 0;
          *param_1 = *param_1 & 3;
        }
      }
      *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + 8;
      FUN_8005444c(param_1);
      FUN_80056c00(param_1,1);
      return;
    }
    if (bVar1 != 0) {
      return;
    }
    DAT_800bf840 = 0x86;
    param_1[0x61] = 0x41;
    param_1[0x2a] = 0;
    DAT_1f800207 = 0;
    param_1[0x16b] = 3;
    param_1[0x4a] = 0;
    param_1[0x4b] = 0xe0;
    param_1[0x29] = 0;
    *(short *)(param_1 + 0x4a) = *(short *)(param_1 + 0x58) * 0x10 + -0x2000;
    if (param_1[0x147] == 0) {
      uVar2 = 0x1000;
    }
    else {
      uVar2 = 0xf000;
    }
    *(undefined2 *)(param_1 + 0x44) = uVar2;
    param_1[0x58] = 0;
    param_1[0x59] = 0;
    FUN_80054d14(param_1,0x14,2);
    FUN_800538e0(param_1,param_1 + 0x2c,0);
    param_1[6] = param_1[6] + 1;
  }
  FUN_80076d68(param_1);
  FUN_80056b48(param_1,1);
  FUN_80055d5c(param_1);
  FUN_800574e0(param_1,1);
  if (param_1[0x29] != 0) {
    param_1[0x44] = 0;
    param_1[0x45] = 0;
    param_1[0x148] = 0;
    param_1[6] = param_1[6] + 1;
    FUN_80054d14(param_1,0x17,2);
    param_1[0x16b] = 0;
    FUN_80055d5c(param_1);
    bVar1 = FUN_80055e28(param_1,0);
    param_1[0x147] = bVar1 & 1;
    FUN_80054198(param_1);
    if (param_1[0x147] == 0) {
      _DAT_1f800194 = *(ushort *)(param_1 + 0x140);
    }
    else {
      _DAT_1f800194 = *(short *)(param_1 + 0x140) - 0x800U & 0xfff;
    }
  }
  return;
}

