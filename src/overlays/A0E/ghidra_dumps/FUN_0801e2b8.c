// FUN_0801e2b8

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_0801e2b8(int param_1)

{
  if (*(char *)(param_1 + 0x78) == '\0') {
    *(undefined1 *)(param_1 + 0x78) = 1;
    func_0x0006e1c0(8);
    _DAT_800e8042 = *(undefined2 *)(param_1 + 0x2e);
    _DAT_800e8046 = *(short *)(param_1 + 0x32) + 0x4b0;
    _DAT_800e804a = *(undefined2 *)(param_1 + 0x36);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (*(char *)(param_1 + 0x78) != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return DAT_800e806e == '\x03';
}

