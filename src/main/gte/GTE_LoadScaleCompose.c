/**
 * @brief GTE scale + compose: loads entity scale (0xB8/BA/BC), composes with rotation matrix
 * @note Original: func_80051844 at 0x80051844
 */
// GTE_LoadScaleCompose



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void GTE_LoadScaleCompose(int param_1)

{
  _g_GTE_Matrix[0] = (int)param_1->scale_x;
  _g_GTE_Data4 = 0;
  _g_GTE_DataC = 0;
  _g_GTE_Data14 = 0;
  _g_GTE_Data18 = 0;
  _g_GTE_Data1C = 0;
  _g_GTE_Data8 = (int)param_1->scale_y;
  _g_GTE_Data10 = (int)param_1->scale_z;
  GTE_LoadRotMatrixFromSVec(param_1 + 0x54,&DAT_1f800020);
  GTE_ComposeMatrix(&DAT_1f800020,0x1f800000,param_1 + 0x98);
  param_1->projected_x = (int)param_1->pos_y;
  param_1->projected_y = (int)*(s16 *)(param_1 + 0x32);
  param_1->projected_z = (int)param_1->pos_z;
  Entity_DrawCheck();
  return;
}
