
undefined4 FUN_8001c5ec(undefined4 param_1,undefined4 param_2,uint param_3)

{
  undefined4 uVar1;
  
  if (DAT_80026c1c != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_80017e4c(0xffffffff);
  }
  DAT_80026c04 = param_3;
  if ((param_3 & 0x30) != 0) {
    if ((param_3 & 0x30) != 0x20) {
      return 0x246;
    }
    DAT_80026c08 = 0x249;
    uVar1 = FUN_8001bedc();
    return uVar1;
  }
  DAT_80026c08 = 0x200;
  uVar1 = FUN_8001bedc();
  return uVar1;
}

