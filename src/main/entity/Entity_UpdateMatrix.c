/**
 * @brief Updates entity GTE matrix from entity[0x54] rotation and [0x2C-0x36] position
 * @note Original: func_800517F8 at 0x800517F8
 */
// Entity_UpdateMatrix



void FUN_800517f8(int param_1)

{
  FUN_80085480(param_1 + 0x54,param_1 + 0x98);
  *(int *)(param_1 + 0xac) = (int)*(short *)(param_1 + 0x2e);
  *(int *)(param_1 + 0xb0) = (int)*(short *)(param_1 + 0x32);
  *(int *)(param_1 + 0xb4) = (int)*(short *)(param_1 + 0x36);
  FUN_80051300();
  return;
}
