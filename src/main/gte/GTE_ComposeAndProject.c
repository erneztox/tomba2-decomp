/**
 * @brief GTE compose+project: loads scale, composes rotation matrix, projects, adds position
 * @note Original: func_800518FC at 0x800518FC
 */
// GTE_ComposeAndProject



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void FUN_800518fc(int param_1)

{
  _g_GTE_Matrix[0] = (int)param_1->scale_x;
  _g_GTE_Data4 = 0;
  _g_GTE_DataC = 0;
  _g_GTE_Data14 = 0;
  _g_GTE_Data18 = 0;
  _g_GTE_Data1C = 0;
  _g_GTE_Data8 = (int)param_1->scale_y;
  _g_GTE_Data10 = (int)param_1->scale_z;
  FUN_80085480(param_1 + 0x54,&DAT_1f800020);
  FUN_80084110(&DAT_1f800020,0x1f800000,param_1 + 0x98);
  FUN_80084470(param_1 + 0x98,param_1 + 0x88,param_1 + 0xac);
  param_1->projected_x = param_1->projected_x + (int)param_1->pos_y;
  param_1->projected_y = param_1->projected_y + (int)*(s16 *)(param_1 + 0x32);
  param_1->projected_z = param_1->projected_z + (int)param_1->pos_z;
  FUN_80051128();
  return;
}
