/**
 * @brief Entity behavior type variant 2: entity->state=1 state dispatch
 * @note Original: func_800308C0 at 0x800308C0
 */
// Entity_BehaviorType2



void FUN_800308c0(int param_1)

{
  byte bVar1;
  undefined2 uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  
  bVar1 = param_1->state;
  iVar5 = param_1->parent;
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (3 < bVar1) {
        return;
      }
      FUN_8007a624(param_1);
      return;
    }
    if (bVar1 != 0) {
      return;
    }
    param_1->behavior_state = 4;
    param_1->state = 1;
    param_1->action_state = 0x10;
    param_1->pos_x = iVar5->pos_y;
    param_1->pos_y = *(undefined2 *)(iVar5 + 0x32);
    uVar2 = iVar5->pos_z;
    param_1->scale_y = param_1->anim_data;
    *(undefined2 *)(param_1 + 0x30) = uVar2;
  }
  cVar3 = param_1->behavior_state + -1;
  param_1->behavior_state = cVar3;
  if (cVar3 == '\0') {
    if ((6 < DAT_800e7e7c) && (iVar4 = FUN_8007a980(0,6,1), iVar4 != 0)) {
      if (param_1 != -0x2c) {
        iVar4->pos_x = param_1->pos_x;
        iVar4->pos_y = param_1->pos_y;
        *(undefined2 *)(iVar4 + 0x30) = *(undefined2 *)(param_1 + 0x30);
      }
      *(undefined2 *)(iVar4 + 0x32) = 0xffe2;
      FUN_80028e10(iVar4,0x34);
    }
    FUN_8002343c(iVar5);
  }
  param_1->scale_y = param_1->anim_data;
  if (param_1->anim_data == 0) {
    param_1->state = 2;
  }
  else {
    iVar5 = FUN_8002b278(param_1);
    if (iVar5 != 0) {
      FUN_80031780(param_1);
    }
  }
  return;
}
