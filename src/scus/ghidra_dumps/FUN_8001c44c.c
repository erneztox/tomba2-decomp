
void FUN_8001c44c(void)

{
  if ((DAT_8002683c & 1) != 0) {
    FUN_80019478(0);
  }
  DAT_80026c0c = 0;
  if (DAT_80026c1c == 0) {
    FUN_8001bd20();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_80017e4c(0xffffffff);
}

