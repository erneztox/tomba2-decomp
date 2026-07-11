/**
 * @brief Spawns collectible entity with behavior 0x8004BB38 from pool
 * @note Original: func_8004BD04 at 0x8004BD04
 */
// Entity_SpawnCollectible



int FUN_8004bd04(undefined4 param_1,undefined1 param_2,undefined2 param_3)

{
  int iVar1;
  
  iVar1 = FUN_80072ddc(param_1,0x81,5,1);
  if (iVar1 != 0) {
    *(code **)(iVar1 + 0x1c) = FUN_8004bb38;
    *(undefined1 *)(iVar1 + 3) = 0;
    *(undefined2 *)(iVar1 + 0x5c) = param_3;
    *(undefined1 *)(iVar1 + 0x5e) = param_2;
  }
  return iVar1;
}
