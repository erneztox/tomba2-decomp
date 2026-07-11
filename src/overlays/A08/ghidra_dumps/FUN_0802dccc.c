// FUN_0802dccc

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0802dccc(int param_1)

{
  byte bVar1;
  short sVar2;
  undefined2 local_10;
  undefined2 local_e;
  undefined2 local_c;
  
  bVar1 = *(byte *)(param_1 + 5);
  if (bVar1 == 1) {
    sVar2 = *(short *)(param_1 + 0x32) + 0x10;
    *(short *)(param_1 + 0x32) = sVar2;
    if (sVar2 < 0x27b) goto LAB_0802ddbc;
    DAT_800bfa3b = '\r';
    *(undefined2 *)(param_1 + 0x32) = 0x27b;
    *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      if (DAT_800bfa3b != '\f') goto LAB_0802ddbc;
      *(undefined1 *)(param_1 + 5) = 1;
    }
  }
  else if (bVar1 == 2) {
    if (DAT_800bfa3b != '\x0e') {
LAB_0802ddbc:
      if ((*(char *)(param_1 + 5) != '\0') && ((_DAT_1f80017c & 7) == 0)) {
        local_e = 0xdec8;
        local_10 = 0x31f2;
        local_c = 0x1e4a;
        func_0x0011bd98(5,&local_10,2);
        local_10 = 0x3515;
        local_c = 0x1cba;
        func_0x0011bd98(5,&local_10,2);
        local_10 = 0x3062;
        local_c = 0x1b27;
        func_0x0011bd98(5,&local_10,2);
        local_10 = 0x3385;
        local_c = 0x1997;
        func_0x0011bd98(5,&local_10,2);
      }
      *(undefined1 *)(param_1 + 1) = 1;
      func_0x000517f8(param_1);
      return;
    }
    *(undefined1 *)(param_1 + 5) = 3;
  }
  else if (bVar1 == 3) {
    if (DAT_800bfa3b == '\x0f') {
      *(undefined1 *)(param_1 + 4) = 3;
      goto LAB_0802ddbc;
    }
    *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + 0x10;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

