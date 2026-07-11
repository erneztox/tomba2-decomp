/**
 * @brief 5-point trail segment: orbital motion with sine/cosine, visibility check
 * @note Original: func_800275D4 at 0x800275D4
 */
// Entity_Behavior_TrailPt



#include "tomba.h"
void Entity_Behavior_TrailPt(int param_1)

{
  u8 bVar1;
  s16 sVar2;
  s16 uVar3;
  s16 extraout_var;
  s16 extraout_var_00;
  uint uVar4;
  int iVar5;
  s32 uVar6;
  s16 *psVar7;
  s32 *puVar8;
  s16 *psVar9;
  uint uVar10;
  
  bVar1 = param_1->state;
  puVar8 = (s32 *)(param_1 + 0x50);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (3 < bVar1) {
        return;
      }
      goto LAB_8002773c;
    }
    if (bVar1 != 0) {
      return;
    }
    param_1->sprite_x = 5;
    uVar3 = Math_Random();
    iVar5 = 0;
    param_1->normal_x = uVar3;
    param_1->velocity_y = 0xffe2;
    *(s16 *)(param_1 + 0x32) = 0xffce;
    sVar2 = *(s16 *)(param_1 + 0x30);
    uVar6 = *(s32 *)(param_1 + 0x2c);
    do {
      iVar5 = iVar5 + 1;
      *puVar8 = uVar6;
      puVar8->flags = (int)sVar2 | 0x1000000;
      puVar8 = puVar8 + 2;
    } while (iVar5 * 0x10000 >> 0x10 < 5);
    param_1->state = 1;
  }
  psVar9 = param_1->angle_offset;
  param_1->scale_y = param_1->anim_data;
  if (param_1->anim_data != 0) {
    iVar5 = 0;
    uVar4 = *(uint *)(param_1 + 0x48);
    psVar7 = param_1->sprite_y;
    uVar10 = uVar4 & 0xffff;
    do {
      Math_CosGTE(uVar10);
      iVar5 = iVar5 + 1;
      *psVar9 = *psVar9 + extraout_var;
      Math_Cos(uVar10);
      psVar9 = psVar9 + 4;
      sVar2 = (s16)(uVar4 >> 0x10);
      psVar7->flags = psVar7->flags + -10 + extraout_var_00;
      *psVar7 = *psVar7 + sVar2;
      psVar7 = psVar7 + 4;
      uVar10 = uVar10 + 0x333;
    } while (iVar5 < 5);
    param_1->velocity_y = sVar2 + 4;
    iVar5 = Entity_CheckVisibility(param_1);
    if (iVar5 != 0) {
      return;
    }
    Entity_AdvanceAnimScript(param_1);
    return;
  }
LAB_8002773c:
  Entity_Dealloc(param_1);
  return;
}
