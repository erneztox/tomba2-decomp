/**
 * @brief Entity sprite draw dispatch: reads sprite type, calls draw handler
 * @note Original: func_80024D34 at 0x80024D34
 */
// Entity_DrawSpriteDispatch



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
s32 FUN_80024d34(int param_1)

{
  s8 cVar1;
  u8 *pbVar2;
  s32 *puVar3;
  
  puVar3 = _DAT_1f800158;
  cVar1 = DAT_1f80015e;
  if ((param_1->entity_flags & 0x200) == 0) {
    while (g_State182 = cVar1, g_State182 != '\0') {
      pbVar2 = (u8 *)*puVar3;
      g_State182 = g_State182 + -1;
      puVar3 = puVar3 + 1;
      cVar1 = g_State182;
      if (((*pbVar2 & 4) != 0) && (pbVar2->kind == 2)) {
        func_0x80114320(param_1);
        cVar1 = g_State182;
      }
    }
  }
  return _g_GTE_Result[0];
}
