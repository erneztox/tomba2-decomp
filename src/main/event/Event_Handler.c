/**
 * @brief Event handler: calls Event_CheckTrigger2, dispatches by event type 0x62
 * @note Original: func_80035338 at 0x80035338
 */
// Event_Handler



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
int Event_Handler(s32 param_1,int param_2,int param_3,s32 param_4)

{
  int iVar1;
  int iVar2;
  s32 uVar3;
  
  iVar1 = Event_CheckTrigger2(param_4);
  if ((iVar1 != 0) && (param_3 != 1)) {
    if (param_2 == 0x62) {
      iVar2 = Entity_SpawnCollectible(param_1,1,2);
      uVar3 = 0x62;
      if (iVar2 == 0) {
        return iVar1;
      }
      iVar2->script_ptr = _g_GTE_Result[0];
    }
    else {
      iVar2 = Entity_SpawnCollectible(param_1,1,1);
      if (iVar2 == 0) {
        return iVar1;
      }
      iVar2->script_ptr = _g_GTE_Result[0];
      uVar3 = 0x61;
      if ((g_GameState == '\0') && (DAT_800bf8b8 != -1)) {
        uVar3 = 0x28;
      }
    }
    Menu_UpdateItemCount(uVar3,1);
  }
  return iVar1;
}
