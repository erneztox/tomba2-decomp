/**
 * @brief Entity angle calc variant 4: different entity offset computation
 * @note Original: func_80022F04 at 0x80022F04
 */
// Entity_CalcAngle4



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_80022f04(int param_1,int param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = (int)(((uint)param_1->pos_y - (uint)param_2->pos_y) * 0x10000)
          >> 0x10;
  iVar3 = (int)(((uint)param_1->pos_z - (uint)param_2->pos_z) * 0x10000)
          >> 0x10;
  uVar1 = FUN_80084080(iVar4 * iVar4 + iVar3 * iVar3);
  uVar2 = 0;
  if ((int)(uint)uVar1 <= (int)param_1->bounds_min_x + (int)param_2->bounds_min_x) {
    if ((int)param_1->bounds_max_y + (int)param_2->bounds_max_y <
        (int)(((uint)*(ushort *)(param_1 + 0x32) - (uint)*(ushort *)(param_2 + 0x32)) +
              (uint)param_1->bounds_min_y + (uint)param_2->bounds_min_y & 0xffff)) {
      uVar2 = 0;
    }
    else {
      _DAT_1f80008c = (int)(short)uVar1;
      _DAT_1f80009c = FUN_80085690(-iVar3,iVar4);
      uVar2 = 1;
    }
  }
  return uVar2;
}
