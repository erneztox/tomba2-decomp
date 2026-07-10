// FUN_800656fc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_800656fc(undefined1 *param_1)

{
  byte bVar1;
  short sVar2;
  uint uVar3;
  
  bVar1 = param_1[6];
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        DAT_800bf80e = 0;
        DAT_800bf809 = 0;
        *param_1 = 3;
        *(undefined2 *)(param_1 + 0x172) = 0x1e;
        param_1[4] = 1;
        param_1[5] = 0;
        param_1[6] = 0;
        param_1[7] = 0;
        *(undefined2 *)(param_1 + 0x4a) = 0;
        FUN_80055d5c(param_1);
        param_1[0x180] = 6;
      }
      goto LAB_80065834;
    }
    if (bVar1 != 0) goto LAB_80065834;
    FUN_80054d14(param_1,2,6);
    param_1[6] = param_1[6] + '\x01';
    bVar1 = FUN_80055e28(param_1,0);
    param_1[0x147] = bVar1 & 1;
    FUN_80054198(param_1);
    if (param_1[0x147] == '\0') {
      _DAT_1f800192 = *(ushort *)(param_1 + 0x140);
    }
    else {
      _DAT_1f800192 = *(short *)(param_1 + 0x140) - 0x800U & 0xfff;
    }
  }
  uVar3 = (uint)_DAT_1f800192;
  sVar2 = FUN_800776f8(uVar3 & 0xfff,(int)*(short *)(param_1 + 0x56),0x100);
  *(short *)(param_1 + 0x56) = sVar2;
  if ((int)sVar2 == (uVar3 & 0xfff)) {
    param_1[6] = param_1[6] + '\x01';
  }
LAB_80065834:
  FUN_80076d68(param_1);
  FUN_80065478(param_1,1);
  return;
}

