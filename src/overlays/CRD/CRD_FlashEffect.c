// CRD_FlashEffect (CRD_FlashEffect) - Card flash/highlight effect

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void CRD_FlashEffect(u8 *param_1)

{
  int iVar1;
  
  if (param_1[(u8)param_1->anim_id + 0x4a] != '\0') {
    if (_DAT_800bf4b0 != 0x30) {
      String_Copy(_DAT_800bf4a4,_DAT_800a2914);
      _DAT_800bf4b0 = 0x30;
    }
    if (_DAT_800bf4b2 != -1) {
      *_DAT_800bf4a8 = 0;
      _DAT_800bf4b2 = -1;
    }
    param_1[0x50] = 0;
    param_1[0x44] = 0;
    param_1[0x4b] = 0xfc;
    param_1[0x4a] = 0xfc;
    param_1[(u8)param_1->anim_id + 0x48] = 0;
    param_1[(u8)param_1->anim_id + 0x4e] = 0xff;
    param_1->anim_id = 0xff;
    param_1->sub_anim_id = 0;
    param_1[0x52] = 0;
    param_1->rot_x = 0;
    param_1->rot_y = 0;
    param_1->sub_type = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (((_g_PlayerFlags & 0x80) != 0) && (param_1[0x53] != '\0')) {
    Audio_PlaySoundEffect(0x15,0,0);
    param_1[0x53] = 0;
  }
  if (((_g_PlayerFlags & 0x20) != 0) && (param_1[0x53] == '\0')) {
    Audio_PlaySoundEffect(0x15,0,0);
    param_1[0x53] = 1;
  }
  iVar1 = -1;
  if ((_g_PlayerFlags & 0x4000) == 0) {
    if ((_g_PlayerFlags & 0x2000) != 0) {
      iVar1 = 1;
    }
    if (iVar1 == 0) {
      Audio_PlaySoundEffect(0x11,0,0);
      if (_DAT_800bf4b0 != 0x3b) {
        String_Copy(_DAT_800bf4a4,_DAT_800a2940);
        _DAT_800bf4b0 = 0x3b;
      }
      if (_DAT_800bf4b2 != -1) {
        *_DAT_800bf4a8 = 0;
        _DAT_800bf4b2 = -1;
      }
      *param_1 = 8;
      param_1->kind = 0;
      param_1->flags = 0;
      param_1[0x3f] = 4;
    }
    else if (iVar1 == 1) {
      Audio_PlaySoundEffect(0x14,0,0);
      if (_DAT_800bf4b0 != -1) {
        *_DAT_800bf4a4 = 0;
        _DAT_800bf4b0 = -1;
      }
      if (_DAT_800bf4b2 != 0x38) {
        String_Copy(_DAT_800bf4a8,_DAT_800a2934);
        _DAT_800bf4b2 = 0x38;
      }
      param_1->kind = 0;
      param_1->flags = 0;
      *param_1 = 6;
      return;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

