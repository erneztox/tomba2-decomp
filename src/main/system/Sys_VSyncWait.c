/**
 * @brief VSync wait with timeout: polls DAT_800abde0, prints 'VSync timeout' and calls BIOS on fail
 * @note Original: func_80085A78 at 0x80085A78
 */
// Sys_VSyncWait



void FUN_80085a78(int param_1,int param_2)

{
  param_2 = param_2 << 0xf;
  do {
    if (param_1 <= DAT_800abde0) {
      return;
    }
    param_2 = param_2 + -1;
  } while (param_2 != -1);
  FUN_8009b9b0(s_VSync__timeout_8001c020);
  FUN_80080920(0);
  FUN_80085b10(3,0);
  return;
}
