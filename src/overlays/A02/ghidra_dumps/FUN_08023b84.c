// FUN_08023b84

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08023b84(int param_1)

{
  if (*(char *)(param_1 + 0x2b) == '\x02') {
    if ((_DAT_800bf808 & 0xffff0000) != 0x85010000) {
      return;
    }
    _DAT_800bf844 = func_0x0006fb0c(param_1,DAT_800bf80b);
    if (_DAT_800bf844 != 0) {
      *(undefined1 *)(_DAT_800bf844 + 0x5e) = 0;
    }
    *(undefined1 *)(param_1 + 6) = 2;
  }
  else if (*(char *)(param_1 + 0x2b) != '\x03') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  func_0x00042354(1,3);
  func_0x00040d68(param_1,0x800a3cd0);
  *(undefined1 *)(param_1 + 0x70) = 1;
  *(undefined1 *)(param_1 + 5) = 1;
  return;
}

