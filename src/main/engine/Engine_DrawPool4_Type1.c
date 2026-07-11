/**
 * @brief Draws Pool 4 entity using FUN_8007e1b8
 * @note Original: func_80025744 at 0x80025744
 */
// Engine_DrawPool4_Type1



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void FUN_80025744(int param_1)

{
  s32 bVar1;
  s16 sVar2;
  uint uVar3;
  void *puVar4;
  u8 local_28;
  u8 local_27;
  s16 local_26;
  s16 local_20->state;
  
  local_27 = 8;
  local_26 = 0x8000;
  local_20->type = 0x20;
  local_28 = 0;
  local_20->kind = 0;
  local_20->sub_type = 0;
  local_20->flags = 200;
  FUN_8007e1b8(local_20,param_1->anim_data,param_1->sprite_data,&local_28);
  local_26 = 0;
  local_20->kind = g_ItemFlag - 0x18;
  local_20->type = local_20->type + 0x18;
  FUN_8007e1b8(local_20,PTR_DAT_800173d8,param_1->sprite_data,&local_28);
  sVar2 = local_20->kind;
  local_20->kind = 0;
  local_20->type = local_20->type + sVar2;
  FUN_8007e1b8(local_20,PTR_DAT_800173dc,param_1->sprite_data,&local_28);
  if (g_ItemMax == 0) {
    return;
  }
  local_20->type = 0x32;
  local_20->flags = 0xcc;
  local_20->kind = (s16)g_ItemMax;
  bVar1 = false;
  switch(DAT_800e7eef) {
  case 0x12:
    uVar3 = (uint)DAT_800a4554;
    break;
  case 0x13:
    uVar3 = (uint)DAT_800a4555;
    break;
  case 0x14:
    uVar3 = (uint)DAT_800a4556;
    break;
  case 0x15:
    uVar3 = (uint)DAT_800a4557;
    break;
  case 0x16:
    uVar3 = (uint)DAT_800a4558;
    break;
  default:
    goto switchD_80025868_default;
  }
  if (uVar3 >> 1 <= (uint)g_ItemMax) {
    bVar1 = true;
  }
switchD_80025868_default:
  puVar4 = PTR_DAT_800173bc;
  if ((bVar1) && ((_g_FrameCounter2 & 3) != 0)) {
    puVar4 = PTR_DAT_800173c0;
  }
  FUN_8007e1b8(local_20,puVar4,param_1->sprite_data,&local_28);
  return;
}
