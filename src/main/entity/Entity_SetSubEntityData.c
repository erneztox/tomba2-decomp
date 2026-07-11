/**
 * @brief Sets sub-entity data pointer at entity[0x40] from table at 0x800ECF58
 * @note Original: func_80051B04 at 0x80051B04
 */
// Entity_SetSubEntityData



void Entity_SetSubEntityData(int param_1,int param_2,int param_3)

{
  *(int *)(param_1 + 0x40) =
       *(int *)(&g_OT_Data + param_2 * 4) +
       *(int *)(*(int *)(&g_OT_Data + param_2 * 4) + param_3 * 4 + 4);
  return;
}
