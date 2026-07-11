// CRD_OpponentTurn (CRD_OpponentTurn) - Opponent turn handler

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void CRD_OpponentTurn(u8 *param_1)

{
  int iVar1;
  
  if (param_1[0x3e] != '\0') {
    iVar1 = *(int *)(param_1 + 8);
    if (param_1[0x3e] == '\x01') {
      if (_DAT_800bf4b0 != 0x49) {
        String_Copy(_DAT_800bf4a4,_DAT_800a2978);
        _DAT_800bf4b0 = 0x49;
      }
      if (_DAT_800bf4b2 != -1) {
        *_DAT_800bf4a8 = 0;
        _DAT_800bf4b2 = -1;
      }
      param_1->kind = 0;
      param_1->flags = 0;
      *param_1 = 0xd;
      param_1[(u8)param_1->anim_id + 0x48] =
           *(u8 *)(iVar1 + (uint)(u8)param_1->sub_anim_id * 0x3c + 4);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (_DAT_800bf4b0 != 0x48) {
      String_Copy(_DAT_800bf4a4,_DAT_800a2974);
      _DAT_800bf4b0 = 0x48;
    }
    if (_DAT_800bf4b2 != -1) {
      *_DAT_800bf4a8 = 0;
      _DAT_800bf4b2 = -1;
    }
    param_1[0x50] = 0x1e;
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
    param_1->kind = 0;
    param_1->flags = 0;
    *param_1 = 0xf;
  }
  return;
}

