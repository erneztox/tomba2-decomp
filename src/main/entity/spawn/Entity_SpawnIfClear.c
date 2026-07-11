/**
 * @brief Checks spawn collision and spawns entity if space is clear
 * @note Original: func_80023548 at 0x80023548
 */
// Entity_SpawnIfClear



s32 FUN_80023548(s32 param_1,s32 param_2)

{
  int iVar1;
  
  iVar1 = FUN_8001f40c(param_1,param_2,1);
  if (-1 < iVar1) {
    FUN_8001ff7c(param_1,param_2,iVar1,1);
  }
  return -1 < iVar1;
}
