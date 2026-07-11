// FUN_08012088

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08012088(undefined1 *param_1)

{
  ushort uVar1;
  
  if (DAT_800bf80d == '\0') {
    if (DAT_800bf871 == '\a') {
      uVar1 = *(ushort *)(param_1 + 0x6a);
      if ((uVar1 & 0xf00) == 0x700) {
        DAT_1f800137 = 2;
        DAT_800bf80f = 2;
        DAT_800bf839 = 3;
        func_0x0005082c(0,0,0);
        if (uVar1 >> 0xc == 1) {
          _DAT_800bf83a = 0x408;
        }
        else {
          _DAT_800bf83a = 0x402;
        }
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    else if (((int)*(short *)(param_1 + 0x6a) & 0x8000U) == 0) {
      if ((((param_1[0x16a] != '\x06') && ((*(ushort *)(param_1 + 0x17e) & 0x60) != 0)) &&
          (param_1[0x78] == '\0')) && (0x26 < (byte)param_1[0x2a])) {
        DAT_800bf819 = 4;
      }
    }
    else {
      DAT_800bf81e = 0;
      if ((*(ushort *)(param_1 + 0x6a) & 0xf00) == 0x700) {
        *param_1 = 3;
        param_1[4] = 2;
        *(undefined2 *)(param_1 + 0x6a) = 0;
        param_1[5] = 5;
        param_1[6] = 0;
        param_1[7] = 0;
        halt_baddata();
      }
    }
  }
  return;
}

