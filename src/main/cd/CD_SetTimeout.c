/**
 * @brief Sets CD timeout value at 0x800ABDA8, returns previous value
 * @note Original: func_80085C9C at 0x80085C9C
 */
// CD_SetTimeout



undefined2 FUN_80085c9c(undefined2 param_1)

{
  undefined2 uVar1;
  
  uVar1 = *DAT_800abda8;
  *DAT_800abda8 = param_1;
  return uVar1;
}
