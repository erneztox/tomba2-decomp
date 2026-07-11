/**
 * @brief Sets sub-entity data pointer at entity[0x40] from table at 0x800ECF58
 * @note Original: func_80051B04 at 0x80051B04
 */
// Entity_SetSubEntityData



void FUN_80051b04(int param_1,int param_2,int param_3)

{
  *(int *)(param_1 + 0x40) =
       *(int *)(&DAT_800ecf58 + param_2 * 4) +
       *(int *)(*(int *)(&DAT_800ecf58 + param_2 * 4) + param_3 * 4 + 4);
  return;
}
