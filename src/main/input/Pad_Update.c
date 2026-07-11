/**
 * @brief Pad/input updater: checks pad type, applies rumble/button flags
 * @note Original: func_8001D7C4 at 0x8001D7C4
 */
// Pad_Update



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Pad_Update(s8 param_1,u8 *param_2)

{
  s32 bVar1;
  int iVar2;
  u8 auStack_20 [16];
  
  bVar1 = false;
  if ((param_1 == '\x01') && ((*param_2 & 0x20) != 0)) {
    iVar2 = CD_InitSub(1);
    if (iVar2 == 0) {
      CD_CheckInit(auStack_20,3);
      iVar2 = CD_DecodeTime(auStack_20);
      if (iVar2 == DAT_800be0e0 + 1) {
        DAT_800be0e0 = iVar2;
        if (_g_DMASize < 0x200) {
          if (0 < _g_DMASize) {
            bVar1 = true;
            CD_CheckInit(_g_DMASrc,_g_DMASize);
            iVar2 = _g_DMASize;
            _g_DMASize = 0;
            _g_DMASrc = _g_DMASrc + iVar2 * 4;
          }
        }
        else {
          CD_CheckInit(_g_DMASrc,0x200);
          _g_DMASize = _g_DMASize + -0x200;
          _g_DMASrc = _g_DMASrc + 0x800;
          if (_g_DMASize == 0) {
            bVar1 = true;
          }
        }
      }
      else {
        bVar1 = true;
        DAT_800be0ea = DAT_800be0ea | 2;
      }
    }
    else {
      bVar1 = true;
      DAT_800be0e6 = DAT_800be0e6 + 1;
    }
  }
  else {
    bVar1 = true;
    DAT_800be0e8 = DAT_800be0e8 + 1;
  }
  if (bVar1) {
    CD_SetErrorCallback(0);
    CD_SendCmdRetry2(9,0);
  }
  return;
}
