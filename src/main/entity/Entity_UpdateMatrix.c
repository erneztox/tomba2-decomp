/**
 * @brief Updates entity GTE matrix from entity[0x54] rotation and [0x2C-0x36] position
 * @note Original: func_800517F8 at 0x800517F8
 */
// Entity_UpdateMatrix



void FUN_800517f8(int param_1)

{
  FUN_80085480(param_1 + 0x54,param_1 + 0x98);
  param_1->projected_x = (int)param_1->pos_y;
  param_1->projected_y = (int)*(short *)(param_1 + 0x32);
  param_1->projected_z = (int)param_1->pos_z;
  FUN_80051300();
  return;
}
