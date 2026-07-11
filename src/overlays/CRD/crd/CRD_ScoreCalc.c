// CRD_ScoreCalc (CRD_ScoreCalc) - Score calculation

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void CRD_ScoreCalc(undefined1 *param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  
  bVar1 = param_1[2];
  uVar3 = (uint)(byte)param_1[0x46] << 4;
  if (bVar1 != 1) {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      func_0x0009ba90(uVar3 & 0xf0);
      param_1[0x43] = 0;
      param_1[(byte)param_1[0x46] + 0x4c] = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (bVar1 == 2) {
      func_0x00080840(_DAT_800bf4b4);
      func_0x00080840(_DAT_800bf4b8);
      func_0x00080840(_DAT_800bf4bc);
      func_0x00080840(_DAT_800bf4c0);
      func_0x0009baa0(uVar3 & 0xf0);
      param_1[0x43] = 0;
      param_1[2] = param_1[2] + '\x01';
      halt_baddata();
    }
    if (bVar1 != 3) {
      halt_baddata();
    }
    iVar2 = func_0x00080840(_DAT_800bf4b4);
    bVar1 = 1;
    if (iVar2 != 1) {
      iVar2 = func_0x00080840(_DAT_800bf4b8);
      bVar1 = 2;
      if (iVar2 != 1) {
        iVar2 = func_0x00080840(_DAT_800bf4bc);
        bVar1 = 3;
        if (iVar2 != 1) {
          iVar2 = func_0x00080840(_DAT_800bf4c0);
          bVar1 = 4;
          if (iVar2 != 1) {
            DAT_800bf4db = DAT_800bf4db + '\x01';
            bVar1 = 0;
            if (DAT_800bf4db == -1) {
              bVar1 = 2;
            }
          }
        }
      }
    }
    param_1[0x3e] = bVar1;
    if (bVar1 == 0) {
      return;
    }
    if (bVar1 == 3) {
      param_1[(byte)param_1[0x46] + 0x4a] = 0xfc;
    }
    else {
      if (bVar1 < 4) {
        if (bVar1 != 2) {
          param_1[0x3f] = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if (_DAT_800bf4b0 != 0x35) {
          func_0x0009a5b0(_DAT_800bf4a4,_DAT_800a2928);
          _DAT_800bf4b0 = 0x35;
        }
        if (_DAT_800bf4b2 != -1) {
          *_DAT_800bf4a8 = 0;
          _DAT_800bf4b2 = -1;
        }
        param_1[0x50] = 0x1e;
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
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if ((bVar1 == 4) && (param_1[(byte)param_1[0x46] + 0x4c] == '\0')) {
        param_1[0x3e] = 0;
        func_0x0009ba90(uVar3 & 0xf0);
        param_1[0x43] = 0;
        param_1[(byte)param_1[0x46] + 0x4c] = param_1[(byte)param_1[0x46] + 0x4c] + '\x01';
        param_1[2] = 1;
        halt_baddata();
      }
    }
LAB_00002490:
    param_1[0x3f] = 0;
    param_1[0x40] = 0;
    return;
  }
  iVar2 = func_0x00080840(_DAT_800bf4b4);
  bVar1 = 1;
  if (iVar2 != 1) {
    iVar2 = func_0x00080840(_DAT_800bf4b8);
    bVar1 = 2;
    if (iVar2 != 1) {
      iVar2 = func_0x00080840(_DAT_800bf4bc);
      bVar1 = 3;
      if (iVar2 != 1) {
        iVar2 = func_0x00080840(_DAT_800bf4c0);
        bVar1 = 4;
        if (iVar2 != 1) {
          DAT_800bf4db = DAT_800bf4db + '\x01';
          bVar1 = 0;
          if (DAT_800bf4db == -1) {
            bVar1 = 2;
          }
        }
      }
    }
  }
  param_1[0x3e] = bVar1;
  if (bVar1 == 0) {
    return;
  }
  if (bVar1 == 2) {
    param_1[0x3f] = 0;
    param_1[0x40] = 0;
    if (_DAT_800bf4b0 != 0x35) {
      func_0x0009a5b0(_DAT_800bf4a4,_DAT_800a2928);
      _DAT_800bf4b0 = 0x35;
    }
    if (_DAT_800bf4b2 != -1) {
      *_DAT_800bf4a8 = 0;
      _DAT_800bf4b2 = -1;
    }
    param_1[0x50] = 0x1e;
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
    halt_baddata();
  }
  if (bVar1 < 3) {
    if (bVar1 != 1) {
      halt_baddata();
    }
    if (param_1[(byte)param_1[0x46] + 0x4e] != -1) goto LAB_00002490;
  }
  else if (bVar1 != 4) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  func_0x00080840(_DAT_800bf4c4);
  func_0x00080840(_DAT_800bf4c8);
  func_0x00080840(_DAT_800bf4cc);
  func_0x00080840(_DAT_800bf4d0);
  func_0x0009bab0(uVar3 & 0xf0);
  do {
    iVar2 = func_0x00080840(_DAT_800bf4c4);
    if (((iVar2 == 1) || (iVar2 = func_0x00080840(_DAT_800bf4c8), iVar2 == 1)) ||
       (iVar2 = func_0x00080840(_DAT_800bf4cc), iVar2 == 1)) break;
    iVar2 = func_0x00080840(_DAT_800bf4d0);
  } while (iVar2 != 1);
  if (param_1[0x3e] != '\x01') {
    param_1[(byte)param_1[0x46] + 0x48] = 0;
  }
  param_1[(byte)param_1[0x46] + 0x4e] = 0xff;
  param_1[0x3e] = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

