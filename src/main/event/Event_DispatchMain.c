/**
 * @brief Event dispatch main: DAT_80100660 state machine
 * @note Original: func_800346BC at 0x800346BC
 */
// Event_DispatchMain



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

s32 Event_DispatchMain(void)

{
  s32 bVar1;
  u8 bVar2;
  s32 uVar3;
  
  bVar2 = DAT_80100660;
  if (DAT_80100660 != 1) {
    if ((DAT_80100660 < 2) && (DAT_80100660 == 0)) {
      if (DAT_80100661 == 0) {
        Audio_SetBank(0);
        g_ActionState = 2;
        DAT_80100661 = DAT_80100661 + 1;
        _DAT_80100664 = _g_OT_Data;
        Game_SetEventFlag2(g_GameState,g_LevelId);
      }
      else if (DAT_80100661 == 1) {
        DAT_80100660 = DAT_80100661;
        DAT_80100661 = 0;
        DAT_80100669 = 0;
        UI_SetSlotColors(&DAT_80100660);
        Event_HandlerMain(&DAT_80100660);
        Game_LoadData(&DAT_80100660);
        Save_UpdateSlots(&DAT_80100660);
      }
    }
    goto LAB_80034968;
  }
  UI_DrawConfigMenu(&DAT_80100660);
  Entity_DrawMain3(&DAT_80100660);
  Engine_UpdateMain(&DAT_80100660);
  Menu_Main(&DAT_80100660);
  Save_Write(&DAT_80100660);
  if (DAT_80100669 != 0) {
    if (DAT_80100669 == 1) {
      if ((_g_PadState & 0x1000) == 0) {
        if (DAT_80100668 == 1) {
          Menu_InputHandle(&DAT_80100660);
        }
        else if (DAT_80100668 < 2) {
          if (DAT_80100668 == 0) {
            Event_Main(&DAT_80100660);
          }
        }
        else if ((DAT_80100668 != 2) && (DAT_80100668 == 3)) {
          Save_Confirm(&DAT_80100660);
        }
      }
      else {
        DAT_80100660 = 2;
        Entity_ResetFull(&DAT_80100660);
      }
    }
    goto LAB_80034968;
  }
  if ((_g_PadState & 0x3000) != 0) {
    DAT_80100660 = 2;
    Audio_SetBank(1);
    goto LAB_80034968;
  }
  if ((_g_PadState & 0x4040) == 0) {
    uVar3 = 0x14;
    if ((_g_PadState & 0x8000) == 0) {
      if ((_g_PadState & 0x20) == 0) {
        if ((_g_PadState & 0x80) == 0) goto LAB_80034968;
        if (DAT_80100668 == 0) goto LAB_800348c0;
        DAT_80100668 = DAT_80100668 - 1;
        UI_SetSlotColors(&DAT_80100660);
        uVar3 = 0x15;
      }
      else if (DAT_80100668 < 3) {
        DAT_80100668 = DAT_80100668 + 1;
        UI_SetSlotColors(&DAT_80100660);
        uVar3 = 0x15;
      }
      else {
LAB_800348c0:
        uVar3 = 0x12;
      }
    }
  }
  else if (DAT_80100668 == 2) {
    uVar3 = 0x14;
  }
  else if (DAT_80100668 == 3) {
    uVar3 = 0x14;
    if (DAT_80100683 != '\0') {
      DAT_80100669 = bVar2;
      uVar3 = 0x11;
    }
  }
  else {
    DAT_80100669 = bVar2;
    uVar3 = 0x11;
  }
  Audio_PlaySoundEffect(uVar3,0,0);
LAB_80034968:
  bVar1 = DAT_80100660 == 2;
  if (bVar1) {
    Event_DrawUI(&DAT_80100660);
  }
  return bVar1;
}
