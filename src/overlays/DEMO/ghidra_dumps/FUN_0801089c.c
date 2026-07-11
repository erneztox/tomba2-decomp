// FUN_0801089c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0801089c(void)

{
  short sVar1;
  int iVar2;
  
  iVar2 = _DAT_1f800138;
  if (*(short *)(_DAT_1f800138 + 0x4a) == 0) {
    *(undefined2 *)(_DAT_1f800138 + 0x4a) = 1;
    *(undefined2 *)(iVar2 + 0x5a) = 0x1c2;
  }
  else if (*(short *)(_DAT_1f800138 + 0x4a) != 1) {
    halt_baddata();
  }
  func_0x00106690(0);
  if (*(char *)(_DAT_1f800138 + 0x68) == '\x02') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  func_0x00106824(1,1);
  iVar2 = _DAT_1f800138;
  sVar1 = *(short *)(_DAT_1f800138 + 0x5a);
  *(short *)(_DAT_1f800138 + 0x5a) = sVar1 + -1;
  if (sVar1 != 1) {
    if ((_DAT_800e7e68 & 0x20) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if ((_DAT_800e7e68 & 0x80) != 0) {
      if (*(char *)(iVar2 + 0x68) != '\x02') {
        func_0x00074590(0x15,0,0);
      }
      *(undefined1 *)(_DAT_1f800138 + 0x68) = 2;
      *(undefined2 *)(_DAT_1f800138 + 0x4a) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if ((_DAT_800e7e68 & 0x4008) == 0) {
      if ((_DAT_800e7e68 & 0x2000) == 0) {
        return 0;
      }
      func_0x00074590(0x14,0xfffffff7,0);
    }
    else {
      func_0x00074590(0x11,0,0);
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

