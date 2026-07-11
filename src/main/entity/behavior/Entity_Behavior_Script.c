/**
 * @brief Entity script behavior: entity->state=1, runs bytecode
 * @note Original: func_800300D8 at 0x800300D8
 */
// Entity_Behavior_Script



#include "tomba.h"
void FUN_800300d8(int param_1)

{
  u8 bVar1;
  s16 uVar2;
  u16 uVar3;
  int iVar4;
  int iVar5;
  u16 *puVar6;
  
  bVar1 = param_1->state;
  iVar5 = param_1->parent;
  puVar6 = param_1->angle_offset;
  if (bVar1 == 1) {
LAB_80030174:
    uVar3 = *puVar6;
    *puVar6 = uVar3 - 6;
    if ((int)((uint)(u16)(uVar3 - 6) << 0x10) < 1) {
      if ((6 < DAT_800e7e7c) && (iVar4 = FUN_8007a980(0,6,1), iVar4 != 0)) {
        if (param_1 != -0x2c) {
          iVar4->pos_x = param_1->pos_x;
          iVar4->pos_y = param_1->pos_y;
          *(s16 *)(iVar4 + 0x30) = *(s16 *)(param_1 + 0x30);
        }
        *(s16 *)(iVar4 + 0x32) = 0xffe2;
        FUN_80028e10(iVar4,0x34);
      }
      FUN_8002343c(iVar5);
      param_1->state = STATE_FINISH;
      *puVar6 = 0;
LAB_80030214:
      uVar3 = *puVar6;
      *puVar6 = uVar3 + 0x88;
      if (0xfff < (s16)(uVar3 + 0x88)) goto LAB_80030240;
    }
    param_1->flags = 1;
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        return;
      }
      param_1->state = 1;
      param_1->pos_x = iVar5->pos_y;
      param_1->pos_y = *(s16 *)(iVar5 + 0x32);
      uVar2 = iVar5->pos_z;
      *(s32 *)(param_1 + 0x48) = 0;
      param_1->normal_z = 0;
      param_1->angle_offset = 0x3c;
      *(s16 *)(param_1 + 0x30) = uVar2;
      goto LAB_80030174;
    }
    if (bVar1 == 2) goto LAB_80030214;
    if (bVar1 != 3) {
      return;
    }
LAB_80030240:
    FUN_8007a624(param_1);
  }
  return;
}
