/**
 * @brief Returns GPU status register value from 0x800A5AA8
 * @note Original: func_8008240C at 0x8008240C
 */
// GPU_GetStatus



s32 FUN_8008240c(void)

{
  return *DAT_800a5aa8;
}
