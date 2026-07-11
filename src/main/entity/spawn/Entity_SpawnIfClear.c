/**
 * @brief Checks spawn collision and spawns entity if space is clear
 * @note Original: func_80023548 at 0x80023548
 */
// Entity_SpawnIfClear



s32 Entity_SpawnIfClear(s32 param_1,s32 param_2)

{
  int iVar1;
  
  iVar1 = Entity_CalcPos(param_1,param_2,1);
  if (-1 < iVar1) {
    Entity_MoveTo(param_1,param_2,iVar1,1);
  }
  return -1 < iVar1;
}
