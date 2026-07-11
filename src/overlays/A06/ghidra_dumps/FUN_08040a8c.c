// FUN_08040a8c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x08040cc4) */
/* WARNING: Removing unreachable block (ram,0x08040b90) */

void FUN_08040a8c(int param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 6);
  if (bVar1 == 1) {
    if (*(char *)(param_1 + 7) == '\0') {
      *(undefined1 *)(param_1 + 7) = 1;
      func_0x00040cdc(param_1,0x8014d014,0x80149f18);
      *(undefined1 *)(param_1 + 0x70) = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (*(char *)(param_1 + 7) != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    func_0x00041098(param_1);
    if (*(char *)(param_1 + 0x70) == -1) {
      *(undefined1 *)(param_1 + 7) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        if (*(char *)(param_1 + 0x2b) != '\x03') {
          return;
        }
        func_0x00042354(1,4);
        if (DAT_800bfae5 == '\0') {
          *(undefined1 *)(param_1 + 6) = 1;
        }
        else {
          *(undefined1 *)(param_1 + 6) = 2;
        }
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (bVar1 == 2) {
      bVar1 = *(byte *)(param_1 + 7);
      if (bVar1 != 1) {
        if (bVar1 < 2) {
          if (bVar1 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
        }
        else if ((bVar1 == 2) && (func_0x00041098(param_1), *(char *)(param_1 + 0x70) == -1))
        goto LAB_00139c54;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      func_0x00041098(param_1);
      if (*(char *)(param_1 + 0x70) == -1) {
        *(char *)(param_1 + 7) = *(char *)(param_1 + 7) + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    else {
      if (bVar1 != 3) {
        halt_baddata();
      }
      if (*(char *)(param_1 + 7) == '\0') {
        *(undefined1 *)(param_1 + 7) = 1;
        func_0x00040cdc(param_1,0x8014d014,0x80149a20);
        *(undefined1 *)(param_1 + 0x70) = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (*(char *)(param_1 + 7) != '\x01') {
        halt_baddata();
      }
      func_0x00041098(param_1);
      if (*(char *)(param_1 + 0x70) == -1) {
LAB_00139c54:
        *(undefined1 *)(param_1 + 7) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
  }
  return;
}

