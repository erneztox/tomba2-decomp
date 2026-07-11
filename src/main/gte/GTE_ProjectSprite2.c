/**
 * @brief GTE sprite projection: sets _DAT_1f800080=0, _DAT_1f800084=0, calls FUN_8007712c
 * @note Original: func_8007778C at 0x8007778C
 */
// GTE_ProjectSprite2



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8007778c(int param_1)

{
  _DAT_1f800080 = 0;
  _DAT_1f800084 = 0;
  FUN_8007712c(param_1,(int)(((uint)param_1->pos_y - (uint)_DAT_1f8000d2) * 0x10000) >>
                       0x10,
               (int)(((uint)*(ushort *)(param_1 + 0x32) - (uint)_DAT_1f8000d6) * 0x10000) >> 0x10,
               (int)(((uint)param_1->pos_z - (uint)_DAT_1f8000da) * 0x10000) >> 0x10);
  return;
}
