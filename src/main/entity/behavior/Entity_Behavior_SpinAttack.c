/**
 * @brief Spin attack: accelerates entity[0x154] speed, rotates, plays SFX 0x1B at threshold
 * @note Original: func_80063098 at 0x80063098
 */
// Entity_Behavior_SpinAttack



void FUN_80063098(int param_1)

{
  short sVar1;
  
  sVar1 = param_1->speed + 0x20;
  param_1->speed = sVar1;
  if (0x200 < sVar1) {
    param_1->speed = 0x200;
  }
  param_1->timer2 = param_1->timer2 + param_1->speed;
  if (param_1->anim_param == param_1->direction) {
    sVar1 = param_1->rot_y - param_1->speed;
  }
  else {
    sVar1 = param_1->rot_y + param_1->speed;
  }
  param_1->rot_y = sVar1;
  if (0x400 < param_1->timer2) {
    FUN_80074590(0x1b,0,0);
    DAT_800bf840 = 0x88;
    param_1->sub_action = param_1->sub_action + '\x01';
  }
  return;
}
