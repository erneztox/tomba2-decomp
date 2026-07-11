// FUN_0802a8a0

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0802a8a0(int param_1)

{
  if (*(char *)(param_1 + 0x2b) == '\x02') {
    if ((DAT_800bf80a == '\x01') &&
       (((DAT_800bf80b == 0x80 || (DAT_800bf80b == 0x92)) || (DAT_800bf80b == 0x7f)))) {
      *(ushort *)(param_1 + 0x60) = (ushort)DAT_800bf80b;
      _DAT_800bf844 = func_0x0006fb0c(param_1,DAT_800bf80b);
      if (_DAT_800bf844 != 0) {
        *(undefined1 *)(_DAT_800bf844 + 0x5e) = 0;
      }
      func_0x00040d68(param_1,0x8012c8bc);
      *(undefined1 *)(param_1 + 0x70) = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    if (*(char *)(param_1 + 0x2b) != '\x03') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    func_0x00041768(param_1,2,8);
    if (*(char *)(param_1 + 0x5e) == '\x04') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (*(char *)(param_1 + 0x5e) == '\x03') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    func_0x00042354(1,1);
    func_0x00040d68(param_1,0x8012c6bc);
    *(undefined1 *)(param_1 + 0x70) = 1;
    *(undefined1 *)(param_1 + 5) = 1;
  }
  return;
}

