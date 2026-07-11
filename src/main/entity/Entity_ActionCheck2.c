/**
 * @brief Entity action check variant 2: tests DAT_1f800230 + entity flags
 * @note Original: func_80055704 at 0x80055704
 */
// Entity_ActionCheck2



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
undefined4 FUN_80055704(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  
  if (DAT_1f800230 != '\0') {
    return 0xffffffff;
  }
  if (DAT_800bf816 != '\0') {
    return 0;
  }
  if ((param_1->game_flags & 7) != 0) {
    return 0;
  }
  if (param_2 == 0) {
    if (((_DAT_800ecf54 & _DAT_1f800174) == 0) || (iVar2 = FUN_800535e0(param_1,1), iVar2 == 0)) {
LAB_800557d4:
      param_1->combat_flag = 0;
      return 0;
    }
  }
  else {
    if ((_DAT_800ecf54 & _DAT_1f800174) == 0) goto LAB_800557d4;
    bVar1 = param_1->combat_flag + 1;
    param_1->combat_flag = bVar1;
    if (bVar1 < 0x15) {
      return 2;
    }
    param_1->gte_flags = 1;
  }
  return 2;
}
