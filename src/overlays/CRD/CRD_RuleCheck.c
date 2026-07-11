// CRD_RuleCheck (CRD_RuleCheck) - Rule/special card check

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void CRD_RuleCheck(u8 *param_1)

{
  if (param_1[0x3e] != '\0') {
    if (param_1[0x3e] == '\x01') {
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
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
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
    param_1->kind = 0;
    param_1->flags = 0;
    *param_1 = 0xf;
  }
  return;
}

