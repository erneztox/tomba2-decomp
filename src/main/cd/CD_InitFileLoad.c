/**
 * @brief CD file load init: calls CD_DecodeTime, allocates via CD_CalcSector
 * @note Original: func_8008CE4C at 0x8008CE4C
 */
// CD_InitFileLoad



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

s32 CD_InitFileLoad(s32 param_1)

{
  int iVar1;
  s32 uVar2;
  
  if (_DAT_80102760 == 0) {
    iVar1 = CD_DecodeTime(&DAT_80104b68);
    CD_CalcSector(iVar1 + 1,param_1);
    uVar2 = _DAT_80104b6c;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}
