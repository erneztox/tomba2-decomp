// FUN_080279fc

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_080279fc(int param_1)

{
  byte bVar1;
  short sVar2;
  
  bVar1 = *(byte *)(param_1 + 6);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        func_0x00041098(param_1);
        if (*(char *)(param_1 + 0x70) == -1) {
          *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + -1;
          halt_baddata();
        }
        return 0;
      }
      if (bVar1 != 3) {
        halt_baddata();
      }
      func_0x00041098(param_1);
      if (*(char *)(param_1 + 0x70) == -1) {
        *(undefined1 *)(param_1 + 6) = 0;
        func_0x00042310();
        halt_baddata();
      }
      return 0;
    }
    if (bVar1 != 0) {
      halt_baddata();
    }
    *(undefined1 *)(param_1 + 6) = 1;
    *(undefined2 *)(param_1 + 0x42) = 4;
  }
  sVar2 = *(short *)(param_1 + 0x42);
  if (sVar2 == 4) {
    if ((DAT_800bfa4f & 1) != 0) {
      *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
      func_0x00040cdc(param_1,0,0x80145430);
      *(undefined1 *)(param_1 + 0x70) = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else if (sVar2 == 3) {
    if ((DAT_800bfa4f & 2) != 0) {
      *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
      func_0x00040cdc(param_1,0,0x80145448);
      *(undefined1 *)(param_1 + 0x70) = 1;
      halt_baddata();
    }
  }
  else if (sVar2 == 2) {
    if ((DAT_800bfa4f & 4) != 0) {
      *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
      func_0x00040cdc(param_1,0,0x80145460);
      *(undefined1 *)(param_1 + 0x70) = 1;
      halt_baddata();
    }
  }
  else {
    if (sVar2 != 1) {
      *(undefined1 *)(param_1 + 6) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if ((DAT_800bfa4f & 8) != 0) {
      *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x02';
      func_0x00040cdc(param_1,0,0x80145478);
      *(undefined1 *)(param_1 + 0x70) = 1;
      if (DAT_1f800137 == '\0') {
        func_0x00042354(1,3);
      }
    }
  }
  *(short *)(param_1 + 0x42) = *(short *)(param_1 + 0x42) + -1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

