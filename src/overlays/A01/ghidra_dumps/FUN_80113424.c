// FUN_80113424

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80113424(undefined1 *param_1,undefined1 param_2,int param_3)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = (uint)(byte)param_1[6];
  if (uVar3 == 0) {
    param_1[6] = 1;
    *(undefined2 *)(param_1 + 0x40) = 0x78;
  }
  else if (uVar3 != 1) {
    if (*(char *)(uVar3 + 0x29) != '\0') {
      param_1[5] = 3;
      *param_1 = param_2;
      *(undefined1 *)(param_3 + 0x31) = 3;
      *(undefined1 *)(param_3 + 7) = param_2;
      *(undefined2 *)(param_3 + 0x32) = 0x100;
      DAT_1f800137 = param_2;
      *(ushort *)(param_3 + 0x32) = *(ushort *)(param_1 + 0x7a) | 0x100;
      return;
    }
    return;
  }
  sVar1 = *(short *)(param_1 + 0x40);
  *(short *)(param_1 + 0x40) = sVar1 + -1;
  if (sVar1 == 1) {
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[0x5e] = 0;
  }
  FUN_8011aff0(param_1);
  iVar2 = func_0x800778e4(param_1,(int)(((uint)_DAT_1f800162 - (uint)*(ushort *)(param_1 + 0x32)) *
                                       0x10000) >> 0x10);
  if (iVar2 != 0) {
    func_0x800517f8(param_1);
  }
  return;
}

