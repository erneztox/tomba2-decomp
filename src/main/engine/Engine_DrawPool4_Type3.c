/**
 * @brief Draws Pool 4 entity using GPU_RenderSprite2 (special primitive)
 * @note Original: func_80025B78 at 0x80025B78
 */
// Engine_DrawPool4_Type3



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void Engine_DrawPool4_Type3(int param_1)

{
  int iVar1;
  uint uVar2;
  s16 local_28;
  s16 local_26;
  s16 local_24;
  s16 local_22;
  
  iVar1 = _g_OT_Buffer;
  local_24 = 0x140;
  local_22 = 0xf0;
  local_28 = 0;
  local_26 = (u16)DAT_1f800135 << 8;
  OT_DrawRectSprite(_g_OT_Buffer,&local_28);
  OT_LinkPrimitives(_g_EntityBuffer + 0x20,iVar1);
  local_24 = 0;
  local_22 = 0;
  _g_OT_Buffer = _g_OT_Buffer + 0xc;
  local_26 = 0xd4;
  local_28 = param_1->action_state + 0xa0;
  GPU_RenderSprite2(param_1->sprite_data,(int)local_28,0xd4,8,
               (int)*(s16 *)(&DAT_8009d286 +
                              (uint)*(u8 *)(param_1 + (uint)param_1->counter1 + 0x22) * 4));
  iVar1 = param_1->counter1 - 1;
  if (iVar1 < 0) {
    iVar1 = param_1->sub_action - 1;
  }
  local_28 = local_28 + -0x20;
  GPU_RenderSprite2(param_1->sprite_data,(int)local_28,(int)local_26,8,
               (int)*(s16 *)(&DAT_8009d286 + (uint)*(u8 *)(param_1 + iVar1 + 0x22) * 4));
  uVar2 = param_1->counter1 + 1;
  if (param_1->sub_action <= uVar2) {
    uVar2 = 0;
  }
  local_28 = local_28 + 0x40;
  GPU_RenderSprite2(param_1->sprite_data,(int)local_28,(int)local_26,8,
               (int)*(s16 *)(&DAT_8009d286 + (uint)*(u8 *)(param_1 + uVar2 + 0x22) * 4));
  iVar1 = _g_OT_Buffer;
  local_28 = 0x90;
  local_24 = 0x20;
  local_22 = 0xe0;
  local_26 = (u16)DAT_1f800135 << 8;
  OT_DrawRectSprite(_g_OT_Buffer,&local_28);
  OT_LinkPrimitives(_g_EntityBuffer + 0x20,iVar1);
  _g_OT_Buffer = _g_OT_Buffer + 0xc;
  return;
}
