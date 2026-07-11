// FUN_08047cb0

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_08047cb0(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x78) == '\0') {
    if ((*(ushort *)(param_1 + 0x72) & 1) == 0) {
      func_0x0006e1c0(7);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    DAT_800e806c = 7;
    if (*(short *)(param_1 + 0x66) == 0) {
      func_0x0006cbd0(0x800e8008,*(undefined4 *)(param_1 + 0x74));
      if (*(short *)(param_1 + 100) == 0) {
        return true;
      }
      *(undefined2 *)(param_1 + 0x4e) = _DAT_800e8042;
      *(undefined2 *)(param_1 + 0x50) = _DAT_800e8046;
      *(undefined2 *)(param_1 + 0x52) = _DAT_800e804a;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    func_0x0006cba8(0x1f8000dc);
    func_0x0006cc1c(0x800e8008,*(undefined4 *)(param_1 + 0x74),(int)*(short *)(param_1 + 0x66));
    if (*(short *)(param_1 + 100) != 0) {
      *(undefined2 *)(param_1 + 0x4e) = _DAT_800e8042;
      *(undefined2 *)(param_1 + 0x50) = _DAT_800e8046;
      *(undefined2 *)(param_1 + 0x52) = _DAT_800e804a;
    }
    if (*(short *)(param_1 + 0x68) == 0) {
      *(char *)(param_1 + 0x78) = *(char *)(param_1 + 0x78) + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else if (*(char *)(param_1 + 0x78) == '\x01') {
    if (*(short *)(param_1 + 100) != 0) {
      _DAT_800e8042 = *(undefined2 *)(param_1 + 0x4e);
      _DAT_800e8046 = *(undefined2 *)(param_1 + 0x50);
      _DAT_800e804a = *(undefined2 *)(param_1 + 0x52);
    }
    iVar1 = func_0x0006cdcc(0x800e8008);
    if (*(short *)(param_1 + 100) != 0) {
      *(undefined2 *)(param_1 + 0x4e) = _DAT_800e8042;
      *(undefined2 *)(param_1 + 0x50) = _DAT_800e8046;
      *(undefined2 *)(param_1 + 0x52) = _DAT_800e804a;
    }
    return iVar1 == 1;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

