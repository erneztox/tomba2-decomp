/**
 * @brief BIOS IRQ init: calls BIOS_B0, IRQ off, checks CD status, enables
 * @note Original: func_8009BB10 at 0x8009BB10
 */
// BIOS_InitIRQ



void BIOS_InitIRQ(s32 param_1)

{
  int iVar1;
  
  BIOS_Syscall_B0_80080920(0);
  BIOS_Syscall0();
  iVar1 = CD_GetStatus_2();
  if (iVar1 == 0) {
    param_1 = 0;
  }
  BIOS_Syscall_B0_8009C030(param_1);
  BIOS_CopyData2();
  BIOS_SetupEvent();
  BIOS_CopyData();
  BIOS_Syscall0_2();
  return;
}
