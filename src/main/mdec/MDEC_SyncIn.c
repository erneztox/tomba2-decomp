/**
 * @brief MDEC input sync: polls bit 0x20000000 with timeout, calls timeout error on fail
 * @note Original: func_8009CAEC at 0x8009CAEC
 */
// MDEC_SyncIn



s32 FUN_8009caec(void)

{
  uint uVar1;
  int local_10;
  
  local_10 = 0x100000;
  uVar1 = *g_CD_Status;
  while( true ) {
    if ((uVar1 & 0x20000000) == 0) {
      return 0;
    }
    local_10 = local_10 + -1;
    if (local_10 == -1) break;
    uVar1 = *g_CD_Status;
  }
  FUN_8009cc2c(s_MDEC_in_sync_8001ca8c);
  return 0xffffffff;
}
