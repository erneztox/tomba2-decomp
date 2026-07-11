/**
 * @brief CD controller reset: saves state from 0x800ABDA8/C, zeros fields, calls BIOS stub
 * @note Original: func_800860A4 at 0x800860A4
 */
// CD_ResetController



s16 * CD_ResetController(void)

{
  s16 *puVar1;
  s16 *puVar2;
  
  puVar2 = (s16 *)0x0;
  if (DAT_800aad18 != 0) {
    BIOS_Syscall0();
    puVar1 = DAT_800abda8;
    puVar2 = DAT_800abda4;
    DAT_800aad4a = *DAT_800abda8;
    DAT_800aad4c = *DAT_800abdac;
    *DAT_800abda8 = 0;
    *puVar2 = *puVar1;
    *DAT_800abdac = *DAT_800abdac & 0x77777777;
    BIOS_Syscall_B0_80086210();
    DAT_800aad18 = 0;
    puVar2 = &DAT_800aad18;
  }
  return puVar2;
}
