// FUN_80097540

uint FUN_80097540(int param_1,uint param_2)

{
  uint uVar1;
  
  if (DAT_800ac628 != 0) {
    if (DAT_800ac630 == 0) {
      trap(0x1c00);
    }
    if (param_2 % DAT_800ac630 != 0) {
      param_2 = param_2 + DAT_800ac630 & ~DAT_800ac634;
    }
  }
  uVar1 = param_2 >> (DAT_800ac62c & 0x1f);
  if (param_1 != -2) {
    if (param_1 == -1) {
      param_2 = uVar1 & 0xffff;
    }
    else {
      *(short *)(param_1 * 2 + DAT_800ac604) = (short)uVar1;
    }
  }
  return param_2;
}

