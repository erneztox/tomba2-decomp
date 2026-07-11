/**
 * @brief Checks if CD init is complete via 0x8008B620
 * @note Original: func_80089F88 at 0x80089F88
 */
// CD_CheckInit



s32 CD_CheckInit(void)

{
  int iVar1;
  
  iVar1 = CD_InitParams();
  return iVar1 == 0;
}
