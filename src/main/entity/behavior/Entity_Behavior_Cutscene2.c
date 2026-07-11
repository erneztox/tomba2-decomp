/**
 * @brief Entity cutscene behavior variant 2: entity->state state
 * @note Original: func_80072A78 at 0x80072A78
 */
// Entity_Behavior_Cutscene2



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void Entity_Behavior_Cutscene2(void)

{
  s32 bVar1;
  u8 bVar2;
  s16 uVar3;
  u8 *pbVar4;
  int iVar5;
  u8 bVar6;
  u8 *pbVar7;
  
  if ((g_GameState == GAMESTATE_LEVEL) && (g_LevelId - 1 < 3)) {
    pbVar4 = &DAT_8013c1a4;
  }
  else if ((g_GameState == GAMESTATE_1) && (0xe < g_LevelId)) {
    pbVar4 = &DAT_80134918;
  }
  else if (g_GameState == GAMESTATE_LEVEL2) {
    if (g_LevelId < 6) {
      pbVar4 = &DAT_801437ac;
    }
    else if (g_LevelId < 9) {
      pbVar4 = &DAT_80143acc;
    }
    else {
      pbVar4 = &DAT_80143ae0;
    }
  }
  else if (g_GameState == GAMESTATE_8) {
    if (g_LevelId < 9) {
      pbVar4 = &DAT_8014304c;
    }
    else if (g_LevelId < 0x10) {
      pbVar4 = &DAT_801432b8;
    }
    else if (g_LevelId < 0x15) {
      pbVar4 = &DAT_80143470;
    }
    else {
      pbVar4 = &DAT_80143614;
    }
  }
  else if (g_GameState == GAMESTATE_TITLEx15) {
    if (g_LevelId == 0) {
      pbVar4 = &DAT_80115004;
    }
    else if (g_LevelId == 1) {
      pbVar4 = &DAT_80115018;
    }
    else if (g_LevelId == 2) {
      pbVar4 = &DAT_801150f4;
    }
    else if (g_LevelId == 3) {
      pbVar4 = &DAT_80115180;
    }
    else if (g_LevelId == 4) {
      pbVar4 = &DAT_801151f8;
    }
    else {
      pbVar4 = &DAT_80115310;
    }
  }
  else {
    if (_g_GameState == GAMESTATE_TITLEx704) {
      return;
    }
    pbVar4 = *(u8 **)(&DAT_800a4c28 + (uint)g_GameState * 4);
    if (pbVar4 == (u8 *)0x0) {
      return;
    }
  }
  if (*pbVar4 != 0xff) {
    pbVar7 = pbVar4 + 0xc;
    do {
      if (((*(s16 *)(pbVar7 + 2) != 1) ||
          (((int)(uint)_DAT_800bfe56 >> (g_GameState & 0x1f) & 1U) == 0)) &&
         ((*(s16 *)(pbVar7 + 2) != 2 || (g_SubState == '\0')))) {
        bVar6 = pbVar7[-0xb];
        bVar1 = bVar6 != 3;
        if (bVar1) {
          bVar2 = *pbVar4;
        }
        else {
          bVar6 = 3;
          bVar2 = *pbVar4;
        }
        iVar5 = Entity_AllocByPoolId(bVar2 & 0x7f,bVar6,!bVar1);
        if (iVar5 != 0) {
          iVar5->alloc_flags = *pbVar4;
          iVar5->callback = *(s32 *)(pbVar7 + 4);
          iVar5->kind = pbVar7[-4];
          iVar5->sub_type = pbVar7[-3];
          iVar5->pos_y = *(s16 *)(pbVar7 + -10);
          *(s16 *)(iVar5 + 0x32) = *(s16 *)(pbVar7 + -8);
          uVar3 = *(s16 *)(pbVar7 + -6);
          iVar5->rot_x = 0;
          iVar5->pos_z = uVar3;
          iVar5->rot_y =
               (s16)((ulonglong)((longlong)(*(s16 *)(pbVar7 + -2) * 0x1000) * 0xb60b60b7) >>
                      0x28) - (*(s16 *)(pbVar7 + -2) >> 0xf) & 0xfff;
          iVar5->rot_z =
               (s16)((ulonglong)((longlong)(*(s16 *)pbVar7 * 0x1000) * 0xb60b60b7) >> 0x28) -
               (*(s16 *)pbVar7 >> 0xf) & 0xfff;
        }
      }
      pbVar4 = pbVar4 + 0x14;
      pbVar7 = pbVar7 + 0x14;
    } while (*pbVar4 != 0xff);
  }
  return;
}
