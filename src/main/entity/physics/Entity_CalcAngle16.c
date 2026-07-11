/**
 * @brief Entity angle calc variant 16: atan2 with XZ distance validation
 * @note Original: func_8001F830 at 0x8001F830
 */
// Entity_CalcAngle16



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_8001f830(byte *param_1,int param_2)

{
  short sVar1;
  short sVar2;
  short sVar3;
  bool bVar4;
  char cVar5;
  ushort uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  
  iVar9 = (int)(((uint)param_1->pos_y - (uint)param_2->pos_y) * 0x10000)
          >> 0x10;
  iVar8 = (int)(((uint)param_1->pos_z - (uint)param_2->pos_z) * 0x10000)
          >> 0x10;
  uVar6 = FUN_80084080(iVar9 * iVar9 + iVar8 * iVar8);
  bVar4 = false;
  if (((int)(uint)uVar6 <= (int)param_1->bounds_min_x + (int)param_2->bounds_min_x) &&
     (bVar4 = false,
     (int)(((uint)*(ushort *)(param_1 + 0x32) - (uint)*(ushort *)(param_2 + 0x32)) +
           (uint)param_1->bounds_min_y + (uint)param_2->bounds_min_y & 0xffff) <=
     (int)param_1->bounds_max_y + (int)param_2->bounds_max_y)) {
    _DAT_1f80008c = (int)(short)uVar6;
    _DAT_1f80009c = FUN_80085690(-iVar8,iVar9);
    bVar4 = true;
  }
  uVar7 = 0;
  if (bVar4) {
    if ((*param_1 & 4) == 0) {
      iVar8 = FUN_80083f50(_DAT_1f80009c);
      sVar1 = param_1->bounds_min_x;
      sVar2 = param_2->bounds_min_x;
      iVar9 = FUN_80083e80(_DAT_1f80009c);
      sVar3 = param_2->bounds_min_x;
      param_1->pos_y =
           param_2->pos_y + (short)(iVar8 * ((int)sVar1 + (int)sVar2) >> 0xc);
      param_1->pos_z =
           param_2->pos_z -
           (short)(iVar9 * ((int)param_1->bounds_min_x + (int)sVar3) >> 0xc);
    }
    cVar5 = FUN_80077768((int)_DAT_1f80009c,(int)param_1->draw_angle,1);
    uVar7 = 1;
    param_1->input_flags = cVar5 + 2;
  }
  return uVar7;
}
