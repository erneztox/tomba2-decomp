// FUN_08025964

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_08025964(int param_1)

{
  byte bVar1;
  short sVar2;
  
  bVar1 = *(byte *)(param_1 + 6);
  if (bVar1 != 1) {
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        if (*(char *)(param_1 + 0x2b) != '\x03') {
          return 0;
        }
        *(undefined1 *)(param_1 + 6) = 1;
        func_0x00042354(1,3);
        func_0x00040cdc(param_1,0x8014005c,0x801337c8);
        *(undefined1 *)(param_1 + 0x70) = 1;
        *(undefined2 *)(param_1 + 0x40) = 0;
      }
    }
    else if (bVar1 == 2) {
      func_0x00041098(param_1);
      if (*(char *)(param_1 + 0x70) != -1) {
        return 0;
      }
      *(undefined1 *)(param_1 + 6) = 0;
      func_0x00042310();
      return 0;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  func_0x00041098(param_1);
  if (*(char *)(param_1 + 0x70) != -1) {
    return 0;
  }
  sVar2 = *(short *)(param_1 + 0x40) + 1;
  *(short *)(param_1 + 0x40) = sVar2;
  if ((short)(ushort)DAT_800bfa37 < sVar2) {
    *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
  }
  else if ((((sVar2 != 1) && (sVar2 != 2)) && (sVar2 != 3)) && (sVar2 != 4)) {
    if (sVar2 == 5) {
      func_0x00040cdc(param_1,0x8014005c,0x801338c8);
    }
    *(undefined1 *)(param_1 + 0x70) = 1;
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

