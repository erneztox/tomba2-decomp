/**
 * @brief Event check variant 6: tests DAT_800bf89e + g_EntityFlags flags
 * @note Original: func_800349A4 at 0x800349A4
 */
// Event_Check6



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

s32 FUN_800349a4(s32 param_1,uint param_2,int param_3)

{
  s8 cVar1;
  
  if (((((_DAT_800bf89e & 0x200) == 0) || ((&DAT_800a2be9)[param_2 * 0xc] != '\x02')) &&
      (((g_EntityFlags & 4) == 0 ||
       ((((&DAT_800a2be9)[param_2 * 0xc] != '\x02' || (param_2 == 0x15)) &&
        ((&DAT_800a2be9)[param_2 * 0xc] != '\0')))))) &&
     ((((g_EntityFlags & 2) == 0 && ((g_EntityFlags & 1) == 0)) ||
      ((&DAT_800a2be9)[param_2 * 0xc] != '\0')))) {
    if (param_3 == 1) {
      return 0;
    }
    cVar1 = (&DAT_800a2be9)[param_2 * 0xc];
    if (cVar1 == '\0') {
      if (param_2 != g_SpriteParam1) {
        DAT_800bf81a = param_2 != DAT_800e7eec;
        g_SpriteParam1 = (char)param_2;
        return 2;
      }
    }
    else {
      if (cVar1 != '\x01') {
        if (cVar1 != '\x02') {
          return 2;
        }
        if (param_2 != g_SpriteParam4) {
          DAT_800bf81d = param_2 != DAT_800e7eef;
          g_SpriteParam4 = (char)param_2;
          return 2;
        }
        if (param_2 == DAT_800e7eef) {
          g_SpriteParam4 = 0;
          DAT_800bf81d = 2;
        }
        else {
          DAT_800bf81d = 0;
          g_SpriteParam4 = DAT_800e7eef;
        }
        return 3;
      }
      param_2 = param_2 - 10;
      if (param_2 != g_SpriteParam2) {
        DAT_800bf81b = param_2 != DAT_800e7eed;
        g_SpriteParam2 = (char)param_2;
        return 2;
      }
    }
  }
  else if (param_3 == 1) {
    return 1;
  }
  return 4;
}
