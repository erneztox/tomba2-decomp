// FUN_0802d838

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0802d918) */

void FUN_0802d838(int param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 5);
  if (bVar1 == 1) {
    if (*(char *)(param_1 + 6) != '\0') {
      if (*(char *)(param_1 + 6) == '\x01') {
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
    if (DAT_800bf80f == '\0') {
      *(undefined1 *)(param_1 + 6) = 1;
      func_0x00042354(1,2);
      func_0x00040cdc(param_1,0,0x8014597c);
      *(undefined1 *)(param_1 + 0x70) = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else if ((bVar1 < 2) && (bVar1 == 0)) {
    if (DAT_800bf8f5 != -1) {
      *(undefined1 *)(param_1 + 5) = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(undefined1 *)(param_1 + 5) = 2;
  }
  return;
}

