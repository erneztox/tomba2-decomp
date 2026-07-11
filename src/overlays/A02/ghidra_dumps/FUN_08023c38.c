// FUN_08023c38

/* WARNING: Control flow encountered bad instruction data */

void FUN_08023c38(int param_1)

{
  byte bVar1;
  
  if (*(char *)(param_1 + 0x71) != -1) {
    return;
  }
  bVar1 = *(byte *)(param_1 + 6);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        *(undefined1 *)(param_1 + 0x70) = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      func_0x00040d68(param_1,0x8012a538);
      *(undefined1 *)(param_1 + 5) = 3;
      *(undefined1 *)(param_1 + 6) = 0;
      *(undefined1 *)(param_1 + 0x5e) = 2;
      *(undefined1 *)(param_1 + 0x70) = 1;
      return;
    }
    if (bVar1 != 0) {
      *(undefined1 *)(param_1 + 0x70) = 1;
      halt_baddata();
    }
    if (DAT_800bfafd != '\0') {
      func_0x00040d68(param_1,0x8012a508);
      *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
      halt_baddata();
    }
  }
  func_0x00040d68(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0x5e) * 4 + -0x7fed5a98));
  *(undefined1 *)(param_1 + 5) = 2;
  *(undefined1 *)(param_1 + 6) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

