/**
 * @brief Entity animation advance 2: entity->anim_id=0 state, animates entity[0x50] delta
 * @note Original: func_80072E60 at 0x80072E60
 */
// Entity_AdvanceAnim2



undefined4 FUN_80072e60(int param_1)

{
  short sVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  if (param_1->anim_id == '\0') {
    sVar1 = param_1->angle_offset + -0x40;
    param_1->angle_offset = sVar1;
    if (-0x401 < sVar1) goto LAB_80072ee0;
    uVar2 = 0xfc00;
  }
  else {
    if ((param_1->anim_id != '\x01') ||
       (sVar1 = param_1->angle_offset + 0x40, param_1->angle_offset = sVar1, sVar1 < 0x401
       )) goto LAB_80072ee0;
    uVar2 = 0x400;
  }
  param_1->angle_offset = uVar2;
  uVar3 = 1;
LAB_80072ee0:
  param_1->rot_y = param_1->target_rot_y + param_1->angle_offset;
  return uVar3;
}
