/**
 * @brief Descriptive name auto-assigned
 * @note Original: func_800195BC at 0x800195BC
 */
// Sys_CheckAndReturn



undefined4 Sys_CheckAndReturn(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = Sys_CheckAndReturn();
  if (iVar1 == 0) {
    Sys_CheckAndReturn();
    uVar2 = Sys_CheckAndReturn();
    return uVar2;
  }
  return 0;
}
