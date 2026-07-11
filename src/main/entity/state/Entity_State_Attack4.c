/**
 * @brief Entity attack state variant 4: entity->action_state switch
 * @note Original: func_8006762C at 0x8006762C
 */
// Entity_State_Attack4



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
#include "overlay.h"
void Entity_State_Attack4(int param_1)

{
  s8 cVar1;
  s16 sVar2;
  
  switch(param_1->action_state) {
  case 0:
    if (DAT_800bfad7 == '\0') {
      Entity_Behavior_TimedSFX(param_1);
    }
  case 0xb:
    Entity_ActionDispatch(param_1,2);
    Entity_StateSwitch(param_1);
    Audio_PlaySoundEffect(0x24,0,0);
    g_TimerFlag = 1;
    param_1->action_state = 6;
    goto switchD_80067664_default;
  case 1:
  case 6:
    _DAT_1f8001a4 = _DAT_1f80019e;
    if (g_GameState == '\0') {
      Overlay_8010caec(param_1);
    }
    else if (g_GameState == '\x06') {
      if ((_DAT_800bfe56 & 0x40) == 0) {
        Audio_PlaySoundEffect(0x8b,0,0);
      }
      Overlay_801147cc(param_1);
    }
    else if (g_GameState == '\b') {
      Overlay_8011370c(param_1);
    }
    else if (g_GameState == '\r') {
      Overlay_8010acc0(param_1);
    }
    else if (g_GameState == '\x0e') {
      Overlay_8010b4f4(param_1);
    }
    param_1->state_flag145 = 0;
    param_1->state_flag146 = 0;
    *(u8 *)(param_1 + 0x61) = 0;
    Entity_ResetState_2(param_1);
    Entity_LoadAnimIfChanged(param_1,0x71,0);
    Entity_State_Physics(param_1);
    param_1->velocity_y = 0x2400;
    param_1->rot_z = 0;
    param_1->timer1 = 10;
    param_1->sub_action = 0;
    param_1->action_state = param_1->action_state + '\x01';
    return;
  case 2:
  case 7:
    sVar2 = param_1->timer1 + -1;
    param_1->timer1 = sVar2;
    if (sVar2 == -1) {
      g_CameraEntity = 8;
      _DAT_800e8042 = _g_PlayerPosX;
      _DAT_800e8046 = _g_PlayerPosY;
      _DAT_800e804a = _g_PlayerPosZ;
      cVar1 = param_1->action_state;
      param_1->timer1 = 0x14;
code_r0x800678c0:
      param_1->action_state = cVar1 + '\x01';
    }
    break;
  case 3:
  case 8:
    sVar2 = param_1->timer1;
    param_1->timer1 = sVar2 + -1;
    if (sVar2 == 1) {
      Entity_OverlayDispatch(param_1,param_1->action_state == '\b');
      g_TimerFlag = 2;
      DAT_800bf80f = '\x02';
      param_1->action_state = param_1->action_state + '\x01';
      Pad_Init();
    }
    break;
  case 4:
  case 9:
    if (DAT_800bf80f == '\0') {
      g_TimerFlag = 3;
      cVar1 = param_1->action_state;
      goto code_r0x800678c0;
    }
    break;
  case 5:
  case 10:
    break;
  default:
    goto switchD_80067664_default;
  }
  Entity_State_Shoot(param_1);
  Entity_AnimFrame(param_1);
switchD_80067664_default:
  return;
}
