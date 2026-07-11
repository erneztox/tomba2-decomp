/**
 * @brief Checks if CD is ready via 0x8008B720
 * @note Original: func_80089FA8 at 0x80089FA8
 */
// CD_CheckReady



bool FUN_80089fa8(void)

{
  int iVar1;
  
  iVar1 = FUN_8008b720();
  return iVar1 == 0;
}
