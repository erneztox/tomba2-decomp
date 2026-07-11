// FUN_08033408

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_08033408(int param_1)

{
  byte bVar1;
  char cVar2;
  
  bVar1 = *(byte *)(param_1 + 6);
  if (bVar1 != 1) {
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        if (*(char *)(param_1 + 0x2b) != '\x03') {
          return 0;
        }
        *(undefined1 *)(param_1 + 6) = 1;
        func_0x00042354(1,3);
      }
    }
    else if (bVar1 == 2) {
      func_0x00041098(param_1);
      if (*(char *)(param_1 + 0x70) != -1) {
        return 0;
      }
      func_0x00042310();
      *(undefined1 *)(param_1 + 6) = 0;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined1 *)(param_1 + 6) = 2;
  if (DAT_800bfa4e < 0x28) {
    func_0x00040cdc(param_1,0x8001b4dc,0x80145ec0);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  func_0x00040cdc(param_1,0x8001b4dc,0x80145ee0);
  cVar2 = DAT_800bf8ac != '\0';
  if (DAT_800bf8ad != '\0') {
    cVar2 = cVar2 + '\x01';
  }
  if (DAT_800bf8ae != '\0') {
    cVar2 = cVar2 + '\x01';
  }
  if (DAT_800bf8af != '\0') {
    cVar2 = cVar2 + '\x01';
  }
  if (cVar2 != '\0') {
    if (cVar2 != '\x04') {
      *(undefined1 *)(param_1 + 0x7a) = 0x14;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(undefined1 *)(param_1 + 0x7a) = 0x15;
    *(undefined1 *)(param_1 + 0x70) = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

