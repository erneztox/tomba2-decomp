/**
 * @brief PsyQ DrawOTag wrapper: sends ordering table to GPU for rendering
 * @note Original: func_80081560 at 0x80081560
 */
// GPU_DrawOTag



void FUN_80081560(undefined4 param_1)

{
  if (1 < DAT_800a59a2) {
    (*(code *)PTR_FUN_800a599c)(s_DrawOTag__08x_____8001bf80,param_1);
  }
  (**(code **)(PTR_PTR_800a5998 + 8))(PTR_PTR_800a5998->script_data,param_1,0,0);
  return;
}
