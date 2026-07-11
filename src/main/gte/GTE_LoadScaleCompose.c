/**
 * @brief GTE scale + compose: loads entity scale (0xB8/BA/BC), composes with rotation matrix
 * @note Original: func_80051844 at 0x80051844
 */
// GTE_LoadScaleCompose



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80051844(int param_1)

{
  _DAT_1f800000 = (int)param_1->scale_x;
  _DAT_1f800004 = 0;
  _DAT_1f80000c = 0;
  _DAT_1f800014 = 0;
  _DAT_1f800018 = 0;
  _DAT_1f80001c = 0;
  _DAT_1f800008 = (int)param_1->scale_y;
  _DAT_1f800010 = (int)param_1->scale_z;
  FUN_80085480(param_1 + 0x54,&DAT_1f800020);
  FUN_80084110(&DAT_1f800020,0x1f800000,param_1 + 0x98);
  param_1->projected_x = (int)param_1->pos_y;
  param_1->projected_y = (int)*(short *)(param_1 + 0x32);
  param_1->projected_z = (int)param_1->pos_z;
  FUN_80051128();
  return;
}
