// FUN_80117984

void FUN_80117758(undefined2 *param_1)

{
  short sVar1;
  undefined2 uVar2;
  int iVar3;
  int extraout_v1;
  int iVar4;
  int unaff_s2;
  int unaff_s3;
  
  if (*(char *)(param_1 + 3) == '\0') {
    *(undefined1 *)((int)param_1 + 0x2b) = 0;
    *(undefined1 *)(param_1 + 0x2f) = 0;
    if (*(char *)((int)param_1 + 1) != '\0') {
      func_0x80074590(0x99,0,0);
      return;
    }
    if ((*(byte *)((int)param_1 + 0x1b) & 0x40) == 0) {
      func_0x800331d8(param_1,*(undefined4 *)(param_1 + 0x62),0xffffffce,0);
      *(byte *)((int)param_1 + 0x1b) = *(byte *)((int)param_1 + 0x1b) | 0x40;
    }
    param_1[0x21] = 100;
    *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + '\x01';
    if (0 < (short)param_1[0x2c]) {
      param_1[0x2c] = param_1[0x2c] & 0xfff;
    }
    FUN_801217f4(param_1);
    func_0x8004766c(param_1);
    if ((*(char *)((int)param_1 + 0x29) == '\0') &&
       (iVar3 = func_0x80049250(param_1,0,0x96), iVar3 == 0)) {
      func_0x80077c40(param_1,0x8014e1a4,10);
      param_1[0x42] = 0x96;
      *(undefined1 *)((int)param_1 + 7) = 0;
      param_1[0x43] = 300;
      func_0x8009a450();
      return;
    }
    func_0x80077cfc(param_1,0x8014e1a4,9,4);
    *(undefined1 *)param_1 = 7;
    uVar2 = 1;
    *(undefined1 *)((int)param_1 + 7) = 1;
    iVar3 = extraout_v1;
    iVar4 = 0;
    while( true ) {
      *(undefined2 *)(iVar3 + 10) = uVar2;
      *(undefined2 *)(*(int *)(iVar4 + 0xc0) + 0xc) = *param_1;
      func_0x80051b04(*(undefined4 *)(iVar4 + 0xc0));
      if ((int)(uint)*(byte *)(unaff_s2 + 8) <= unaff_s3) break;
      unaff_s3 = unaff_s3 + 1;
      iVar3 = func_0x8007aae8();
      *(int *)(iVar4 + 0xc4) = iVar3;
      *(undefined2 *)(iVar3 + 6) = param_1[2];
      **(undefined2 **)(iVar4 + 0xc4) = 0;
      *(undefined2 *)(*(int *)(iVar4 + 0xc4) + 2) = 0;
      *(undefined2 *)(*(int *)(iVar4 + 0xc4) + 4) = 0;
      *(undefined2 *)(*(int *)(iVar4 + 0xc4) + 8) = param_1[3];
      iVar3 = *(int *)(iVar4 + 0xc4);
      uVar2 = param_1[4];
      param_1 = param_1 + 5;
      iVar4 = iVar4 + 4;
    }
    return;
  }
  if (*(char *)(param_1 + 3) != '\x01') {
    FUN_80120a38();
    return;
  }
  sVar1 = param_1[0x21];
  param_1[0x21] = sVar1 + -1;
  if (sVar1 != 1) {
    param_1[0x2c] = param_1[0x2c] + -0x100;
    func_0x8004766c(param_1);
    param_1[0x19] = param_1[0x19] + 0x10;
    if (*(char *)((int)param_1 + 7) == '\0') {
      if (((short)param_1[0x2c] < -0x400) &&
         (param_1[0x2b] = param_1[0x2b] + param_1[0x28], (short)param_1[0x2c] < -0xbff)) {
        param_1[0x2c] = 0xf400;
      }
      if ((*(char *)((int)param_1 + 0x29) != '\0') ||
         (iVar3 = func_0x80049250(param_1,0,0x96), iVar3 != 0)) {
        func_0x80077cfc(param_1,0x8014e1a4,9,4);
        *(undefined1 *)param_1 = 7;
        param_1[0x42] = 0x28;
        param_1[0x43] = 0x50;
        param_1[0x2c] = param_1[0x2c] & 0xfff;
        *(char *)((int)param_1 + 7) = *(char *)((int)param_1 + 7) + '\x01';
        FUN_80120a38();
        return;
      }
    }
    else {
      if (*(char *)((int)param_1 + 7) != '\x01') {
        FUN_80120a38();
        return;
      }
      if ((short)param_1[0x2c] < -0x17f) {
        param_1[0x2c] = 0xfe80;
      }
      func_0x80049250(param_1,0,100);
    }
    if (param_1[0x39] == 0) {
      func_0x80076d68(param_1);
    }
    return;
  }
  func_0x80077cfc(param_1,0x8014e1a4,2,8);
  param_1[0x42] = 0x28;
  param_1[0x43] = 0x50;
  *(undefined1 *)((int)param_1 + 5) = 3;
  *(undefined1 *)param_1 = 1;
  *(undefined1 *)(param_1 + 2) = 1;
  *(undefined1 *)((int)param_1 + 0xd) = 0;
  param_1[0x39] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *(byte *)((int)param_1 + 0x1b) = *(byte *)((int)param_1 + 0x1b) & 0xbf;
  if ((param_1[0x30] == param_1[0x36]) && (param_1[0x31] == 0)) {
    *(undefined1 *)((int)param_1 + 7) = 0;
    FUN_80120a38();
    return;
  }
  *(undefined1 *)((int)param_1 + 7) = 1;
  FUN_80120a38();
  return;
}

