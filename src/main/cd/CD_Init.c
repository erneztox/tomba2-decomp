/**
 * @brief Initializes CD subsystem via 0x8008B040
 * @note Original: func_80089F68 at 0x80089F68
 */
// CD_Init



s32 CD_Init(void)

{
  CD_InitDrive();
  return 1;
}
