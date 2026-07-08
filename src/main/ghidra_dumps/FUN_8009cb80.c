
undefined4 FUN_8009cb80(void)

{
  uint uVar1;
  int local_10;
  
  local_10 = 0x100000;
  uVar1 = *DAT_800ad078;
  while( true ) {
    if ((uVar1 & 0x1000000) == 0) {
      return 0;
    }
    local_10 = local_10 + -1;
    if (local_10 == -1) break;
    uVar1 = *DAT_800ad078;
  }
  FUN_8009cc2c(s_MDEC_out_sync_8001ca9c);
  return 0xffffffff;
}

