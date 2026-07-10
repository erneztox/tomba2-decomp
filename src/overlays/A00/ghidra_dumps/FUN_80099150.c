// FUN_80099150

uint FUN_80099150(undefined4 param_1,uint param_2)

{
  if (0x7eff0 < param_2) {
    param_2 = 0x7eff0;
  }
  FUN_80097414(param_1,param_2);
  if (DAT_800ac63c == 0) {
    DAT_800ac638 = 0;
  }
  return param_2;
}

