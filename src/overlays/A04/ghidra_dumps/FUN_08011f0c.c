// FUN_08011f0c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08011f0c(int param_1)

{
  if (DAT_800bf817 == '\0') {
    if (_DAT_1f8000da < 0x2141) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (_DAT_1f8000da < 0x2554) {
      return;
    }
    _DAT_1f8000da = 0x2554;
    DAT_800e806e = DAT_800e806e | 1;
  }
  else {
    if (DAT_800bf817 != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (((*(byte *)(param_1 + 0x145) & 1) == 0) &&
       ((int)_DAT_800bf812 - (int)*(short *)(param_1 + 0x62) <= (int)*(short *)(param_1 + 0x32))) {
      *(short *)(param_1 + 0x32) = _DAT_800bf812 - *(short *)(param_1 + 0x62);
      func_0x00022c78(param_1);
      *(byte *)(param_1 + 0x29) = *(byte *)(param_1 + 0x29) | 0x80;
    }
    if (((DAT_1f800137 != '\0') || (-0x2e2d < *(short *)(param_1 + 0x32))) ||
       (*(short *)(param_1 + 0x36) < 0x357b)) {
      return;
    }
    *(undefined2 *)(param_1 + 0x36) = 0x357a;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

