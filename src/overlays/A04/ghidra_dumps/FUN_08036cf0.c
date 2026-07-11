// FUN_08036cf0

/* WARNING: Control flow encountered bad instruction data */

void FUN_08036cf0(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  
  iVar2 = func_0x00116b48();
  if (iVar2 != 0) {
    if (*(char *)(param_1 + 5) == '\0') {
      if (*(char *)(param_1 + 0x2b) == '\x03') {
        func_0x00042354(1,1);
        func_0x00040d68(param_1,0x80141b60);
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
      if (*(char *)(param_1 + 0x70) == -1) {
        if (*(char *)(param_1 + 6) == '\0') {
          uVar1 = 0xc;
          if ((DAT_800bfabb == '\0') && (uVar1 = 9, (DAT_800bfa07 & 1) == 0)) {
            DAT_800bfa07 = DAT_800bfa07 | 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          *(undefined1 *)(param_1 + 0x7a) = uVar1;
          func_0x00040d68(param_1,0x80141c10);
          *(undefined1 *)(param_1 + 0x70) = 2;
          *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if (*(char *)(param_1 + 6) != '\x01') {
          halt_baddata();
        }
        *(undefined1 *)(param_1 + 5) = 0;
      }
    }
    func_0x00041098(param_1);
    func_0x0004190c(param_1);
  }
  return;
}

