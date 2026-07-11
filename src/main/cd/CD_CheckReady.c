/**
 * @brief Checks if CD is ready via 0x8008B720
 * @note Original: func_80089FA8 at 0x80089FA8
 */
// CD_CheckReady



s32 CD_CheckReady(void)

{
  int iVar1;
  
  iVar1 = CD_ReadSector();
  return iVar1 == 0;
}
