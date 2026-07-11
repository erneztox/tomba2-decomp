/**
 * @brief BIOS syscall 0xC0 stub
 * @note Original: func_800873F0 at 0x800873F0
 */
// BIOS_Syscall_C0_800873F0



void BIOS_Syscall_C0_800873F0(void)

{
  (*(code *)&LAB_000000c0)();
  return;
}
