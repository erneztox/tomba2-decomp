/**
 * @brief Collision wrapper 1: calls FUN_80045b30 with entity[0x56] as angle
 * @note Original: func_8004951C at 0x8004951C
 */
// Entity_CollisionWrap1



void FUN_8004951c(int param_1,short param_2,short param_3)

{
  FUN_80045b30(param_1,(int)param_2,(int)param_3,(int)*(short *)(param_1 + 0x56));
  return;
}
