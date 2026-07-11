// CRD_FadeTransition (CRD_FadeTransition) - Card game fade transition

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void CRD_FadeTransition(u8 param_1)

{
  u8 *puVar1;
  int iVar2;
  int iVar3;
  
  DAT_800bf4de = 0xff;
  DAT_800bf4d9 = 0xff;
  DAT_800bf4df = 0;
  DAT_800bf4dd = 0;
  DAT_800bf4dc = 0;
  DAT_800bf4d5 = 0;
  DAT_800bf4d7 = 0;
  DAT_800bf4d8 = 0;
  DAT_800bf49b = 0;
  DAT_800bf49a = 0;
  DAT_800bf499 = 0;
  DAT_800bf498 = 0;
  _DAT_800bf4a0 = 0x800e7ad8;
  _DAT_800bf4a4 = &DAT_800d3485;
  _DAT_800bf4ac = 0x800d34e0;
  _DAT_800bf4a8 = &DAT_800d342a;
  DAT_800d3485 = 0;
  DAT_800d342a = 0;
  _DAT_800bf4b0 = -2;
  _DAT_800bf4b2 = -2;
  DAT_800bf4eb = 0;
  DAT_800bf4ea = 0;
  _DAT_800bf4ee = 0;
  _DAT_800bf4ec = 0;
  DAT_800bf4d4 = param_1;
  g_OverlayEntity->angle_offset = 1;
  puVar1 = &DAT_800bf498;
  iVar3 = 0;
  do {
    iVar2 = iVar3 + 1;
    puVar1[0x4a] = 0xfc;
    puVar1[0x4c] = 0;
    puVar1 = &DAT_800bf499 + iVar3;
    iVar3 = iVar2;
  } while (iVar2 < 2);
  if (_DAT_800bf4b0 != 0x30) {
    String_Copy(_DAT_800bf4a4,_DAT_800a2914);
    _DAT_800bf4b0 = 0x30;
  }
  if (_DAT_800bf4b2 != -1) {
    *_DAT_800bf4a8 = 0;
    _DAT_800bf4b2 = -1;
  }
  return;
}

