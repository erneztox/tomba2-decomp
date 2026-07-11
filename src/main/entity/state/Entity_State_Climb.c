/**
 * @brief Entity climb state: entity->action_state dispatch, checks height/angle
 * @note Original: func_800660AC at 0x800660AC
 */
// Entity_State_Climb



void FUN_800660ac(int param_1)

{
  byte bVar1;
  short sVar2;
  char cVar3;
  int iVar4;
  
  iVar4 = FUN_80076d68();
  bVar1 = param_1->action_state;
  if (bVar1 == 1) {
    if (param_1->timer1 == 0xc) {
      FUN_80074590(0x26,0,0);
    }
    param_1->timer1 = param_1->timer1 + 1;
    if (iVar4 != 1) goto LAB_800661c0;
    FUN_80054d14(param_1,2,6);
    cVar3 = param_1->action_state;
    param_1->timer1 = 7;
  }
  else {
    if (1 < bVar1) {
      if ((bVar1 == 2) &&
         (sVar2 = param_1->timer1, param_1->timer1 = sVar2 + -1, sVar2 == 1))
      {
        if (DAT_1f800137 == '\x01') {
          DAT_800bf80e = DAT_1f800137;
        }
        param_1->behavior_state = 0x22;
        param_1->action_state = 0;
      }
      goto LAB_800661c0;
    }
    if (bVar1 != 0) goto LAB_800661c0;
    DAT_800bf80e = '\0';
    FUN_80054d14(param_1,199,3);
    cVar3 = param_1->action_state;
    param_1->timer1 = 0;
  }
  param_1->action_state = cVar3 + '\x01';
LAB_800661c0:
  FUN_80065478(param_1,1);
  return;
}
