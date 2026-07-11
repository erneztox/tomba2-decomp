/**
 * @brief GPU ordering table setup: calls GPU funcs, sets up OT base address
 * @note Original: func_80081458 at 0x80081458
 */
// GPU_SetupOT



void FUN_80081458(s32 *param_1,s32 param_2)

{
  if (1 < DAT_800a59a2) {
    (*(code *)PTR_FUN_800a599c)(s_ClearOTagR__08x__d_____8001bf68,param_1,param_2);
  }
  (**(code **)(PTR_PTR_800a5998 + 0x2c))(param_1,param_2);
  DAT_800a5a60 = 0x40a5a4c;
  *param_1 = 0xa5a60;
  return;
}
