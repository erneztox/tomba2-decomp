// FUN_8011e3e8

undefined4 FUN_8011e3e8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  
  iVar3 = 0;
  uVar4 = func_0x80072ddc(param_1,0,2,0x14);
  iVar1 = (int)uVar4;
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined **)(iVar1 + 0x1c) = &DAT_80126264;
  *(undefined1 *)(iVar1 + 3) = *(undefined1 *)(param_1 + 3);
  if ((*(ushort *)(param_1 + 0x7a) & 0x40) != 0) {
    *(undefined2 *)(iVar1 + 0x5c) = 0x343f;
    *(undefined1 *)(iVar1 + 0x5e) = 4;
    *(undefined1 *)((int)((ulonglong)uVar4 >> 0x20) + 0x3e) = 4;
    uVar2 = FUN_801303bc();
    return uVar2;
  }
  *(undefined2 *)(iVar1 + 0x5c) = 0x347f;
  *(undefined1 *)(iVar1 + 0x5e) = 0;
  *(ushort *)(iVar1 + 0x60) = *(ushort *)(param_1 + 0x7a) >> 4 & 3;
  *(undefined1 *)(iVar3 + 0x3e) = 1;
  FUN_80131768(iVar1,(int)*(short *)(param_1 + 0x6c),0);
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined1 *)(param_1 + 0x5e) = 0;
  uVar2 = FUN_801303f8();
  return uVar2;
}

