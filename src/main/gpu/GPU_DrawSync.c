/**
 * @brief Waits for GPU to finish current operation (DrawSync callback)
 * @note Original: func_80080F6C at 0x80080F6C
 */
// GPU_DrawSync



void FUN_80080f6c(undefined4 param_1)

{
  if (1 < DAT_800a59a2) {
    (*(code *)PTR_FUN_800a599c)(s_DrawSync__d_____8001bedc,param_1);
  }
  (*PTR_PTR_800a5998->sprite_data)(param_1);
  return;
}
