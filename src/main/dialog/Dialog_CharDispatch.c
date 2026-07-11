/**
 * @brief Dialogue character dispatcher: handles special chars (0x3E-0x68) for text boxes
 * @note Original: func_80035738 at 0x80035738
 */
// Dialog_CharDispatch



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
#include "overlay.h"
u8 Dialog_CharDispatch(s32 param_1,s32 param_2,int param_3)

{
  s8 cVar1;
  u8 uVar2;
  int iVar3;
  uint uVar4;
  s32 uVar5;
  uint uVar6;
  
  uVar6 = 0;
  switch(param_2) {
  case 0x3e:
  case 0x3f:
    uVar5 = 0x19;
    if ((DAT_800bfa1f & 0xf) != 0xf) goto LAB_80035f40;
LAB_80035f2c:
    uVar6 = 0;
    break;
  case 0x40:
  case 0x41:
  case 0x42:
  case 0x43:
  case 0x44:
    uVar5 = 0x1c;
    goto LAB_80035f40;
  case 0x4c:
    uVar5 = 7;
    goto LAB_80035f40;
  case 0x59:
  case 0x5a:
  case 0x5b:
  case 0x5c:
  case 0x66:
  case 0x67:
  case 0x68:
    if (g_GameState == GAMESTATE_LEVEL2) {
      uVar5 = 0x17;
      cVar1 = DAT_800bf912;
    }
    else if (g_GameState < 7) {
      if (g_GameState != 5) goto LAB_80035f50;
      uVar5 = 0x16;
      cVar1 = DAT_800bf911;
    }
    else if (g_GameState == GAMESTATE_7) {
      uVar5 = 0x1b;
      cVar1 = DAT_800bf913;
    }
    else {
      if (g_GameState != 8) goto LAB_80035f50;
      uVar5 = 0x1e;
      cVar1 = DAT_800bf914;
    }
joined_r0x80035aa8:
    if (cVar1 != -1) goto LAB_80035f40;
    break;
  case 0x62:
    switch(g_GameState) {
    case 0:
      uVar6 = Event_Handler(param_1,param_2,param_3,0x10);
      break;
    case 1:
      if (g_ActionFlag != '\0') {
joined_r0x80035aa8:
        uVar5 = 1;
        cVar1 = DAT_800bf910;
        goto joined_r0x80035aa8;
      }
      uVar6 = Event_Check4(param_1,param_2,param_3);
      if (uVar6 != 0) goto LAB_80035f50;
      uVar6 = Event_Handler(param_1,param_2,param_3,0x11);
      break;
    case 5:
      uVar6 = Event_CheckTrigger2(0xd);
      if (uVar6 == 0) {
        uVar6 = Event_Handler(param_1,param_2,param_3,0x12);
      }
      else if ((param_3 != 1) && (iVar3 = Entity_SpawnCollectible(param_1,0,2), iVar3 != 0)) {
        iVar3->callback = 0x801126c0;
        uVar5 = 0x62;
LAB_80035c68:
        Menu_UpdateItemCount(uVar5,1);
        goto LAB_80035f50;
      }
      break;
    case 7:
      uVar6 = Event_Handler(param_1,param_2,param_3,0x13);
      break;
    case 8:
      uVar6 = Event_Handler(param_1,param_2,param_3,0x14);
    }
    break;
  case 99:
    switch(g_GameState) {
    case 0:
      if (DAT_800bf8b8 == -1) {
LAB_80035814:
        if (uVar6 != 0) goto LAB_80035f50;
      }
      else {
        uVar6 = Event_CheckTrigger2(0);
        if (uVar6 != 0) {
          if ((param_3 != 1) && (iVar3 = Entity_SpawnCollectible(param_1,0,1), iVar3 != 0)) {
            iVar3->callback = 0x80117228;
          }
          goto LAB_80035814;
        }
      }
      uVar6 = Event_Handler(param_1,param_2,param_3,0x10);
      break;
    case 1:
      if (g_ActionFlag != '\0') goto joined_r0x80035aa8;
      uVar6 = Event_Check4(param_1,param_2,param_3);
      if (uVar6 != 0) goto LAB_80035f50;
      uVar6 = Event_Handler(param_1,param_2,param_3,0x11);
      break;
    case 5:
      uVar6 = Event_Handler(param_1,param_2,param_3,0x12);
      break;
    case 7:
      uVar6 = Event_Handler(param_1,param_2,param_3,0x13);
      break;
    case 8:
      uVar6 = Event_Handler(param_1,param_2,param_3,0x14);
    }
    break;
  case 100:
    switch(g_GameState) {
    case 0:
      uVar6 = Event_Handler(param_1,param_2,param_3,0x10);
      break;
    case 1:
      if (g_ActionFlag != '\0') goto joined_r0x80035aa8;
      uVar6 = Event_Check4(param_1,param_2,param_3);
      if (uVar6 != 0) goto LAB_80035f50;
      uVar6 = Event_Handler(param_1,param_2,param_3,0x11);
      break;
    case 5:
      uVar6 = Event_CheckTrigger2(0xd);
      if (uVar6 == 0) {
        uVar6 = Event_Handler(param_1,param_2,param_3,0x12);
      }
      else if ((param_3 != 1) && (iVar3 = Entity_SpawnCollectible(param_1,0,1), iVar3 != 0)) {
        iVar3->callback = 0x801126c0;
        uVar5 = 0x61;
        goto LAB_80035c68;
      }
      break;
    case 7:
      uVar6 = Event_Handler(param_1,param_2,param_3,0x13);
      break;
    case 8:
      uVar6 = Event_Handler(param_1,param_2,param_3,0x14);
    }
    break;
  case 0x65:
    switch(g_GameState) {
    case 0:
      uVar6 = Event_Handler(param_1,param_2,param_3,0x10);
      break;
    case 1:
      if (g_ActionFlag != '\0') goto joined_r0x80035aa8;
      uVar6 = Event_Check4(param_1,param_2,param_3);
      if (uVar6 != 0) goto LAB_80035f50;
      uVar6 = Event_Handler(param_1,param_2,param_3,0x11);
      break;
    case 4:
      uVar6 = Event_TriggerTypeB(param_1,param_2,param_3);
      break;
    case 5:
      uVar6 = Event_Handler(param_1,param_2,param_3,0x12);
      break;
    case 6:
      uVar6 = Event_TriggerTypeA(param_1,param_2,param_3);
      break;
    case 7:
      uVar6 = Event_Handler(param_1,param_2,param_3,0x13);
      break;
    case 8:
      uVar6 = Event_Handler(param_1,param_2,param_3,0x14);
    }
    break;
  case 0x77:
    if (g_GameState == GAMESTATE_TITLE) {
      if (DAT_800bf902 == '\0') break;
      if (((_DAT_800bf854->combat_flag == '\x01') && ((DAT_800bf9ea & 0xf) != 0xf)) &&
         (uVar6 = Event_CheckTrigger2(2), uVar6 != 0)) {
        if (param_3 == 1) goto LAB_80035f58;
        Overlay_801252c0(param_1,3,0);
      }
    }
    else if (g_GameState == GAMESTATE_2) {
      uVar5 = 5;
      goto LAB_80035f40;
    }
    goto LAB_80035f50;
  case 0x78:
  case 0x7b:
  case 0x7e:
    uVar5 = 5;
    goto LAB_80035f40;
  case 0x79:
  case 0x7a:
    uVar6 = Event_CheckTrigger2(3);
    uVar5 = 5;
    goto LAB_80035ee4;
  case 0x7c:
  case 0x7d:
    if (g_GameState == GAMESTATE_2) {
      uVar5 = 5;
      goto LAB_80035f40;
    }
    uVar6 = 0;
    if (g_GameState != 1) break;
    uVar6 = Overlay_80112784();
    if (param_3 != 1) {
      if (uVar6 == 0) {
        return 4;
      }
      Overlay_80112808(param_2);
      return 0;
    }
    goto LAB_80035f58;
  case 0x7f:
  case 0x80:
  case 0x92:
    uVar6 = Event_CheckTrigger2(4);
    uVar5 = 0x15;
    goto LAB_80035ee4;
  case 0x81:
  case 0x82:
    uVar5 = 3;
    goto LAB_80035f40;
  case 0x83:
  case 0x84:
    uVar5 = 0xf;
    goto LAB_80035f40;
  case 0x85:
    uVar6 = Event_CheckTrigger2(3);
    uVar5 = 6;
    goto LAB_80035ee4;
  case 0x86:
    uVar5 = 0xe;
    if ((DAT_800bfa07 & 0x20) == 0) goto LAB_80035f2c;
    goto LAB_80035f40;
  case 0x87:
    if (DAT_800bf9bd == '\0') goto LAB_80035f2c;
    uVar6 = Event_CheckTrigger2(10);
    uVar4 = Event_CheckTrigger2(0xb);
    uVar6 = uVar6 | uVar4;
    uVar5 = 0xc;
LAB_80035ee4:
    uVar4 = Event_CheckTrigger2(uVar5);
    uVar6 = uVar6 | uVar4;
    break;
  case 0x88:
    uVar5 = 0x1d;
LAB_80035f40:
    uVar6 = Event_CheckTrigger2(uVar5);
  }
LAB_80035f50:
  if (param_3 == 1) {
LAB_80035f58:
    uVar2 = uVar6 == 0;
  }
  else if (uVar6 == 0) {
    uVar2 = 4;
  }
  else {
    DAT_800bf80a = 1;
    DAT_800bf80b = (u8)param_2;
    Inventory_RemoveItem3(param_2,1);
    uVar2 = 0;
  }
  return uVar2;
}
