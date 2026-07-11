// FUN_801199c4

void FUN_801199c4(void)

{
  int iVar1;
  int unaff_s0;
  
  iVar1 = func_0x80080750();
  if (iVar1 != 0) {
    if (*(int *)(unaff_s0 + 0x10) != 0) {
      *(undefined1 *)(*(int *)(unaff_s0 + 0x10) + 4) = 3;
      *(undefined4 *)(unaff_s0 + 0x10) = 0;
      *(undefined1 *)(unaff_s0 + 0x5e) = 0;
    }
    *(undefined1 *)(unaff_s0 + 4) = 3;
    FUN_801229bc();
    return;
  }
  *(undefined1 *)(unaff_s0 + 5) = 2;
  FUN_8012212c();
  FUN_801229bc();
  return;
}

