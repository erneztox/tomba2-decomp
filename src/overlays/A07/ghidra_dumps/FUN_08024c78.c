// FUN_08024c78

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08024c78(int param_1)

{
  bool bVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 0x2b) == '\x02') {
    if (((int)_DAT_800e7ffe & 0x8200U) != 0) {
      return;
    }
    if (DAT_800bf80a != '\x01') {
      return;
    }
    iVar2 = func_0x0011deb8(param_1);
    if (iVar2 == 0) {
      return;
    }
    _DAT_800bf844 = func_0x0006fb0c(param_1,DAT_800bf80b);
    if (_DAT_800bf844 != 0) {
      *(undefined1 *)(_DAT_800bf844 + 0x5e) = 0;
    }
    bVar1 = true;
  }
  else {
    bVar1 = false;
    if (*(char *)(param_1 + 0x2b) != '\x03') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  if (!bVar1) {
    func_0x00040d68(param_1,0x801333f0);
    *(undefined1 *)(param_1 + 0x70) = 1;
    *(undefined1 *)(param_1 + 5) = 1;
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

