/**
 * @brief Entity behavior dispatcher via switch table
 * @note Original address: 0x8004CC88
 */
// Entity_BehaviorDispatch

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void Entity_BehaviorDispatch(int param_1)

{
  uint uVar1;
  uint uVar2;
  s16 *psVar3;
  uint uVar4;
  
  uVar2 = (uint)_g_FrameCounter2;
  uVar4 = 0;
  if (0 < param_1->type_flags) {
    psVar3 = (s16 *)(*(int *)(param_1 + 0x6c) + 8);
    do {
      uVar1 = 1 << (uVar4 & 0x1f);
      if (((*(uint *)(param_1 + 0x70) & uVar1) != 0) && ((*(uint *)(param_1 + 0x74) & uVar1) == 0))
      {
        param_1->sub_type = *(u8 *)((int)psVar3 + -5);
        *(int *)(param_1 + 0x2c) = (int)psVar3[-2] << 0x10;
        param_1->pos_y_fixed = (int)psVar3[-1] << 0x10;
        param_1->scale_y = (int)*psVar3 << 0x10;
        Entity_SetupSpriteRender(param_1);
        if (param_1->sub_type < 2) {
          param_1->sprite_flags = param_1->sprite_flags & 0xdf;
          Entity_Draw3DSprite(param_1);
        }
        else if ((u8)(param_1->sub_type - 4) < 7) {
          param_1->anim_data = param_1->anim_data + (uVar2 % 0x14 & 0xfffe) * 2;
          param_1->sprite_flags = param_1->sprite_flags & 0xdf;
          Entity_Draw3DSprite(param_1);
        }
        else {
          Entity_BlinkControl(param_1,0);
          Entity_Draw3DSpriteScaled(param_1);
        }
      }
      uVar4 = uVar4 + 1;
      psVar3 = psVar3 + 8;
    } while ((int)uVar4 < (int)param_1->type_flags);
  }
  return;
}

