// FUN_08028b3c

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_08028b3c(int param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  
  bVar1 = *(byte *)(param_1 + 6);
  if (bVar1 == 1) {
    iVar3 = func_0x00041438(&DAT_800e7e80,0xfffffc00,0x100);
    if (iVar3 != 0) {
      *(undefined2 *)(param_1 + 0x40) = 0x10;
      *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else if (bVar1 < 2) {
    if (bVar1 != 0) {
      halt_baddata();
    }
    if (DAT_800bf80a == '\0') {
      DAT_800e7e84 = 4;
      DAT_800e7e85 = 0x21;
      DAT_800e7e86 = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    if (bVar1 != 2) {
      if (bVar1 == 3) {
        func_0x00041098(param_1);
        if (*(char *)(param_1 + 0x70) != -1) {
          return 0;
        }
        *(undefined1 *)(param_1 + 6) = 0;
        func_0x00042310();
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    sVar2 = *(short *)(param_1 + 0x40) + -1;
    *(short *)(param_1 + 0x40) = sVar2;
    if (sVar2 == -1) {
      *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
      DAT_800bfa30 = DAT_800bfa30 | 1;
      func_0x00040cdc(param_1,0,0x80145524);
      *(undefined1 *)(param_1 + 0x70) = 1;
      halt_baddata();
    }
  }
  return 0;
}

