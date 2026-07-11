/**
 * @brief Entity angle calc variant 18: uses entity[0x2E/0x36]
 * @note Original: func_80020DB8 at 0x80020DB8
 */
// Entity_CalcAngle18



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_80020db8(int param_1,int param_2,int param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  short sVar6;
  int iVar7;
  short sVar8;
  
  iVar7 = (uint)param_1->pos_y - (uint)param_3->pos_x;
  iVar2 = iVar7 * 0x10000 >> 0x10;
  iVar5 = (uint)param_1->pos_z - (uint)*(ushort *)(param_3 + 0x34);
  iVar3 = iVar5 * 0x10000 >> 0x10;
  uVar1 = FUN_80084080(iVar2 * iVar2 + iVar3 * iVar3);
  uVar4 = 0xffffffff;
  if ((int)(uint)uVar1 <= (int)param_1->bounds_min_x + (int)param_2->bounds_min_x) {
    iVar3 = (uint)*(ushort *)(param_1 + 0x32) - (uint)*(ushort *)(param_3 + 0x30);
    sVar6 = (short)iVar3;
    iVar2 = (uint)param_1->bounds_min_y + (uint)param_2->bounds_min_y;
    sVar8 = (short)iVar2;
    if ((int)param_1->bounds_max_y + (int)param_2->bounds_max_y <
        (int)(iVar3 + iVar2 & 0xffffU)) {
      uVar4 = 0xffffffff;
    }
    else {
      _DAT_1f80008c = (int)(short)uVar1;
      if (iVar3 * 0x10000 < 0) {
        sVar6 = -sVar6;
      }
      else {
        sVar8 = (param_2->bounds_max_y - param_2->bounds_min_y) +
                (param_1->bounds_max_y - param_1->bounds_min_y);
      }
      _DAT_1f80009c = FUN_80085690(-(int)(short)iVar5,(int)(short)iVar7);
      uVar4 = 1;
      if (((int)sVar8 - (int)sVar6 <=
           ((int)param_1->bounds_min_x + (int)param_2->bounds_min_x) - (int)(short)uVar1)
         && (uVar4 = 2, 0 < iVar3 * 0x10000)) {
        uVar4 = 3;
      }
    }
  }
  return uVar4;
}
