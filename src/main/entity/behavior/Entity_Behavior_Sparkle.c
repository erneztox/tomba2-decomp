/**
 * @brief Sparkle/dust particles: random positions, follow parent entity with offset
 * @note Original: func_8002A584 at 0x8002A584
 */
// Entity_Behavior_Sparkle



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void Entity_Behavior_Sparkle(int param_1)

{
  u8 uVar1;
  u8 bVar2;
  s8 cVar3;
  s16 sVar4;
  u8 *puVar5;
  int iVar6;
  char *pcVar7;
  u8 *puVar8;
  int iVar9;
  
  bVar2 = param_1->state;
  pcVar7 = *(char **)(param_1 + 0x10);
  puVar8 = (u8 *)(param_1 + 0x50);
  if (bVar2 != 1) {
    if (1 < bVar2) {
      if (3 < bVar2) {
        return;
      }
      Entity_Dealloc(param_1);
      return;
    }
    iVar6 = 0;
    puVar5 = puVar8;
    if (bVar2 != 0) {
      return;
    }
    do {
      iVar6 = iVar6 + 1;
      uVar1 = Math_Random();
      *puVar5 = uVar1;
      uVar1 = Math_Random();
      puVar5->flags = uVar1;
      puVar5->kind = 0;
      bVar2 = Math_Random();
      puVar5->sub_type = bVar2 & 0x1f;
      puVar5 = puVar5 + 4;
    } while (iVar6 < 10);
    param_1->state = 1;
    if ((u8)pcVar7->kind < 4) {
      param_1->behavior_state = 2;
    }
    else if ((u8)pcVar7->kind < 7) {
      param_1->behavior_state = 0;
    }
    else {
      param_1->behavior_state = 1;
    }
  }
  iVar6 = _DAT_800e7f40;
  if (((((DAT_800e7fc6 & 4) == 0) && (DAT_800e7fc6 != 0)) && ((u8)pcVar7->state < 2)) &&
     (*pcVar7 != '\x01')) {
    if (param_1->behavior_state == '\x01') {
      if (g_CameraMode2 == '\0') {
        param_1->pos_x =
             _DAT_800e7f40->pos_x +
             (s16)(*(s16 *)(_DAT_800e7f40 + 0x18) * -0xb4 >> 0xc);
        iVar9 = *(s16 *)(iVar6 + 0x24) * -0xb4;
        sVar4 = -0x10;
      }
      else {
        param_1->pos_x =
             _DAT_800e7f40->pos_x +
             (s16)(*(s16 *)(_DAT_800e7f40 + 0x1c) * -0xa0 >> 0xc);
        iVar9 = *(s16 *)(iVar6 + 0x28) * -0xa0;
        sVar4 = -0x38;
      }
    }
    else {
      param_1->pos_x =
           _DAT_800e7f40->pos_x +
           (s16)(*(s16 *)(_DAT_800e7f40 + 0x1c) * -100 >> 0xc);
      iVar9 = *(s16 *)(iVar6 + 0x28) * -100;
      sVar4 = -0xc;
    }
    *(s16 *)(param_1 + 0x30) = *(s16 *)(iVar6 + 0x34) + (s16)(iVar9 >> 0xc);
    param_1->pos_y = *(s16 *)(iVar6 + 0x30) + sVar4;
    do {
      cVar3 = puVar8->sub_type;
      puVar8->sub_type = cVar3 - 3U;
      if ((int)((uint)(u8)(cVar3 - 3U) << 0x18) < 1) {
        if (param_1->action_state == '\x02') {
          bVar2 = Math_Random();
          cVar3 = (bVar2 & 0xf) + 0x20;
        }
        else {
          bVar2 = Math_Random();
          cVar3 = (bVar2 & 0xf) + 0x13;
        }
        puVar8->sub_type = cVar3;
        uVar1 = Math_Random();
        *puVar8 = uVar1;
        uVar1 = Math_Random();
        puVar8->flags = uVar1;
      }
      puVar8 = puVar8 + 4;
    } while ((int)puVar8 < param_1 + 0x78);
    param_1->flags = 1;
  }
  else {
    param_1->state = STATE_FINISH;
  }
  return;
}
