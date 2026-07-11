/**
 * @brief Entity behavior setter variant 3: entity->state=0/1 state
 * @note Original: func_80068FBC at 0x80068FBC
 */
// Entity_BehaviorSet3



void FUN_80068fbc(undefined1 *param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  
  bVar1 = param_1->state;
  if (bVar1 != 1) {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        return;
      }
      FUN_80068e68(param_1);
      return;
    }
    if (bVar1 == 2) {
      FUN_80068be8(param_1);
      return;
    }
    if (bVar1 != 3) {
      return;
    }
    FUN_8007ab44(param_1);
    return;
  }
  bVar1 = param_1->behavior_state;
  if (bVar1 == 1) {
    *param_1 = 1;
    param_1->move_mode = 0;
    param_1->behavior_state = param_1->behavior_state + '\x01';
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        return;
      }
      param_1->flags = 1;
      if ((param_1->sub_type & 0x80) != 0) {
        FUN_800517f8(param_1);
        return;
      }
      FUN_800518fc(param_1);
      return;
    }
    if (bVar1 != 2) {
      return;
    }
  }
  FUN_80068a94(param_1);
  if ((param_1->sub_type & 0x80) == 0) {
    FUN_800518fc(param_1);
  }
  else {
    FUN_800517f8(param_1);
  }
  iVar3 = FUN_80077a4c(param_1,0,0,0);
  if ((iVar3 == 0) &&
     (sVar2 = param_1->timer2, param_1->timer2 = sVar2 + -1, sVar2 == 1)) {
    param_1->state = 3;
    param_1->move_mode = 2;
    *param_1 = 2;
  }
  return;
}
