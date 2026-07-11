// FUN_08020e50

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_08020e50(int param_1)

{
  _DAT_800bf844 = func_0x0006fb0c(param_1,DAT_800bf80b);
  if (_DAT_800bf844 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined1 *)(_DAT_800bf844 + 0x5e) = 0;
  func_0x00040cdc(param_1,0x80139f38,0x80129e18);
  *(undefined1 *)(param_1 + 0x70) = 1;
  func_0x00042354(1,1);
  return 1;
}

