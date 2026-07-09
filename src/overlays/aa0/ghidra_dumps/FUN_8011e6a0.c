// FUN_8011e6a0

uint FUN_8011e6a0(int param_1)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  
  iVar2 = func_0x80072ddc(param_1,0,2,0x14);
  if (iVar2 == 0) {
    return 0;
  }
  func_0x8004d650(0x4d,1);
  *(undefined **)(iVar2 + 0x1c) = &DAT_80126264;
  *(undefined1 *)(iVar2 + 3) = 4;
  *(undefined2 *)(iVar2 + 0x5c) = 0;
  if (DAT_800bf8f2 == 1) {
    *(undefined2 *)(iVar2 + 0x68) = 0;
    DAT_800bf8f2 = DAT_800bf8f2 | 0x10;
    *(byte *)(iVar2 + 0x5e) = DAT_800bf9f3 & 4;
    *(short *)(*(int *)(iVar2 + 0xc4) + 0x12) = -*(short *)(*(int *)(iVar2 + 0xc4) + 0x12);
    uVar1 = *(short *)(iVar2 + 0x40) - 0x10;
    *(ushort *)(iVar2 + 0x40) = uVar1;
    if ((int)((uint)uVar1 << 0x10) < 1) {
      *(undefined2 *)(iVar2 + 0x40) = 10;
      *(undefined1 *)(iVar2 + 0x5e) = 0;
      *(char *)(iVar2 + 6) = *(char *)(iVar2 + 6) + '\x01';
      uVar3 = FUN_80130758();
      return uVar3;
    }
    iVar4 = FUN_801308e0(iVar2);
    uVar3 = 0;
    if (iVar4 != 0) {
      uVar3 = (uint)*(ushort *)(iVar2 + 0x70);
      *(ushort *)(*(int *)(iVar2 + 0xc4) + 10) = *(ushort *)(iVar2 + 0x70);
    }
    return uVar3;
  }
  *(undefined2 *)(iVar2 + 0x68) = 1;
  *(byte *)(iVar2 + 0x5e) = DAT_800bf9f3 >> 4 & 4;
  uVar5 = 0x4e;
  if (*(char *)(iVar2 + 0x5e) != '\0') {
    uVar5 = 0x4d;
  }
  func_0x8004ed94(uVar5,0x41);
  *(undefined4 *)(param_1 + 0x24) = 0x1e;
  uVar3 = FUN_8012770c();
  return uVar3;
}

