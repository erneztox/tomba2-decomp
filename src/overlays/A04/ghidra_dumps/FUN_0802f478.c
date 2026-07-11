// FUN_0802f478

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0802f478(int param_1)

{
  byte bVar1;
  short sVar2;
  
  bVar1 = *(byte *)(param_1 + 6);
  if (bVar1 == 1) {
    if ((*(short *)(param_1 + 0x6a) == 1) &&
       (sVar2 = *(short *)(param_1 + 0x40), *(short *)(param_1 + 0x40) = sVar2 + -1, sVar2 == 1)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else if (bVar1 < 2) {
    if (bVar1 != 0) {
      halt_baddata();
    }
    sVar2 = func_0x00128bec(param_1,0);
    if (sVar2 != 0) {
      func_0x00129b54(param_1,1,4,3);
      *(undefined2 *)(param_1 + 0x40) = 1;
      *(undefined1 *)(param_1 + 7) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else if (bVar1 == 2) {
    if (*(short *)(param_1 + 0x6a) == 1) {
      if (*(short *)(param_1 + 0x7e) != 0) {
        DAT_800e7e85 = 0x18;
        DAT_800e7e86 = 6;
        DAT_800e7e81 = 1;
        _DAT_800e7f38 = 0x1000;
        _DAT_800e7f3a = 0x1000;
        _DAT_800e7f3c = 0x1000;
      }
      func_0x00129b54(param_1,3,4,3);
      *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
      halt_baddata();
    }
  }
  else {
    if (bVar1 != 3) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (*(short *)(param_1 + 0x6a) == 1) {
      if (*(short *)(param_1 + 0x7e) == 0) {
        func_0x00129b54(param_1,4,8,3);
        func_0x00129904(param_1,2);
        *(undefined1 *)(param_1 + 5) = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *(undefined2 *)(param_1 + 0x7e) = 0;
      func_0x00129b54(param_1,0,2,3);
      *(undefined1 *)(param_1 + 6) = 0;
    }
  }
  return;
}

