/**
 * @brief Updates camera orbit: GTE cos/sin on g_CameraAngle2 angle, radius 500, advances angle 8
 * @note Original: func_8006EF38 at 0x8006EF38
 */
// Camera_UpdateOrbit



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8006ef38(void)

{
  int iVar1;
  int iVar2;
  
  if (g_GameMode - 3 < 2) {
    iVar1 = FUN_80083f50((int)_g_CameraAngle2);
    iVar2 = FUN_80083e80((int)_g_CameraAngle2);
    _DAT_1f8000d2 = _DAT_800e8042 + (s16)(iVar1 * 500 >> 0xc);
    _DAT_1f8000da = _DAT_800e804a + (s16)(iVar2 * 500 >> 0xc);
    _g_CameraAngle2 = _g_CameraAngle2 + 8;
    FUN_8006e3b0(0x800e8008,&DAT_800e8040);
  }
  return;
}
