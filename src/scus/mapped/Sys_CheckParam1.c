/**
 * @brief Descriptive name auto-assigned
 * @note Original: func_800196C8 at 0x800196C8
 */
// Sys_CheckParam1



undefined4 Sys_CheckParam1(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == 2) {
    Sys_CheckParam1();
    uVar1 = Sys_CheckParam1();
    return uVar1;
  }
  iVar2 = Sys_CheckParam1();
  uVar1 = 0;
  if ((iVar2 == 0) && (uVar1 = 1, param_1 == 1)) {
    iVar2 = Sys_CheckParam1();
    uVar1 = 0;
    if (iVar2 == 0) {
      uVar1 = 1;
    }
  }
  return uVar1;
}
