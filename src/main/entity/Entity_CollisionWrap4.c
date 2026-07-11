/**
 * @brief Collision wrapper 4: calls FUN_80046e2c with entity[0x56] as angle
 * @note Original: func_800495AC at 0x800495AC
 */
// Entity_CollisionWrap4



void FUN_800495ac(int param_1,short param_2,short param_3)

{
  FUN_80046e2c(param_1,(int)param_2,(int)param_3,(int)param_1->rot_y);
  return;
}
