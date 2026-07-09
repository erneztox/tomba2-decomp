// FUN_8013b2cc

/* WARNING: Control flow encountered bad instruction data */

void FUN_8013b2cc(void)

{
  bool bVar1;
  short sVar2;
  int unaff_s0;
  
  sVar2 = FUN_80142cf4();
  if (sVar2 == -1) {
    *(undefined4 *)(unaff_s0 + 4) = 0xa01;
    return;
  }
  if (sVar2 == 0) {
    if (*(char *)(unaff_s0 + 0x5f) == '\0') {
      bVar1 = false;
    }
    else if (*(char *)(unaff_s0 + 0x5f) == '\x03') {
      bVar1 = true;
      if ((*(ushort *)(unaff_s0 + 0x62) & 1) == 0) {
        FUN_801442e0();
        return;
      }
    }
    else {
      bVar1 = false;
      if ((*(ushort *)(unaff_s0 + 0x62) & 1) == 0) {
        FUN_801442e0();
        return;
      }
    }
    if (!bVar1) {
      return;
    }
    *(undefined4 *)(unaff_s0 + 4) = 0xa01;
  }
  else {
    *(undefined2 *)(unaff_s0 + 6) = 4;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

