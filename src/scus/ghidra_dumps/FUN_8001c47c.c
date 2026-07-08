
void FUN_8001c47c(void)

{
  int unaff_s0;
  
  *(undefined4 *)(unaff_s0 + 0x14) = 0;
  if (*(int *)(unaff_s0 + 0x24) == 0) {
    FUN_8001bd20();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_80017e4c(0xffffffff);
}

