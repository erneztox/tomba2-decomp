/**
 * @brief Entity collision flag check: tests g_ActionFlag + entity->game_flags flags
 * @note Original: func_80055634 at 0x80055634
 */
// Entity_CheckCollisionFlags



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
int Entity_CheckCollisionFlags(int param_1,int param_2)

{
  int iVar1;
  
  if (g_ActionFlag == '\0') {
    if (g_State230 != '\0') {
      return 0;
    }
    if ((param_1->game_flags & 7) != 0) {
      return 0;
    }
    if ((_g_PadState & _DAT_1f800174) != 0) {
      param_1->flag_175 = 0;
      iVar1 = Entity_CheckState(param_1,0);
      return (uint)(iVar1 != 0) << 1;
    }
    if (param_2 != 0) {
      return 0;
    }
    if (((_g_InputState & _DAT_1f800174) != 0) && (iVar1 = Entity_CheckState(param_1,1), iVar1 != 0)) {
      param_1->flag_175 = 1;
      return 2;
    }
    param_1->flag_175 = 0;
  }
  return 0;
}
