// FUN_080106e0

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_080106e0(undefined1 *param_1)

{
  bool bVar1;
  ushort uVar2;
  
  if (DAT_800bf80d == '\0') {
    if (_DAT_800bf850 == 0x80) {
      bVar1 = false;
      if (_DAT_1f800260 != 0) {
        bVar1 = false;
        if ((int)*(short *)(param_1 + 0x2e) <=
            (int)*(short *)(_DAT_1f800260 + 0x2c) + (int)*(short *)(param_1 + 0x80)) {
          *(short *)(param_1 + 0x2e) = *(short *)(_DAT_1f800260 + 0x2c) + *(short *)(param_1 + 0x80)
          ;
          bVar1 = true;
        }
      }
      if (bVar1) {
        if ((byte)param_1[0x2a] < 0xf) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        param_1[0x2b] = (char)(*(ushort *)(param_1 + 0x140) >> 4);
        func_0x00022d08(param_1,0,1,1);
      }
    }
    uVar2 = *(ushort *)(param_1 + 0x6a) & 0xf00;
    if ((*(ushort *)(param_1 + 0x6a) & 0x8000) != 0) {
      DAT_800bf81e = 0;
      if ((uVar2 == 0x100) || (uVar2 == 0x200)) {
        if ((byte)param_1[4] < 2) {
          if ((*(ushort *)(param_1 + 0x17e) & 0x100) == 0) {
            *param_1 = 3;
            param_1[4] = 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          if (((param_1[0x146] != '\x04') || (DAT_1f80027b == '\0')) && (param_1[0x181] == '\0')) {
            if (param_1[5] == '\x06') {
              *(undefined2 *)(param_1 + 0x6a) = 0;
              param_1[5] = 0x32;
              param_1[0x149] = param_1[0x149] & 1 | 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
            param_1[5] = 0x1d;
            param_1[6] = 0;
            param_1[4] = 1;
            param_1[7] = 0;
            if (param_1[0x144] == '\x01') {
              param_1[0x144] = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
          }
        }
      }
      else if (uVar2 == 0x700) {
        *param_1 = 3;
        param_1[4] = 2;
        *(undefined2 *)(param_1 + 0x6a) = 0;
        param_1[5] = 5;
        param_1[6] = 0;
        param_1[7] = 0;
      }
    }
  }
  return;
}

