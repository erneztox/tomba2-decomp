// A09_CameraSetup2 - Camera setup mode 2: g_LoadSubState=1, zoom x7

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

s32 A09_CameraSetup2(void)

{
  g_LoadSubState = 1;
  _DAT_800e8076 = 0x80;
  _g_CameraZoom = 0x400;
  _DAT_800e8074 = _DAT_801003f8 * 7;
  Camera_SetPosition(&DAT_800e7eac);
  return 1;
}

