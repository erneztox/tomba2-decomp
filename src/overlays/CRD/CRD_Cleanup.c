// CRD_Cleanup (CRD_Cleanup) - Card game cleanup

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void CRD_Cleanup(u8 *param_1)

{
  u8 bVar1;
  
  bVar1 = (u8)param_1[0x4a] < 3;
  if ((u8)param_1[0x4b] < 3) {
    bVar1 = bVar1 | 2;
  }
  if (bVar1 == 0) {
    param_1[0x44] = 0;
    if (_DAT_800bf4b0 != 0x31) {
      String_Copy(_DAT_800bf4a4,_DAT_800a2918);
      _DAT_800bf4b0 = 0x31;
    }
    if (_DAT_800bf4b2 != -1) {
      *_DAT_800bf4a8 = 0;
      _DAT_800bf4b2 = -1;
    }
  }
  else {
    if (param_1[0x44] == '\0') {
      param_1[0x44] = 1;
    }
    if ((((_g_PlayerFlags & 0x80) != 0) && ((bVar1 & 1) != 0)) && (param_1[0x44] != '\x01')) {
      Audio_PlaySoundEffect(0x15,0,0);
      param_1[0x44] = 1;
    }
    if ((((_g_PlayerFlags & 0x20) != 0) && ((bVar1 & 2) != 0)) && (param_1[0x44] != '\x02')) {
      Audio_PlaySoundEffect(0x15,0,0);
      param_1[0x44] = 2;
    }
    if ((param_1[0x44] & bVar1) == 0) {
      param_1[0x44] = bVar1;
    }
    if (_DAT_800bf4b0 != -1) {
      *_DAT_800bf4a4 = 0;
      _DAT_800bf4b0 = -1;
    }
    if (_DAT_800bf4b2 != 0x36) {
      String_Copy(_DAT_800bf4a8,_DAT_800a292c);
      _DAT_800bf4b2 = 0x36;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  if ((_g_PlayerFlags & 0x2000) == 0) {
    if ((_g_PlayerFlags & 0x1000) == 0) {
      if (((_g_PlayerFlags & 0x4000) != 0) && (param_1[0x44] != '\0')) {
        Audio_PlaySoundEffect(0x11,0,0);
        param_1->anim_id = param_1[0x44] + -1;
        param_1[0x45] = param_1[0x44];
        if (_DAT_800bf4b0 != 0x30) {
          String_Copy(_DAT_800bf4a4,_DAT_800a2914);
          _DAT_800bf4b0 = 0x30;
        }
        if (_DAT_800bf4b2 != -1) {
          *_DAT_800bf4a8 = 0;
          _DAT_800bf4b2 = -1;
        }
        *param_1 = 2;
        param_1->kind = 0;
        param_1->flags = 0;
        param_1[0x3f] = 0x10;
      }
      return;
    }
  }
  else if ((param_1[0x3c] & 1) == 0) {
    g_OverlayEntity->angle_offset = 2;
    halt_baddata();
  }
  g_OverlayEntity->angle_offset = 3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

