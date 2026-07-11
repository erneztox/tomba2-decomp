/**
 * @brief Entity state dispatcher main: master state switch (244L)
 * @note Original: func_80058918 at 0x80058918
 */
// Entity_StateDispatcherMain



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
#include "overlay.h"
void Entity_StateDispatcherMain(u8 *param_1)

{
  if (((_g_InputState & _g_InputMask2) == 0) && ((param_1->game_flags & 0x30) == 0)) {
    param_1->state_165 = 0;
  }
  else {
    param_1->state_165 = 1;
  }
  switchparam_1->behavior_state {
  case 0:
    Entity_DispatchAction(param_1);
    if (g_CurrentOverlay == '\0') {
      return;
    }
    if (param_1->behavior_state != '\0') {
      return;
    }
    *param_1 = 3;
    g_ActionTrigger = 1;
    param_1->state = 4;
    goto LAB_80058ce8;
  case 1:
    Entity_State_Attack(param_1);
    break;
  case 2:
    Entity_PhysicsStep4(param_1);
    goto LAB_80058c0c;
  case 3:
    param_1->flag_17B = 1;
    Entity_StateMain14(param_1);
    goto LAB_80058b34;
  case 4:
    param_1->flag_17B = 1;
    Entity_State_Float(param_1);
    goto LAB_80058c04;
  case 5:
  case 0x32:
    param_1->flag_17B = 1;
    Entity_StateMain7(param_1);
    break;
  case 6:
    param_1->flag_17B = 1;
    Entity_BehaviorMain(param_1);
    goto LAB_80058c0c;
  case 7:
    param_1->flag_17B = 1;
    Entity_State_Turn(param_1);
    Entity_StateTransition2(param_1);
    break;
  case 8:
    param_1->flag_17B = 1;
    Entity_State_Charge(param_1);
    goto LAB_80058c04;
  case 9:
    param_1->flag_17B = 1;
    Entity_StateMain2(param_1);
    break;
  case 10:
    Entity_StateMain13(param_1);
    break;
  case 0xb:
    Entity_StateMain12(param_1);
    break;
  case 0xc:
    Entity_State_Action3(param_1);
    break;
  case 0xd:
    Entity_State_Action4(param_1);
    break;
  case 0xe:
    Entity_State_Dive(param_1);
    break;
  case 0xf:
    Entity_State_Dash3(param_1);
    break;
  case 0x10:
    Entity_StateMain9(param_1);
    if (param_1->sub_state == '\a') {
      return;
    }
    param_1->flag_17B = 1;
LAB_80058b34:
    if ((g_CurrentOverlay != '\0') && (param_1->collision_state != '\0')) {
      *param_1 = 3;
      Entity_StateSwitch(param_1);
      param_1->state_flag144 = 0;
      Entity_ResetState_2(param_1);
      param_1->behavior_state = 0;
      param_1->action_state = 0;
      param_1->sub_action = 0;
    }
    break;
  case 0x11:
    param_1->flag_17B = 1;
    Entity_StateMain11(param_1);
    break;
  case 0x12:
    param_1->flag_17B = 1;
    Entity_StateMain6(param_1);
    if (g_CurrentOverlay == '\0') {
      return;
    }
    param_1->state = 4;
    goto LAB_80058ce8;
  case 0x13:
    param_1->flag_17B = 1;
    Entity_State_Move(param_1);
    break;
  case 0x14:
    Entity_State_Attack5(param_1);
    goto LAB_80058c04;
  case 0x15:
    Game_DispatchOverlayCall(param_1);
    goto LAB_80058c04;
  case 0x16:
    Entity_State_InitWithOverlay(param_1);
LAB_80058c04:
    Entity_StateTransition2(param_1);
LAB_80058c0c:
    Entity_LevelCheck(param_1);
    break;
  case 0x17:
    Entity_State_Idle(param_1);
    break;
  case 0x18:
    if (g_GameState == '\x04') {
      Overlay_801139f4(param_1);
    }
    else if (g_GameState == '\x06') {
      Overlay_801144f4(param_1);
    }
    else if (g_GameState == '\b') {
      Overlay_80112bcc(param_1);
    }
    else if (g_GameState == '\x0e') {
      Overlay_8010af4c(param_1);
    }
    break;
  case 0x19:
    param_1->flag_17B = 1;
    Entity_StateMain15(param_1);
    if (g_CurrentOverlay == '\0') {
      return;
    }
    if (param_1->action_flag == '\0') {
      return;
    }
    *param_1 = 3;
    g_ActionTrigger = 1;
    param_1->state = 4;
    param_1[0x168] = 0;
LAB_80058ce8:
    _DAT_1f800166 = 0;
    _DAT_1f800190 = 0;
    break;
  case 0x1a:
    if (g_GameState == '\x05') {
      Overlay_80110380(param_1);
    }
    else {
      Overlay_8010b73c(param_1);
    }
    break;
  case 0x1b:
    Entity_State_Swim(param_1);
    break;
  case 0x1c:
    param_1->flag_17B = 1;
    Entity_State_Giant(param_1);
    break;
  case 0x1d:
    if (g_GameState == '\0') {
      Overlay_8010c87c(param_1);
    }
    else if (g_GameState == '\x06') {
      Overlay_801145ec(param_1);
    }
    else if (g_GameState == '\b') {
      Overlay_801135c8(param_1);
    }
    else if (g_GameState == '\x0e') {
      Overlay_8010b3e8(param_1);
    }
    break;
  case 0x24:
    param_1->flag_17B = 1;
    Entity_StateMain10(param_1);
    break;
  case 0x25:
    Entity_State_Climb(param_1);
    break;
  case 0x29:
    Overlay_8010f304(param_1);
    break;
  case 0x2a:
    Overlay_801135e8(param_1);
    break;
  case 0x2b:
    Overlay_80113608(param_1);
    break;
  case 0x2c:
    param_1->flag_17B = 1;
    Overlay_801125e4(param_1);
    break;
  case 0x33:
    if (g_GameState == '\x05') {
      Overlay_8010f948(param_1);
    }
    else if (g_GameState == '\x12') {
      Overlay_80109f7c(param_1);
    }
    break;
  case 0x34:
    Overlay_8011411c(param_1);
    break;
  case 0x35:
    Overlay_801144fc(param_1);
    break;
  case 0x36:
    if (g_GameState == '\x06') {
      Overlay_80112e24(param_1);
    }
    else {
      Overlay_801149b8(param_1);
    }
    break;
  case 0x37:
    Overlay_801150c4(param_1);
    break;
  case 0x38:
    Entity_State_Special(param_1);
    break;
  case 0x39:
    Entity_State_Fly(param_1);
    break;
  case 0x3a:
    param_1->flag_17B = 1;
    Entity_State_Ladder(param_1);
    break;
  case 0x3b:
    Overlay_801097c8(param_1);
  }
  return;
}
