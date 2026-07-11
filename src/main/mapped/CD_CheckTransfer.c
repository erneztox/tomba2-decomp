/**
 * @brief CD transfer check: validates address range, sets up FIFO via FUN_80097540
 * @note Original: func_80099310 at 0x80099310
 */
// CD_CheckTransfer



int FUN_80099310(int param_1)

{
  int iVar1;
  
  if (param_1 - 0x1010U < 0x7efe9) {
    DAT_800ac61c = FUN_80097540(0xffffffff);
    iVar1 = (uint)DAT_800ac61c << (DAT_800ac62c & 0x1f);
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}
