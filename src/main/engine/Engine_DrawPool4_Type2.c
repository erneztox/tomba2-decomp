/**
 * @brief Draws Pool 4 entity using GPU_SpriteRender
 * @note Original: func_80025934 at 0x80025934
 */
// Engine_DrawPool4_Type2



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void Engine_DrawPool4_Type2(int param_1,int param_2,u8 param_3)

{
  int iVar1;
  u8 *pbVar2;
  int iVar3;
  void *puVar4;
  s16 sVar5;
  s16 sVar6;
  u8 local_38;
  u8 local_37;
  s16 local_36;
  s16 local_30;
  s16 local_2e;
  s16 local_2c;
  s16 local_2a;
  
  if (param_2 == 0) {
    sVar6 = 0;
    sVar5 = 0;
    local_37 = 0;
  }
  else {
    sVar5 = 0x10;
    sVar6 = 0x28;
    local_37 = param_3;
  }
  local_36 = 0;
  local_2c = 0;
  local_2a = 0;
  puVar4 = (&PTR_DAT_8009d30c)[*(u8 *)(param_1 + 10)];
  iVar3 = 0;
  if (0 < (s16)_g_FrameCounter) {
    iVar1 = 0;
    do {
      pbVar2 = puVar4 + iVar1;
      local_38 = pbVar2->sub_type;
      local_30 = (u16)pbVar2->flags + sVar5;
      local_2e = (u16)pbVar2->kind + sVar6;
      GPU_SpriteDrawMain(&local_30,(&PTR_DAT_80017334)[*pbVar2],param_1->sprite_data,&local_38)
      ;
      iVar3 = iVar3 + 1;
      iVar1 = iVar3 * 4;
    } while (iVar3 < (s16)_g_FrameCounter);
  }
  iVar3 = (int)(s16)_g_FrameCounter;
  if (iVar3 < (int)(uint)g_ItemCount) {
    do {
      pbVar2 = puVar4 + iVar3 * 4;
      local_38 = pbVar2->sub_type;
      local_30 = (u16)pbVar2->flags + sVar5;
      local_2e = (u16)pbVar2->kind + sVar6;
      GPU_SpriteDrawMain(&local_30,(&PTR_DAT_80017334)[*pbVar2 + 1],param_1->sprite_data,
                   &local_38);
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)(uint)g_ItemCount);
  }
  iVar3 = 0;
  local_30 = sVar5 + 0x20;
  local_2e = sVar6 + 0x20;
  local_38 = 0;
  local_36 = 0;
  local_2c = 0;
  local_2a = 0;
  GPU_SpriteRender(&local_30,
               *(s32 *)
                ((int)&PTR_DAT_80017334 + ((int)((_g_FrameCounter + 0x11) * 0x10000) >> 0xe)),
               param_1->sprite_data,&local_38);
  local_36 = 0x8000;
  do {
    iVar1 = 4 - iVar3;
    iVar3 = iVar3 + 1;
    GPU_SpriteDrawMain(&local_30,*(s32 *)((int)&PTR_DAT_80017334 + (iVar1 * 0x10000 >> 0xe)),
                 param_1->sprite_data,&local_38);
  } while (iVar3 < 2);
  return;
}
