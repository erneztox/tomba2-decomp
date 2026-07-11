/**
 * @brief MDEC DMA wait: polls DAT_800abe9c word[4] bit until clear, checks timeout
 * @note Original: func_8008732C at 0x8008732C
 */
// MDEC_WaitDMA



undefined4 FUN_8008732c(void)

{
  ushort uVar1;
  int iVar2;
  
  iVar2 = DAT_800abe9c;
  *DAT_800abe98 = 0xffffff7f;
  uVar1 = *(ushort *)(iVar2 + 4);
  while( true ) {
    if ((uVar1 & 0x80) == 0) {
      *(ushort *)(DAT_800abe9c + 10) = *(ushort *)(DAT_800abe9c + 10) | 0x10;
      return 1;
    }
    iVar2 = FUN_80089640();
    if (iVar2 != 0) break;
    uVar1 = *(ushort *)(DAT_800abe9c + 4);
  }
  return 0;
}
