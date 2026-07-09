// FUN_8013c4c8

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8013c4c8(undefined4 param_1,int param_2)

{
  short sVar1;
  int in_v0;
  int unaff_s0;
  
  sVar1 = func_0x800781e0(param_1,in_v0 - param_2);
  if ((((int)_DAT_800e7ffe & 0x8200U) != 0) || (0x640 < sVar1)) {
    FUN_801454c0();
    return;
  }
  if (0x44c < sVar1) {
    FUN_801454c0();
    return;
  }
  if (600 < sVar1) {
    FUN_801454c0();
    return;
  }
  sVar1 = FUN_801409c0();
  if (sVar1 != 0) {
    *(char *)(unaff_s0 + 5) = (char)sVar1;
    *(undefined1 *)(unaff_s0 + 6) = 0;
    FUN_801454f0();
    return;
  }
  *(undefined4 *)(unaff_s0 + 4) = 0x301;
  *(undefined1 *)(unaff_s0 + 3) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

