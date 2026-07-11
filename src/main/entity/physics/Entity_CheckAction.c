/**
 * @brief Entity action check: tests g_State230 + entity[0x181] + input flags
 * @note Original: func_800552EC at 0x800552EC
 */
// Entity_CheckAction



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
s32 Entity_CheckAction(int param_1)

{
  if ((((g_State230 == '\0') && (*(s8*)(param_1 + 0x181) == '\0')) &&
      ((_g_InputState & 0x40) != 0)) && ((param_1->entity_flags & 0x7c00) != 0)) {
    if (DAT_800bf8eb != '\0') {
      return 1;
    }
    if ((u8)(&DAT_800a4550)[param_1->entity_flags & 0xf] >> 1 <= g_ItemMax) {
      return 1;
    }
  }
  return 0;
}
