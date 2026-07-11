/**
 * @brief Engine sprite update: checks DAT_1f80019a flag, decrements counter, updates globals
 * @note Original: func_800788AC at 0x800788AC
 */
// Engine_UpdateSprites



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_800788ac(void)

{
  _DAT_800ecf56 = _DAT_800ecf54;
  if (DAT_1f80019a == '\x01') {
    _DAT_800bed8c = _DAT_800bed8c - 1;
    if (_DAT_800bed8c == 0) {
      if (_DAT_800bed88[1] == 0) {
        _DAT_800bed88 = _DAT_800bed88 + 2;
      }
      _DAT_800ecf54 = *_DAT_800bed88;
      _DAT_800bed8c = _DAT_800bed88[1];
      _DAT_800bed88 = _DAT_800bed88 + 2;
    }
  }
  else {
    _DAT_800ecf54 = FUN_800524b4(0);
  }
  _DAT_800e7e68 = _DAT_800ecf54 & ~_DAT_800ecf56;
  _DAT_800f23a4 = _DAT_800ecf56 & ~_DAT_800ecf54;
  FUN_8005229c();
  return;
}
