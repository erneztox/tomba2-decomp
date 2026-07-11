// FUN_80117b64

void FUN_80117b64(undefined4 param_1,int param_2,uint param_3)

{
  short sVar1;
  int iVar2;
  
  iVar2 = (int)((uint)*(ushort *)(param_2 + 0xe) << 0x10) >> 0x12;
  if (3 < iVar2) {
    iVar2 = 4;
  }
  iVar2 = (short)iVar2 * 6;
  *(undefined2 *)(*(int *)(param_2 + 0xc0) + 0x38) = *(undefined2 *)(iVar2 + -0x7fec8e0c);
  *(undefined2 *)(*(int *)(param_2 + 0xc0) + 0x3a) = *(undefined2 *)(iVar2 + -0x7fec8e0a);
  *(undefined2 *)(*(int *)(param_2 + 0xc0) + 0x3c) = *(undefined2 *)(iVar2 + -0x7fec8e08);
  sVar1 = *(short *)(param_2 + 0xe) + 1;
  *(short *)(param_2 + 0xe) = sVar1;
  if (*(byte *)(param_2 + 0x5e) == param_3) {
    *(short *)(param_2 + 0x84) = sVar1 * -0x1a + 0x244;
    *(short *)(param_2 + 0x86) = *(short *)(param_2 + 0xe) * -0x1a + 0x244;
    FUN_80120c08();
    return;
  }
  *(short *)(param_2 + 0x84) = sVar1 * -6 + 0xb4;
  *(short *)(param_2 + 0x86) = *(short *)(param_2 + 0xe) * -6 + 0xb4;
  if (0x13 < *(short *)(param_2 + 0xe)) {
    *(undefined2 *)(param_2 + 0xe) = 0;
    *(undefined1 *)(param_2 + 3) = 0;
    *(undefined2 *)(param_2 + 0x84) = 0x3c;
    *(undefined2 *)(param_2 + 0x86) = 0x3c;
    return;
  }
  return;
}

