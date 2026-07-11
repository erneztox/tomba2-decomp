// FUN_08012168

/* WARNING: Control flow encountered bad instruction data */

void FUN_08012168(char *param_1)

{
  int iVar1;
  
  if (DAT_800bf816 != '\0') {
    return;
  }
  if (*param_1 == '\x02') {
    return;
  }
  if (DAT_800bf871 < 9) {
    iVar1 = func_0x0010abb0();
    if (iVar1 == 0) {
      return;
    }
    if (DAT_1f800236 != '\t') {
      DAT_1f800137 = 2;
      DAT_800bf80f = 2;
      halt_baddata();
    }
  }
  else {
    if (DAT_800bf871 < 0x10) {
      iVar1 = func_0x0010ae10();
      if (iVar1 == 0) {
        return;
      }
      DAT_1f800137 = 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    iVar1 = func_0x0010af38();
    if (iVar1 == 0) {
      return;
    }
    if (DAT_1f800236 != '\t') {
      DAT_1f800137 = 2;
      DAT_800bf80f = 2;
      return;
    }
  }
  DAT_800bf80f = 4;
  DAT_1f800137 = 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

