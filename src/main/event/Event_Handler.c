/**
 * @brief Event handler: calls FUN_80035640, dispatches by event type 0x62
 * @note Original: func_80035338 at 0x80035338
 */
// Event_Handler



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
int FUN_80035338(s32 param_1,int param_2,int param_3,s32 param_4)

{
  int iVar1;
  int iVar2;
  s32 uVar3;
  
  iVar1 = FUN_80035640(param_4);
  if ((iVar1 != 0) && (param_3 != 1)) {
    if (param_2 == 0x62) {
      iVar2 = FUN_8004bd04(param_1,1,2);
      uVar3 = 0x62;
      if (iVar2 == 0) {
        return iVar1;
      }
      iVar2->script_ptr = _g_GTE_Result[0];
    }
    else {
      iVar2 = FUN_8004bd04(param_1,1,1);
      if (iVar2 == 0) {
        return iVar1;
      }
      iVar2->script_ptr = _g_GTE_Result[0];
      uVar3 = 0x61;
      if ((g_GameState == '\0') && (DAT_800bf8b8 != -1)) {
        uVar3 = 0x28;
      }
    }
    FUN_8004d4f4(uVar3,1);
  }
  return iVar1;
}
