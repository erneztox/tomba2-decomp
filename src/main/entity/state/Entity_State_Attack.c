/**
 * @brief Entity attack state: entity->action_state=0, sets attack params
 * @note Original: func_8005ACC8 at 0x8005ACC8
 */
// Entity_State_Attack



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8005acc8(int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if (param_1->action_state == '\0') {
    param_1->timer1 = 7;
    param_1->timer2 = 0;
    param_1->sub_action = 0;
    param_1->action_state = param_1->action_state + '\x01';
  }
  else if (param_1->action_state != '\x01') {
    return;
  }
  FUN_80055e28(param_1,0);
  if ((param_1->behavior_flags & 2) == 0) {
    param_1->direction = param_1->behavior_flags & 1;
  }
  FUN_80055fbc(param_1,param_1->behavior_flags);
  FUN_80056b48(param_1,0);
  FUN_80054e80(param_1,0);
  FUN_80076d68(param_1);
  FUN_80055d5c(param_1);
  *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + 8;
  FUN_8005444c(param_1);
  iVar2 = FUN_800532a0(param_1);
  if (iVar2 == 0) {
    iVar2 = FUN_80055390(param_1);
    if (((iVar2 == 0) && (iVar3 = FUN_800558b4(param_1), iVar3 == 0)) &&
       ((*(byte *)(param_1 + 0x149) & 2) != 0)) {
      param_1->behavior_state = 0;
      param_1->action_state = 0;
      if (param_1->state_165 == '\0') {
        uVar4 = 2;
        uVar5 = 8;
      }
      else {
        uVar4 = 0x11;
        uVar5 = 4;
      }
      FUN_80054d14(param_1,uVar4,uVar5);
    }
    iVar3 = FUN_80055c30(param_1);
    if ((iVar3 == 0) && (iVar2 == 0)) {
      FUN_800559f4(param_1);
    }
  }
  if ((*(byte *)(param_1 + 0x149) & 4) == 0) {
    FUN_800551c4(param_1);
  }
  else if ((_DAT_1f80017c & 3) == 0) {
    FUN_800538e0(param_1,param_1 + 0x2c,0);
  }
  if ((param_1->collision_state != '\0') &&
     (sVar1 = param_1->timer1, param_1->timer1 = sVar1 + -1, sVar1 == 1)) {
    FUN_8005a714(param_1);
  }
  FUN_80056c00(param_1,0);
  if ((param_1->behavior_state < 2) && (param_1->collision_state != '\0')) {
    DAT_800bf81e = 1;
  }
  return;
}
