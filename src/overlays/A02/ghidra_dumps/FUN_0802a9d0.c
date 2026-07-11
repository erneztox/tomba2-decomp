// FUN_0802a9d0

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00123a78) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0802a9d0(int param_1)

{
  byte bVar1;
  
  if (*(char *)(param_1 + 0x71) != -1) {
    if (*(char *)(param_1 + 0x71) == '\0') {
      *(undefined1 *)(param_1 + 0x70) = 1;
      *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
    }
    if (*(char *)(param_1 + 0x5e) == '\x01') {
      if ((*(char *)(param_1 + 6) == '\x01') && (_DAT_800bf844 != 0)) {
        *(undefined2 *)(_DAT_800bf844 + 0x56) = 0xc00;
        *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
        halt_baddata();
      }
    }
    else {
      if (*(char *)(param_1 + 0x5e) != '\x03') {
        halt_baddata();
      }
      bVar1 = *(byte *)(param_1 + 6);
      if (bVar1 == 3) {
        *(byte *)(_DAT_800bf844 + 0x5f) = *(byte *)(_DAT_800bf844 + 0x5f) | 1;
        *(undefined2 *)(_DAT_800bf844 + 0x62) = 0x20;
        *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
      }
      else {
        if (bVar1 < 4) {
          if (bVar1 == 1) {
            func_0x0004190c(param_1);
            if (*(char *)(param_1 + 0x46) != '\x17') {
              return;
            }
            func_0x00123da4(param_1);
          }
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if (bVar1 != 4) {
          halt_baddata();
        }
      }
      *(undefined2 *)(_DAT_800bf844 + 0x56) = *(undefined2 *)(param_1 + 0x56);
    }
    return;
  }
  bVar1 = *(byte *)(param_1 + 0x5e);
  if (bVar1 == 1) {
    if (DAT_800bfafe == '\0') {
      *(undefined1 *)(param_1 + 0x5e) = 2;
      *(undefined1 *)(param_1 + 3) = 1;
    }
    else {
      func_0x00042354(1,3);
    }
  }
  else if (bVar1 < 2) {
    if ((bVar1 == 0) && (DAT_800bf8fe = DAT_800bf8fe | 2, DAT_800bfaff == '\0')) {
LAB_0802aa88:
      func_0x00040d68(param_1,0x800a3e58);
      *(undefined1 *)(param_1 + 5) = 3;
      *(undefined1 *)(param_1 + 6) = 0;
      *(undefined1 *)(param_1 + 0x70) = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else if (bVar1 == 3) {
    *(undefined1 *)(param_1 + 0x5e) = 4;
    *(undefined1 *)(param_1 + 3) = 0;
    goto LAB_0802aa88;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

