/**
 * @brief Audio key on variant 2: calls CD_CheckSlot, sets voice params, triggers
 * @note Original: func_800952CC at 0x800952CC
 */
// Audio_KeyOn2



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_800952cc(short param_1,short param_2,short param_3,undefined2 param_4)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  FUN_800962b0((int)param_2,(int)param_3);
  iVar4 = 0;
  iVar3 = 0;
  _DAT_80105d0c = param_1;
  if ('\0' < DAT_80105cec) {
    iVar2 = 0;
    do {
      sVar1 = FUN_800950e0(iVar2 >> 0x10,(int)param_1,(int)param_2,(int)param_3,param_4);
      iVar3 = iVar3 + sVar1;
      iVar4 = iVar4 + 1;
      iVar2 = iVar4 * 0x10000;
    } while (iVar4 * 0x10000 >> 0x10 < (int)DAT_80105cec);
  }
  return iVar3;
}
