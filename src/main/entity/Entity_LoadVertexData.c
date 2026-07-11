/**
 * @brief Loads entity vertex data into GTE buffer
 * @note Original address: 0x8003B054
 */
// Entity_LoadVertexData

#include "tomba.h"
void Entity_LoadVertexData(int param_1,s32 *param_2,int param_3)

{
  s16 uVar1;
  
  if (param_3 == 1) {
    *(s16 *)(param_1 + 0xc) = *(s16 *)(param_2 + 1);
    *(s16 *)(param_1 + 0x14) = *(s16 *)param_2;
    *(s16 *)(param_1 + 0x1c) = *(s16 *)(param_2 + 3);
    uVar1 = *(s16 *)(param_2 + 2);
    *(s8*)(param_1 + 0xc) = *(s8*)(param_1 + 0xc) + -1;
    *(s8*)(param_1 + 0x14) = *(s8*)(param_1 + 0x14) + -1;
    *(s16 *)(param_1 + 0x24) = uVar1;
    *(s8*)(param_1 + 0x1c) = *(s8*)(param_1 + 0x1c) + -1;
    *(s8*)(param_1 + 0x24) = *(s8*)(param_1 + 0x24) + -1;
  }
  else {
    if (param_3 < 2) {
      if (param_3 != 0) {
        return;
      }
      *(s32 *)(param_1 + 0xc) = *param_2;
      param_1->script_ptr = param_2->flags;
      *(s16 *)(param_1 + 0x1c) = *(s16 *)(param_2 + 2);
      *(s16 *)(param_1 + 0x24) = *(s16 *)(param_2 + 3);
      return;
    }
    if (param_3 == 2) {
      *(s16 *)(param_1 + 0xc) = *(s16 *)(param_2 + 2);
      *(s16 *)(param_1 + 0x14) = *(s16 *)(param_2 + 3);
      *(s16 *)(param_1 + 0x1c) = *(s16 *)param_2;
      uVar1 = *(s16 *)(param_2 + 1);
      param_1->sprite_flags = param_1->sprite_flags + -1;
      *(s8*)(param_1 + 0x15) = *(s8*)(param_1 + 0x15) + -1;
      *(s16 *)(param_1 + 0x24) = uVar1;
      *(s8*)(param_1 + 0x1d) = *(s8*)(param_1 + 0x1d) + -1;
      *(s8*)(param_1 + 0x25) = *(s8*)(param_1 + 0x25) + -1;
    }
    else {
      if (param_3 != 3) {
        return;
      }
      *(s16 *)(param_1 + 0xc) = *(s16 *)(param_2 + 3);
      *(s16 *)(param_1 + 0x14) = *(s16 *)(param_2 + 2);
      *(s16 *)(param_1 + 0x1c) = *(s16 *)(param_2 + 1);
      uVar1 = *(s16 *)param_2;
      *(s8*)(param_1 + 0x14) = *(s8*)(param_1 + 0x14) + -1;
      *(s8*)(param_1 + 0xc) = *(s8*)(param_1 + 0xc) + -1;
      *(s8*)(param_1 + 0x15) = *(s8*)(param_1 + 0x15) + -1;
      *(s16 *)(param_1 + 0x24) = uVar1;
      param_1->sprite_flags = param_1->sprite_flags + -1;
      *(s8*)(param_1 + 0x1d) = *(s8*)(param_1 + 0x1d) + -1;
      *(s8*)(param_1 + 0x1c) = *(s8*)(param_1 + 0x1c) + -1;
      *(s8*)(param_1 + 0x25) = *(s8*)(param_1 + 0x25) + -1;
      *(s8*)(param_1 + 0x24) = *(s8*)(param_1 + 0x24) + -1;
    }
  }
  *(s16 *)(param_1 + 0x16) = *(s16 *)((int)param_2 + 6);
  param_1->anim_timer = *(s16 *)((int)param_2 + 2);
  return;
}

