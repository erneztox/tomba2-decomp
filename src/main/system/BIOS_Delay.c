/**
 * @brief BIOS delay: spins 9 iterations, zeros MDEC word, returns 0
 * @note Original: func_8009BE34 at 0x8009BE34
 */
// BIOS_Delay



s32 FUN_8009be34(void)

{
  s32 local_10;
  
  *(s16 *)(DAT_800acf48 + 10) = 0;
  local_10 = 9;
  do {
    local_10 = local_10 + -1;
  } while (local_10 != -1);
  return 0;
}
