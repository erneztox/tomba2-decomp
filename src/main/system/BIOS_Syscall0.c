/**
 * @brief BIOS syscall wrapper: syscall(0)
 * @note Original: func_80080890 at 0x80080890
 */
// BIOS_Syscall0



void BIOS_Syscall0(void)

{
  syscall(0);
  return;
}
