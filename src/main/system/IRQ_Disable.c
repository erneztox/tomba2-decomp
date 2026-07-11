/**
 * @brief IRQ disable: saves return addr, calls BIOS to disable interrupts
 * @note Original: func_80085810 at 0x80085810
 */
// IRQ_Disable



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void IRQ_Disable(void)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  s32 unaff_retaddr;
  
  _DAT_80102430 = unaff_retaddr;
  BIOS_Syscall0();
  iVar1 = (*(code *)&SUB_000000b0)();
  piVar2 = (int *)(iVar1->script_data + 0x28);
  piVar3 = &DAT_800858bc;
  piVar4 = piVar2;
  do {
    iVar1 = *piVar3;
    iVar5 = *piVar4;
    piVar3 = piVar3 + 1;
    piVar4 = piVar4 + 1;
    if (iVar1 != iVar5) goto LAB_80085898;
  } while (piVar3 != &DAT_800858d4);
  piVar4 = &DAT_800858d4;
  do {
    *piVar2 = *piVar4;
    piVar4 = piVar4 + 1;
    piVar2 = piVar2 + 1;
  } while (piVar4 != (int *)0x800858ec);
LAB_80085898:
  BIOS_CallA0_2();
  BIOS_Syscall0_2();
  return;
}
