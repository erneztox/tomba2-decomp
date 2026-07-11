/**
 * @brief Applies gravity: entity[0x4A] += 0x400, updates entity[0x30] Y pos, triggers at angle wrap
 * @note Original: func_80066478 at 0x80066478
 */
// Entity_ApplyGravity



void FUN_80066478(int param_1)

{
  short sVar1;
  ushort uVar2;
  
  if ((-0x2400 < param_1->velocity_y) &&
     (sVar1 = param_1->rot_z + 0x40, param_1->rot_z = sVar1, -0x200 < sVar1)
     ) {
    param_1->rot_z = 0xfe00;
    FUN_80076d68();
  }
  FUN_80056b48(param_1,1);
  FUN_80055d5c(param_1);
  FUN_800541f4(param_1,3);
  uVar2 = param_1->velocity_y + 0x400;
  param_1->velocity_y = uVar2;
  if (0 < (int)((uint)uVar2 << 0x10)) {
    param_1->state_flag145 = 2;
    param_1->action_state = param_1->action_state + '\x01';
  }
  param_1->pos_y_fixed = param_1->pos_y_fixed + param_1->velocity_y * 0x100;
  return;
}
