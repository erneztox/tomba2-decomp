// FUN_08015414

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08015414(undefined1 *param_1)

{
  if (((byte)param_1[0x46] != 0xff) && (param_1[(byte)param_1[0x46] + 0x4a] != '\0')) {
    if (_DAT_800bf4b0 != 0x30) {
      func_0x0009a5b0(_DAT_800bf4a4,_DAT_800a2914);
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
    param_1[(byte)param_1[0x46] + 0x48] = 0;
    param_1[(byte)param_1[0x46] + 0x4e] = 0xff;
    param_1[0x46] = 0xff;
    param_1[0x47] = 0;
    param_1[0x52] = 0;
    *(undefined2 *)(param_1 + 0x54) = 0;
    *(undefined2 *)(param_1 + 0x56) = 0;
    param_1[3] = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((_DAT_800e7e68 & 0x6000) != 0) {
    func_0x00074590(0x11,0,0);
    param_1[2] = 0;
    param_1[1] = 0;
    *param_1 = param_1[3];
  }
  return;
}

