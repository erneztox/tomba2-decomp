// FUN_80073194

int FUN_80073194(int param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  
  iVar2 = 0;
  if (*(char *)(param_1 + 0x46) == '\0') {
    uVar1 = *(short *)(param_2 + 0x12) + 0x40;
    *(ushort *)(param_2 + 0x12) = uVar1;
    if ((int)((uint)uVar1 << 0x10) < 1) goto LAB_80073214;
    *(undefined2 *)(param_2 + 0x12) = 0;
  }
  else {
    if ((*(char *)(param_1 + 0x46) != '\x01') ||
       (uVar1 = *(short *)(param_2 + 0x12) - 0x40, *(ushort *)(param_2 + 0x12) = uVar1,
       -1 < (int)((uint)uVar1 << 0x10))) goto LAB_80073214;
    *(undefined2 *)(param_2 + 0x12) = 0;
  }
  iVar2 = 1;
LAB_80073214:
  if ((iVar2 != 0) && (*(char *)(param_1 + 0xbf) != '\0')) {
    FUN_80074590(0x18,0,0xf);
  }
  *(short *)(param_2 + 10) = *(short *)(param_2 + 0xe) + *(short *)(param_2 + 0x12);
  return iVar2;
}

