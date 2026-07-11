// A09_CameraSetup1 - Camera setup mode 1: g_LoadSubState=2, sets zoom params

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

s32 A09_CameraSetup1(void)

{
  g_LoadSubState = 2;
  _DAT_800e8076 = 0x80;
  _g_CameraZoom = 0x400;
  _DAT_800e8074 = _DAT_801003f8 * 5;
  Camera_SetPosition(&DAT_800e7eac);
  return 1;
}

