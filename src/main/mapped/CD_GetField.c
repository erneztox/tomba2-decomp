/**
 * @brief CD struct field getter: returns word at DAT_800ac604 + index*0x10 + 0xC
 * @note Original: func_8009A1D0 at 0x8009A1D0
 */
// CD_GetField



void FUN_8009a1d0(int param_1,undefined2 *param_2)

{
  *param_2 = *(undefined2 *)(param_1 * 0x10 + DAT_800ac604 + 0xc);
  return;
}
