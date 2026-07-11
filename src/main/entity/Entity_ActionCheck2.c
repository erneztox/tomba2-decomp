/**
 * @brief Entity action check variant 2: tests g_State230 + entity flags
 * @note Original: func_80055704 at 0x80055704
 */
// Entity_ActionCheck2



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
s32 Entity_ActionCheck2(int param_1,int param_2)

{
  u8 bVar1;
  int iVar2;
  
  if (g_State230 != '\0') {
    return 0xffffffff;
  }
  if (g_ActionFlag != '\0') {
    return 0;
  }
  if ((param_1->game_flags & 7) != 0) {
    return 0;
  }
  if (param_2 == 0) {
    if (((_g_InputState & _DAT_1f800174) == 0) || (iVar2 = Entity_CheckState(param_1,1), iVar2 == 0)) {
LAB_800557d4:
      param_1->combat_flag = 0;
      return 0;
    }
  }
  else {
    if ((_g_InputState & _DAT_1f800174) == 0) goto LAB_800557d4;
    bVar1 = param_1->combat_flag + 1;
    param_1->combat_flag = bVar1;
    if (bVar1 < 0x15) {
      return 2;
    }
    param_1->gte_flags = 1;
  }
  return 2;
}
