/**
 * @brief Entity draw type selector: entity->state=1 state, picks draw path
 * @note Original: func_8002F230 at 0x8002F230
 */
// Entity_DrawType



#include "tomba.h"
void FUN_8002f230(int param_1)

{
  u8 bVar1;
  s16 uVar2;
  int iVar3;
  s16 *psVar4;
  s16 *psVar5;
  int iVar6;
  
  bVar1 = param_1->state;
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (3 < bVar1) {
        return;
      }
      goto LAB_8002f348;
    }
    if (bVar1 != 0) {
      return;
    }
    param_1->sprite_x = 7;
    uVar2 = FUN_8009a450();
    param_1->normal_x = uVar2;
    param_1->velocity_y = 0xff92;
    *(s16 *)(param_1 + 0x32) = 0xffce;
    param_1->state = 1;
  }
  psVar5 = param_1->angle_offset;
  param_1->scale_y = param_1->anim_data;
  if (param_1->anim_data != 0) {
    iVar6 = 0;
    psVar4 = param_1->sprite_y;
    do {
      iVar6 = iVar6 + 1;
      iVar3 = FUN_8009a450();
      *psVar5 = *psVar5 + -8 + (s16)(iVar3 >> 0xb);
      iVar3 = FUN_8009a450();
      psVar4->flags = psVar4->flags + -8 + (s16)(iVar3 >> 0xb);
      iVar3 = FUN_8009a450();
      psVar5 = psVar5 + 4;
      *psVar4 = *psVar4 + -4 + (s16)(iVar3 >> 0xb);
      psVar4 = psVar4 + 4;
    } while (iVar6 < 7);
    iVar6 = FUN_8002b278(param_1);
    if (iVar6 != 0) {
      return;
    }
    FUN_80031780(param_1);
    return;
  }
LAB_8002f348:
  FUN_8007a624(param_1);
  return;
}
