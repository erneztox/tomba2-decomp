/**
 * @brief Submits transformed vertices to the Ordering Table
 * @note Original address: 0x8003B320
 */
// Entity_SubmitVerticesToOT

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
#include "gte_inline.h"
void Entity_SubmitVerticesToOT(int param_1,s32 *param_2,int param_3)

{
  s32 uVar1;
  s32 in_zero;
  s32 in_at;
  s32 in_v0;
  int iVar2;
  s32 in_v1;
  uint *puVar3;
  int iVar4;
  u8 local_10->counter1;
  int local_8;
  
  setCopReg(2,in_zero,*param_2);
  setCopReg(2,in_at,param_2->flags);
  setCopReg(2,in_v0,param_2->kind);
  setCopReg(2,in_v1,param_2->sub_type);
  setCopReg(2,local_10,param_2->state);
  setCopReg(2,param_2,param_2->behavior_state);
  copFunction(2,0x280030);
  iVar4 = getCopControlWord(2,0xf800);
  iVar2 = -1;
  if (-1 < iVar4) {
    uVar1 = getCopReg(2,0xc);
    *(s32 *)(param_1 + 8) = uVar1;
    uVar1 = getCopReg(2,0xd);
    param_1->parent = uVar1;
    uVar1 = getCopReg(2,0xe);
    param_1->script_data = uVar1;
    copFunction(2,0x1400006);
    getCopReg(2,0x18);
    setCopReg(2,in_zero,param_2->action_state);
    setCopReg(2,in_at,param_2->sub_action);
    copFunction(2,0x180001);
    iVar2 = getCopControlWord(2,0xf800);
    if (iVar2 < 0) {
      iVar2 = -1;
    }
    else {
      uVar1 = getCopReg(2,0xe);
      param_1->prev = uVar1;
      copFunction(2,0x168002e);
      iVar2 = getCopReg(2,7);
    }
  }
  param_3 = iVar2 + param_3;
  if ((-1 < iVar2) && (-1 < param_3)) {
    local_8 = (param_3 >> (param_3 >> 10 & 0x1fU)) + (param_3 >> 10) * 0x200;
    if (0x7fb < local_8 - 4U) {
      local_8 = -1;
    }
    if (((-1 < local_8) &&
        ((((*(u16 *)(param_1 + 8) < 0x140 || (*(u16 *)(param_1 + 0x10) < 0x140)) ||
          (*(u16 *)(param_1 + 0x18) < 0x140)) || (*(u16 *)(param_1 + 0x20) < 0x140)))) &&
       (((*(u16 *)(param_1 + 10) < 0xf0 || (*(u16 *)(param_1 + 0x12) < 0xf0)) ||
        ((*(u16 *)(param_1 + 0x1a) < 0xf0 || (*(u16 *)(param_1 + 0x22) < 0xf0)))))) {
      puVar3 = (uint *)(_g_EntityBuffer + local_8 * 4);
      *_g_OT_Buffer = *puVar3 | 0x9000000;
      *puVar3 = (uint)_g_OT_Buffer;
      _g_OT_Buffer->flags = *(uint *)(param_1 + 4);
      _g_OT_Buffer->kind = *(uint *)(param_1 + 8);
      _g_OT_Buffer->sub_type = *(uint *)(param_1 + 0xc);
      _g_OT_Buffer->state = param_1->parent;
      _g_OT_Buffer->behavior_state = param_1->script_ptr;
      _g_OT_Buffer->action_state = param_1->script_data;
      _g_OT_Buffer->sub_action = param_1->callback;
      _g_OT_Buffer->counter1 = param_1->prev;
      _g_OT_Buffer->counter2 = param_1->next;
      _g_OT_Buffer = _g_OT_Buffer + 10;
    }
  }
  return;
}

