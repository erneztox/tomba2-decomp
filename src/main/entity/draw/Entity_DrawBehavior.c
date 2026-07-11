/**
 * @brief Entity draw behavior: entity->state=1, selects draw method
 * @note Original: func_8002EF58 at 0x8002EF58
 */
// Entity_DrawBehavior



#include "tomba.h"
void FUN_8002ef58(int param_1)

{
  byte bVar1;
  short sVar2;
  short sVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined2 *puVar10;
  short *psVar11;
  
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
    param_1->state = 2;
  }
  else {
    iVar5 = FUN_80083f50((int)param_1->sprite_x);
    iVar6 = FUN_80083e80(0x400 - ((int)((uint)param_1->sprite_x << 0x10) >> 0x11));
    param_1->pos_x =
         param_1->angle_offset +
         (short)((int)param_1->rot_z * (0x1000 - iVar5) >> 0xc);
    *(short *)(param_1 + 0x30) =
         param_1->rot_x +
         (short)((int)param_1->draw_y * (0x1000 - iVar5) >> 0xc);
    param_1->pos_y =
         param_1->target_rot_y + (short)(param_1->sprite_y * iVar6 >> 0xc);
    iVar6 = (int)param_1->sprite_x;
    iVar5 = 0;
    if (6 < DAT_800e7e7c) {
      iVar7 = FUN_8007a980(0,6,1);
      iVar5 = 0;
      if (iVar7 != 0) {
        if (param_1 != -0x2c) {
          iVar7->pos_x = param_1->pos_x;
          iVar7->pos_y = param_1->pos_y;
          *(undefined2 *)(iVar7 + 0x30) = *(undefined2 *)(param_1 + 0x30);
        }
        *(undefined2 *)(iVar7 + 0x32) = 0xffd8;
        FUN_80028e10(iVar7,0x21);
        iVar5 = iVar7;
      }
    }
    psVar11 = iVar5->angle_offset;
    if (iVar5 != 0) {
      iVar7 = 0;
      puVar10 = iVar5->rot_y;
      do {
        iVar8 = FUN_80083f50(iVar6);
        iVar9 = FUN_80083e80(0x400 - (iVar6 >> 1));
        *psVar11 = param_1->angle_offset +
                   (short)((int)param_1->rot_z * (0x1000 - iVar8) >> 0xd);
        puVar10[-1] = param_1->rot_x +
                      (short)((int)param_1->draw_y * (0x1000 - iVar8) >> 0xd);
        sVar2 = param_1->sprite_y;
        iVar6 = iVar6 + 0x40;
        iVar7 = iVar7 + 1;
        psVar11 = psVar11 + 4;
        sVar3 = param_1->target_rot_y;
        *puVar10 = 0x100;
        puVar10[-2] = sVar3 + (short)(sVar2 * iVar9 >> 0xc);
        puVar10 = puVar10 + 4;
      } while (iVar7 < 7);
      iVar5->alloc_flags = param_1->alloc_flags;
    }
    param_1->sprite_x = param_1->sprite_x + 0xe3;
    param_1->pos_y = param_1->pos_y + -0xc;
  }
  return;
}
