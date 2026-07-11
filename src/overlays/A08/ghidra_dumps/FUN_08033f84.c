// FUN_08033f84

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08033f84(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x2b) == '\x02') {
    if (((int)_DAT_800e7ffe & 0x8200U) != 0) {
      return;
    }
    if (DAT_800bf80a != '\x01') {
      return;
    }
    iVar1 = func_0x0012d1ec(param_1);
    if (iVar1 == 0) {
      return;
    }
    _DAT_800bf844 = func_0x0006fb0c(param_1,DAT_800bf80b);
    if (_DAT_800bf844 != 0) {
      *(undefined1 *)(_DAT_800bf844 + 0x5e) = 0;
    }
    _DAT_800e7eae = 0x16c1;
    _DAT_800e7eb6 = 0x307c;
  }
  else if (*(char *)(param_1 + 0x2b) != '\x03') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  func_0x00042354(1,1);
  func_0x00040d68(param_1,0x800a3d90);
  *(undefined1 *)(param_1 + 0x70) = 1;
  *(undefined1 *)(param_1 + 5) = 1;
  return;
}

