/**
 * @brief Script-driven entity behavior: reads entity->sprite_cmd script data, complex state machine
 * @note Original: func_80030A3C at 0x80030A3C
 */
// Entity_Behavior_Scripted



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void FUN_80030a3c(int param_1)

{
  u8 bVar1;
  s16 sVar2;
  s16 sVar3;
  u16 uVar4;
  s16 sVar5;
  uint uVar6;
  int iVar7;
  s16 *psVar8;
  uint uVar9;
  uint uVar10;
  s16 *psVar11;
  s16 local_48;
  
  bVar1 = param_1->state;
  psVar11 = param_1->angle_offset;
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (3 < bVar1) {
        return;
      }
      FUN_8007a624(param_1);
      return;
    }
    psVar8 = (s16 *)(param_1 + 0x6c);
    if (bVar1 != 0) {
      return;
    }
    local_48 = 0;
    sVar5 = param_1->pos_x;
    sVar2 = param_1->pos_y;
    sVar3 = *(s16 *)(param_1 + 0x30);
    param_1->sprite_x = 3;
    do {
      uVar6 = FUN_8009a450();
      uVar10 = (uVar6 & 0x3f) - 0x20;
      uVar6 = FUN_8009a450();
      uVar9 = (uVar6 & 0x3f) - 0x20;
      uVar6 = FUN_8009a450();
      uVar6 = (uVar6 & 0x3f) - 0x20;
      if (param_1->sub_type == ',') {
        uVar4 = FUN_8009a450();
        uVar10 = (int)(uVar10 * 0x10000) >> 0x11;
        uVar9 = (int)(uVar9 * 0x10000) >> 0x11;
        psVar8[-0xb] = (uVar4 & 0x3f) + 0x100;
        uVar6 = (int)(uVar6 * 0x10000) >> 0x11;
        if (_DAT_800e7ffe < 0) {
          uVar10 = uVar10 >> 1;
          uVar9 = uVar9 >> 1;
          uVar6 = uVar6 >> 1;
        }
      }
      else {
        uVar4 = FUN_8009a450();
        psVar8[-0xb] = (uVar4 & 0xff) + 0x80;
      }
      local_48 = local_48 + 1;
      *psVar11 = sVar5 + (s16)uVar10;
      psVar8[-0xd] = sVar2 + (s16)uVar9;
      psVar11 = psVar11 + 4;
      psVar8[-0xc] = sVar3 + (s16)uVar6;
      psVar8[-2] = (s16)uVar10 >> 2;
      psVar8[-1] = (s16)uVar9 >> 2;
      *psVar8 = (s16)uVar6 >> 2;
      psVar8 = psVar8 + 4;
    } while (local_48 < 3);
    param_1->state = 1;
    param_1->action_state = 0;
    param_1->sub_action = 0;
    param_1->scale_y = param_1->anim_data;
  }
  psVar11 = param_1->angle_offset;
  sVar5 = FUN_8002b278(param_1);
  iVar7 = FUN_8009a450();
  iVar7 = (uint)param_1->sub_action + (iVar7 >> 0xb) + 0x20;
  param_1->sub_action = (char)iVar7;
  if (iVar7 * 0x1000000 < 0) {
    param_1->scale_y = param_1->anim_data;
    if (param_1->anim_data == 0) {
      param_1->state = STATE_FINISH;
      return;
    }
    if (sVar5 == 0) {
      FUN_80031780(param_1);
    }
    else {
      param_1->sub_action = param_1->sub_action + -0x80;
    }
  }
  psVar8 = param_1->type_flags;
  local_48 = 0;
  uVar4 = _g_FrameCounter2 & 1;
  do {
    *psVar11 = *psVar11 + psVar8[-1];
    psVar8[-0xc] = psVar8[-0xc] + *psVar8;
    psVar8[-0xb] = psVar8[-0xb] + psVar8->flags;
    if ((g_GameState != '\x06') || (uVar4 == 0)) {
      *psVar8 = *psVar8 + 1;
    }
    psVar8 = psVar8 + 4;
    local_48 = local_48 + 1;
    psVar11 = psVar11 + 4;
  } while (local_48 < 3);
  return;
}
