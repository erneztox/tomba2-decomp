// FUN_80113a68

void FUN_80113a68(undefined1 *param_1)

{
  byte bVar1;
  int iVar2;
  undefined1 uVar3;
  int unaff_s2;
  
  bVar1 = param_1[5];
  if (bVar1 == 1) {
    iVar2 = func_0x8007778c(param_1);
    if ((iVar2 == 0) || (param_1[0x2b] != '\x03')) {
LAB_80113c1c:
      func_0x8004190c(param_1);
      return;
    }
    func_0x80042354(1,1);
    if (DAT_800bf8bc != -1) {
      FUN_8011cb64();
      return;
    }
    if (DAT_800bf902 == '\0') {
      FUN_8011cb5c();
      return;
    }
    uVar3 = 3;
    if ((DAT_800bf902 != -1) && (uVar3 = 2, DAT_800bf9ea == '\0')) {
      uVar3 = 1;
    }
    param_1[0x7a] = uVar3;
    func_0x80040cdc(param_1,0x8014dc2c,0x80148cc4);
    iVar2 = 2;
    param_1[0x70] = 2;
    param_1[5] = 2;
  }
  else {
    iVar2 = 2;
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        DAT_800bf9eb = 0;
        *param_1 = 9;
        *(undefined4 *)(param_1 + 0x2c) = 0x3a340000;
        *(undefined4 *)(param_1 + 0x30) = 0xf5e20000;
        *(undefined4 *)(param_1 + 0x34) = 0x3840000;
        *(undefined2 *)(param_1 + 0x56) = 0x800;
        param_1[0x2a] = 0xc;
        param_1[0x46] = 0;
        func_0x80077c40(param_1,0x8014dc2c,0);
        iVar2 = (byte)param_1[5] + 1;
        param_1[5] = (char)iVar2;
      }
    }
    else {
      iVar2 = 0xff;
      if (bVar1 == 2) {
        if (param_1[0x70] != -1) {
          func_0x80041098(param_1);
          param_1[1] = 1;
          func_0x80077e7c(param_1);
          goto LAB_80113c1c;
        }
        param_1[5] = 1;
        iVar2 = *(int *)(unaff_s2 + 0x4bc);
      }
    }
  }
  *(undefined2 *)(param_1 + 0x2e) = *(undefined2 *)(iVar2 + 0x2c);
  *(undefined2 *)(param_1 + 0x36) =
       *(undefined2 *)(*(int *)(unaff_s2 + (uint)(byte)param_1[0x5f] * 4 + 0xc0) + 0x34);
  *(short *)(param_1 + 0x32) =
       *(short *)(param_1 + 0x32) + (short)(char)((ushort)*(undefined2 *)(param_1 + 0x4a) >> 8);
  *(ushort *)(param_1 + 0x54) =
       *(short *)(param_1 + 0x54) + (*(short *)(param_1 + 0x44) >> 4) & 0xfff;
  FUN_80126040(param_1);
  *(short *)(param_1 + 0xb8) = *(short *)(param_1 + 0xb8) + -0x40;
  *(short *)(param_1 + 0xbc) = *(short *)(param_1 + 0xbc) + -0x40;
  *(short *)(param_1 + 0xba) = *(short *)(param_1 + 0xba) + -0x40;
  FUN_80125c1c();
  return;
}

