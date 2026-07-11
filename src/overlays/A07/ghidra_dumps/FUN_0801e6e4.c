// FUN_0801e6e4

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801e6e4(int param_1)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        if (bVar1 != 3) {
          halt_baddata();
        }
        func_0x0007a624(param_1);
      }
      return;
    }
    if (bVar1 != 0) {
      halt_baddata();
    }
    if (DAT_800e7eee != '\0') {
      func_0x0004bec4(param_1);
    }
    iVar2 = func_0x00051b70(param_1,0xc,0xb);
    if (iVar2 == 0) {
      *(undefined2 *)(param_1 + 0x88) = 0xffa6;
      *(undefined2 *)(param_1 + 0x8a) = 0;
      *(undefined2 *)(param_1 + 0x8c) = 0;
      *(undefined2 *)(param_1 + 0x58) = 0;
      *(undefined2 *)(param_1 + 0x54) = 0;
      *(undefined2 *)(param_1 + 0x56) = 0x400;
      func_0x000517f8(param_1);
      _DAT_800bf860 = param_1;
      *(char *)(param_1 + 4) = *(char *)(param_1 + 4) + '\x01';
      halt_baddata();
    }
    return;
  }
  bVar1 = *(byte *)(param_1 + 5);
  if (bVar1 != 1) {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        halt_baddata();
      }
      if (((int)_DAT_800e7ffe & 0x8200U) != 0) {
        return;
      }
      *(undefined1 *)(param_1 + 1) = DAT_800e7e81;
      func_0x00051614(param_1,param_1 + 0x88,0,0);
      if (DAT_800bfa2c != '\f') {
        return;
      }
      *(undefined2 *)(param_1 + 0x2e) = 0x21fc;
      *(undefined2 *)(param_1 + 0x32) = 0xf63c;
      *(undefined2 *)(param_1 + 0x36) = 0x34d2;
      *(undefined1 *)(param_1 + 4) = 0;
      *(undefined1 *)(param_1 + 5) = 2;
      func_0x000517f8();
      halt_baddata();
    }
    if (bVar1 == 2) {
      if (DAT_800bfa2c == '\r') {
        *(undefined1 *)(param_1 + 5) = 3;
      }
      *(undefined1 *)(param_1 + 1) = 1;
      halt_baddata();
    }
    if (bVar1 != 3) {
      halt_baddata();
    }
    if (DAT_800bfa2c == '\x10') {
      *(undefined1 *)(param_1 + 4) = 3;
      halt_baddata();
    }
  }
  iVar2 = *(int *)(param_1 + 0x10);
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(iVar2 + 1);
  if (*(char *)(param_1 + 6) == '\0') {
    *(undefined2 *)(param_1 + 0x8c) = 0;
    *(undefined2 *)(param_1 + 0x8a) = 0;
    *(undefined2 *)(param_1 + 0x88) = 0;
    *(undefined2 *)(param_1 + 0x58) = 0;
    *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
  }
  else if (*(char *)(param_1 + 6) == '\x01') {
    *(undefined2 *)(param_1 + 0x2e) = *(undefined2 *)(*(int *)(iVar2 + 0xdc) + 0x2c);
    *(short *)(param_1 + 0x32) = *(short *)(*(int *)(iVar2 + 0xdc) + 0x30) + 0x32;
    *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(*(int *)(iVar2 + 0xdc) + 0x34);
    func_0x000517f8(param_1);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

