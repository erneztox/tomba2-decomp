// FUN_080404bc

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_080404bc(int param_1)

{
  byte bVar1;
  
  if (*(char *)(param_1 + 5) == '\0') {
    if (DAT_800bf816 != '\0') {
      return;
    }
    func_0x0007778c(param_1);
    if (*(char *)(param_1 + 0x2b) == '\x03') {
      func_0x00042354(1,2);
      func_0x00040d68(param_1,0x800a3d70);
      *(undefined1 *)(param_1 + 0x70) = 2;
      *(undefined1 *)(param_1 + 6) = 0;
      *(undefined1 *)(param_1 + 5) = 1;
      halt_baddata();
    }
  }
  else {
    if (*(char *)(param_1 + 5) != '\x01') {
      halt_baddata();
    }
    if (DAT_800bf816 == '\0') {
      *(undefined1 *)(param_1 + 1) = 1;
      func_0x00077e7c(param_1);
    }
    func_0x00041098(param_1);
    if ((*(char *)(param_1 + 0x46) == '\x17') && ((_DAT_1f80017c & 0xf) == 0)) {
      func_0x00074590(0x35,0x14,0);
    }
    if (*(char *)(param_1 + 0x70) == -1) {
      bVar1 = *(byte *)(param_1 + 6);
      if (bVar1 == 1) {
        if (DAT_800bf937 != '\0') {
          if (DAT_800bf937 == -1) {
            *(undefined1 *)(param_1 + 0x7a) = 0x14;
            func_0x00040d68(param_1,0x80146ec8);
            *(undefined1 *)(param_1 + 0x70) = 2;
            *(undefined1 *)(param_1 + 6) = 3;
          }
          else {
            *(undefined1 *)(param_1 + 0x7a) = 7;
            func_0x00040d68(param_1,0x80146ed8);
            *(undefined1 *)(param_1 + 0x70) = 2;
            *(undefined1 *)(param_1 + 6) = 2;
          }
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (bVar1 < 2) {
        if (bVar1 != 0) {
          halt_baddata();
        }
        func_0x00040d68(param_1,0x80146ea8);
        *(undefined1 *)(param_1 + 0x70) = 2;
        *(undefined1 *)(param_1 + 6) = 1;
        halt_baddata();
      }
      if (bVar1 == 2) {
        if (DAT_800bfad8 == '\0') {
          if (DAT_800bfad9 == '\0') {
            if (DAT_800bfada == '\0') {
              if ((DAT_800bfa46 & 0xf) == 0xf) {
                func_0x00040d68(param_1,0x801472a8);
                *(undefined1 *)(param_1 + 6) = 3;
                *(undefined1 *)(param_1 + 0x70) = 2;
                halt_baddata();
              }
              func_0x00040d68(param_1,0x80147290);
            }
            else {
              *(undefined1 *)(param_1 + 0x47) = 2;
              func_0x00040d68(param_1,0x80147250);
            }
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          *(undefined1 *)(param_1 + 0x47) = 1;
        }
        else {
          *(undefined1 *)(param_1 + 0x47) = 0;
        }
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (bVar1 != 3) {
        halt_baddata();
      }
      *(undefined1 *)(param_1 + 5) = 0;
    }
  }
  func_0x0004190c(param_1);
  return;
}

