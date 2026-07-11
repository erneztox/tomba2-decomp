/**
 * @brief CD controller init: sets flag, restores saved state, returns status
 * @note Original: func_80086144 at 0x80086144
 */
// CD_InitController



s16 * CD_InitController(void)

{
  s16 *puVar1;
  
  puVar1 = &DAT_800aad18;
  if (DAT_800aad18 == 0) {
    BIOS_Syscall_B0_80086220(&DAT_800aad50);
    DAT_800aad18 = 1;
    *DAT_800abda8 = DAT_800aad4a;
    *DAT_800abdac = DAT_800aad4c;
    BIOS_Syscall0_2();
  }
  else {
    puVar1 = (s16 *)0x0;
  }
  return puVar1;
}
