/**
 * @brief Sprite animation player - variant 1 (selects data table by entity type)
 * @note Original: func_800292B8 at 0x800292B8
 */
// Entity_Behavior_AnimPlayer1



#include "tomba.h"
void Entity_Behavior_AnimPlayer1(int param_1)

{
  u8 bVar1;
  void *puVar2;
  int iVar3;
  
  bVar1 = param_1->state;
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (3 < bVar1) {
        return;
      }
      Entity_Dealloc(param_1);
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
    *(void **)(param_1 + 0x40) = puVar2;
    *(void **)(param_1 + 0x50) = &DAT_800a1cd8;
    param_1->state = 1;
    param_1->collision_state = 0;
  }
  param_1->scale_y = param_1->anim_data;
  if (param_1->anim_data == 0) {
    if (param_1->script_data != Entity_ProcessProjCmd) {
      param_1->script_data = Entity_ProcessSpriteCmd;
      goto LAB_8002937c;
    }
LAB_800293a0:
    param_1->state = STATE_FINISH;
  }
  else {
LAB_8002937c:
    param_1->sprite_data = *(int *)(param_1 + 0x40);
    if (*(int *)(param_1 + 0x40) == 0) {
      if (param_1->script_data == Entity_ProcessSpriteCmd) goto LAB_800293a0;
      param_1->script_data = Entity_ProcessProjCmd;
    }
    iVar3 = Entity_CheckVisibility(param_1);
    if (iVar3 == 0) {
      Entity_AdvanceAnimScript(param_1);
      Entity_AdvanceAnimWord(param_1);
    }
  }
  return;
}
