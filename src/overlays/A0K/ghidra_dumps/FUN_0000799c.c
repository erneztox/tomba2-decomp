// FUN_0000799c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000799c(void)

{
  int iVar1;
  
  if (*(short *)(_DAT_1f800138 + 0x50) == 0) {
    *(undefined2 *)(_DAT_1f800138 + 0x50) = 1;
    DAT_1f800136 = 1;
    DAT_800bf808 = 0;
  }
  else if (*(short *)(_DAT_1f800138 + 0x50) == 1) {
    iVar1 = func_0x00110560();
    if (iVar1 != 0) {
      if (iVar1 == 2) {
        DAT_1f800137 = 2;
        DAT_800bf80f = 2;
        DAT_800bf80d = 3;
        DAT_800bf839 = 0;
        DAT_800bf871 = 5;
        _DAT_800bfa26 = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (iVar1 == 3) {
        DAT_1f800137 = 2;
        DAT_800bf839 = 3;
        DAT_800bf80f = 2;
        DAT_800bf80d = 0;
        _DAT_800bf83a = 0x1403;
        DAT_800bf9c3 = 2;
      }
      *(undefined1 *)(_DAT_1f800138 + 0x6b) = 0;
      DAT_1f800136 = 0;
      *(undefined2 *)(_DAT_1f800138 + 0x50) = 0;
    }
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

