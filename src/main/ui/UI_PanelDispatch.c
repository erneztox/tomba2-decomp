/**
 * @brief UI panel dispatcher: switch on DAT_800bf549 state, calls handlers
 * @note Original: func_8004FE84 at 0x8004FE84
 */
// UI_PanelDispatch



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void UI_PanelDispatch(void)

{
  if (DAT_800bf548 == 1) {
    if (DAT_800bf549 == 1) {
      UI_ListUpdate(&DAT_800bf548);
    }
    else if (DAT_800bf549 < 2) {
      if (DAT_800bf549 == 0) {
        UI_UpdateElement(&DAT_800bf548);
      }
    }
    else if (DAT_800bf549 == 2) {
      UI_PanelDraw(&DAT_800bf548);
    }
    else if (DAT_800bf549 == 3) {
      UI_MenuUpdate(&DAT_800bf548);
    }
    if ((DAT_800bf549 == 0) && (_DAT_800bf552 == 0)) {
      g_EventInput = g_EventInput & 0xfe;
    }
    else {
      g_EventInput = g_EventInput | 1;
    }
  }
  else if ((DAT_800bf548 < 2) && (DAT_800bf548 == 0)) {
    _DAT_800bf7fc = _DAT_800ecf64 + 8;
    _DAT_800bf7f8 = _DAT_800ecf64;
    DAT_800bf549 = 0;
    DAT_800bf548 = 1;
    _DAT_800bf800 = _DAT_800bf7fc + *_DAT_800ecf64;
  }
  return;
}
