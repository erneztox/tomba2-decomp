/**
 * @brief Event check variant 3: tests g_SubState + game state conditions
 * @note Original: func_80034BE0 at 0x80034BE0
 */
// Event_Check3



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

s32 Event_Check3(s32 param_1,uint param_2,int param_3)

{
  s32 uVar1;
  
  if ((((g_SubState == '\0') && ((g_EntityFlags & 4) == 0)) && ((_DAT_800bf89e & 0x200) == 0)) &&
     ((g_GameState != '\a' || (DAT_800bfae6 == '\0')))) {
    if (param_3 == 1) {
      return 0;
    }
    if (param_2 == g_SpriteParam3) {
      if (param_2 == DAT_800e7eee) {
        DAT_800bf81c = 2;
      }
      else {
        DAT_800bf81c = 0;
      }
      g_SpriteParam3 = 0;
      return 0;
    }
    DAT_800bf81c = param_2 != DAT_800e7eee;
    g_SpriteParam3 = (u8)param_2;
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
    if (param_3 != 1) {
      return 4;
    }
  }
  return uVar1;
}
