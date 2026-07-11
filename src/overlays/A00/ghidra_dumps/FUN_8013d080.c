// FUN_8013d080

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_8013d080(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  
  sVar1 = func_0x800781e0((int)*(short *)(param_1 + 0x2e) - (int)_DAT_1f800160,
                          (int)*(short *)(param_1 + 0x36) - (int)_DAT_1f800164);
  if ((((int)_DAT_800e7ffe & 0x8200U) == 0) && (sVar1 < 0x641)) {
    if (sVar1 < 0x44d) {
      uVar2 = 1;
      if (sVar1 < 0x259) {
        halt_baddata();
      }
    }
    else {
      uVar2 = 0;
    }
    return uVar2;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

