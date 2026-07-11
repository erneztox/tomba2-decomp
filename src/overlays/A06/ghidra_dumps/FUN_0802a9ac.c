// FUN_0802a9ac

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_0802a9ac(int param_1)

{
  if (*(char *)(param_1 + 0x78) == '\0') {
    *(undefined1 *)(param_1 + 0x78) = 1;
    DAT_800e806c = 1;
    _DAT_800e8076 = 0x180;
    _DAT_800e8078 = 0x180;
    _DAT_800e8074 = (undefined2)((_DAT_801003f8 * 0x23) / 10);
    func_0x0006cba8(&DAT_800e7eac);
  }
  else if (*(char *)(param_1 + 0x78) == '\x01') {
    return DAT_800e806e == '\x03';
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

