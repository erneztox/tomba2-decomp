// FUN_80077768

bool FUN_80077768(int param_1,int param_2,int param_3)

{
  uint uVar1;
  
  uVar1 = (param_1 - param_2) - 0x400U & 0xfff;
  if (param_3 != 0) {
    return 0x7ff < uVar1;
  }
  return uVar1 < 0x800;
}

