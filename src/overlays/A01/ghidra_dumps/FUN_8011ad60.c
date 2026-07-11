// FUN_8011ad60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8011ad60(undefined1 *param_1)

{
  byte bVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  
  bVar1 = param_1[4];
  if (bVar1 == 1) {
    func_0x80077b5c(param_1);
    func_0x8004766c(param_1);
    iVar4 = func_0x80083e80((int)*(short *)(param_1 + 0x4a));
    *(short *)(param_1 + 0x32) = *(short *)(param_1 + 100) + (short)(iVar4 >> 6);
    *(short *)(param_1 + 0x4a) = *(short *)(param_1 + 0x4a) + 0x40;
    func_0x8007778c(param_1);
    if (*(short *)(param_1 + 0x60) == 0) {
      if (param_1[1] == '\0') {
        *(short *)(param_1 + 0x60) = *(short *)(param_1 + 0x60) + 1;
        *(undefined2 *)(param_1 + 0x62) = 0x5a;
        FUN_80123f10();
        return;
      }
    }
    else {
      if (*(short *)(param_1 + 0x60) != 1) {
        FUN_80123f10();
        return;
      }
      if (param_1[1] != '\0') {
        *(undefined2 *)(param_1 + 0x60) = 0;
        FUN_80123f10();
        return;
      }
      sVar2 = *(short *)(param_1 + 0x62);
      *(ushort *)(param_1 + 0x62) = sVar2 - 1U;
      if ((int)((uint)(ushort)(sVar2 - 1U) << 0x10) < 0) {
        DAT_800bf9d4 = 0;
        param_1[4] = 3;
        FUN_80123f10();
        return;
      }
    }
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        param_1[4] = 1;
        uVar3 = _DAT_800ecf80;
        param_1[0xd] = 0;
        param_1[0xb] = 0x10;
        *(undefined2 *)(param_1 + 0x5a) = 0;
        param_1[8] = 0;
        *(undefined2 *)(param_1 + 0x5c) = 0;
        param_1[0x5e] = 1;
        param_1[3] = 2;
        *(undefined4 *)(param_1 + 0x3c) = uVar3;
        func_0x80077b38(param_1,0x80139294,10);
        param_1[0x47] = 0;
        func_0x8004766c(param_1);
        *(undefined2 *)(param_1 + 0x80) = 0x1e;
        *(undefined2 *)(param_1 + 0x82) = 0x3c;
        *(undefined2 *)(param_1 + 0x84) = 0x3c;
        *param_1 = 1;
        *(undefined2 *)(param_1 + 0x86) = 0x5a;
        *(undefined2 *)(param_1 + 0x4a) = 0;
        param_1[5] = 1;
        param_1[6] = 2;
        *(undefined2 *)(param_1 + 0x60) = 0;
        *(undefined2 *)(param_1 + 100) = *(undefined2 *)(param_1 + 0x32);
        FUN_80123f10();
        return;
      }
      FUN_80123f10();
      return;
    }
    if (bVar1 == 2) {
      if ((1 < (byte)param_1[5]) && ((byte)param_1[5] < 4)) {
        DAT_800bf9d4 = 0;
        DAT_800bf936 = DAT_800bf936 | 4;
        func_0x8004d4c4(0x41,1);
        func_0x8004b0d8(param_1);
        param_1[4] = 3;
      }
      func_0x8007778c(param_1);
      FUN_80123f10();
      return;
    }
    if (bVar1 != 3) {
      FUN_80123f10();
      return;
    }
    func_0x8007a624(param_1);
  }
  return;
}

