// FUN_08037e3c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08037e3c(void)

{
  if ((_DAT_800e7ffe & 0x180) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  func_0x00042354(1,2);
  return;
}

