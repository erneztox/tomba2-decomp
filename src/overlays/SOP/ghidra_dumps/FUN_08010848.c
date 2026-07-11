// FUN_08010848

/* WARNING: Control flow encountered bad instruction data */

void FUN_08010848(void)

{
  if (DAT_800e8008 == '\0') {
    DAT_800e8008 = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (DAT_800e8008 == '\x01') {
    if (DAT_800e806c == '\0') {
      func_0x0006e3b0(&DAT_800e8008,0x800e8040);
    }
    else if (DAT_800e806c == '\x01') {
      DAT_800e806c = 0;
      return;
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

