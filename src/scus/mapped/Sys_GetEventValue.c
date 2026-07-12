/**
 * @brief Get event descriptor
 * @note Original: func_80011ECC at 0x80011ECC
 */
// Sys_GetEventValue



void Sys_GetEventValue(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = DAT_800253e4;
  Sys_GetEventValue(0);
  Sys_GetEventValue(param_2);
  Sys_GetEventValue(iVar1 + 0x18000,0x20);
  Sys_GetEventValue(0,1,0xffffffff,0,0);
  Sys_GetEventValue(param_1);
  return;
}
