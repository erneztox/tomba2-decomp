/**
 * @brief Entity item pickup: reads table at 0x800A3EDC, sets item params
 * @note Original: func_8004C0E4 at 0x8004C0E4
 */
// Entity_ItemPickup



#include "tomba.h"
int FUN_8004c0e4(s32 param_1,u8 param_2,int param_3)

{
  u8 bVar1;
  u8 bVar2;
  s16 uVar3;
  int iVar4;
  int iVar5;
  u8 *pbVar6;
  
  pbVar6 = (u8 *)(*(int *)(&DAT_800a3edc + (uint)g_GameState * 4) + (uint)param_2 * 4);
  bVar1 = *pbVar6;
  if ((bVar1 & 0x80) == 0) {
    iVar4 = FUN_8004d7ec((int)*(s16 *)(pbVar6 + 2),1);
  }
  else {
    iVar4 = FUN_8004d868((int)*(s16 *)(pbVar6 + 2),1);
  }
  iVar5 = 0;
  if (iVar4 == 0) {
    iVar5 = FUN_80072ddc(param_1,param_3 != 0,5,4);
    if (iVar5 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5->callback = FUN_8004c238;
      iVar5->sub_type = pbVar6->flags;
      bVar2 = *pbVar6;
      iVar5->draw_x = 1;
      iVar5->flag_5E = bVar2 & 0x7f;
      uVar3 = *(s16 *)(pbVar6 + 2);
      *(s16 *)(iVar5 + 100) = 2;
      iVar5->angle_delta = uVar3;
      if ((bVar1 & 0x80) != 0) {
        *(s16 *)(iVar5 + 100) = 6;
      }
      if ((g_GameState == GAMESTATE_TITLE) && ((u8)(param_2 - 1) < 5)) {
        iVar5->timer1 = param_2 - 1;
      }
    }
  }
  return iVar5;
}
