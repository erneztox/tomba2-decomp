/**
 * @brief Event trigger check variant 2: tests g_EntityFlags event flags
 * @note Original: func_80035640 at 0x80035640
 */
// Event_CheckTrigger2



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
s32 FUN_80035640(int param_1)

{
  s32 bVar1;
  int iVar2;
  
  bVar1 = false;
  if (((g_EntityFlags & 4) == 0) && (bVar1 = false, (_DAT_800bf89e & 0x200) == 0)) {
    param_1 = param_1 * 4;
    bVar1 = false;
    if ((uint)g_GameState == (uint)(u8)(&DAT_800a2468)[param_1]) {
      iVar2 = (**(code **)(&DAT_800a2444 + (uint)g_GameState * 4))();
      if (iVar2 == 0) {
        bVar1 = false;
      }
      else {
        bVar1 = false;
        _g_GTE_Result[0] = iVar2;
        if ((*(s8*)(iVar2 + 0xc) == (&DAT_800a2469)[param_1]) &&
           (bVar1 = false, iVar2->kind == (&DAT_800a246a)[param_1])) {
          if ((&DAT_800a246b)[param_1] == -1) {
            bVar1 = true;
          }
          else {
            bVar1 = iVar2->sub_type == (&DAT_800a246b)[param_1];
          }
        }
      }
    }
  }
  return bVar1;
}
