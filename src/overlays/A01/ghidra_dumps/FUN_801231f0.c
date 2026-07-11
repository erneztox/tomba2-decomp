// FUN_801231f0

/* WARNING: Control flow encountered bad instruction data */

void FUN_801231f0(undefined1 *param_1)

{
  if ((byte)param_1[5] < 6) {
    *param_1 = 1;
    param_1[4] = 1;
  }
  else if (param_1[5] == 6) {
    if (param_1[6] == '\0') {
      *param_1 = 2;
      func_0x80042354(1,1);
      param_1[6] = param_1[6] + '\x01';
    }
    else if (param_1[6] != '\x01') {
      FUN_8012c29c();
      return;
    }
    *(short *)(*(int *)(param_1 + 0xc0) + 0x3a) =
         *(short *)(*(int *)(param_1 + 0xc0) + 0x3a) + -0x400;
    if (*(ushort *)(*(int *)(param_1 + 0xc0) + 0x3a) < 0x400) {
      DAT_800bf9fc = DAT_800bf9fc | 1;
      func_0x80027144(*(undefined4 *)(*(int *)(param_1 + 0xc0) + 0x40),param_1 + 0x2c,0x400,0xc);
      func_0x80074590(0xc,0,0);
      param_1[4] = 3;
      func_0x80074590(0x97,0,0);
    }
    func_0x80051844(param_1);
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

