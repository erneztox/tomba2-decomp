// FUN_0803db40

/* WARNING: Control flow encountered bad instruction data */

void FUN_0803db40(int param_1)

{
  byte bVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 5) == '\0') {
    iVar2 = func_0x0007778c(param_1);
    if (iVar2 == 0) {
      return;
    }
    if (*(char *)(param_1 + 0x2b) == '\x03') {
      func_0x00042354(1,1);
      func_0x00040d68(param_1,0x801420b0);
      *(undefined1 *)(param_1 + 0x70) = 2;
      *(undefined1 *)(param_1 + 6) = 0;
      *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
      halt_baddata();
    }
  }
  else {
    if (*(char *)(param_1 + 5) != '\x01') {
      halt_baddata();
    }
    *(undefined1 *)(param_1 + 1) = 1;
    func_0x00077e7c(param_1);
    if (*(char *)(param_1 + 0x70) == -1) {
      bVar1 = *(byte *)(param_1 + 6);
      if (bVar1 == 1) {
        *(undefined1 *)(param_1 + 5) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (bVar1 < 2) {
        if (bVar1 != 0) {
          halt_baddata();
        }
        if ((DAT_800bfa07 & 0x40) == 0) {
          if ((DAT_800bfa07 & 4) == 0) {
            DAT_800bfa07 = DAT_800bfa07 | 4;
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          *(undefined1 *)(param_1 + 0x7a) = 5;
          func_0x00040d68(param_1,0x80142180);
        }
        else {
          if ((DAT_800bfa07 & 0x10) == 0) {
            DAT_800bfa07 = DAT_800bfa07 | 0x10;
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          *(undefined1 *)(param_1 + 0x7a) = 7;
          func_0x00040d68(param_1,0x801420c0);
        }
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (bVar1 != 2) {
        halt_baddata();
      }
      if (DAT_800bfae2 != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      func_0x00040d68(param_1,0x800a3e38);
      *(undefined1 *)(param_1 + 6) = 1;
      *(undefined1 *)(param_1 + 0x70) = 2;
    }
  }
  func_0x00041098(param_1);
  func_0x0004190c(param_1);
  return;
}

