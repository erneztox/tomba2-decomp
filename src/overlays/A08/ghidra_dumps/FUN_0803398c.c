// FUN_0803398c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x08033a74) */

void FUN_0803398c(int param_1)

{
  byte bVar1;
  
  if (*(char *)(param_1 + 5) != '\0') {
    if (*(char *)(param_1 + 5) == '\x01') {
      func_0x0012c3a4(param_1);
      return;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar1 = *(byte *)(param_1 + 6);
  if (bVar1 != 1) {
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        if (DAT_800bfa4e < 0x1e) {
          return;
        }
        *(undefined1 *)(param_1 + 6) = 1;
      }
    }
    else if (bVar1 == 2) {
      func_0x00041098(param_1);
      if (*(char *)(param_1 + 0x70) != -1) {
        return;
      }
      *(undefined1 *)(param_1 + 6) = 0;
      func_0x00042310();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined1 *)(param_1 + 6) = 2;
  func_0x00040cdc(param_1,0x8001b4dc,0x80145e80);
  *(undefined1 *)(param_1 + 0x70) = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

