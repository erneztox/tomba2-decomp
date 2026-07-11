// FUN_0802eecc

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0802eecc(int param_1)

{
  short sVar1;
  
  sVar1 = func_0x000782b0(param_1 + 0x2c,(int)_DAT_1f800160,(int)_DAT_1f800164);
  if (0x800 < ((*(short *)(param_1 + 0x60) - sVar1) + 0x400U & 0xfff)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(ushort *)(param_1 + 0x62) = *(ushort *)(param_1 + 0x62) & 0xfffe;
  return 0;
}

