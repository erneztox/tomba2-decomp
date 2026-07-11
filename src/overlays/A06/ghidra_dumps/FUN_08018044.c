// FUN_08018044

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08018044(int param_1)

{
  short sVar1;
  
  sVar1 = _DAT_800bf812;
  if ((DAT_800bf817 == '\n') && (0x6217 < *(short *)(param_1 + 0x36))) {
    *(undefined2 *)(param_1 + 0x36) = 0x6217;
  }
  if (((*(byte *)(param_1 + 0x145) & 1) == 0) &&
     ((int)sVar1 - (int)*(short *)(param_1 + 0x62) <= (int)*(short *)(param_1 + 0x32))) {
    *(short *)(param_1 + 0x32) = sVar1 - *(short *)(param_1 + 0x62);
    func_0x00022c78(param_1);
    *(byte *)(param_1 + 0x29) = *(byte *)(param_1 + 0x29) | 0x80;
  }
  return;
}

