/**
 * @brief Updates camera orbit: GTE cos/sin on DAT_800e8078 angle, radius 500, advances angle 8
 * @note Original: func_8006EF38 at 0x8006EF38
 */
// Camera_UpdateOrbit



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8006ef38(void)

{
  int iVar1;
  int iVar2;
  
  if (DAT_1f800236 - 3 < 2) {
    iVar1 = FUN_80083f50((int)_DAT_800e8078);
    iVar2 = FUN_80083e80((int)_DAT_800e8078);
    _DAT_1f8000d2 = _DAT_800e8042 + (short)(iVar1 * 500 >> 0xc);
    _DAT_1f8000da = _DAT_800e804a + (short)(iVar2 * 500 >> 0xc);
    _DAT_800e8078 = _DAT_800e8078 + 8;
    FUN_8006e3b0(0x800e8008,&DAT_800e8040);
  }
  return;
}
