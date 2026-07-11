// FUN_8010cf68

void FUN_8010cf68(int param_1)

{
  int iVar1;
  
  iVar1 = *(short *)(*(short *)(param_1 + 0x60) * 2 + -0x7feca448) * 4;
  if ((*(short *)(iVar1 + -0x7feca460) <= (short)(ushort)DAT_1f800207) &&
     ((short)(ushort)DAT_1f800207 <= *(short *)(iVar1 + -0x7feca45e))) {
    *(undefined1 *)(param_1 + 1) = 1;
  }
  return;
}

