/**
 * @brief Collision check variant 2: calls 0x80045CAC with entity angle
 * @note Original: func_80049280 at 0x80049280
 */
// Collision_Check2



void FUN_80049280(int param_1,short param_2,short param_3)

{
  FUN_800492b0(param_1,(int)param_2,(int)param_3,(int)*(short *)(param_1 + 0x56));
  return;
}
