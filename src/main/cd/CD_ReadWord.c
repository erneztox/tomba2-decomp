/**
 * @brief CD word reader: same pattern as ReadByte but reads word from buffer
 * @note Original: func_80095420 at 0x80095420
 */
// CD_ReadWord



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_80095420(s16 param_1,s16 param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_800962b0((int)param_1,(int)param_2);
  uVar2 = 0xffffffff;
  if (iVar1 == 0) {
    uVar2 = (uint)*(u8 *)(param_2 * 0x10 + _DAT_80105cdc + 1);
  }
  return uVar2;
}
