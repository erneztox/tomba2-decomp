/**
 * @brief MDEC output sync: polls bit 0x1000000 with timeout, calls timeout error on fail
 * @note Original: func_8009CB80 at 0x8009CB80
 */
// MDEC_SyncOut



s32 MDEC_SyncOut(void)

{
  uint uVar1;
  int local_10;
  
  local_10 = 0x100000;
  uVar1 = *g_CD_Control;
  while( true ) {
    if ((uVar1 & 0x1000000) == 0) {
      return 0;
    }
    local_10 = local_10 + -1;
    if (local_10 == -1) break;
    uVar1 = *g_CD_Control;
  }
  Sys_TimeoutError(s_MDEC_out_sync_8001ca9c);
  return 0xffffffff;
}
