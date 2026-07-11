/**
 * @brief Sets system callback function and event mask from parameters
 * @note Original: func_80051F14 at 0x80051F14
 */
// Sys_SetCallback



void Sys_SetCallback(int param_1,s32 param_2)

{
  s32 uVar1;
  
  param_1 = param_1 * 0x70;
  *(s32 *)(&DAT_801fe00c + param_1) = param_2;
  uVar1 = Sys_NoOp2();
  *(s32 *)(&DAT_801fe010 + param_1) = uVar1;
  *(s16 *)(&DAT_801fe000 + param_1) = 2;
  (&DAT_801fe06f)[param_1] = 0;
  BIOS_Syscall0();
  uVar1 = BIOS_Syscall_B0_80080860(*(s32 *)(&DAT_801fe00c + param_1),
                       *(s32 *)(&DAT_801fe008 + param_1),
                       *(s32 *)(&DAT_801fe010 + param_1));
  *(s32 *)(&DAT_801fe004 + param_1) = uVar1;
  BIOS_Syscall0_2();
  return;
}
