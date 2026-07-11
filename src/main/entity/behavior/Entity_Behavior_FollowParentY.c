/**
 * @brief Follows parent entity Y offset: reads parent[0x10], computes delta from entity[0x32]
 * @note Original: func_800543C0 at 0x800543C0
 */
// Entity_Behavior_FollowParentY



void FUN_800543c0(int param_1)

{
  int iVar1;
  short sVar2;
  
  if ((param_1->physics_flag == '\0') && (param_1->collision_state == '\0')) {
    if (param_1->sub_state == '\0') {
      sVar2 = param_1->angle_delta;
    }
    else {
      iVar1 = param_1->parent;
      sVar2 = (iVar1->bounds_max_y - iVar1->bounds_min_y) -
              (*(short *)(param_1 + 0x32) - *(short *)(iVar1 + 0x32));
    }
    FUN_80049250(param_1,0,(int)sVar2);
  }
  return;
}
