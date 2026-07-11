/**
 * @brief Collision check variant 1: calls 0x80045B30 with entity angle
 * @note Original: func_80049250 at 0x80049250
 */
// Collision_Check1



void FUN_80049250(int param_1,short param_2,short param_3)

{
  FUN_800455c0(param_1,(int)param_2,(int)param_3,(int)*(short *)(param_1 + 0x56));
  return;
}
