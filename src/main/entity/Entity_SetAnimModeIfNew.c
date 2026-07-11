/**
 * @brief Sets anim mode only if different from current entity->anim_id value
 * @note Original: func_80041768 at 0x80041768
 */
// Entity_SetAnimModeIfNew



undefined4 FUN_80041768(int param_1,uint param_2,short param_3)

{
  undefined4 uVar1;
  
  uVar1 = 1;
  if ((uint)param_1->anim_id != (param_2 & 0xff)) {
    uVar1 = FUN_80041718(param_1,param_2,(int)param_3);
  }
  return uVar1;
}
