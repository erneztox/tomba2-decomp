// FUN_080278ac

/* WARNING: Control flow encountered bad instruction data */

void FUN_080278ac(int param_1)

{
  byte bVar1;
  
  if (*(char *)(param_1 + 5) == '\0') {
    if (DAT_1f800137 != '\0') goto LAB_08027a7c;
    DAT_800bfa01 = DAT_800bfa01 | 2;
    func_0x00042354(1,1);
    func_0x00040d68(param_1,0x800a3cf0);
    *(undefined1 *)(param_1 + 0x70) = 2;
    *(undefined1 *)(param_1 + 6) = 0;
    *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
  }
  else if (*(char *)(param_1 + 5) == '\x01') {
    if (1 < *(byte *)(param_1 + 6)) {
      *(undefined1 *)(param_1 + 1) = 1;
      func_0x00077e7c(param_1);
    }
    if (*(char *)(param_1 + 0x70) == -1) {
      bVar1 = *(byte *)(param_1 + 6);
      if (bVar1 == 1) {
        *(undefined2 *)(param_1 + 0x2e) = 0x2c24;
        *(undefined2 *)(param_1 + 0x32) = 0xefef;
        *(undefined2 *)(param_1 + 0x36) = 0x2648;
        *(undefined2 *)(param_1 + 0x56) = 0;
        func_0x00126c18(param_1);
        func_0x00040d68(param_1,0x8012b7e0);
      }
      else if (bVar1 < 2) {
        if (bVar1 == 0) {
          func_0x00040d68(param_1,0x8012b688);
        }
      }
      else if (bVar1 == 2) {
        if (DAT_800bf8c0 == -1) {
          *(undefined2 *)(param_1 + 0x80) = 0x5a;
          *(undefined2 *)(param_1 + 0x82) = 0xb4;
          func_0x00040d68(param_1,0x8012b8a8);
        }
        else {
          func_0x00040d68(param_1,0x8012b918);
        }
      }
      else if (bVar1 == 3) {
        if (DAT_800bf8c0 != -1) {
          *(undefined1 *)(param_1 + 0xbf) = 1;
          *(undefined1 *)(param_1 + 5) = 0;
          *(undefined1 *)(param_1 + 0x70) = 2;
          *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
          goto LAB_08027a7c;
        }
        *(undefined1 *)(param_1 + 4) = 2;
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
LAB_08027a7c:
    func_0x00041098(param_1);
    func_0x0004190c(param_1);
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

