/**
 * @brief Calculates angle delta: entity[0x56] = entity[0x5A] - entity[0x50]
 * @note Original: func_80072EFC at 0x80072EFC
 */
// Entity_CalcAngleDelta



void FUN_80072efc(int param_1)

{
  param_1->rot_y = param_1->target_rot_y - param_1->angle_offset;
  return;
}
