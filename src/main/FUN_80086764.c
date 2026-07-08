
undefined4 FUN_80086764(void)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (((DAT_800abe98[1] & 1) != 0) && (uVar1 = 0, (*DAT_800abe98 & 1) != 0)) {
    if (DAT_800abe60 != (code *)0x0) {
      (*DAT_800abe60)();
    }
    uVar1 = 1;
  }
  return uVar1;
}

