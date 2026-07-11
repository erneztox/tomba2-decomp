/**
 * @brief Sets entity rotation angle: entity[0x56] = entity->collision_dir << 4
 * @note Original: func_8003FC78 at 0x8003FC78
 */
// Entity_SetAngleFromState



void FUN_8003fc78(int param_1)

{
  param_1->rot_z = 0;
  param_1->rot_y = (ushort)param_1->collision_dir << 4;
  return;
}
