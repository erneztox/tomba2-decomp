/**
 * @brief Entity attack behavior variant 2: entity->anim_id state, sets speed
 * @note Original: func_8006B124 at 0x8006B124
 */
// Entity_Behavior_Attack2



void FUN_8006b124(int param_1,int param_2)

{
  undefined2 uVar1;
  byte bVar2;
  
  bVar2 = param_1->anim_id >> 1 & 3;
  if (bVar2 == 2) {
    uVar1 = 0xe40;
  }
  else {
    if (bVar2 < 3) {
      param_1->type_flags = 0;
      goto LAB_8006b194;
    }
    uVar1 = 0xc20;
    if (bVar2 != 3) goto LAB_8006b194;
  }
  param_1->type_flags = uVar1;
LAB_8006b194:
  param_1->anim_id = param_1->anim_id & 7;
  FUN_80074590(0x22,0,0);
  FUN_80069634(param_1);
  FUN_8006b020(param_1,0);
  if (param_2 == 0) {
    FUN_80031558(param_1,param_1->kind - 1);
  }
  param_1->timer2 = 2;
  param_1->rot_y = param_1->target_angle;
  return;
}
