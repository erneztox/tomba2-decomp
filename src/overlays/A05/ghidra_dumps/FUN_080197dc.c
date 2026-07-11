// FUN_080197dc

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_080197dc(int param_1)

{
  byte bVar1;
  short sVar2;
  
  bVar1 = *(byte *)(param_1 + 5);
  if (bVar1 == 1) {
    sVar2 = *(short *)(param_1 + 0x40) + 1;
    *(short *)(param_1 + 0x40) = sVar2;
    if (sVar2 < 3) {
      return;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      func_0x00042354(1,1);
      if (DAT_800e7fe4 == '\0') {
        func_0x00054198(&DAT_800e7e80);
      }
      *(undefined2 *)(param_1 + 0x40) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else if (bVar1 == 2) {
    if ((DAT_800e7ea9 == '\0') && (DAT_800e7fe4 == '\0')) {
      return;
    }
    *(undefined1 *)(param_1 + 0x7a) = 0;
    func_0x00040cdc(param_1,0,0x8013c4d0);
    *(undefined1 *)(param_1 + 0x70) = 2;
    *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
  }
  else if (bVar1 == 3) {
    func_0x0007778c(param_1);
    if (*(char *)(param_1 + 0x70) != -1) {
      _DAT_1f8000c0 = 0;
      _DAT_1f8000c2 = 0;
      _DAT_1f8000c4 = 0;
      func_0x0004bd64(param_1,0,_DAT_800e7f5c,_DAT_800e7f50,&DAT_1f8000c0);
      func_0x00041098(param_1);
      return;
    }
    func_0x0004a3d4(param_1);
    *(undefined1 *)(param_1 + 4) = 3;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

