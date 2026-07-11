/**
 * @brief Initializes entity draw environment: sets up GTE and render state
 * @note Original: func_8005262C at 0x8005262C
 */
// Entity_InitDrawEnv



void FUN_8005262c(int param_1)

{
  short sVar1;
  
  sVar1 = param_1->anim_counter + 0x200;
  param_1->anim_counter = sVar1;
  if (0x1800 < sVar1) {
    param_1->anim_counter = 0x1800;
  }
  sVar1 = param_1->velocity_y + 0x200;
  param_1->velocity_y = sVar1;
  if (0x1000 < sVar1) {
    param_1->velocity_y = 0x1000;
  }
  param_1->pos_y_fixed = param_1->pos_y_fixed + param_1->velocity_y * -0x100;
  return;
}
