/**
 * @brief Floating/orbiting behavior using trig functions and GTE timer
 * @note Original: func_80029530 at 0x80029530
 */
// Entity_Behavior_Floater



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void Entity_Behavior_Floater(int param_1)

{
  u8 bVar1;
  int iVar2;
  int iVar3;
  
  bVar1 = param_1->state;
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (3 < bVar1) {
        return;
      }
      Entity_Dealloc(param_1);
      return;
    }
    if (bVar1 != 0) {
      return;
    }
    *(void **)(param_1 + 0x40) = &DAT_800a1ee4;
    param_1->state = 1;
    *(void ***)(param_1 + 0x50) = &PTR_DAT_800a1ecc;
    *(s32 *)(param_1 + 0x48) = 0;
    *(s32 *)(param_1 + 0x4c) = 0;
    Audio_PlaySoundEffect(8,0,0);
  }
  param_1->sprite_data = *(int *)(param_1 + 0x40);
  if (*(int *)(param_1 + 0x40) == 0) {
    param_1->state = STATE_FINISH;
  }
  else {
    iVar2 = (int)_DAT_1f800168;
    param_1->pos_y = _g_PlayerPosY + 10;
    iVar2 = Math_CosGTE(iVar2);
    iVar3 = (int)_DAT_1f800168;
    param_1->pos_x = _g_PlayerPosX + (s16)((uint)(iVar2 * 3) >> 8);
    iVar2 = Math_Cos(iVar3);
    *(s16 *)(param_1 + 0x30) = _g_PlayerPosZ + (s16)((uint)(iVar2 * 3) >> 8);
    iVar2 = Entity_CheckVisibility(param_1);
    if (iVar2 == 0) {
      Entity_AdvanceAnimByte(param_1);
    }
  }
  return;
}
