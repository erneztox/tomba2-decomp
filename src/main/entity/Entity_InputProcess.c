/**
 * @brief Entity input processor: reads pad flags, sets state
 * @note Original: func_8005950C at 0x8005950C
 */
// Entity_InputProcess



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
#include "overlay.h"
void Entity_InputProcess(int param_1)

{
  u8 bVar1;
  u16 uVar2;
  u16 uVar3;
  int iVar4;
  
  uVar3 = _g_InputState;
  uVar2 = _g_PadState;
  _g_PadState = uVar2;
  _g_InputState = uVar3;
  switch(param_1->state) {
  case 0:
    Entity_InitType2(param_1,0);
    break;
  case 1:
    if (g_State230 != '\0') {
      _g_InputState = _g_InputState & ~_DAT_1f800174;
      _g_PadState = _g_PadState & ~_DAT_1f800174;
    }
    if ((DAT_800bf80f != '\0') || (g_CurrentOverlay != '\0')) {
      _g_PadState = 0;
      _g_InputState = 0;
    }
    Entity_AngleCheck(param_1,(int)param_1->draw_angle);
    Entity_StateDispatcherMain(param_1);
    if (param_1->state_flag146 == '\0') {
      DAT_1f800232 = 1;
    }
    Player_Update(param_1);
    Entity_StateEnd3(param_1,0);
    _g_PadState = uVar2;
    _g_InputState = uVar3;
    break;
  case 2:
    param_1->flag_17B = 1;
    Entity_ActionStateMachine(param_1);
    goto LAB_800596d0;
  case 4:
    param_1->sprite_flags = param_1->sprite_flags & 0x7f;
    if (g_CurrentOverlay == '\0') {
      _g_PadState = 0;
      _g_InputState = 0;
    }
    else {
      _g_PadState = _DAT_1f800166;
      _g_InputState = _DAT_1f800190;
    }
    Entity_AngleCheck(param_1,(int)param_1->draw_angle);
    Entity_ActionMain(param_1);
    Player_Update(param_1);
    Entity_StateEnd2(param_1);
    _g_PadState = uVar2;
    _g_InputState = uVar3;
    break;
  case 5:
    Overlay_8018bd30(param_1);
    goto LAB_800596d0;
  case 6:
    Overlay_8018be40(param_1);
LAB_800596d0:
    Player_Update(param_1);
    break;
  case 7:
    bVar1 = param_1->behavior_state;
    if (bVar1 == 1) {
      iVar4 = CD_CheckLoaded(1);
      if (iVar4 != 0) {
LAB_80059738:
        param_1->behavior_state = param_1->behavior_state + '\x01';
      }
    }
    else if (bVar1 < 2) {
      if (bVar1 == 0) {
        Pad_InitReset();
        goto LAB_80059738;
      }
    }
    else if ((bVar1 == 2) && (g_DMAFlag != '\0')) {
      DAT_800bf89c = 4;
      Game_ReturnToTitle();
      param_1->state = 1;
      param_1->behavior_state = 0;
      param_1->action_state = 0;
      param_1->sub_action = 0;
      iVar4 = _g_CurrentEntity;
      _g_CurrentEntity->normal_z = 2;
      iVar4->sprite_x = 1;
    }
    Entity_AnimFrame(param_1);
  }
  return;
}
