/**
 * @brief Entity moves toward target: collision check with entity->collision_state state, sets angle via atan2
 * @note Original: func_80041938 at 0x80041938
 */
// Entity_MoveToTarget



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char FUN_80041938(int param_1,short param_2,short param_3)

{
  byte bVar1;
  char cVar2;
  
  cVar2 = param_1->collision_state;
  if (cVar2 == '\0') {
    bVar1 = FUN_80049250(param_1,(int)param_2,(int)param_3);
    param_1->collision_state = bVar1;
    if (bVar1 == 0) {
      cVar2 = '\0';
    }
    else {
      bVar1 = bVar1 & 1;
      param_1->collision_state = bVar1;
      if (bVar1 != 0) {
        param_1->collision_state = bVar1 | 0x80;
        FUN_80049674(param_1);
        param_1->angle_delta = _DAT_1f8001a2;
      }
      cVar2 = param_1->collision_state;
    }
  }
  return cVar2;
}
