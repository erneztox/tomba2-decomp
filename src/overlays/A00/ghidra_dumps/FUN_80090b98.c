// FUN_80090b98

bool FUN_80090b98(uint param_1)

{
  param_1 = param_1 & 0xffff;
  if (param_1 < 3) {
    *(undefined2 *)(param_1 * 0x10 + DAT_800ac448) = 0;
  }
  return param_1 < 3;
}

