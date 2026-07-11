/**
 * @brief CD u8 read: calls CD_CheckSlot, writes result to buffer at DAT_80105cdc+offset+4
 * @note Original: func_80095470 at 0x80095470
 */
// CD_ReadByte



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint CD_ReadByte(s16 param_1,s16 param_2,u8 param_3)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = CD_CheckSlot((int)param_1,(int)param_2);
  uVar2 = 0xffffffff;
  if (iVar1 == 0) {
    iVar1 = param_2 * 0x10;
    *(u8 *)(iVar1 + _DAT_80105cdc + 4) = param_3;
    uVar2 = (uint)*(u8 *)(iVar1 + _DAT_80105cdc + 4);
  }
  return uVar2;
}
