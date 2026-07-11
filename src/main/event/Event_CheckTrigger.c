/**
 * @brief Event trigger check: tests g_EntityFlags flags, checks input conditions
 * @note Original: func_80035088 at 0x80035088
 */
// Event_CheckTrigger



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

s32 FUN_80035088(s32 param_1,s32 param_2,int param_3)

{
  s32 uVar1;
  
  if (((g_EntityFlags & 4) == 0) && ((_DAT_800bf89e & 0x200) == 0)) {
    uVar1 = 0;
    if (param_3 != 1) {
      if (DAT_800bfe55 == '\0') {
        DAT_800bfe55 = '\x01';
        FUN_8004d6d4(param_2);
        uVar1 = 0;
      }
      else {
        DAT_800bfe55 = '\0';
        FUN_8004d6f4();
        uVar1 = 0;
      }
    }
  }
  else {
    uVar1 = 1;
    if (param_3 != 1) {
      uVar1 = 4;
    }
  }
  return uVar1;
}
