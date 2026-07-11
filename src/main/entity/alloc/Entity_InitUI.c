/**
 * @brief Entity UI init: calls draw functions with 0x4000/0x2000 flags, sets up UI elem
 * @note Original: func_800738B0 at 0x800738B0
 */
// Entity_InitUI



#include "tomba.h"
void Entity_InitUI(void)

{
  int iVar1;
  int iVar2;
  s16 local_10->state;
  
  GPU_DrawQuad(0x4000,0xbc,0x58,0);
  GPU_DrawQuad(0x2000,0xbc,0x6c,0);
  iVar1 = UI_StringParse(PTR_s_Save__800a2860);
  iVar2 = iVar1 * -4 + 0xa0;
  local_10->type = (s16)iVar2;
  local_10->flags = 0x3c;
  local_10->kind = (s16)(iVar1 << 3);
  local_10->sub_type = 0x3c;
  GPU_RenderSprite_V1(iVar2 * 0x10000 >> 0x10,0x3c,0,PTR_s_Save__800a2860,0);
  GPU_RenderSprite_V1(0x80,0x50,0,PTR_DAT_800a2864,0);
  GPU_RenderSprite_V1(0x80,100,0,PTR_DAT_800a2868,0);
  if (0x78 < local_10->type) {
    local_10->type = 0x78;
    local_10->kind = 0x50;
  }
  UI_DrawPanel(local_10,7,1,1);
  return;
}
