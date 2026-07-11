/**
 * @brief Entity physics update: entity->behavior_flags flags, collision + movement
 * @note Original: func_80055E28 at 0x80055E28
 */
// Entity_PhysicsUpdate



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_80055e28(int param_1,int param_2)

{
  byte bVar1;
  
  bVar1 = param_1->behavior_flags & 1;
  param_1->behavior_flags = bVar1;
  if ((_DAT_800ecf54 & 0xa0) == 0) {
    param_1->behavior_flags = bVar1 | 2;
    param_1->sub_behavior = 0;
  }
  else {
    if ((_DAT_800ecf54 & _DAT_1f80016c) == 0) {
      if ((_DAT_800ecf54 & _DAT_1f80016e) != 0) {
        param_1->behavior_flags = 1;
      }
    }
    else {
      param_1->behavior_flags = 0;
    }
    if (_DAT_800ecf48 == 7) {
      param_1->sub_behavior = DAT_800ecf50;
    }
    else {
      param_1->sub_behavior = 3;
    }
  }
  if ((_DAT_800ecf54 & 0x10) == 0) {
    if ((_DAT_800ecf54 & 0x40) == 0) goto LAB_80055f0c;
    bVar1 = param_1->behavior_flags | 8;
  }
  else {
    bVar1 = param_1->behavior_flags | 4;
  }
  param_1->behavior_flags = bVar1;
LAB_80055f0c:
  if ((param_2 != 0) && ((param_1->behavior_flags & 2) == 0)) {
    param_1->direction = param_1->behavior_flags & 1;
    FUN_80055284(param_1);
  }
  return param_1->behavior_flags;
}
