// FUN_00002918

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_00002918(int param_1)

{
  if (*(char *)(param_1 + 0x78) == '\0') {
    *(undefined1 *)(param_1 + 0x78) = 1;
    func_0x0006e1c0(1);
    _DAT_800e8076 = 0x80;
    _DAT_800e8078 = 0x400;
    _DAT_800e8074 = _DAT_801003f8 * 5;
    _DAT_800e8042 = *(undefined2 *)(param_1 + 0x2e);
    _DAT_800e8046 = *(short *)(param_1 + 0x32) + 0x140;
    _DAT_800e804a = *(short *)(param_1 + 0x36) + -400;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (*(char *)(param_1 + 0x78) != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return DAT_800e806e == '\x03';
}

