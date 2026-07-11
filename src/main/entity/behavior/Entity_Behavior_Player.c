/**
 * @brief Entity player behavior: entity->state=1, player control
 * @note Original: func_800739AC at 0x800739AC
 */
// Entity_Behavior_Player



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void Entity_Behavior_Player(u8 *param_1)

{
  u8 bVar1;
  s8 cVar2;
  s16 uVar3;
  int iVar4;
  int iVar5;
  
  bVar1 = param_1->state;
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        return;
      }
      if (bVar1 != 3) {
        return;
      }
      Entity_Dealloc(param_1);
      return;
    }
    if (bVar1 != 0) {
      return;
    }
    iVar4 = Entity_InitSubEntity(param_1,0xc,(int)*(s16 *)(&DAT_800a4c80 + (uint)g_GameState * 2));
    if (iVar4 != 0) {
      return;
    }
    *param_1 = 1;
    param_1->state = param_1->state + '\x01';
    if (((g_GameState == GAMESTATE_2) || (g_GameState == GAMESTATE_7)) || (g_GameState == GAMESTATE_TITLEx14)) {
      param_1->bounds_min_x = 0xa0;
      uVar3 = 0x140;
    }
    else {
      param_1->bounds_min_x = 300;
      uVar3 = 600;
    }
    param_1->bounds_size = uVar3;
    param_1->bounds_min_y = 0xed;
    param_1->bounds_max_y = 0xed;
    param_1->move_mode = 0;
    if (g_GameState != 5) {
      return;
    }
    if (param_1->sub_type != '\x05') {
      return;
    }
    param_1->render_flags = 0xf;
    return;
  }
  iVar5 = GTE_ProjectSprite2(param_1);
  iVar4 = _g_CurrentEntity;
  if (iVar5 == 0) {
    param_1->move_mode = 0;
    return;
  }
  switchparam_1->behavior_state {
  case 0:
    goto switchD_80073b0c_caseD_0;
  case 1:
    if (((g_GameState == GAMESTATE_2) || (g_GameState == GAMESTATE_7)) && (cVar2 = '\x04', g_CollisionType != '\x1f'))
    goto LAB_80073ca0;
    Entity_DrawUIparam_1->sub_type;
    if ((_g_PadState & 0x2000) != 0) goto LAB_80073be0;
    break;
  case 2:
    Entity_InitUI();
    if ((_g_PadState & 0x4000) != 0) {
LAB_80073be0:
      param_1->behavior_state = param_1->behavior_state + '\x01';
      Audio_PlaySoundEffect(0x11,0,0);
      param_1->move_mode = 0;
      goto LAB_80073ca8;
    }
    if ((_g_PadState & 0x2000) != 0) {
      param_1->behavior_state = 4;
      Audio_SetBank(1);
      param_1->move_mode = 0;
      goto LAB_80073ca8;
    }
    break;
  case 3:
    DAT_1f800136 = 2;
    DAT_800bf84a = 0;
    _DAT_800bf890 = _DAT_800e7eac;
    _DAT_800bf894 = _DAT_800e7eb0;
    _DAT_800bf898 = _DAT_800e7eb4;
    DAT_800bfe38 = DAT_800e7eaa;
    _g_CurrentEntity->angle_offset = 0;
    *(u8 *)(iVar4 + 0x6b) = 8;
    param_1->behavior_state = param_1->behavior_state + '\x01';
    Game_InitSaveData(0,0,0);
    param_1->move_mode = 0;
    goto LAB_80073ca8;
  case 4:
    *param_1 = 2;
    cVar2 = param_1->behavior_state + '\x01';
LAB_80073ca0:
    param_1->behavior_state = cVar2;
    break;
  case 5:
    *param_1 = 1;
    param_1->behavior_state = 0;
switchD_80073b0c_caseD_0:
    if (param_1->move_mode == '\x03') {
      g_LevelId = param_1->sub_type;
      param_1->behavior_state = param_1->behavior_state + '\x01';
      Game_SetEventFlag2(g_GameState,g_LevelId);
      param_1->move_mode = 0;
      goto LAB_80073ca8;
    }
  }
  param_1->move_mode = 0;
LAB_80073ca8:
  Entity_UpdateMatrix(param_1);
  return;
}
