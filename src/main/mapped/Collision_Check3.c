/**
 * @brief Collision check variant 3: calls 0x800468AC with entity angle
 * @note Original: func_800493E8 at 0x800493E8
 */
// Collision_Check3



void FUN_800493e8(int param_1,short param_2,short param_3)

{
  FUN_80049418(param_1,(int)param_2,(int)param_3,(int)*(short *)(param_1 + 0x56));
  return;
}
