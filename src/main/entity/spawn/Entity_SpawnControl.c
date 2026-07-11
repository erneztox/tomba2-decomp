/**
 * @brief Entity spawn controller: manages spawn queue
 * @note Original: func_80069CD8 at 0x80069CD8
 */
// Entity_SpawnControl



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void FUN_80069cd8(int param_1,int param_2)

{
  s16 sVar1;
  s16 sVar2;
  s16 sVar3;
  uint uVar4;
  u8 bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  s16 sVar9;
  int iVar10;
  s16 sVar11;
  s16 *psVar12;
  s16 sVar13;
  
  iVar7 = _DAT_1f800280;
  psVar12 = param_1->draw_x;
  if (*(s8*)(_DAT_1f800280 + 0xc) == '\x04') {
    switch(_DAT_1f800280->kind) {
    case 2:
    case 4:
    case 7:
      iVar8 = FUN_80083e80((int)*(s16 *)(param_2 + 0xc));
      iVar6 = FUN_80083e80((int)iVar7->rot_y);
      iVar10 = (int)(s16)(iVar8 * 0x6e >> 0xc);
      iVar8 = FUN_80083f50((int)iVar7->rot_y);
      sVar9 = *(s16 *)(param_2 + 0x34) + (s16)(iVar6 * iVar10 >> 0xc);
      sVar13 = param_2->pos_x - (s16)(iVar8 * iVar10 >> 0xc);
      iVar8 = FUN_80083f50((int)*(s16 *)(param_2 + 0xc));
      bVar5 = param_1->anim_id >> 1;
      sVar11 = *(s16 *)(param_2 + 0x30) + (s16)(iVar8 * 0x6e >> 0xc);
      if (1 < bVar5) {
        if (3 < bVar5) {
          return;
        }
        param_1->pos_y = sVar13;
        param_1->pos_z = sVar9;
        *(s16 *)(param_1 + 0x32) =
             param_1->bounds_min_y +
             sVar11 + (iVar7->bounds_max_y - iVar7->bounds_min_y);
        return;
      }
      iVar8 = FUN_80083f50(*(s16 *)(param_1 + 0x78) + 0x800);
      sVar1 = param_1->bounds_min_x;
      sVar2 = iVar7->bounds_min_x;
      iVar6 = FUN_80083e80(*(s16 *)(param_1 + 0x78) + 0x800);
      sVar3 = iVar7->bounds_min_x;
      param_1->pos_y = sVar13 + (s16)(iVar8 * ((int)sVar1 + (int)sVar2) >> 0xc);
      *(s16 *)(param_1 + 0x32) = sVar11;
      sVar9 = sVar9 - (s16)(iVar6 * ((int)param_1->bounds_min_x + (int)sVar3) >> 0xc);
      goto LAB_8006a050;
    default:
      param_1->pos_y = param_2->pos_x + *psVar12;
      *(s16 *)(param_1 + 0x32) = *(s16 *)(param_2 + 0x30) + param_1->angle_delta;
      sVar9 = *(s16 *)(param_2 + 0x34);
      break;
    case 8:
      if (g_GameState == '\v') {
        sVar9 = param_1->pos_y - param_2->pos_x;
      }
      else {
        sVar9 = param_1->pos_z - *(s16 *)(param_2 + 0x34);
      }
      if ((g_GameState == '\f') && (_DAT_1f800280->sub_type == '\0')) {
        iVar7 = FUN_80083e80((int)*(s16 *)(param_2 + 0xc));
        uVar4 = -(iVar7 * sVar9);
      }
      else {
        iVar7 = FUN_80083e80((int)*(s16 *)(param_2 + 0xc));
        uVar4 = iVar7 * sVar9;
      }
      param_1->pos_y = param_2->pos_x + *psVar12;
      *(s16 *)(param_1 + 0x32) =
           *(s16 *)(param_2 + 0x30) + (s16)(uVar4 >> 0xc) + param_1->bounds_min_y + 0x40;
      sVar9 = *(s16 *)(param_2 + 0x34);
      break;
    case 0x17:
      iVar8 = (uint)param_1->angle_delta -
              ((int)((uint)_DAT_1f800280->velocity_y << 0x10) >> 0x18);
      param_1->angle_delta = (s16)iVar8;
      if (iVar8 * 0x10000 >> 0x10 < -(int)iVar7->bounds_min_y) {
        param_1->angle_delta = -iVar7->bounds_min_y;
      }
      param_1->pos_y = param_2->pos_x + *psVar12;
      *(s16 *)(param_1 + 0x32) = *(s16 *)(param_2 + 0x30) + param_1->angle_delta;
      sVar9 = *(s16 *)(param_2 + 0x34);
    }
  }
  else {
    param_1->pos_y = param_2->pos_x + param_1->draw_x;
    *(s16 *)(param_1 + 0x32) = *(s16 *)(param_2 + 0x30) + param_1->angle_delta;
    sVar9 = *(s16 *)(param_2 + 0x34);
  }
  sVar9 = sVar9 + *(s16 *)(param_1 + 100);
LAB_8006a050:
  param_1->pos_z = sVar9;
  return;
}
