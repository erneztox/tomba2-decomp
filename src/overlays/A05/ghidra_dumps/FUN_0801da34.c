// FUN_0801da34

/* WARNING: Control flow encountered bad instruction data */

void FUN_0801da34(int param_1)

{
  char cVar1;
  byte bVar2;
  
  cVar1 = *(char *)(param_1 + 6);
  if (cVar1 == '\0') {
    if (*(char *)(param_1 + 0x2b) != '\x03') {
      if (DAT_800bfa15 == '\x01') {
        bVar2 = *(byte *)(param_1 + 2);
        if (bVar2 == 0x24) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if (bVar2 < 0x25) {
          if (bVar2 == 0x23) {
            halt_baddata();
          }
          *(undefined1 *)(param_1 + 0x70) = 2;
        }
        else {
          if (bVar2 == 0x25) {
            func_0x00040d68(param_1,0x8013d004);
            *(undefined1 *)(param_1 + 0x70) = 2;
            *(undefined1 *)(param_1 + 7) = 1;
            *(undefined1 *)(param_1 + 6) = 1;
            halt_baddata();
          }
          *(undefined1 *)(param_1 + 0x70) = 2;
        }
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      goto LAB_0801dc2c;
    }
    func_0x00042354(1,1);
    func_0x00040d68(param_1,0x8013cf84);
    *(undefined1 *)(param_1 + 0x70) = 2;
    *(undefined1 *)(param_1 + 7) = 0;
    *(undefined1 *)(param_1 + 6) = 1;
  }
  else if (cVar1 == '\x01') {
    func_0x00041098(param_1);
    if (*(char *)(param_1 + 0x70) == -1) {
      if (*(char *)(param_1 + 7) == '\0') {
        DAT_800bfa15 = cVar1;
        bVar2 = *(byte *)(param_1 + 2);
        if (bVar2 == 0x24) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if (bVar2 < 0x25) {
          if (bVar2 == 0x23) {
            halt_baddata();
          }
        }
        else if (bVar2 == 0x25) {
          func_0x00040d68(param_1,0x8013d004);
          *(undefined1 *)(param_1 + 0x70) = 2;
          *(char *)(param_1 + 7) = *(char *)(param_1 + 7) + '\x01';
          halt_baddata();
        }
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (*(char *)(param_1 + 7) != '\x01') {
        halt_baddata();
      }
      DAT_800bfa15 = DAT_800bfa15 + '\x01';
      *(undefined1 *)(param_1 + 7) = 0;
      *(undefined1 *)(param_1 + 6) = 0;
      *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
    }
LAB_0801dc2c:
    func_0x0004190c(param_1);
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

