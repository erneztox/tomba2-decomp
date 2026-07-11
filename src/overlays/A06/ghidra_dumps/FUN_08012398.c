// FUN_08012398

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08012398(byte *param_1)

{
  undefined2 uVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  
  if ((*param_1 != 6) && (DAT_800bf80d == '\0')) {
    if (DAT_1f800253 == '\x02') {
      param_1[0x6a] = 0;
      param_1[0x6b] = 0x89;
    }
    if ((*(ushort *)(param_1 + 0x17e) & 0x200) == 0) {
      func_0x0010b1f8(param_1);
    }
    uVar2 = *(ushort *)(param_1 + 0x6a) & 0xf00;
    if ((*(ushort *)(param_1 + 0x6a) & 0x8000) != 0) {
      DAT_800bf81e = 0;
      if ((uVar2 == 0x100) || (uVar2 == 0x200)) {
        if ((param_1[5] != 0x18) && (param_1[4] < 2)) {
          if (((_DAT_800bfe56 & 0x40) == 0) || ((*(ushort *)(param_1 + 0x17e) & 0x100) == 0)) {
            *param_1 = 3;
            param_1[4] = 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          if ((param_1[0x181] == 0) && ((param_1[0x146] != 4 || (DAT_1f80027b == '\0')))) {
            if (param_1[5] == 6) {
              param_1[0x6a] = 0;
              param_1[0x6b] = 0;
              param_1[5] = 0x32;
              param_1[0x149] = param_1[0x149] & 1 | 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
            param_1[5] = 0x1d;
            param_1[6] = 0;
            param_1[4] = 1;
            param_1[0x16a] = 0;
            param_1[7] = 0;
            if (param_1[0x144] == 1) {
              param_1[0x144] = 0;
              halt_baddata();
            }
          }
        }
      }
      else {
        if (uVar2 == 0x700) {
          *param_1 = 3;
          param_1[0x6a] = 0;
          param_1[0x6b] = 0;
          param_1[4] = 2;
          param_1[5] = 5;
          param_1[6] = 0;
          param_1[7] = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if (uVar2 == 0x900) {
          param_1[5] = 3;
          param_1[0x6a] = 0;
          param_1[0x6b] = 0;
          param_1[4] = 2;
          param_1[6] = 0;
          param_1[7] = 0;
          uVar3 = *(short *)(param_1 + 0x36) < 15000 ^ 1;
          *param_1 = *param_1 | 4;
          iVar4 = uVar3 * 4;
          *(undefined2 *)(param_1 + 0x7a) = *(undefined2 *)(uVar3 * 8 + -0x7febdd60);
          *(undefined2 *)(param_1 + 0x7c) = *(undefined2 *)((iVar4 + 1) * 2 + -0x7febdd60);
          *(undefined2 *)(param_1 + 0x7e) = *(undefined2 *)((iVar4 + 2) * 2 + -0x7febdd60);
          uVar1 = *(undefined2 *)((iVar4 + 3) * 2 + -0x7febdd60);
          param_1[0x2a] = (byte)((ushort)uVar1 >> 8);
          param_1[0x147] = (byte)uVar1 & 1;
        }
      }
    }
  }
  return;
}

