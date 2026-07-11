/**
 * @brief Entity state dispatcher main: master state switch (244L)
 * @note Original: func_80058918 at 0x80058918
 */
// Entity_StateDispatcherMain



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void FUN_80058918(u8 *param_1)

{
  if (((_g_InputState & _g_InputMask2) == 0) && ((param_1->game_flags & 0x30) == 0)) {
    param_1->state_165 = 0;
  }
  else {
    param_1->state_165 = 1;
  }
  switchparam_1->behavior_state {
  case 0:
    FUN_8005a910(param_1);
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
    FUN_8005acc8(param_1);
    break;
  case 2:
    FUN_8005aee4(param_1);
    goto LAB_80058c0c;
  case 3:
    param_1->flag_17B = 1;
    FUN_8005b63c(param_1);
    goto LAB_80058b34;
  case 4:
    param_1->flag_17B = 1;
    FUN_800645e0(param_1);
    goto LAB_80058c04;
  case 5:
  case 0x32:
    param_1->flag_17B = 1;
    FUN_8005c8a0(param_1);
    break;
  case 6:
    param_1->flag_17B = 1;
    FUN_8005d16c(param_1);
    goto LAB_80058c0c;
  case 7:
    param_1->flag_17B = 1;
    FUN_80064ba0(param_1);
    FUN_800588bc(param_1);
    break;
  case 8:
    param_1->flag_17B = 1;
    FUN_80064e48(param_1);
    goto LAB_80058c04;
  case 9:
    param_1->flag_17B = 1;
    FUN_8005cdf8(param_1);
    break;
  case 10:
    FUN_8005d530(param_1);
    break;
  case 0xb:
    FUN_8005de54(param_1);
    break;
  case 0xc:
    FUN_8005e580(param_1);
    break;
  case 0xd:
    FUN_8005e8fc(param_1);
    break;
  case 0xe:
    FUN_8005ec70(param_1);
    break;
  case 0xf:
    FUN_8005ef48(param_1);
    break;
  case 0x10:
    FUN_8005c26c(param_1);
    if (param_1->sub_state == '\a') {
      return;
    }
    param_1->flag_17B = 1;
LAB_80058b34:
    if ((g_CurrentOverlay != '\0') && (param_1->collision_state != '\0')) {
      *param_1 = 3;
      FUN_80053d90(param_1);
      param_1->state_flag144 = 0;
      FUN_80054198(param_1);
      param_1->behavior_state = 0;
      param_1->action_state = 0;
      param_1->sub_action = 0;
    }
    break;
  case 0x11:
    param_1->flag_17B = 1;
    FUN_8005f2f0(param_1);
    break;
  case 0x12:
    param_1->flag_17B = 1;
    FUN_8005fb54(param_1);
    if (g_CurrentOverlay == '\0') {
      return;
    }
    param_1->state = 4;
    goto LAB_80058ce8;
  case 0x13:
    param_1->flag_17B = 1;
    FUN_8005f1b0(param_1);
    break;
  case 0x14:
    FUN_8006506c(param_1);
    goto LAB_80058c04;
  case 0x15:
    FUN_80065374(param_1);
    goto LAB_80058c04;
  case 0x16:
    FUN_800653f4(param_1);
LAB_80058c04:
    FUN_800588bc(param_1);
LAB_80058c0c:
    FUN_800531dc(param_1);
    break;
  case 0x17:
    FUN_80060064(param_1);
    break;
  case 0x18:
    if (g_GameState == '\x04') {
      func_0x801139f4(param_1);
    }
    else if (g_GameState == '\x06') {
      func_0x801144f4(param_1);
    }
    else if (g_GameState == '\b') {
      func_0x80112bcc(param_1);
    }
    else if (g_GameState == '\x0e') {
      func_0x8010af4c(param_1);
    }
    break;
  case 0x19:
    param_1->flag_17B = 1;
    FUN_80060c60(param_1);
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
      func_0x80110380(param_1);
    }
    else {
      func_0x8010b73c(param_1);
    }
    break;
  case 0x1b:
    FUN_80061a7c(param_1);
    break;
  case 0x1c:
    param_1->flag_17B = 1;
    FUN_80061c64(param_1);
    break;
  case 0x1d:
    if (g_GameState == '\0') {
      func_0x8010c87c(param_1);
    }
    else if (g_GameState == '\x06') {
      func_0x801145ec(param_1);
    }
    else if (g_GameState == '\b') {
      func_0x801135c8(param_1);
    }
    else if (g_GameState == '\x0e') {
      func_0x8010b3e8(param_1);
    }
    break;
  case 0x24:
    param_1->flag_17B = 1;
    FUN_80065a54(param_1);
    break;
  case 0x25:
    FUN_800660ac(param_1);
    break;
  case 0x29:
    func_0x8010f304(param_1);
    break;
  case 0x2a:
    func_0x801135e8(param_1);
    break;
  case 0x2b:
    func_0x80113608(param_1);
    break;
  case 0x2c:
    param_1->flag_17B = 1;
    func_0x801125e4(param_1);
    break;
  case 0x33:
    if (g_GameState == '\x05') {
      func_0x8010f948(param_1);
    }
    else if (g_GameState == '\x12') {
      func_0x80109f7c(param_1);
    }
    break;
  case 0x34:
    func_0x8011411c(param_1);
    break;
  case 0x35:
    func_0x801144fc(param_1);
    break;
  case 0x36:
    if (g_GameState == '\x06') {
      func_0x80112e24(param_1);
    }
    else {
      func_0x801149b8(param_1);
    }
    break;
  case 0x37:
    func_0x801150c4(param_1);
    break;
  case 0x38:
    FUN_800620d0(param_1);
    break;
  case 0x39:
    FUN_8006228c(param_1);
    break;
  case 0x3a:
    param_1->flag_17B = 1;
    FUN_800624b4(param_1);
    break;
  case 0x3b:
    func_0x801097c8(param_1);
  }
  return;
}
