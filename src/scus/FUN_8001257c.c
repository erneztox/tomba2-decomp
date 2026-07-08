
void FUN_8001257c(void)

{
  int unaff_s0;
  
  if (-1 < unaff_s0) {
    if (unaff_s0 != 0) {
      if (unaff_s0 != 1) {
        FUN_8001238c();
        return;
      }
      FUN_80012584(0xd);
      DAT_80025454 = 6;
    }
    FUN_8001238c();
    return;
  }
  if (unaff_s0 != -2) {
    FUN_8001238c();
    return;
  }
  FUN_80012584(0);
  DAT_80025454 = 0x11;
  FUN_8001238c();
  return;
}

