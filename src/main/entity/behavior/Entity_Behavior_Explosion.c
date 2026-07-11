/**
 * @brief Explosion/particle effect: accelerate, spawn children, dealloc
 * @note Original: func_8004022C at 0x8004022C
 */
// Entity_Behavior_Explosion



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8004022c(int param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  
  bVar1 = param_1->action_state;
  if (bVar1 == 1) {
    if (param_1->collision_state == '\0') {
      sVar2 = param_1->velocity_y;
      iVar3 = (uint)param_1->velocity_y + (uint)param_1->angle_offset;
      param_1->velocity_y = (short)iVar3;
      param_1->pos_y_fixed = param_1->pos_y_fixed + sVar2 * 0x100;
      if (0x3000 < iVar3 * 0x10000 >> 0x10) {
        param_1->velocity_y = 0x3000;
      }
      FUN_8004766c(param_1);
      if ((param_1->collision_state != '\0') ||
         (iVar3 = FUN_80049250(param_1,0,
                               (int)(((uint)param_1->bounds_max_y -
                                     (uint)param_1->bounds_min_y) * 0x10000) >> 0x10),
         iVar3 != 0)) {
        param_1->action_state = param_1->action_state + '\x01';
      }
    }
    else {
      param_1->action_state = 2;
    }
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      param_1->velocity_y = 0x1000;
      param_1->action_state = 1;
      param_1->angle_offset = 0x200;
    }
  }
  else if (bVar1 == 2) {
    FUN_80027144(*(undefined4 *)(param_1->sprite_ptr1 + 0x40),param_1 + 0x2c,0x700,8);
    FUN_80074590(0xc,0,0);
    param_1->state = 3;
    if (param_1->flag_5E == '\x05') {
      _DAT_800bf850 = _DAT_800bf850 + -1;
    }
  }
  return;
}
