/**
 * @brief Updates camera orbit: GTE cos/sin on g_CameraAngle2 angle, radius 500, advances angle 8
 * @note Original: func_8006EF38 at 0x8006EF38
 */
// Camera_UpdateOrbit



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Camera_UpdateOrbit(void)

{
  int iVar1;
  int iVar2;
  
  if (g_GameMode - 3 < 2) {
    iVar1 = Math_CosGTE((int)_g_CameraAngle2);
    iVar2 = Math_Cos((int)_g_CameraAngle2);
    _DAT_1f8000d2 = _DAT_800e8042 + (s16)(iVar1 * 500 >> 0xc);
    _DAT_1f8000da = _DAT_800e804a + (s16)(iVar2 * 500 >> 0xc);
    _g_CameraAngle2 = _g_CameraAngle2 + 8;
    Camera_SetModeSeq(0x800e8008,&DAT_800e8040);
  }
  return;
}
