/**
 * @brief Entity target distance variant 2: different entity offset for target
 * @note Original: func_80024BD8 at 0x80024BD8
 */
// Entity_TargetDistance2



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_80024bd8(int param_1,int param_2,int param_3)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = (int)(((uint)param_1->draw_pos_x - (uint)param_3->pos_x) * 0x10000)
          >> 0x10;
  iVar3 = (int)(((uint)param_1->draw_pos_z - (uint)*(ushort *)(param_3 + 0x34)) * 0x10000)
          >> 0x10;
  uVar1 = FUN_80084080(iVar4 * iVar4 + iVar3 * iVar3);
  uVar2 = 0;
  if (((int)(uVar1 & 0xffff) <= param_2->bounds_min_x + _DAT_1f800088) &&
     (uVar2 = 0,
     (int)(((uint)param_1->draw_pos_y - (uint)*(ushort *)(param_3 + 0x30)) +
           (uint)param_2->bounds_min_y + (uint)param_1->target_angle & 0xffff) <=
     (int)param_2->bounds_max_y + ((int)((uint)param_1->target_angle << 0x10) >> 0xf))) {
    _DAT_1f80008c = FUN_80085690(-iVar3,iVar4);
    uVar2 = 1;
    _DAT_1f800084 = param_3;
    param_1->speed2 = *(short *)(param_1 + 0x32) - *(short *)(param_3 + 0x30);
  }
  return uVar2;
}
