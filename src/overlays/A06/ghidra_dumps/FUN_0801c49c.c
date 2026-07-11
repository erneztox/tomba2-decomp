// FUN_0801c49c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801c49c(void)

{
  DAT_800bf816 = 0;
  DAT_800e806c = 0;
  _DAT_1f800184 = 0;
  DAT_800e7e85 = 0x24;
  DAT_800e7e86 = 0;
  DAT_800e7e87 = 0;
  if (DAT_800bf817 == '\x02') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (DAT_800bf817 == '\x04') {
    DAT_800e7eaa = 0x13;
    _DAT_800e7eb6 = 0x6a54;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (DAT_800bf817 == '\n') {
    DAT_800e7e86 = 5;
  }
  func_0x00054198(&DAT_800e7e80);
  DAT_800e7feb = 0;
  return;
}

