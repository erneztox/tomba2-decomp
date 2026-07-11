// FUN_8012d8f4

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8012d8f4(void)

{
  int unaff_s0;
  int unaff_s2;
  int unaff_s4;
  int unaff_s7;
  int unaff_s8;
  
  if (DAT_800bf9dd != '\r') {
    return;
  }
  *(undefined4 *)(unaff_s0 + 0x10) = _DAT_800bf860;
  _DAT_800bf860 = 0;
  while( true ) {
    if (unaff_s7 <= unaff_s2) {
      while( true ) {
        if (unaff_s8 < unaff_s2) {
          return;
        }
        if ((-1 < unaff_s2) && (unaff_s2 < *(short *)(unaff_s4 + 10))) break;
        unaff_s2 = unaff_s2 + 1;
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if ((-1 < unaff_s2) && (unaff_s2 < *(short *)(unaff_s4 + 10))) break;
    unaff_s2 = unaff_s2 + 1;
  }
  FUN_8013f988();
  return;
}

