// FUN_80072f14

int FUN_80072f14(int param_1)

{
  ushort uVar1;
  int iVar2;
  
  iVar2 = 0;
  if (*(char *)(param_1 + 0x46) == '\0') {
    uVar1 = *(short *)(param_1 + 0x50) + 0x40;
    *(ushort *)(param_1 + 0x50) = uVar1;
    if ((int)((uint)uVar1 << 0x10) < 1) goto LAB_80072f94;
    *(undefined2 *)(param_1 + 0x50) = 0;
  }
  else {
    if ((*(char *)(param_1 + 0x46) != '\x01') ||
       (uVar1 = *(short *)(param_1 + 0x50) - 0x40, *(ushort *)(param_1 + 0x50) = uVar1,
       -1 < (int)((uint)uVar1 << 0x10))) goto LAB_80072f94;
    *(undefined2 *)(param_1 + 0x50) = 0;
  }
  iVar2 = 1;
LAB_80072f94:
  if ((iVar2 != 0) && (*(char *)(param_1 + 0xbf) != '\0')) {
    FUN_80074590(0x18,0,0xf);
  }
  *(short *)(param_1 + 0x56) = *(short *)(param_1 + 0x5a) - *(short *)(param_1 + 0x50);
  return iVar2;
}

