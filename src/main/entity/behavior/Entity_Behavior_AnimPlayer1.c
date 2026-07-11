/**
 * @brief Sprite animation player - variant 1 (selects data table by entity type)
 * @note Original: func_800292B8 at 0x800292B8
 */
// Entity_Behavior_AnimPlayer1



#include "tomba.h"
void FUN_800292b8(int param_1)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  
  bVar1 = param_1->state;
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
    if (param_1->action_state == ' ') {
      puVar2 = &DAT_800a1d88;
    }
    else if (param_1->action_state == '\x10') {
      puVar2 = &DAT_800a1d68;
    }
    else {
      puVar2 = &DAT_800a1d78;
    }
    *(undefined **)(param_1 + 0x40) = puVar2;
    *(undefined **)(param_1 + 0x50) = &DAT_800a1cd8;
    param_1->state = 1;
    param_1->collision_state = 0;
  }
  param_1->scale_y = param_1->anim_data;
  if (param_1->anim_data == 0) {
    if (param_1->script_data != FUN_80027e5c) {
      param_1->script_data = FUN_800288ac;
      goto LAB_8002937c;
    }
LAB_800293a0:
    param_1->state = 2;
  }
  else {
LAB_8002937c:
    param_1->sprite_data = *(int *)(param_1 + 0x40);
    if (*(int *)(param_1 + 0x40) == 0) {
      if (param_1->script_data == FUN_800288ac) goto LAB_800293a0;
      param_1->script_data = FUN_80027e5c;
    }
    iVar3 = FUN_8002b278(param_1);
    if (iVar3 == 0) {
      FUN_80031780(param_1);
      FUN_80031708(param_1);
    }
  }
  return;
}
