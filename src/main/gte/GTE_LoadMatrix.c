/**
 * @brief GTE matrix loader: loads rotation + translation from table at 0x800E7F40
 * @note Original: func_80051614 at 0x80051614
 */
// GTE_LoadMatrix



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void GTE_LoadMatrix(int param_1,s32 param_2,int param_3,int param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(&DAT_800e7f40 + param_3 * 4);
  if (param_4 == 0) {
    GTE_LoadRotMatrixFromSVec(param_1 + 0x54,0x1f800000);
  }
  else {
    _DAT_1f800040 = (int)param_1->scale_x;
    _DAT_1f800044 = 0;
    _DAT_1f80004c = 0;
    _DAT_1f800054 = 0;
    _DAT_1f800058 = 0;
    _DAT_1f80005c = 0;
    _DAT_1f800048 = (int)param_1->scale_y;
    _DAT_1f800050 = (int)param_1->scale_z;
    GTE_LoadRotMatrixFromSVec(param_1 + 0x54,&DAT_1f800020);
    GTE_ComposeMatrix(&DAT_1f800020,&DAT_1f800040,0x1f800000);
  }
  GTE_ComposeMatrix(iVar1 + 0x18,0x1f800000,param_1 + 0x98);
  GTE_MulMatrix(param_2,param_1 + 0xac);
  param_1->projected_x = param_1->projected_x + *(int *)(iVar1 + 0x2c);
  param_1->projected_y = param_1->projected_y + iVar1->pos_y_fixed;
  param_1->projected_z = param_1->projected_z + iVar1->scale_y;
  param_1->pos_y = *(s16 *)(param_1 + 0xac);
  *(s16 *)(param_1 + 0x32) = *(s16 *)(param_1 + 0xb0);
  param_1->pos_z = *(s16 *)(param_1 + 0xb4);
  if (param_4 == 0) {
    Entity_CheckState2(param_1);
  }
  else {
    Entity_DrawCheck(param_1);
  }
  return;
}
