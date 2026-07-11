// FUN_080118b8

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_080118b8(byte *param_1)

{
  short sVar1;
  int iVar2;
  
  sVar1 = _DAT_800bf812;
  if (DAT_800bf816 == '\0') {
    if (((2 < DAT_800bf871 - 1) && (DAT_1f800137 == '\0')) && (DAT_800bf80d == '\0')) {
      if (((int)*(short *)(param_1 + 0x6a) & 0x8000U) == 0) {
        if ((((_DAT_800bfe56 & 0x20) == 0) && ((*(ushort *)(param_1 + 0x17e) & 0x640) == 0)) &&
           ((0x1928 < *(short *)(param_1 + 0x36) && ((param_1[0x177] & 2) == 0)))) {
          if ((DAT_800bfad5 == '\0') && (iVar2 = func_0x00022d08(param_1,0,1,1), iVar2 != 0)) {
            param_1[7] = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          param_1[7] = 1;
          param_1[4] = 2;
          param_1[5] = 6;
          param_1[6] = 0;
          *param_1 = *param_1 | 8;
        }
      }
      else {
        DAT_800bf81e = 0;
        if ((*(ushort *)(param_1 + 0x6a) & 0xf00) == 0x700) {
          *param_1 = 3;
          param_1[4] = 2;
          param_1[0x6a] = 0;
          param_1[0x6b] = 0;
          param_1[5] = 5;
          param_1[6] = 0;
          param_1[7] = 0;
          halt_baddata();
        }
      }
    }
  }
  else if (*param_1 != 2) {
    if (DAT_800bf817 != '\0') {
      if (DAT_800bf817 != '\x02') {
        return;
      }
      if (DAT_800bf8cd != -1) {
        if (*(short *)(param_1 + 0x2e) < 0x2d2c) {
          param_1[0x2e] = 0x2b;
          param_1[0x2f] = 0x2d;
        }
        if (0x4b33 < *(short *)(param_1 + 0x36)) {
          param_1[0x36] = 0x34;
          param_1[0x37] = 0x4b;
        }
      }
    }
    if (((param_1[0x145] & 1) == 0) &&
       ((int)sVar1 - (int)*(short *)(param_1 + 0x62) <= (int)*(short *)(param_1 + 0x32))) {
      *(short *)(param_1 + 0x32) = sVar1 - *(short *)(param_1 + 0x62);
      func_0x00022c78(param_1);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  return;
}

