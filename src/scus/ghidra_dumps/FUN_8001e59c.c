
void FUN_8001e59c(void)

{
  if (DAT_80026d78 == 1) {
    DAT_80026d78 = 0;
    FUN_80017cec();
    DAT_80026dc0 = 0;
    DAT_80026dc4 = 0;
    FUN_8001dd6c(0);
                    /* WARNING: Subroutine does not return */
    FUN_8001de1c(DAT_80026d10);
  }
  return;
}

