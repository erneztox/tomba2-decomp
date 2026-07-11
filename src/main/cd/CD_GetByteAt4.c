/**
 * @brief CD u8 getter: reads u8 at DAT_80105cdc + param*0x10 + 4
 * @note Original: func_800954E0 at 0x800954E0
 */
// CD_GetByteAt4



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint CD_GetByteAt4(s16 param_1,s16 param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = CD_CheckSlot((int)param_1,(int)param_2);
  uVar2 = 0xffffffff;
  if (iVar1 == 0) {
    uVar2 = (uint)*(u8 *)(param_2 * 0x10 + _DAT_80105cdc + 4);
  }
  return uVar2;
}
