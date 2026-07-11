/**
 * @brief Loads overlay by index: indexes tables at 0x8009D110, checks pad flag, calls load
 * @note Original: func_8001D71C at 0x8001D71C
 */
// Engine_LoadOverlayEntry



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Engine_LoadOverlayEntry(s16 param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1 < 0) {
    Pad_InitReset();
  }
  else {
    iVar1 = param_1 * 6;
    iVar2 = _g_OverlayAddr + (uint)*(u16 *)(&DAT_8009d112 + iVar1) * 8;
    if (((&DAT_8009d111)[iVar1] == '\0') && (DAT_800fb162 == '\x01')) {
      DAT_800be0e4 = 2;
    }
    else {
      Sys_LoadOverlay((&DAT_8009d110)[iVar1],iVar2,iVar2 + (uint)*(u16 *)(&DAT_8009d114 + iVar1) * 8
                   ,(&DAT_8009d111)[iVar1]);
    }
  }
  return;
}
