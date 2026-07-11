/**
 * @brief GPU primitive sender variant 2: different queue checking
 * @note Original: func_80081FB0 at 0x80081FB0
 */
// GPU_PrimSend2



#include "tomba.h"
void FUN_80081fb0(int param_1,ushort *param_2)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  undefined4 uVar4;
  char cVar5;
  undefined4 local_18;
  undefined4 local_14;
  
  uVar4 = FUN_80082240((int)(short)*param_2,(int)(short)param_2->flags);
  *(undefined4 *)(param_1 + 4) = uVar4;
  uVar4 = FUN_800822d8((int)(((uint)param_2->kind + (uint)*param_2 + -1) * 0x10000) >> 0x10,
                       (int)(((uint)param_2->flags + (uint)param_2->sub_type + -1) * 0x10000) >> 0x10);
  *(undefined4 *)(param_1 + 8) = uVar4;
  uVar4 = FUN_80082370((int)(short)param_2->state,(int)(short)param_2->behavior_state);
  *(undefined4 *)(param_1 + 0xc) = uVar4;
  uVar4 = FUN_80082220(*(undefined1 *)((int)param_2 + 0x17),(char)param_2->render_flags,param_2[10]);
  param_1->parent = uVar4;
  uVar4 = FUN_8008238c(param_2 + 6);
  param_1->script_ptr = uVar4;
  param_1->script_data = 0xe6000000;
  cVar5 = '\a';
  if ((char)param_2[0xc] != '\0') {
    uVar4 = *(undefined4 *)param_2;
    uVar3 = param_2->kind;
    uVar1 = param_2->sub_type;
    uVar2 = 0;
    if ((-1 < (short)uVar3) && (uVar2 = DAT_800a59a4 - 1, (int)(short)uVar3 <= DAT_800a59a4 + -1)) {
      uVar2 = uVar3;
    }
    if ((short)uVar1 < 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = DAT_800a59a6 - 1;
      if ((int)(short)uVar1 <= DAT_800a59a6 + -1) {
        uVar3 = uVar1;
      }
    }
    local_14 = CONCAT22(uVar3,uVar2);
    if (((*param_2 & 0x3f) == 0) && ((uVar2 & 0x3f) == 0)) {
      cVar5 = '\n';
      param_1->callback =
           (uint)*(byte *)((int)param_2 + 0x1b) << 0x10 | (uint)(byte)param_2->sprite_flags << 8 | 0x2000000
           | (uint)*(byte *)((int)param_2 + 0x19);
      param_1->prev = uVar4;
      param_1->next = local_14;
    }
    else {
      cVar5 = '\n';
      local_18 = CONCAT22(param_2->flags - param_2->behavior_state,*param_2 - param_2->state);
      param_1->callback =
           (uint)*(byte *)((int)param_2 + 0x1b) << 0x10 | (uint)(byte)param_2->sprite_flags << 8 | 0x60000000
           | (uint)*(byte *)((int)param_2 + 0x19);
      param_1->prev = local_18;
      param_1->next = local_14;
    }
  }
  param_1->sub_type = cVar5 + -1;
  return;
}
