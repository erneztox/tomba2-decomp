// FUN_8012552c

void FUN_8012552c(void)

{
  int unaff_s0;
  
  if (*(byte *)(unaff_s0 + 0x5e) == 0) {
    FUN_8012e2bc();
    FUN_8012e52c();
    return;
  }
  if (2 < *(byte *)(unaff_s0 + 0x5e)) {
    return;
  }
  FUN_8012e678();
  FUN_8012e52c();
  return;
}

