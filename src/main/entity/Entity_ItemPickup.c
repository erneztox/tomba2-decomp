/**
 * @brief Entity item pickup: reads table at 0x800A3EDC, sets item params
 * @note Original: func_8004C0E4 at 0x8004C0E4
 */
// Entity_ItemPickup



#include "tomba.h"
int FUN_8004c0e4(undefined4 param_1,byte param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  
  pbVar6 = (byte *)(*(int *)(&DAT_800a3edc + (uint)DAT_800bf870 * 4) + (uint)param_2 * 4);
  bVar1 = *pbVar6;
  if ((bVar1 & 0x80) == 0) {
    iVar4 = FUN_8004d7ec((int)*(short *)(pbVar6 + 2),1);
  }
  else {
    iVar4 = FUN_8004d868((int)*(short *)(pbVar6 + 2),1);
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
      uVar3 = *(undefined2 *)(pbVar6 + 2);
      *(undefined2 *)(iVar5 + 100) = 2;
      iVar5->angle_delta = uVar3;
      if ((bVar1 & 0x80) != 0) {
        *(undefined2 *)(iVar5 + 100) = 6;
      }
      if ((DAT_800bf870 == 0) && ((byte)(param_2 - 1) < 5)) {
        iVar5->timer1 = param_2 - 1;
      }
    }
  }
  return iVar5;
}
