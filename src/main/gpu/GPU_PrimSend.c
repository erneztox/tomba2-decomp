/**
 * @brief GPU primitive sender: checks queue space, sends prim via DMA
 * @note Original: func_80081DB8 at 0x80081DB8
 */
// GPU_PrimSend



#include "tomba.h"
void GPU_PrimSend(int param_1,u16 *param_2)

{
  u16 uVar1;
  u16 uVar2;
  u16 uVar3;
  s32 uVar4;
  s8 cVar5;
  s32 local_18;
  s32 local_14;
  
  uVar4 = GPU_CheckQueueSpace((int)(s16)*param_2,(int)(s16)param_2->flags);
  *(s32 *)(param_1 + 4) = uVar4;
  uVar4 = GPU_CheckQueueSpace2((int)(((uint)param_2->kind + (uint)*param_2 + -1) * 0x10000) >> 0x10,
                       (int)(((uint)param_2->flags + (uint)param_2->sub_type + -1) * 0x10000) >> 0x10);
  *(s32 *)(param_1 + 8) = uVar4;
  uVar4 = GPU_EncodeTPage((int)(s16)param_2->state,(int)(s16)param_2->behavior_state);
  *(s32 *)(param_1 + 0xc) = uVar4;
  uVar4 = GPU_EncodeDrawMode(*(u8 *)((int)param_2 + 0x17),(char)param_2->render_flags,param_2[10]);
  param_1->parent = uVar4;
  uVar4 = GPU_EncodeTexture(param_2 + 6);
  param_1->script_ptr = uVar4;
  param_1->script_data = 0xe6000000;
  cVar5 = '\a';
  if ((char)param_2[0xc] != '\0') {
    uVar3 = param_2->kind;
    uVar1 = param_2->sub_type;
    uVar2 = 0;
    if ((-1 < (s16)uVar3) && (uVar2 = DAT_800a59a4 - 1, (int)(s16)uVar3 <= DAT_800a59a4 + -1)) {
      uVar2 = uVar3;
    }
    if ((s16)uVar1 < 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = DAT_800a59a6 - 1;
      if ((int)(s16)uVar1 <= DAT_800a59a6 + -1) {
        uVar3 = uVar1;
      }
    }
    cVar5 = '\n';
    local_14 = CONCAT22(uVar3,uVar2);
    local_18 = CONCAT22(param_2->flags - param_2->behavior_state,*param_2 - param_2->state);
    param_1->callback =
         (uint)*(u8 *)((int)param_2 + 0x1b) << 0x10 | (uint)(u8)param_2->sprite_flags << 8 | 0x60000000 |
         (uint)*(u8 *)((int)param_2 + 0x19);
    param_1->prev = local_18;
    param_1->next = local_14;
  }
  param_1->sub_type = cVar5 + -1;
  return;
}
