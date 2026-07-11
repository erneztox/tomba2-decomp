// FUN_080129f4

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_080129f4(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined1 auStack_20 [2];
  undefined2 local_1e;
  undefined2 local_1a;
  short local_16;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 == 1) {
    if (DAT_800bf9b4 == '\x05') {
      if (*(char *)(param_1 + 5) == '\0') {
        local_1e = *(undefined2 *)(param_1 + 0x2e);
        local_1a = *(undefined2 *)(param_1 + 0x32);
        local_16 = *(short *)(param_1 + 0x36) + 0x76c;
        func_0x0003116c(0x2b,auStack_20,0);
        *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
        halt_baddata();
      }
      if (*(char *)(param_1 + 5) != '\x01') {
        halt_baddata();
      }
      *(short *)(param_1 + 0x36) = *(short *)(param_1 + 0x36) + 10;
      func_0x0004190c(param_1);
      func_0x000518fc(param_1);
      func_0x0007778c(param_1);
      halt_baddata();
    }
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        iVar2 = func_0x000519e0(param_1,0xf,_DAT_800ecfa4,0x8010c9b0);
        if (iVar2 != 0) {
          return;
        }
        *(undefined4 *)(param_1 + 0x3c) = _DAT_800ecfa8;
        func_0x00077c40(param_1,0x8010d39c,0);
        *(undefined2 *)(param_1 + 0x56) = 0x400;
        *(undefined2 *)(param_1 + 0x54) = 0x200;
        *(char *)(param_1 + 4) = *(char *)(param_1 + 4) + '\x01';
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (bVar1 < 4) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  return;
}

