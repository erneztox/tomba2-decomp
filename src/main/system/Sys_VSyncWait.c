/**
 * @brief VSync wait with timeout: polls DAT_800abde0, prints 'VSync timeout' and calls BIOS on fail
 * @note Original: func_80085A78 at 0x80085A78
 */
// Sys_VSyncWait



void Sys_VSyncWait(int param_1,int param_2)

{
  param_2 = param_2 << 0xf;
  do {
    if (param_1 <= DAT_800abde0) {
      return;
    }
    param_2 = param_2 + -1;
  } while (param_2 != -1);
  Debug_PrintString(s_VSync__timeout_8001c020);
  BIOS_Syscall_B0_80080920(0);
  BIOS_CallC0(3,0);
  return;
}
