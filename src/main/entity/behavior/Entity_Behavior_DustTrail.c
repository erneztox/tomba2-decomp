/**
 * @brief Dust trail particles: random velocity/position with 5-segment history buffer
 * @note Original: func_8002BAFC at 0x8002BAFC
 */
// Entity_Behavior_DustTrail



#include "tomba.h"
void Entity_Behavior_DustTrail(int param_1)

{
  u8 bVar1;
  s16 sVar2;
  s16 sVar3;
  s16 sVar4;
  int iVar5;
  s16 *puVar6;
  int iVar7;
  s16 *psVar8;
  s16 *psVar9;
  
  bVar1 = param_1->state;
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (3 < bVar1) {
        return;
      }
      goto LAB_8002bc68;
    }
    psVar9 = param_1->angle_offset;
    if (bVar1 != 0) {
      return;
    }
    iVar7 = 0;
    puVar6 = param_1->rot_y;
    sVar2 = param_1->pos_x;
    sVar3 = param_1->pos_y;
    sVar4 = *(s16 *)(param_1 + 0x30);
    param_1->sprite_x = 7;
    param_1->state = 1;
    do {
      iVar7 = iVar7 + 1;
      iVar5 = Math_Random();
      *psVar9 = sVar2 + (s16)((uint)(iVar5 + -0x4000) >> 8);
      iVar5 = Math_Random();
      puVar6[-2] = sVar3 + (s16)((uint)(iVar5 + -0x4000) >> 8);
      iVar5 = Math_Random();
      puVar6[-1] = sVar4 + (s16)((uint)(iVar5 + -0x4000) >> 8);
      *puVar6 = 0x100;
      puVar6 = puVar6 + 4;
      psVar9 = psVar9 + 4;
    } while (iVar7 < 7);
  }
  param_1->scale_y = param_1->anim_data;
  if (param_1->anim_data != 0) {
    psVar8 = param_1->angle_offset;
    iVar7 = 0;
    psVar9 = param_1->sprite_y;
    do {
      iVar7 = iVar7 + 1;
      iVar5 = Math_Random();
      *psVar8 = *psVar8 + (s16)(iVar5 + -0x4000 >> 0xb);
      iVar5 = Math_Random();
      psVar8 = psVar8 + 4;
      psVar9->flags = psVar9->flags + (s16)(iVar5 + -0x4000 >> 0xb);
      *psVar9 = *psVar9 + -0x12;
      psVar9 = psVar9 + 4;
    } while (iVar7 < 7);
    iVar7 = Entity_CheckVisibility(param_1);
    if (iVar7 != 0) {
      return;
    }
    Entity_AdvanceAnimScript(param_1);
    return;
  }
LAB_8002bc68:
  Entity_Dealloc(param_1);
  return;
}
