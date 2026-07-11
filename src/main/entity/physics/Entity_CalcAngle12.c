/**
 * @brief Entity angle calc variant 12: atan2 with entity[0x2E]/[0x36] offsets
 * @note Original: func_800216B4 at 0x800216B4
 */
// Entity_CalcAngle12



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_800216b4(int param_1,int param_2,undefined4 param_3)

{
  bool bVar1;
  ushort uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = (int)(((uint)param_1->pos_y - (uint)param_2->pos_y) * 0x10000)
          >> 0x10;
  iVar5 = (int)(((uint)param_1->pos_z - (uint)param_2->pos_z) * 0x10000)
          >> 0x10;
  uVar2 = FUN_80084080(iVar6 * iVar6 + iVar5 * iVar5);
  bVar1 = false;
  if (((int)(uint)uVar2 <= (int)param_1->bounds_min_x + (int)param_2->bounds_min_x) &&
     (bVar1 = false,
     (int)(((uint)*(ushort *)(param_1 + 0x32) - (uint)*(ushort *)(param_2 + 0x32)) +
           (uint)param_1->bounds_min_y + (uint)param_2->bounds_min_y & 0xffff) <=
     (int)param_1->bounds_max_y + (int)param_2->bounds_max_y)) {
    _DAT_1f80008c = (int)(short)uVar2;
    _DAT_1f80009c = FUN_80085690(-iVar5,iVar6);
    bVar1 = true;
  }
  if (bVar1) {
    uVar4 = FUN_8001e860(param_1,param_2,0,param_3);
    param_2->move_mode = 1;
    if ((uVar4 & 0x80) == 0) {
      DAT_1f800182 = 0;
    }
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}
