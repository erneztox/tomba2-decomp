/**
 * @brief BIOS copy: copies data from DAT_8009c2a0 to BIOS struct+0x70, calls finish functions
 * @note Original: func_8009C230 at 0x8009C230
 */
// BIOS_CopyToEvent



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void BIOS_CopyToEvent(void)

{
  int iVar1;
  s32 *puVar2;
  s32 unaff_retaddr;
  
  _DAT_80105f58 = unaff_retaddr;
  BIOS_Syscall0();
  iVar1 = (*(code *)&SUB_000000b0)();
  iVar1 = iVar1->script_data;
  puVar2 = &DAT_8009c2a0;
  do {
    *(s32 *)(iVar1 + 0x70) = *puVar2;
    puVar2 = puVar2 + 1;
    iVar1 = iVar1 + 4;
  } while (puVar2 != (s32 *)0x8009c2ac);
  BIOS_CallA0_2();
  BIOS_Syscall0_2();
  return;
}
