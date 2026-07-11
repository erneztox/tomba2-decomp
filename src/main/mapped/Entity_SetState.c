/**
 * @brief Sets entity state: entity[6]=0, entity[3]=param_1 from global entity ptr
 * @note Original: func_800708B4 at 0x800708B4
 */
// Entity_SetState



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_800708b4(undefined1 param_1)

{
  int iVar1;
  
  iVar1 = _DAT_1f800214;
  *(undefined1 *)(_DAT_1f800214 + 6) = 0;
  *(undefined1 *)(iVar1 + 3) = param_1;
  return;
}
