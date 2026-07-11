/**
 * @brief UI panel dispatcher: switch on DAT_800bf549 state, calls handlers
 * @note Original: func_8004FE84 at 0x8004FE84
 */
// UI_PanelDispatch



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8004fe84(void)

{
  if (DAT_800bf548 == 1) {
    if (DAT_800bf549 == 1) {
      FUN_8004f474(&DAT_800bf548);
    }
    else if (DAT_800bf549 < 2) {
      if (DAT_800bf549 == 0) {
        FUN_8004f430(&DAT_800bf548);
      }
    }
    else if (DAT_800bf549 == 2) {
      FUN_8004f514(&DAT_800bf548);
    }
    else if (DAT_800bf549 == 3) {
      FUN_8004f6d0(&DAT_800bf548);
    }
    if ((DAT_800bf549 == 0) && (_DAT_800bf552 == 0)) {
      DAT_800bf822 = DAT_800bf822 & 0xfe;
    }
    else {
      DAT_800bf822 = DAT_800bf822 | 1;
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
