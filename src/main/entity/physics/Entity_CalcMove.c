/**
 * @brief Entity move calculator: computes velocity + position
 * @note Original: func_80023D48 at 0x80023D48
 */
// Entity_CalcMove



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_80023d48(int param_1,int param_2,int param_3,uint param_4)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  char cVar4;
  ushort uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  short sVar9;
  short sVar10;
  int iVar11;
  short sVar12;
  int iVar13;
  uint uVar14;
  short sVar15;
  int iVar16;
  ushort uVar17;
  short local_40;
  short local_38;
  short local_30;
  
  if ((param_4 & 1) == 0) {
    iVar11 = (uint)param_1->pos_y - (uint)param_3->pos_x;
    iVar6 = iVar11 * 0x10000 >> 0x10;
    iVar7 = (uint)param_1->pos_z - (uint)*(ushort *)(param_3 + 0x34);
    sVar9 = (short)iVar7;
    iVar7 = iVar7 * 0x10000 >> 0x10;
    uVar17 = 0;
    local_40 = 0;
    local_38 = 0;
    local_30 = (short)iVar11;
    uVar5 = FUN_80084080(iVar6 * iVar6 + iVar7 * iVar7);
    if (((int)param_1->bounds_size - (int)param_1->bounds_min_x) +
        (int)param_2->bounds_min_x < (int)(uint)uVar5) {
      return 0;
    }
    uVar14 = (uint)*(ushort *)(param_1 + 0x32);
    uVar1 = *(ushort *)(param_3 + 0x30);
    uVar2 = param_1->bounds_max_y;
    uVar3 = param_2->bounds_min_y;
  }
  else {
    iVar6 = FUN_80083f50((int)param_1->rot_y);
    iVar16 = iVar6 * *(short *)(param_1 + 0x7c) >> 0xc;
    iVar6 = FUN_80083e80((int)param_1->rot_y);
    iVar11 = ((uint)param_1->pos_y + iVar16) - (uint)param_3->pos_x;
    iVar7 = iVar11 * 0x10000 >> 0x10;
    iVar13 = iVar6 * *(short *)(param_1 + 0x7c) >> 0xc;
    iVar6 = ((uint)param_1->pos_z - iVar13) - (uint)*(ushort *)(param_3 + 0x34);
    sVar9 = (short)iVar6;
    iVar6 = iVar6 * 0x10000 >> 0x10;
    local_40 = (short)iVar16;
    local_30 = (short)iVar11;
    local_38 = (short)iVar13;
    uVar5 = FUN_80084080(iVar7 * iVar7 + iVar6 * iVar6);
    if (((int)param_1->bounds_size - (int)param_1->bounds_min_x) +
        (int)param_2->bounds_min_x < (int)(uint)uVar5) {
      return 0;
    }
    uVar17 = *(ushort *)(param_1 + 0x7e);
    uVar1 = *(ushort *)(param_3 + 0x30);
    uVar2 = param_1->bounds_max_y;
    uVar3 = param_2->bounds_min_y;
    uVar14 = (uint)*(ushort *)(param_1 + 0x32) + (uint)uVar17;
  }
  iVar7 = uVar14 - uVar1;
  sVar12 = (short)iVar7;
  iVar6 = (uint)uVar3 + ((uint)uVar2 - (uint)param_1->bounds_min_y);
  sVar10 = (short)iVar6;
  if ((int)(short)uVar2 + (int)param_2->bounds_max_y < (int)(iVar7 + iVar6 & 0xffffU)) {
    uVar8 = 0;
  }
  else {
    if (iVar7 * 0x10000 < 0) {
      sVar12 = -sVar12;
      sVar15 = -sVar10;
    }
    else {
      sVar10 = param_1->bounds_min_y +
               (param_2->bounds_max_y - param_2->bounds_min_y);
      sVar15 = sVar10;
    }
    _DAT_1f80009c = FUN_80085690(-(int)sVar9,(int)local_30);
    if ((((int)param_1->bounds_size - (int)param_1->bounds_min_x) +
        (int)param_2->bounds_min_x) - (int)(short)uVar5 < (int)sVar10 - (int)sVar12) {
      if (*(char *)(param_1 + 0xc) == '\x02') {
        cVar4 = FUN_80077768((int)_DAT_1f80009c,(int)param_1->draw_x,1);
        param_1->input_flags = cVar4 + '\x02';
      }
      iVar6 = FUN_80083f50(_DAT_1f80009c);
      sVar9 = param_1->bounds_min_x;
      sVar12 = param_2->bounds_min_x;
      iVar7 = FUN_80083e80(_DAT_1f80009c);
      sVar10 = param_2->bounds_min_x;
      uVar8 = 1;
      param_1->pos_y =
           (param_3->pos_x + (short)(iVar6 * ((int)sVar9 + (int)sVar12) >> 0xc)) -
           local_40;
      param_1->pos_z =
           (*(short *)(param_3 + 0x34) -
           (short)(iVar7 * ((int)param_1->bounds_min_x + (int)sVar10) >> 0xc)) - local_38;
    }
    else {
      iVar6 = (int)sVar15;
      uVar8 = 3;
      if (iVar6 < 1) {
        uVar8 = 2;
        iVar7 = param_3->pos_y_fixed;
        param_1->collision_state = 1;
        param_1->pos_y_fixed = ((iVar7 + iVar6) - (int)(short)uVar17) * 0x10000;
      }
      else {
        param_1->pos_y_fixed =
             ((param_3->pos_y_fixed + iVar6) - (int)(short)uVar17) * 0x10000;
      }
    }
  }
  return uVar8;
}
