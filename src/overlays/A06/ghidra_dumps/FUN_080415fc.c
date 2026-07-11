// FUN_080415fc

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0013a7f8) */
/* WARNING: Removing unreachable block (ram,0x0804185c) */
/* WARNING: Removing unreachable block (ram,0x08041700) */

void FUN_080415fc(int param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 6);
  if (bVar1 == 1) {
    if (*(char *)(param_1 + 7) == '\0') {
      *(undefined1 *)(param_1 + 7) = 1;
      func_0x00040cdc(param_1,0x8014d014,0x8014a3b8);
      *(undefined1 *)(param_1 + 0x70) = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (*(char *)(param_1 + 7) == '\x01') {
      func_0x00041098(param_1);
      if (*(char *)(param_1 + 0x70) != -1) {
        return;
      }
      *(undefined1 *)(param_1 + 7) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      if (*(char *)(param_1 + 0x2b) != '\x03') {
        return;
      }
      func_0x00042354(1,1);
      if (DAT_800bfb03 == '\0') {
        *(undefined1 *)(param_1 + 6) = 1;
      }
      else {
        *(undefined1 *)(param_1 + 6) = 2;
      }
    }
  }
  else {
    if (bVar1 == 2) {
      bVar1 = *(byte *)(param_1 + 7);
      if (bVar1 != 1) {
        if (bVar1 < 2) {
          if (bVar1 == 0) {
            *(undefined1 *)(param_1 + 7) = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
        }
        else if (bVar1 == 2) {
          func_0x00041098(param_1);
          if (*(char *)(param_1 + 0x70) != -1) {
            return;
          }
          *(undefined1 *)(param_1 + 7) = 0;
        }
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      func_0x00041098(param_1);
      if (*(char *)(param_1 + 0x70) != -1) {
        return;
      }
      *(char *)(param_1 + 7) = *(char *)(param_1 + 7) + '\x01';
      func_0x00040cdc(param_1,0x8014d014,0x8014a2b0);
      *(undefined1 *)(param_1 + 0x70) = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (bVar1 == 3) {
      if (*(char *)(param_1 + 7) == '\0') {
        *(undefined1 *)(param_1 + 7) = 1;
        func_0x00040cdc(param_1,0x8014d014,0x8014a2b0);
        *(undefined1 *)(param_1 + 0x70) = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (*(char *)(param_1 + 7) == '\x01') {
        func_0x00041098(param_1);
        if (*(char *)(param_1 + 0x70) != -1) {
          return;
        }
        *(undefined1 *)(param_1 + 7) = 0;
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

