// FUN_8011e574

undefined4 FUN_8011e574(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar2 = func_0x80072ddc(param_1,0,2,0x14);
  if (iVar2 == 0) {
    return 0;
  }
  func_0x8004d650(param_2,1);
  func_0x8004ed0c(param_2,5);
  *(undefined **)(iVar2 + 0x1c) = &DAT_80126264;
  *(undefined1 *)(iVar2 + 3) = 2;
  if (param_2 == 0x39) {
    *(undefined2 *)(iVar2 + 0x5c) = 0x347f;
    *(undefined1 *)(iVar2 + 0x5e) = 0;
    DAT_800bfa48 = DAT_800bfa48 + '\x01';
    uVar3 = FUN_80130758();
    return uVar3;
  }
  *(undefined2 *)(iVar2 + 0x5c) = 0x343f;
  *(undefined1 *)(iVar2 + 0x5e) = 4;
  bVar1 = *(byte *)(iVar2 + 0x5e);
  if (DAT_800bf9f3 == 0) {
    *(undefined2 *)(iVar2 + 0x68) = 0;
    *(undefined2 *)(*(int *)(iVar2 + 0xc4) + 0x12) = 0x1e;
    uVar3 = FUN_801305b0();
    return uVar3;
  }
  func_0x80040c00(0x3d);
  *(undefined2 *)(iVar2 + 0x68) = 1;
  *(undefined4 *)(param_1 + 0x24) = 0x78;
  DAT_800bf9f3 = DAT_800bf9f3 | (bVar1 | 1) << 4;
  iVar4 = func_0x80077768((uint)*(byte *)(iVar2 + 0x46) << 4,
                          (int)*(short *)(*(int *)(iVar2 + 0xc4) + 10));
  if (iVar4 != 0) {
    *(short *)(*(int *)(iVar2 + 0xc4) + 0x12) = -*(short *)(*(int *)(iVar2 + 0xc4) + 0x12);
  }
  *(undefined1 *)(iVar2 + 0x5e) = 4;
  *(char *)(iVar2 + 6) = *(char *)(iVar2 + 6) + '\x01';
  uVar3 = FUN_80130758();
  return uVar3;
}

