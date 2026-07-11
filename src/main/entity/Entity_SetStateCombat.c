/**
 * @brief Entity combat state: entity[6]=0, entity[5]=3
 * @note Original: func_80070798 at 0x80070798
 */
// Entity_SetStateCombat



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80070798(void)

{
  int iVar1;
  
  iVar1 = _DAT_1f800214;
  *(undefined1 *)(_DAT_1f800214 + 6) = 0;
  *(undefined1 *)(iVar1 + 5) = 3;
  return;
}
