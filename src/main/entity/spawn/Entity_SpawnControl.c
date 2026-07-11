/**
 * @brief Entity spawn controller: manages spawn queue
 * @note Original: func_80069CD8 at 0x80069CD8
 */
// Entity_SpawnControl



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void FUN_80069cd8(int param_1,int param_2)

{
  short sVar1;
  short sVar2;
  short sVar3;
  uint uVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  short sVar9;
  int iVar10;
  short sVar11;
  short *psVar12;
  short sVar13;
  
  iVar7 = _DAT_1f800280;
  psVar12 = param_1->draw_x;
  if (*(char *)(_DAT_1f800280 + 0xc) == '\x04') {
    switch(_DAT_1f800280->kind) {
    case 2:
    case 4:
    case 7:
      iVar8 = FUN_80083e80((int)*(short *)(param_2 + 0xc));
      iVar6 = FUN_80083e80((int)iVar7->rot_y);
      iVar10 = (int)(short)(iVar8 * 0x6e >> 0xc);
      iVar8 = FUN_80083f50((int)iVar7->rot_y);
      sVar9 = *(short *)(param_2 + 0x34) + (short)(iVar6 * iVar10 >> 0xc);
      sVar13 = param_2->pos_x - (short)(iVar8 * iVar10 >> 0xc);
      iVar8 = FUN_80083f50((int)*(short *)(param_2 + 0xc));
      bVar5 = param_1->anim_id >> 1;
      sVar11 = *(short *)(param_2 + 0x30) + (short)(iVar8 * 0x6e >> 0xc);
      if (1 < bVar5) {
        if (3 < bVar5) {
          return;
        }
        param_1->pos_y = sVar13;
        param_1->pos_z = sVar9;
        *(short *)(param_1 + 0x32) =
             param_1->bounds_min_y +
             sVar11 + (iVar7->bounds_max_y - iVar7->bounds_min_y);
        return;
      }
      iVar8 = FUN_80083f50(*(short *)(param_1 + 0x78) + 0x800);
      sVar1 = param_1->bounds_min_x;
      sVar2 = iVar7->bounds_min_x;
      iVar6 = FUN_80083e80(*(short *)(param_1 + 0x78) + 0x800);
      sVar3 = iVar7->bounds_min_x;
      param_1->pos_y = sVar13 + (short)(iVar8 * ((int)sVar1 + (int)sVar2) >> 0xc);
      *(short *)(param_1 + 0x32) = sVar11;
      sVar9 = sVar9 - (short)(iVar6 * ((int)param_1->bounds_min_x + (int)sVar3) >> 0xc);
      goto LAB_8006a050;
    default:
      param_1->pos_y = param_2->pos_x + *psVar12;
      *(short *)(param_1 + 0x32) = *(short *)(param_2 + 0x30) + param_1->angle_delta;
      sVar9 = *(short *)(param_2 + 0x34);
      break;
    case 8:
      if (DAT_800bf870 == '\v') {
        sVar9 = param_1->pos_y - param_2->pos_x;
      }
      else {
        sVar9 = param_1->pos_z - *(short *)(param_2 + 0x34);
      }
      if ((DAT_800bf870 == '\f') && (_DAT_1f800280->sub_type == '\0')) {
        iVar7 = FUN_80083e80((int)*(short *)(param_2 + 0xc));
        uVar4 = -(iVar7 * sVar9);
      }
      else {
        iVar7 = FUN_80083e80((int)*(short *)(param_2 + 0xc));
        uVar4 = iVar7 * sVar9;
      }
      param_1->pos_y = param_2->pos_x + *psVar12;
      *(short *)(param_1 + 0x32) =
           *(short *)(param_2 + 0x30) + (short)(uVar4 >> 0xc) + param_1->bounds_min_y + 0x40;
      sVar9 = *(short *)(param_2 + 0x34);
      break;
    case 0x17:
      iVar8 = (uint)param_1->angle_delta -
              ((int)((uint)_DAT_1f800280->velocity_y << 0x10) >> 0x18);
      param_1->angle_delta = (short)iVar8;
      if (iVar8 * 0x10000 >> 0x10 < -(int)iVar7->bounds_min_y) {
        param_1->angle_delta = -iVar7->bounds_min_y;
      }
      param_1->pos_y = param_2->pos_x + *psVar12;
      *(short *)(param_1 + 0x32) = *(short *)(param_2 + 0x30) + param_1->angle_delta;
      sVar9 = *(short *)(param_2 + 0x34);
    }
  }
  else {
    param_1->pos_y = param_2->pos_x + param_1->draw_x;
    *(short *)(param_1 + 0x32) = *(short *)(param_2 + 0x30) + param_1->angle_delta;
    sVar9 = *(short *)(param_2 + 0x34);
  }
  sVar9 = sVar9 + *(short *)(param_1 + 100);
LAB_8006a050:
  param_1->pos_z = sVar9;
  return;
}
