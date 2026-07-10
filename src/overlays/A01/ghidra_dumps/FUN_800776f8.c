// FUN_800776f8

uint FUN_800776f8(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  
  uVar1 = param_1 - param_2 & 0xfff;
  if (uVar1 == 0) {
    return param_2 & 0xfff;
  }
  if (uVar1 < 0x800) {
    if ((int)(short)param_3 <= (int)uVar1) {
      param_2 = param_2 + param_3;
      goto LAB_80077760;
    }
  }
  else if ((int)uVar1 <= 0x1000 - (short)param_3) {
    param_2 = param_2 - param_3;
    goto LAB_80077760;
  }
  param_2 = param_2 + uVar1;
LAB_80077760:
  return param_2 & 0xfff;
}

