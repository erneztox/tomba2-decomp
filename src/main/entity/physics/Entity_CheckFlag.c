/**
 * @brief Entity flag checker: tests entity[0x6A] bit 0x8000, validates
 * @note Original: func_800665F4 at 0x800665F4
 */
// Entity_CheckFlag



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_800665f4(int param_1)

{
  ushort uVar1;
  
  uVar1 = param_1->type_flags & 0xf00;
  if (((int)param_1->type_flags & 0x8000U) == 0) {
    return 0;
  }
  if ((uVar1 != 0x100) && (uVar1 != 0x200)) {
    return 0;
  }
  if ((param_1->entity_flags & 0x100) == 0) {
    param_1->behavior_state = 4;
    param_1->action_state = 0xb;
    return 1;
  }
  if (DAT_800bf870 == '\0') {
    func_0x801140d0(param_1);
    param_1->state_flag144 = 0;
  }
  else {
    if (DAT_800bf870 == '\x06') {
      if ((_DAT_800bfe56 & 0x40) != 0) {
        func_0x80110dd0(param_1);
        param_1->state_flag144 = 0;
        goto LAB_800666d0;
      }
      param_1->behavior_state = 4;
      param_1->action_state = 0xb;
    }
    else {
      if (DAT_800bf870 == '\b') {
        func_0x8010f110(param_1);
        param_1->state_flag144 = 0;
        goto LAB_800666d0;
      }
      if (DAT_800bf870 == '\x0e') {
        func_0x8010a3dc(param_1);
      }
    }
    param_1->state_flag144 = 0;
  }
LAB_800666d0:
  param_1->rot_z = 0;
  param_1->angle_offset = 0;
  param_1->state_flag145 = 0;
  *(undefined1 *)(param_1 + 0x148) = 0;
  return 1;
}
