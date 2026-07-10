// FUN_80070f00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80070f00(int param_1,int param_2,undefined4 *param_3)

{
  if (param_2 == 0) {
    _DAT_800bf824 = CONCAT22(_DAT_1f800160 - *(short *)(param_1 + 0x2e),_DAT_800bf824);
    _DAT_800bf828 = CONCAT22(_DAT_1f800162 - *(short *)(param_1 + 0x32),_DAT_800bf828);
    _DAT_800bf82c = CONCAT22(_DAT_1f800164 - *(short *)(param_1 + 0x36),_DAT_800bf82c);
    return;
  }
  if (param_2 != 1) {
    return;
  }
  _DAT_800bf824 = *param_3;
  _DAT_800bf828 = param_3[1];
  _DAT_800bf82c = param_3[2];
  return;
}

