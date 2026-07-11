// FUN_0801a754

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0801a89c) */

void FUN_0801a754(int param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 5);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        halt_baddata();
      }
      if (*(char *)(param_1 + 6) == '\0') {
        *(undefined1 *)(param_1 + 6) = 1;
        func_0x00040cdc(param_1,0x8001b4dc,0x8011cc5c);
        if (DAT_800bf8fc == -1) {
          *(undefined1 *)(param_1 + 0x7a) = 0xc;
        }
        else if (DAT_800bf8fc == '\0') {
          if (DAT_800bf8fb == '\0') {
            *(undefined1 *)(param_1 + 0x7a) = 1;
            *(undefined1 *)(param_1 + 0x70) = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          *(undefined1 *)(param_1 + 0x7a) = 6;
        }
        else {
          *(undefined1 *)(param_1 + 0x7a) = 8;
        }
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (*(char *)(param_1 + 6) != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      func_0x00041098(param_1);
      if (*(char *)(param_1 + 0x70) != -1) {
        return;
      }
      *(undefined1 *)(param_1 + 6) = 0;
      halt_baddata();
    }
    if (bVar1 != 0) {
      halt_baddata();
    }
    *(undefined1 *)(param_1 + 5) = 1;
    func_0x00112350(param_1);
  }
  if (*(char *)(param_1 + 0x2b) != '\x03') {
    return;
  }
  func_0x00042354(1,3);
  *(undefined1 *)(param_1 + 6) = 0;
  *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

