/**
 * @brief GPU sprite OT submit: sets GTE vals, creates sprite primitive in ordering table
 * @note Original: func_8007E9C8 at 0x8007E9C8
 */
// GPU_SpriteOT



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void FUN_8007e9c8(undefined3 param_1,s8 param_2,int param_3)

{
  uint *puVar1;
  uint *puVar2;
  s32 uVar3;
  
  _g_GTE_Data4 = CONCAT13(0x62,param_1);
  _g_GTE_Data8 = 0;
  _g_GTE_DataC = 0xf00140;
  puVar1 = (uint *)(_g_EntityBuffer + param_3 * 4);
  *_g_OT_Buffer = *puVar1 | 0x3000000;
  *puVar1 = (uint)_g_OT_Buffer;
  _g_OT_Buffer->flags = _g_GTE_Data4;
  _g_OT_Buffer->kind = _g_GTE_Data8;
  _g_OT_Buffer->sub_type = _g_GTE_DataC;
  puVar1 = _g_OT_Buffer + 4;
  if (param_2 == '\0') {
    uVar3 = 0x40;
  }
  else {
    uVar3 = 0x20;
  }
  _g_OT_Buffer = puVar1;
  FUN_80083de0(puVar1,0,0,uVar3,0);
  puVar2 = (uint *)(_g_EntityBuffer + param_3 * 4);
  *puVar1 = *puVar2 | 0x2000000;
  *puVar2 = (uint)puVar1;
  _g_OT_Buffer = _g_OT_Buffer + 3;
  return;
}
