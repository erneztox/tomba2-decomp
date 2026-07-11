/**
 * @brief Entity child drawer variant 6: processes child draw
 * @note Original: func_80033FF4 at 0x80033FF4
 */
// Entity_DrawChild6



#include "tomba.h"
void Entity_DrawChild6(int param_1,s16 param_2)

{
  u8 bVar1;
  u8 *pbVar2;
  void *puVar3;
  int iVar4;
  s16 sVar5;
  u8 *puVar6;
  u8 local_30;
  u8 local_2f;
  s16 local_2e;
  s16 local_28->state;
  
  iVar4 = 0;
  puVar6 = &DAT_800a241c;
  local_2f = (u8)param_2;
  local_2e = 0;
  local_28->kind = 0;
  local_28->sub_type = 0;
  local_28->flags = 200;
  do {
    if ((iVar4 != 0) || (*(s16 *)(param_1 + 8) != 0x103)) {
      local_30 = *puVar6;
      local_28->type = *(s16 *)(puVar6 + 2);
      GPU_SpriteDrawMain(local_28,(&PTR_DAT_80017334)[*(s16 *)(puVar6 + 4)],*(s32 *)(param_1 + 4)
                   ,&local_30);
    }
    iVar4 = iVar4 + 1;
    puVar6 = puVar6 + 6;
  } while (iVar4 < 3);
  local_30 = 0;
  iVar4 = 0;
  sVar5 = 0x1a;
  do {
    pbVar2 = &DAT_800a2430 + iVar4;
    iVar4 = iVar4 + 1;
    local_28->type = sVar5;
    GPU_SpriteDrawMain(local_28,(&PTR_DAT_80017334)[*pbVar2],*(s32 *)(param_1 + 4),&local_30);
    sVar5 = sVar5 + 0x10;
  } while (iVar4 < 0x12);
  if (param_1->counter2 == '\0') {
    bVar1 = param_1->counter1;
    puVar3 = PTR_s_List_of_events_that_have_occurre_800a3a7c;
    if (bVar1 == 1) goto LAB_800342c0;
    puVar3 = PTR_s_Pink_items_are_used_automaticall_800a3a68;
    if (1 < bVar1) {
      puVar3 = PTR_s_Current_status_800a3ac0;
      if ((bVar1 != 2) && (puVar3 = PTR_s_Select_the_operation_you_want_to_800a3ac4, bVar1 != 3)) {
        return;
      }
      goto LAB_800342c0;
    }
  }
  else {
    bVar1 = param_1->counter1;
    puVar3 = PTR_s_Gray_events_have_been_cleared__P_800a3a80;
    if (bVar1 == 1) goto LAB_800342c0;
    if (1 < bVar1) {
      return;
    }
    if (bVar1 != 0) {
      return;
    }
    bVar1 = *(u8 *)(param_1 + 0x20);
    puVar3 = PTR_DAT_800a3a70;
    if (bVar1 == 1) goto LAB_800342c0;
    puVar3 = PTR_DAT_800a3a6c;
    if (1 < bVar1) {
      puVar3 = PTR_s_Pink_items_are_used_automaticall_800a3a74;
      if (bVar1 != 2) {
        if (bVar1 != 4) {
          return;
        }
        iVar4 = Entity_CheckLoop(param_1,*(u8 *)(param_1 + 0x1f),*(u8 *)(param_1 + 0x1d)
                            );
        puVar3 = (&PTR_s_A_spiked_iron_ball_on_a_long_rop_800a2bf0)[iVar4 * 3];
      }
      goto LAB_800342c0;
    }
  }
  if (bVar1 != 0) {
    return;
  }
LAB_800342c0:
  GPU_RenderSprite_V2(0x28,0xbf,0x12,puVar3,param_2 + -4);
  return;
}
