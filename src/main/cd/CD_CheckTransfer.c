/**
 * @brief CD transfer check: validates address range, sets up FIFO via CD_AlignDMA
 * @note Original: func_80099310 at 0x80099310
 */
// CD_CheckTransfer



int CD_CheckTransfer(int param_1)

{
  int iVar1;
  
  if (param_1 - 0x1010U < 0x7efe9) {
    DAT_800ac61c = CD_AlignDMA(0xffffffff);
    iVar1 = (uint)DAT_800ac61c << (DAT_800ac62c & 0x1f);
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}
