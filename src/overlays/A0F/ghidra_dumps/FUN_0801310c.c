// FUN_0801310c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_0801310c(int param_1)

{
  int iVar1;
  
  iVar1 = _DAT_1f80024c;
  _DAT_1f8000c0 = 0;
  _DAT_1f8000c2 = 0xff9c;
  _DAT_1f8000c4 = 0;
  func_0x000844c0(*(int *)(_DAT_1f80024c + 0xe4) + 0x18,&DAT_1f8000c0,&DAT_1f8000c8);
  if (((ushort)(((*(short *)(*(int *)(iVar1 + 0xe4) + 0x34) + _DAT_1f8000cc) -
                *(short *)(param_1 + 0x36)) + 0xe6U) < 0x1cd) &&
     ((ushort)(((*(short *)(*(int *)(iVar1 + 0xe4) + 0x2c) + _DAT_1f8000c8) -
               *(short *)(param_1 + 0x2e)) + 0xe6U) < 0x1cd)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return (ulonglong)_DAT_1f8000ca << 0x20;
}

