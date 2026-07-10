// FUN_00002cf0

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_00002cf0(int param_1)

{
  byte bVar1;
  bool bVar2;
  undefined4 uVar3;
  
  bVar1 = *(byte *)(param_1 + 6);
  if (bVar1 != 1) {
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        if (*(char *)(param_1 + 0x2b) == '\x03') {
          *(undefined1 *)(param_1 + 6) = 1;
          func_0x00042354(1,2);
          func_0x00040cdc(param_1,0x8010d904,0x8010d624);
          *(undefined1 *)(param_1 + 0x70) = 1;
          halt_baddata();
        }
        return 0;
      }
    }
    else if (bVar1 == 2) {
      func_0x00041098(param_1);
      uVar3 = 0;
      if (*(char *)(param_1 + 0x70) == -1) {
        *(undefined1 *)(param_1 + 6) = 0;
        func_0x00042310();
        uVar3 = 2;
        if (*(char *)(param_1 + 0xbf) == '\0') {
          halt_baddata();
        }
      }
      return uVar3;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  func_0x00041098(param_1);
  if (*(char *)(param_1 + 0x70) != -1) {
    return 0;
  }
  *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
  bVar2 = false;
  if ((((DAT_800bfab6 != '\0') && (DAT_800bfab9 != '\0')) && (DAT_800bfabc != '\0')) &&
     ((DAT_800bfb4f != '\0' && (DAT_800bfb50 != '\0')))) {
    bVar2 = DAT_800bfaeb != '\0';
  }
  if (!bVar2) {
    func_0x00040cdc(param_1,0x8010d904,0x8010d694);
    *(undefined1 *)(param_1 + 0xbf) = 0;
    *(undefined1 *)(param_1 + 0x70) = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  func_0x00040cdc(param_1,0x8010d904,0x8010d70c);
  *(undefined1 *)(param_1 + 0xbf) = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

