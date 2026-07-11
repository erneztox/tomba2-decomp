/**
 * @brief 9-slice panel/window renderer: draws 4 corner tiles + 5 inner tiles via TILE primitives
 * @note Original: func_8005019C at 0x8005019C
 */
// UI_DrawPanel



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void UI_DrawPanel(s16 *param_1,u16 param_2,s8 param_3,int param_4)

{
  u8 *puVar1;
  s16 sVar2;
  s16 sVar3;
  s16 sVar4;
  uint *puVar5;
  u16 uVar6;
  uint *puVar7;
  s16 local_28;
  s16 local_26;
  s16 local_24;
  s16 local_22;
  
  puVar5 = _g_OT_Buffer;
  if ((param_2 & 0x40) == 0) {
    param_2 = param_2 + 6;
    if (param_3 != '\0') {
      param_2 = param_2 | 0x80;
    }
  }
  else {
    param_2 = param_2 + 0xd;
  }
  local_22 = 8;
  local_24 = 8;
  sVar2 = *param_1;
  sVar3 = param_1->flags;
  puVar1 = (u8 *)((int)_g_OT_Buffer + 7);
  _g_OT_Buffer = _g_OT_Buffer + 4;
  *puVar1 = 0x74;
  if ((param_2 & 0x80) != 0) {
    *(u8 *)((int)puVar5 + 7) = 0x76;
  }
  if ((param_2 & 0x40) == 0) {
    uVar6 = ((param_2 & 0x1f) + 0x1f0) * 0x40 | 0x3e;
  }
  else {
    uVar6 = ((param_2 & 0x1f) + 0x1f0) * 0x40 | 0x3f;
  }
  *(u16 *)((int)puVar5 + 0xe) = uVar6;
  if ((param_2 & 0x20) == 0) {
    *(u8 *)((int)puVar5 + 7) = *(u8 *)((int)puVar5 + 7) | 1;
  }
  else {
    *(u8 *)((int)puVar5 + 6) = 0x40;
    *(u8 *)((int)puVar5 + 5) = 0x40;
    puVar5->flags = 0x40;
  }
  *(s16 *)(puVar5 + 2) = sVar2 + -8;
  puVar5->sub_type = 0xb8;
  *(u8 *)((int)puVar5 + 0xd) = 0x88;
  *(s16 *)((int)puVar5 + 10) = sVar3 + -8;
  puVar7 = (uint *)(_g_EntityBuffer + param_4 * 4);
  *puVar5 = *puVar7 | 0x3000000;
  *puVar7 = (uint)puVar5;
  puVar5 = _g_OT_Buffer;
  sVar2 = *param_1;
  sVar4 = param_1->kind;
  puVar1 = (u8 *)((int)_g_OT_Buffer + 7);
  _g_OT_Buffer = _g_OT_Buffer + 4;
  *puVar1 = 0x74;
  if ((param_2 & 0x80) != 0) {
    *(u8 *)((int)puVar5 + 7) = 0x76;
  }
  if ((param_2 & 0x40) == 0) {
    uVar6 = ((param_2 & 0x1f) + 0x1f0) * 0x40 | 0x3e;
  }
  else {
    uVar6 = ((param_2 & 0x1f) + 0x1f0) * 0x40 | 0x3f;
  }
  *(u16 *)((int)puVar5 + 0xe) = uVar6;
  if ((param_2 & 0x20) == 0) {
    *(u8 *)((int)puVar5 + 7) = *(u8 *)((int)puVar5 + 7) | 1;
  }
  else {
    *(u8 *)((int)puVar5 + 6) = 0x40;
    *(u8 *)((int)puVar5 + 5) = 0x40;
    puVar5->flags = 0x40;
  }
  *(s16 *)(puVar5 + 2) = sVar2 + sVar4;
  puVar5->sub_type = 200;
  *(u8 *)((int)puVar5 + 0xd) = 0x88;
  *(s16 *)((int)puVar5 + 10) = sVar3 + -8;
  puVar7 = (uint *)(_g_EntityBuffer + param_4 * 4);
  *puVar5 = *puVar7 | 0x3000000;
  *puVar7 = (uint)puVar5;
  puVar5 = _g_OT_Buffer;
  sVar2 = *param_1;
  local_26 = param_1->flags + param_1->sub_type;
  puVar1 = (u8 *)((int)_g_OT_Buffer + 7);
  _g_OT_Buffer = _g_OT_Buffer + 4;
  *puVar1 = 0x74;
  if ((param_2 & 0x80) != 0) {
    *(u8 *)((int)puVar5 + 7) = 0x76;
  }
  if ((param_2 & 0x40) == 0) {
    uVar6 = ((param_2 & 0x1f) + 0x1f0) * 0x40 | 0x3e;
  }
  else {
    uVar6 = ((param_2 & 0x1f) + 0x1f0) * 0x40 | 0x3f;
  }
  *(u16 *)((int)puVar5 + 0xe) = uVar6;
  if ((param_2 & 0x20) == 0) {
    *(u8 *)((int)puVar5 + 7) = *(u8 *)((int)puVar5 + 7) | 1;
  }
  else {
    *(u8 *)((int)puVar5 + 6) = 0x40;
    *(u8 *)((int)puVar5 + 5) = 0x40;
    puVar5->flags = 0x40;
  }
  *(s16 *)(puVar5 + 2) = sVar2 + -8;
  puVar5->sub_type = 0xe8;
  *(u8 *)((int)puVar5 + 0xd) = 0x88;
  *(s16 *)((int)puVar5 + 10) = local_26;
  puVar7 = (uint *)(_g_EntityBuffer + param_4 * 4);
  *puVar5 = *puVar7 | 0x3000000;
  *puVar7 = (uint)puVar5;
  puVar5 = _g_OT_Buffer;
  local_28 = *param_1 + param_1->kind;
  puVar1 = (u8 *)((int)_g_OT_Buffer + 7);
  _g_OT_Buffer = _g_OT_Buffer + 4;
  *puVar1 = 0x74;
  if ((param_2 & 0x80) != 0) {
    *(u8 *)((int)puVar5 + 7) = 0x76;
  }
  if ((param_2 & 0x40) == 0) {
    uVar6 = ((param_2 & 0x1f) + 0x1f0) * 0x40 | 0x3e;
  }
  else {
    uVar6 = ((param_2 & 0x1f) + 0x1f0) * 0x40 | 0x3f;
  }
  *(u16 *)((int)puVar5 + 0xe) = uVar6;
  if ((param_2 & 0x20) == 0) {
    *(u8 *)((int)puVar5 + 7) = *(u8 *)((int)puVar5 + 7) | 1;
  }
  else {
    *(u8 *)((int)puVar5 + 6) = 0x40;
    *(u8 *)((int)puVar5 + 5) = 0x40;
    puVar5->flags = 0x40;
  }
  *(s16 *)(puVar5 + 2) = local_28;
  puVar5->sub_type = 0xf8;
  *(u8 *)((int)puVar5 + 0xd) = 0x88;
  *(s16 *)((int)puVar5 + 10) = local_26;
  puVar7 = (uint *)(_g_EntityBuffer + param_4 * 4);
  *puVar5 = *puVar7 | 0x3000000;
  *puVar7 = (uint)puVar5;
  puVar5 = _g_OT_Buffer;
  _g_OT_Buffer = _g_OT_Buffer + 3;
  GPU_SetupDrawMode2(puVar5,0,0,0x5f,0);
  puVar7 = (uint *)(_g_EntityBuffer + param_4 * 4);
  *puVar5 = *puVar7 | 0x2000000;
  *puVar7 = (uint)puVar5;
  local_24 = param_1->kind;
  param_2 = param_2 & 0xff;
  local_22 = 8;
  local_28 = *param_1;
  local_26 = param_1->flags + -8;
  UI_DrawTile(&local_28,0,param_2,param_4);
  local_26 = param_1->flags + param_1->sub_type;
  UI_DrawTile(&local_28,1,param_2,param_4);
  local_24 = 8;
  local_22 = param_1->sub_type;
  local_26 = param_1->flags;
  local_28 = *param_1 + -8;
  UI_DrawTile(&local_28,2,param_2,param_4);
  local_28 = *param_1 + param_1->kind;
  UI_DrawTile(&local_28,3,param_2,param_4);
  UI_DrawTile(param_1,4,param_2,param_4);
  return;
}
