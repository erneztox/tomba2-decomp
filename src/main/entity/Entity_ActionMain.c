/**
 * @brief Entity action main: action state dispatcher (251L)
 * @note Original: func_80058F5C at 0x80058F5C
 */
// Entity_ActionMain



#include "tomba.h"
#include "overlay.h"
void Entity_ActionMain(int param_1)

{
  s8 cVar1;
  
  switch(param_1->behavior_state) {
  case 0:
    Entity_DispatchAction(param_1);
    goto LAB_800594a0;
  case 1:
    Entity_State_Attack(param_1);
    break;
  case 2:
    Entity_PhysicsStep4(param_1);
    goto LAB_8005919c;
  case 3:
    param_1->flag_17B = 1;
    Entity_StateMain14(param_1);
    cVar1 = param_1->collision_state;
    goto code_r0x800590f8;
  case 4:
    param_1->flag_17B = 1;
    Entity_State_Float(param_1);
    goto LAB_80059194;
  case 5:
  case 0x32:
    param_1->flag_17B = 1;
    Entity_StateMain7(param_1);
    break;
  case 6:
    param_1->flag_17B = 1;
    Entity_BehaviorMain(param_1);
    break;
  case 7:
    param_1->flag_17B = 1;
    Entity_State_Turn(param_1);
    goto LAB_80059220;
  case 8:
    param_1->flag_17B = 1;
    Entity_State_Charge(param_1);
    goto LAB_80059220;
  case 9:
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
    cVar1 = g_CurrentOverlay;
code_r0x800590f8:
    if (cVar1 != '\0') {
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
    goto LAB_800594a0;
  case 0x13:
    param_1->flag_17B = 1;
    Entity_State_Move(param_1);
    break;
  case 0x14:
    Entity_State_Attack5(param_1);
    goto LAB_80059194;
  case 0x15:
    Game_DispatchOverlayCall(param_1);
    goto LAB_80059194;
  case 0x16:
    Entity_State_InitWithOverlay(param_1);
LAB_80059194:
    Entity_StateTransition(param_1);
LAB_8005919c:
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
    else if (g_GameState == '\x0e') {
      Overlay_8010af4c(param_1);
    }
    break;
  case 0x19:
    param_1->flag_17B = 1;
    Entity_StateMain15(param_1);
LAB_80059220:
    Entity_StateTransition(param_1);
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
    Entity_State_Giant(param_1);
    break;
  case 0x1d:
    if (g_GameState == '\0') {
      Overlay_8010c87c(param_1);
      return;
    }
    if (g_GameState == '\x06') {
      Overlay_801145ec(param_1);
      return;
    }
    if (g_GameState != '\b') {
      if (g_GameState != '\x0e') {
        return;
      }
      Overlay_8010b3e8(param_1);
      return;
    }
    Overlay_801135c8(param_1);
    if (g_CurrentOverlay != '\0') {
      return;
    }
    param_1->behavior_state = 0x2d;
    goto LAB_800594b4;
  case 0x1e:
    Entity_RotateToTarget(param_1);
    goto LAB_800594a0;
  case 0x1f:
    Entity_StateEnd(param_1);
    break;
  case 0x20:
    Entity_StateAction(param_1);
    break;
  case 0x21:
    Entity_State_AttackTrans(param_1);
    goto LAB_800594a0;
  case 0x22:
    Entity_State_Attack2(param_1);
    goto LAB_800594a0;
  case 0x23:
    Entity_EndAction(param_1);
    break;
  case 0x24:
    param_1->flag_17B = 1;
    Entity_StateMain10(param_1);
    break;
  case 0x25:
    Entity_State_Climb(param_1);
    goto LAB_800594a0;
  case 0x26:
    Entity_State_JumpStart(param_1);
    goto LAB_800594a0;
  case 0x28:
    Entity_CheckClimbEnd(param_1);
LAB_800594a0:
    if (g_CurrentOverlay == '\0') {
      param_1->behavior_state = 0x20;
LAB_800594b4:
      param_1->action_state = 0;
    }
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
  case 0x2d:
    Overlay_80112418(param_1);
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
