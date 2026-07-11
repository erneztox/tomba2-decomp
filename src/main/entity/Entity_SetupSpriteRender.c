/**
 * @brief Configures sprite rendering flags from type table at 0x800A29CE (8 bytes/entry)
 * @note Original: func_8004A828 at 0x8004A828
 */
// Entity_SetupSpriteRender



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void FUN_8004a828(int param_1)

{
  s16 sVar1;
  u16 uVar2;
  s16 uVar3;
  int iVar4;
  void **ppuVar5;
  
  param_1->render_flags = 0x11;
  *(s16 *)(param_1 + 0x7a) = 0x1300;
  *(s16 *)(param_1 + 0x7c) = 0x1300;
  *(s16 *)(param_1 + 0x7e) = 0x1300;
  param_1->sub_anim_id = 0;
  param_1->target_rot_y = 0;
  param_1->sprite_flags = 0;
  param_1->rot_x = 0;
  param_1->rot_y = 0;
  param_1->rot_z = 0;
  if (param_1->sub_type == '\x18') {
    if (DAT_800bf9cf == '\0') {
      param_1->sub_type = 0x18;
    }
    else if (DAT_800bf9cf == '\x01') {
      param_1->sub_type = 0x19;
    }
  }
  iVar4 = (uint)param_1->sub_type * 8;
  uVar2 = *(u16 *)(&DAT_800a29ce + iVar4);
  if (((int)*(s16 *)(&DAT_800a29ce + iVar4) & 0x8000U) != 0) {
    param_1->sprite_flags = param_1->sprite_flags | 1;
  }
  if ((uVar2 & 0x7fff) == 1) {
    param_1->draw_y = 0;
    param_1->sprite_data = _DAT_800ecf80;
    sVar1 = *(s16 *)(&DAT_800a29cc + iVar4);
    ppuVar5 = *(void ***)(&DAT_800a58fc + (uint)g_GameState * 4);
  }
  else {
    param_1->draw_y = uVar2 & 0x7fff;
    param_1->sprite_data = _g_OT_Data;
    sVar1 = *(s16 *)(&DAT_800a29cc + iVar4);
    ppuVar5 = &PTR_DAT_80017334;
  }
  FUN_80077b38(param_1,ppuVar5,(int)sVar1);
  param_1->bounds_min_x = (u16)(u8)(&DAT_800a29d0)[iVar4];
  param_1->bounds_size = (u16)(u8)(&DAT_800a29d0)[iVar4] << 1;
  param_1->bounds_min_y = (u16)(u8)(&DAT_800a29d1)[iVar4];
  param_1->bounds_max_y = (u16)(u8)(&DAT_800a29d1)[iVar4] << 1;
  uVar3 = *(s16 *)(&DAT_800a29d2 + iVar4);
  param_1->move_mode = 0;
  param_1->target_angle = uVar3;
  return;
}
