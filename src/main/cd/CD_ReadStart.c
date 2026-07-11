/**
 * @brief CD read start: checks DAT_800abf28 flag, initiates read
 * @note Original: func_8008C7C0 at 0x8008C7C0
 */
// CD_ReadStart



void FUN_8008c7c0(void)

{
  int iVar1;
  int iVar2;
  
  if ((DAT_800abf28 & 1) != 0) {
    FUN_80089fec(0);
  }
  DAT_800ac2f8 = 0;
  iVar1 = 1;
  if (g_CD_Event != 0) {
    iVar1 = FUN_80085900(0xffffffff);
    do {
      if (g_CD_Event == 0) {
        iVar1 = 0;
        g_CD_Event = 0;
        goto LAB_8008c894;
      }
      iVar2 = FUN_80085900(0xffffffff);
    } while ((uint)(iVar2 - iVar1) < 0x79);
    FUN_80089b84(g_CD_Param);
    iVar1 = -1;
    g_CD_Event = 0;
  }
LAB_8008c894:
  if (iVar1 != 0) {
    FUN_80089b98(DAT_800ac310);
    if ((DAT_800abf28 & 1) != 0) {
      FUN_80089fc8(DAT_800ac314);
    }
    FUN_80089b84(FUN_8008c260);
    FUN_80089ce8(9,0);
    g_CD_Event = 1;
    iVar1 = FUN_80085900(0xffffffff);
    do {
      if (g_CD_Event == 0) {
        return;
      }
      iVar2 = FUN_80085900(0xffffffff);
    } while ((uint)(iVar2 - iVar1) < 0x79);
    FUN_80089b84(g_CD_Param);
    g_CD_Event = 0;
  }
  return;
}
