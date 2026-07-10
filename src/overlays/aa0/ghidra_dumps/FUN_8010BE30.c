// FUN_8010BE30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8010bdac(int param_1)

{
  short sVar1;
  
  sVar1 = _DAT_800bf812;
  if (1 < DAT_800bf817) {
    if (DAT_800bf817 != 2) {
      return;
    }
    if (DAT_800e7feb != '\b') {
      return;
    }
    if (*(short *)(param_1 + 0x36) < 0x1a05) {
      *(undefined2 *)(param_1 + 0x36) = 0x1a04;
    }
  }
  if (((*(byte *)(param_1 + 0x145) & 1) == 0) &&
     ((int)sVar1 - (int)*(short *)(param_1 + 0x62) <= (int)*(short *)(param_1 + 0x32))) {
    *(short *)(param_1 + 0x32) = sVar1 - *(short *)(param_1 + 0x62);
    func_0x80022c78(param_1);
  }
  return;
}

