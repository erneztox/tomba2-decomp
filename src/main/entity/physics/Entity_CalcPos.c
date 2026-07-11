/**
 * @brief Entity position calculator: computes new pos from delta + flags
 * @note Original: func_8001F40C at 0x8001F40C
 */
// Entity_CalcPos



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_8001f40c(int param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = (int)(((uint)param_1->pos_y - (uint)param_2->pos_y) * 0x10000)
          >> 0x10;
  iVar6 = (int)(((uint)param_1->pos_z - (uint)param_2->pos_z) * 0x10000)
          >> 0x10;
  uVar1 = FUN_80084080(iVar7 * iVar7 + iVar6 * iVar6);
  uVar2 = 0xffffffff;
  if ((int)(uVar1 & 0xffff) <= (int)param_1->bounds_min_x + (int)param_2->bounds_min_x) {
    iVar5 = (uint)*(ushort *)(param_1 + 0x32) - (uint)*(ushort *)(param_2 + 0x32);
    iVar3 = (uint)param_2->bounds_min_y + (uint)param_1->bounds_min_y;
    if ((int)param_1->bounds_max_y + (int)param_2->bounds_max_y <
        (int)(iVar5 + iVar3 & 0xffffU)) {
      uVar2 = 0xffffffff;
    }
    else {
      _DAT_1f80009c = FUN_80085690(-iVar6,iVar7);
      iVar6 = ((uint)param_1->bounds_min_x + (uint)param_2->bounds_min_x) - uVar1;
      if (iVar5 * 0x10000 < 0) {
        iVar7 = -iVar5;
      }
      else {
        iVar3 = ((uint)param_2->bounds_max_y - (uint)param_2->bounds_min_y) +
                ((uint)param_1->bounds_max_y - (uint)param_1->bounds_min_y);
        iVar7 = iVar5;
      }
      iVar4 = (uint)param_1->bounds_min_y << 0x10;
      if ((int)(short)iVar5 < -((iVar4 >> 0x10) - (iVar4 >> 0x1f) >> 1)) {
        uVar2 = iVar6 * 0x10000 < (iVar3 - iVar7) * 0x10000 ^ 1;
      }
      else {
        uVar2 = 2;
        if (((((iVar3 - iVar7) * 0x10000 <= iVar6 * 0x10000) &&
             (uVar2 = 3, (param_1->entity_flags & 0x200) == 0)) &&
            (uVar2 = 3, _DAT_1f800098 == 0)) && (param_3 == 0)) {
          DAT_1f800253 = 4;
          *(ushort *)(param_1 + 0x32) =
               *(short *)(param_2 + 0x32) +
               (param_2->bounds_max_y - param_2->bounds_min_y) +
               (param_1->bounds_max_y - param_1->bounds_min_y);
          uVar2 = 3;
          if ((param_1->state_flag145 == '\x01') && (uVar2 = 3, param_1->velocity_y < 0))
          {
            param_1->velocity_y = 0;
          }
        }
      }
    }
  }
  return uVar2;
}
