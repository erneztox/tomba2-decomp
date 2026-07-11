// CRD_RuleCheck (CRD_RuleCheck) - Rule/special card check

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void CRD_RuleCheck(undefined1 *param_1)

{
  if (param_1[0x3e] != '\0') {
    if (param_1[0x3e] == '\x01') {
      if (_DAT_800bf4b0 != 0x30) {
        func_0x0009a5b0(_DAT_800bf4a4,_DAT_800a2914);
        _DAT_800bf4b0 = 0x30;
      }
      if (_DAT_800bf4b2 != -1) {
        *_DAT_800bf4a8 = 0;
        _DAT_800bf4b2 = -1;
      }
      *param_1 = 2;
      param_1[2] = 0;
      param_1[1] = 0;
      param_1[0x3f] = 0x10;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    param_1[0x50] = 0;
    param_1[0x44] = 0;
    param_1[0x4b] = 0xfc;
    param_1[0x4a] = 0xfc;
    param_1[(byte)param_1[0x46] + 0x48] = 0;
    param_1[(byte)param_1[0x46] + 0x4e] = 0xff;
    param_1[0x46] = 0xff;
    param_1[0x47] = 0;
    param_1[0x52] = 0;
    *(undefined2 *)(param_1 + 0x54) = 0;
    *(undefined2 *)(param_1 + 0x56) = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[1] = 0;
    *param_1 = 0xf;
  }
  return;
}

