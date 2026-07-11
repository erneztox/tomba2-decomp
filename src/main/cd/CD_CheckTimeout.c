/**
 * @brief CD timeout check: reads timer, checks against g_CD_SeekPos+0x4B0, handles timeout
 * @note Original: func_8008CAFC at 0x8008CAFC
 */
// CD_CheckTimeout



int CD_CheckTimeout(int param_1,s32 param_2)

{
  int iVar1;
  int iVar2;
  
  do {
    iVar1 = Timer_GetCounter(0xffffffff);
    iVar2 = -1;
    if ((iVar1 <= g_CD_SeekPos + 0x4b0) &&
       ((DAT_800ac2f8 < 0 ||
        (iVar1 = Timer_GetCounter(0xffffffff), iVar2 = DAT_800ac2f8, DAT_800ac2fc + 0x3c < iVar1)))) {
      CD_EventHandler(1);
      iVar2 = DAT_800ac2e4;
    }
  } while ((param_1 == 0) && (((g_CD_Event != 0 && (iVar2 == 0)) || (0 < iVar2))));
  CD_ReadySimple(1,param_2);
  if ((g_CD_Event != 0) && (iVar2 == 0)) {
    iVar2 = 1;
  }
  return iVar2;
}
