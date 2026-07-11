/**
 * @brief Compares two 12-u8 CD file names, returns true if match
 * @note Original: func_8008BBC8 at 0x8008BBC8
 */
// CD_CompareName



s32 FUN_8008bbc8(s32 param_1,s32 param_2)

{
  int iVar1;
  
  iVar1 = FUN_8009a640(param_1,param_2,0xc);
  return iVar1 == 0;
}
