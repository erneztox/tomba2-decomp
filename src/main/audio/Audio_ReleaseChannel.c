/**
 * @brief Audio release channel: calls Audio_Cmd2 for channel at DAT_800bed80
 * @note Original: func_80074E48 at 0x80074E48
 */
// Audio_ReleaseChannel



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80074e48(void)

{
  undefined1 *puVar1;
  int iVar2;
  
  if (_DAT_800bed80 != -1) {
    FUN_80091af0((int)*(short *)(&DAT_800be368 + _DAT_800bed80 * 8));
    iVar2 = 0;
    if (0 < _DAT_800bed78) {
      puVar1 = &DAT_800be238;
      do {
        iVar2 = iVar2 + 1;
        *puVar1 = 0;
        puVar1[1] = puVar1[1] & 0xc0;
        puVar1 = puVar1 + 0xc;
      } while (iVar2 < _DAT_800bed78);
    }
    _DAT_800bed78 = 0;
    _DAT_800bed80 = -1;
    FUN_800963a0(0);
  }
  return;
}
