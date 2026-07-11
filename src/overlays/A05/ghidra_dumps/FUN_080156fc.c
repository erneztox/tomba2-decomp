// FUN_080156fc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_080156fc(char *param_1)

{
  short sVar1;
  
  sVar1 = _DAT_800bf812;
  if (*param_1 != '\x02') {
    if (DAT_800bf817 != '\0') {
      if (DAT_800bf817 != '\x02') {
        return;
      }
      if (DAT_800bf8cd != -1) {
        if (*(short *)(param_1 + 0x2e) < 0x2d2c) {
          param_1[0x2e] = '+';
          param_1[0x2f] = '-';
        }
        if (0x4b33 < *(short *)(param_1 + 0x36)) {
          param_1[0x36] = '4';
          param_1[0x37] = 'K';
        }
      }
    }
    if (((param_1[0x145] & 1U) == 0) &&
       ((int)sVar1 - (int)*(short *)(param_1 + 0x62) <= (int)*(short *)(param_1 + 0x32))) {
      *(short *)(param_1 + 0x32) = sVar1 - *(short *)(param_1 + 0x62);
      func_0x00022c78(param_1);
    }
  }
  return;
}

