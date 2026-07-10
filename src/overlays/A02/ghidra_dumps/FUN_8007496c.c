// FUN_8007496c

undefined4 FUN_8007496c(uint param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = (param_1 & 0xff) * 0xc;
  if ((*(uint *)(&DAT_800be238 + iVar2) & 0xffffff00) == (param_1 & 0xffffff00)) {
    param_2 = param_2 + (9 - (uint)DAT_800fb165) * -0x10;
    param_3 = param_3 + (9 - (uint)DAT_800fb165) * -0x10;
    if (param_2 < 0) {
      param_2 = 0;
    }
    else if (0x7f < param_2) {
      param_2 = 0x7f;
    }
    if (param_3 < 0) {
      param_3 = 0;
    }
    else if (0x7f < param_3) {
      param_3 = 0x7f;
    }
    (&DAT_800be23f)[iVar2] = (char)param_3;
    (&DAT_800be23e)[iVar2] = (char)param_2;
    FUN_80092e3c(param_1 & 0xff,(param_2 << 0x17) >> 0x10,(param_3 << 0x17) >> 0x10);
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

