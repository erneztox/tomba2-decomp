// FUN_080275c8

/* WARNING: Control flow encountered bad instruction data */

void FUN_080275c8(int param_1)

{
  if (*(char *)(param_1 + 0x2b) == '\x03') {
    func_0x00040d68(param_1,0x8012b504);
    *(undefined1 *)(param_1 + 0x70) = 1;
    func_0x00041768(param_1,0,8);
    func_0x00042354(1,1);
    *(undefined1 *)(param_1 + 5) = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (DAT_800bfa0b == '\x02') {
    DAT_800bfa0b = '\0';
    func_0x00040d68(param_1,0x8012b5c8);
    *(undefined1 *)(param_1 + 0x70) = 1;
    *(undefined1 *)(param_1 + 0x5e) = 3;
    *(undefined1 *)(param_1 + 5) = 2;
  }
  return;
}

