/**
 * @brief Event weapon check: tests weapon/item type 0x59 vs game state
 * @note Original: func_8003511C at 0x8003511C
 */
// Event_WeaponCheck



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

s32 FUN_8003511c(s32 param_1,int param_2,int param_3)

{
  if (param_2 == 0x59) {
    if (((s16)(u16)g_ItemCount <= _g_FrameCounter) && (g_ItemFlag <= g_ItemMax)) {
      if (param_3 == 1) {
        return true;
      }
      return (s32)4;
    }
    if (param_3 == 1) {
      return false;
    }
    FUN_8004d650(0x59,1);
    param_2 = 0x59;
  }
  else {
    if (param_2 < 0x59) {
      return true;
    }
    if (param_2 >= 0x5d) {
      return param_2 < 0x5d;
    }
    if ((s16)(u16)g_ItemCount <= _g_FrameCounter) {
      if (param_3 != 1) {
        return (s32)4;
      }
      return true;
    }
    if (param_3 == 1) {
      return false;
    }
    FUN_8004d650(param_2,1);
  }
  FUN_8004dc84(param_2,0);
  return false;
}
