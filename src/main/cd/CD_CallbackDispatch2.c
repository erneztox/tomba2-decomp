/**
 * @brief CD callback dispatch variant 2: calls function table at 0x800ABDA4/8
 * @note Original: func_80085CB4 at 0x80085CB4
 */
// CD_CallbackDispatch2



#include "tomba.h"
s16 * CD_CallbackDispatch2(void)

{
  s16 *puVar1;
  s16 *puVar2;
  s16 *puVar3;
  int iVar4;
  s32 uVar5;
  
  puVar2 = DAT_800abda8;
  puVar1 = DAT_800abda4;
  puVar3 = (s16 *)0x0;
  if (DAT_800aad18 == 0) {
    *DAT_800abda8 = 0;
    *puVar1 = *puVar2;
    *DAT_800abdac = 0x33333333;
    Mem_Zero(&DAT_800aad18,0x41a);
    iVar4 = BIOS_Handler(&DAT_800aad50);
    if (iVar4 != 0) {
      CD_InterruptHandler();
    }
    DAT_800aad54 = &DAT_800abd30;
    BIOS_Syscall_B0_80086220(&DAT_800aad50);
    DAT_800aad18 = 1;
    uVar5 = CD_InitRead();
    PTR_PTR_800abda0->script_ptr = uVar5;
    uVar5 = CD_InitSeek();
    *(s32 *)(PTR_PTR_800abda0 + 4) = uVar5;
    BIOS_CallA0();
    puVar3 = &DAT_800aad18;
    BIOS_Syscall0_2();
  }
  return puVar3;
}
