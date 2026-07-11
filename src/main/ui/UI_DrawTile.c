/**
 * @brief Draws a single UI tile primitive (0x2C/0x2E) at given rect position
 * @note Original: func_8004FFB4 at 0x8004FFB4
 */
// UI_DrawTile



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void FUN_8004ffb4(s16 *param_1,s32 param_2,u16 param_3,int param_4)

{
  u8 *puVar1;
  uint *puVar2;
  u8 uVar3;
  u16 uVar4;
  u8 uVar5;
  u8 uVar6;
  uint *puVar7;
  
  puVar2 = _g_OT_Buffer;
  puVar1 = (u8 *)((int)_g_OT_Buffer + 7);
  _g_OT_Buffer = _g_OT_Buffer + 10;
  *puVar1 = 0x2c;
  if ((param_3 & 0x80) != 0) {
    *(u8 *)((int)puVar2 + 7) = 0x2e;
  }
  if ((param_3 & 0x40) == 0) {
    uVar4 = ((param_3 & 0x1f) + 0x1f0) * 0x40 | 0x3e;
  }
  else {
    uVar4 = ((param_3 & 0x1f) + 0x1f0) * 0x40 | 0x3f;
  }
  *(u16 *)((int)puVar2 + 0xe) = uVar4;
  if ((param_3 & 0x20) == 0) {
    *(u8 *)((int)puVar2 + 7) = *(u8 *)((int)puVar2 + 7) | 1;
  }
  else {
    *(u8 *)((int)puVar2 + 6) = 0x40;
    *(u8 *)((int)puVar2 + 5) = 0x40;
    puVar2->flags = 0x40;
  }
  *(s16 *)((int)puVar2 + 0x16) = 0x5f;
  *(s16 *)(puVar2 + 2) = *param_1;
  *(s16 *)((int)puVar2 + 10) = param_1->flags;
  *(s16 *)(puVar2 + 4) = *param_1 + param_1->kind;
  *(s16 *)((int)puVar2 + 0x12) = param_1->flags;
  *(s16 *)(puVar2 + 6) = *param_1;
  *(s16 *)((int)puVar2 + 0x1a) = param_1->flags + param_1->sub_type;
  *(s16 *)(puVar2 + 8) = *param_1 + param_1->kind;
  *(s16 *)((int)puVar2 + 0x22) = param_1->flags + param_1->sub_type;
  switch(param_2) {
  case 0:
    uVar6 = 0xc0;
    uVar5 = 200;
    *(u8 *)((int)puVar2 + 0xd) = 0x88;
    *(u8 *)((int)puVar2 + 0x15) = 0x88;
    uVar3 = 0x90;
    goto LAB_8005015c;
  case 1:
    uVar6 = 0xf0;
    uVar5 = 0xf8;
    *(u8 *)((int)puVar2 + 0xd) = 0x88;
    *(u8 *)((int)puVar2 + 0x15) = 0x88;
    uVar3 = 0x90;
    goto LAB_8005015c;
  case 2:
    uVar6 = 0xd0;
    uVar3 = 0x89;
    uVar5 = 0xd8;
    break;
  case 3:
    uVar6 = 0xe0;
    uVar3 = 0x89;
    uVar5 = 0xe8;
    break;
  case 4:
    uVar6 = 0xd8;
    uVar3 = 0x88;
    uVar5 = 0xdf;
    break;
  default:
    goto switchD_800500e4_default;
  }
  *(u8 *)((int)puVar2 + 0xd) = uVar3;
  *(u8 *)((int)puVar2 + 0x15) = uVar3;
  uVar3 = 0x8f;
LAB_8005015c:
  puVar2->sub_type = uVar6;
  puVar2->behavior_state = uVar5;
  puVar2->sub_action = uVar6;
  *(u8 *)((int)puVar2 + 0x1d) = uVar3;
  puVar2->counter2 = uVar5;
  *(u8 *)((int)puVar2 + 0x25) = uVar3;
switchD_800500e4_default:
  puVar7 = (uint *)(_g_EntityBuffer + param_4 * 4);
  *puVar2 = *puVar7 | 0x9000000;
  *puVar7 = (uint)puVar2;
  return;
}
