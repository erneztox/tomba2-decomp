/**
 * @brief GTE sprite projection: sets _g_GTE_Result[0]=1, _g_GTE_Work84=4, calls FUN_8007712c
 * @note Original: func_80077ACC at 0x80077ACC
 */
// GTE_ProjectSprite1



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80077acc(s32 param_1,int param_2,int param_3,int param_4)

{
  _g_GTE_Result[0] = 1;
  _g_GTE_Work84 = 4;
  FUN_8007712c(param_1,(int)((param_2 - (uint)_DAT_1f8000d2) * 0x10000) >> 0x10,
               (int)((param_3 - (uint)_DAT_1f8000d6) * 0x10000) >> 0x10,
               (int)((param_4 - (uint)_DAT_1f8000da) * 0x10000) >> 0x10);
  return;
}
