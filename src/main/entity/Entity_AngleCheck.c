/**
 * @brief Entity angle check: compares angle vs target, returns direction
 * @note Original: func_80055C9C at 0x80055C9C
 */
// Entity_AngleCheck



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80055c9c(s32 param_1,int param_2)

{
  s32 bVar1;
  uint uVar2;
  
  if (g_CameraEntity == '\x05') {
    bVar1 = ((0xc00 - (uint)_DAT_1f8000f2) - param_2 & 0xfff) < 0x800;
  }
  else {
    uVar2 = (0xc00U - param_2 & 0xfff) - (_DAT_1f8000f2 & 0xfff);
    if (-1 < (int)(uVar2 * 0x10000)) {
      uVar2 = uVar2 - 0x200;
    }
    if ((_DAT_800e805a & 0x800) != 0) {
      if (0x9ff < (uVar2 & 0xfff)) {
        _DAT_1f80016c = 0x20;
        _DAT_1f80016e = 0x80;
        return;
      }
      _DAT_1f80016c = 0x80;
      _DAT_1f80016e = 0x20;
      return;
    }
    bVar1 = (uVar2 & 0xfff) < 0x600;
  }
  if (!bVar1) {
    _DAT_1f80016c = 0x20;
    _DAT_1f80016e = 0x80;
    return;
  }
  _DAT_1f80016c = 0x80;
  _DAT_1f80016e = 0x20;
  return;
}
