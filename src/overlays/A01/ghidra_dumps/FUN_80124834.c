// FUN_80124834

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80124834(int param_1)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 == 1) {
    iVar2 = func_0x8007778c(param_1);
    if (iVar2 != 0) {
      FUN_8012d6b0(1);
      func_0x80051844(param_1);
    }
    bVar1 = *(byte *)(param_1 + 0x5e);
    if (bVar1 == 1) {
      FUN_8012d0a4(param_1);
      *(undefined1 *)(param_1 + 0x29) = 0;
      halt_baddata();
    }
    if (1 < bVar1) {
      if (bVar1 != 2) {
        *(undefined1 *)(param_1 + 0x29) = 0;
        halt_baddata();
      }
      FUN_8012d2bc(param_1,0x80137b68);
      *(undefined1 *)(param_1 + 0x29) = 0;
      halt_baddata();
    }
    if (bVar1 != 0) {
      *(undefined1 *)(param_1 + 0x29) = 0;
      halt_baddata();
    }
    FUN_8012ce5c(param_1);
    *(undefined1 *)(param_1 + 0x29) = 0;
    halt_baddata();
  }
  if (1 < bVar1) {
    if (bVar1 != 2) {
      if (bVar1 != 3) {
        halt_baddata();
      }
      func_0x8007a624(param_1);
    }
    return;
  }
  if (bVar1 != 0) {
    halt_baddata();
  }
  bVar1 = *(byte *)(param_1 + 5);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        halt_baddata();
      }
      iVar2 = func_0x80078240((int)_DAT_1f800160 - (int)*(short *)(param_1 + 0x2e),
                              (int)_DAT_1f800162 - (int)*(short *)(param_1 + 0x32),
                              (int)_DAT_1f800164 - (int)*(short *)(param_1 + 0x36));
      if (1000 < iVar2) {
        return;
      }
      if (DAT_1f80027a != '\0') {
        return;
      }
      if (DAT_800e7e80 != '\x06') {
        if (DAT_800bf80d == '\0') {
          *(undefined1 *)(param_1 + 4) = 1;
          *(undefined1 *)(param_1 + 5) = 0;
          *(undefined1 *)(param_1 + 0x5e) = 0;
          halt_baddata();
        }
        return;
      }
      return;
    }
    if (bVar1 != 0) {
      halt_baddata();
    }
    FUN_8012d6b0(0);
    *(undefined1 *)(param_1 + 0xbf) = 0xc0;
    *(undefined2 *)(param_1 + 0x7e) = 0x19;
    *(undefined2 *)(param_1 + 0x7c) = 0x400;
    *(undefined2 *)(param_1 + 0x7a) = 5;
    *(undefined2 *)(param_1 + 0x78) = 0x22;
    *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
  }
  FUN_8012cd00(param_1,&DAT_80137b48);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

