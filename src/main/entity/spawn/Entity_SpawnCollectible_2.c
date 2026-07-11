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
    iVar1->callback = FUN_8004bb38;
    iVar1->sub_type = 0;
    iVar1->draw_y = param_3;
    iVar1->flag_5E = param_2;
  }
  return iVar1;
}
