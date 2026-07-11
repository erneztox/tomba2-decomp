/**
 * @brief Animation state machine variant 2: same structure, different GTE setup
 * @note Original: func_8002C548 at 0x8002C548
 */
// Entity_Behavior_AnimState2



#include "tomba.h"
void FUN_8002c548(int param_1)

{
  u8 bVar1;
  s16 sVar2;
  
  bVar1 = param_1->state;
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (3 < bVar1) {
        return;
      }
      FUN_8007a624(param_1);
      return;
    }
    if (bVar1 != 0) {
      return;
    }
    sVar2 = FUN_8009a450();
    *(s32 *)(param_1 + 4) = 1;
    *(s32 *)(param_1 + 0x50) = 0x101010;
    *(s32 *)(param_1 + 0x58) = 0;
    param_1->normal_z = param_1->normal_z + sVar2;
  }
  if (param_1->sub_action < 0x11) {
    param_1->scale_y = param_1->anim_data;
    switch(param_1->sub_action) {
    case 0:
      *(void **)(param_1 + 0x54) = &DAT_800a0700;
      *(s32 *)(param_1 + 0x58) = 3;
      break;
    case 1:
      *(void **)(param_1 + 0x54) = &DAT_800a06dc;
      break;
    case 2:
      *(void **)(param_1 + 0x54) = &DAT_800a06b8;
      break;
    case 3:
      *(void **)(param_1 + 0x54) = &DAT_800a0694;
      break;
    case 4:
      *(s32 *)(param_1 + 0x58) = 4;
      break;
    case 5:
      *(s32 *)(param_1 + 0x58) = 5;
      break;
    default:
      *(s32 *)(param_1 + 0x54) = 0;
    }
    FUN_8002b278(param_1);
    param_1->sub_action = param_1->sub_action + '\x01';
  }
  else {
    param_1->state = 2;
  }
  return;
}
