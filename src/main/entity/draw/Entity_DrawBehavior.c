/**
 * @brief Entity draw behavior: entity->state=1, selects draw method
 * @note Original: func_8002EF58 at 0x8002EF58
 */
// Entity_DrawBehavior



#include "tomba.h"
void Entity_DrawBehavior(int param_1)

{
  u8 bVar1;
  s16 sVar2;
  s16 sVar3;
  s8 cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  s16 *puVar10;
  s16 *psVar11;
  
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
    param_1->state = 1;
    param_1->sub_action = 9;
    param_1->sprite_x = 0;
    param_1->rot_z = param_1->rot_z - param_1->angle_offset;
    param_1->draw_y = param_1->draw_y - param_1->rot_x;
    param_1->sprite_y = param_1->sprite_y - param_1->target_rot_y;
  }
  cVar4 = param_1->sub_action + -1;
  param_1->sub_action = cVar4;
  if (cVar4 == -1) {
    param_1->state = STATE_FINISH;
  }
  else {
    iVar5 = Math_CosGTE((int)param_1->sprite_x);
    iVar6 = Math_Cos(0x400 - ((int)((uint)param_1->sprite_x << 0x10) >> 0x11));
    param_1->pos_x =
         param_1->angle_offset +
         (s16)((int)param_1->rot_z * (0x1000 - iVar5) >> 0xc);
    *(s16 *)(param_1 + 0x30) =
         param_1->rot_x +
         (s16)((int)param_1->draw_y * (0x1000 - iVar5) >> 0xc);
    param_1->pos_y =
         param_1->target_rot_y + (s16)(param_1->sprite_y * iVar6 >> 0xc);
    iVar6 = (int)param_1->sprite_x;
    iVar5 = 0;
    if (6 < DAT_800e7e7c) {
      iVar7 = Entity_AllocByPoolId(0,6,1);
      iVar5 = 0;
      if (iVar7 != 0) {
        if (param_1 != -0x2c) {
          iVar7->pos_x = param_1->pos_x;
          iVar7->pos_y = param_1->pos_y;
          *(s16 *)(iVar7 + 0x30) = *(s16 *)(param_1 + 0x30);
        }
        *(s16 *)(iVar7 + 0x32) = 0xffd8;
        Entity_InitBehavior(iVar7,0x21);
        iVar5 = iVar7;
      }
    }
    psVar11 = iVar5->angle_offset;
    if (iVar5 != 0) {
      iVar7 = 0;
      puVar10 = iVar5->rot_y;
      do {
        iVar8 = Math_CosGTE(iVar6);
        iVar9 = Math_Cos(0x400 - (iVar6 >> 1));
        *psVar11 = param_1->angle_offset +
                   (s16)((int)param_1->rot_z * (0x1000 - iVar8) >> 0xd);
        puVar10[-1] = param_1->rot_x +
                      (s16)((int)param_1->draw_y * (0x1000 - iVar8) >> 0xd);
        sVar2 = param_1->sprite_y;
        iVar6 = iVar6 + 0x40;
        iVar7 = iVar7 + 1;
        psVar11 = psVar11 + 4;
        sVar3 = param_1->target_rot_y;
        *puVar10 = 0x100;
        puVar10[-2] = sVar3 + (s16)(sVar2 * iVar9 >> 0xc);
        puVar10 = puVar10 + 4;
      } while (iVar7 < 7);
      iVar5->alloc_flags = param_1->alloc_flags;
    }
    param_1->sprite_x = param_1->sprite_x + 0xe3;
    param_1->pos_y = param_1->pos_y + -0xc;
  }
  return;
}
