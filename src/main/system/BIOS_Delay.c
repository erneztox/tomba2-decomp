/**
 * @brief BIOS delay: spins 9 iterations, zeros MDEC word, returns 0
 * @note Original: func_8009BE34 at 0x8009BE34
 */
// BIOS_Delay



undefined4 FUN_8009be34(void)

{
  undefined4 local_10;
  
  *(undefined2 *)(DAT_800acf48 + 10) = 0;
  local_10 = 9;
  do {
    local_10 = local_10 + -1;
  } while (local_10 != -1);
  return 0;
}
