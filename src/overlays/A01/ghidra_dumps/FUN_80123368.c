// FUN_80123368

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80123368(undefined1 *param_1)

{
  if (param_1[5] == '\0') {
    if (DAT_800bf9fa == '\x17') {
      *param_1 = 2;
      *(short *)(param_1 + 0x2e) =
           (short)((*(int *)(_DAT_800e7f50 + 0x2c) + *(int *)(_DAT_800e7f5c + 0x2c)) / 2);
      *(short *)(param_1 + 0x32) =
           (short)((*(int *)(_DAT_800e7f50 + 0x30) + *(int *)(_DAT_800e7f5c + 0x30)) / 2);
      *(short *)(param_1 + 0x36) =
           (short)((*(int *)(_DAT_800e7f50 + 0x34) + *(int *)(_DAT_800e7f5c + 0x34)) / 2);
      FUN_8012c3f8();
      return;
    }
    *param_1 = 1;
    *(undefined4 *)(param_1 + 0x2c) = 0x46e60000;
    *(undefined4 *)(param_1 + 0x30) = 0xe53e0000;
    *(undefined4 *)(param_1 + 0x34) = 0x23400000;
    param_1[5] = param_1[5] + '\x01';
  }
  else if (param_1[5] != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  func_0x8007778c(param_1);
  return;
}

