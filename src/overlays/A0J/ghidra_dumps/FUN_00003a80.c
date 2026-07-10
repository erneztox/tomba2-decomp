// FUN_00003a80

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00003a80(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 == 1) {
    bVar1 = *(byte *)(param_1 + 3);
    if (bVar1 == 1) {
      cVar2 = *(char *)(*(int *)(param_1 + 0x10) + 1);
      *(char *)(param_1 + 1) = cVar2;
      if (cVar2 != '\0') {
        func_0x0010d1f0(param_1);
      }
      func_0x00077b5c(param_1);
    }
    else if (bVar1 < 2) {
      if (bVar1 == 0) {
        func_0x0007778c(param_1);
      }
    }
    else if (bVar1 == 2) {
      iVar3 = *(int *)(param_1 + 0x10);
      if (*(char *)(param_1 + 5) == '\0') {
        if (_DAT_800bf850 == 1) {
          func_0x0004ed94(0x6f,0x42);
          *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
        }
        func_0x0004bd64(param_1,0,_DAT_800e7f5c,_DAT_800e7f50,0);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (*(char *)(param_1 + 5) == '\x01') {
        if (_DAT_800bf850 == 2) {
          func_0x0004ed94(0x2c,0x42);
          *(undefined1 *)(param_1 + 4) = 3;
        }
        func_0x0004bd64(param_1,0,*(undefined4 *)(iVar3 + 0xdc),*(undefined4 *)(iVar3 + 0xd0),0);
        *(short *)(param_1 + 0x2e) = *(short *)(param_1 + 0x2e) + -0x30;
        *(undefined1 *)(param_1 + 1) = 1;
      }
      else {
        *(undefined1 *)(param_1 + 1) = 1;
      }
    }
    else if (bVar1 == 3) {
      if (DAT_800bfb0c != '\0') {
        *(undefined1 *)(param_1 + 4) = 3;
        DAT_800bfe55 = 1;
      }
      *(undefined1 *)(param_1 + 1) = 1;
    }
  }
  else {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        if (bVar1 != 3) {
          halt_baddata();
        }
        func_0x0007a624(param_1);
      }
      return;
    }
    if (bVar1 == 0) {
      bVar1 = *(byte *)(param_1 + 3);
      *(undefined1 *)(param_1 + 4) = 1;
      if (bVar1 == 1) {
        *(undefined4 *)(param_1 + 0x3c) = _DAT_800ecf80;
        func_0x00077b38(param_1,0x8010d8ac,5);
        *(undefined1 *)(param_1 + 0xb) = 0x10;
        *(undefined1 *)(param_1 + 0xd) = 1;
        *(undefined2 *)(param_1 + 0x5c) = 0;
        *(undefined2 *)(param_1 + 0x5a) = 0;
        *(undefined1 *)(param_1 + 0x47) = 0;
        *(undefined1 *)(param_1 + 8) = 0xc0;
      }
      else if (bVar1 < 2) {
        if (bVar1 == 0) {
          func_0x00051b70(param_1,0xc,0);
          *(byte *)(param_1 + 0xd) = *(byte *)(param_1 + 0xd) | 4;
          *(undefined1 *)(*(int *)(param_1 + 0xc0) + 0x3f) = 0xe0;
          func_0x000517f8(param_1);
          iVar3 = func_0x00072ddc(param_1,1,3,0x10);
          if (iVar3 == 0) {
            return;
          }
          *(undefined1 *)(iVar3 + 3) = 1;
          *(undefined4 *)(iVar3 + 0x1c) = 0x8010ca1c;
          *(undefined2 *)(iVar3 + 0x2e) = *(undefined2 *)(param_1 + 0x2e);
          *(undefined2 *)(iVar3 + 0x32) = *(undefined2 *)(param_1 + 0x32);
          *(undefined2 *)(iVar3 + 0x36) = *(undefined2 *)(param_1 + 0x36);
        }
      }
      else if (bVar1 == 2) {
        *(undefined4 *)(param_1 + 0x3c) = _DAT_800ecf80;
        func_0x00077b38(param_1,0x8010d8ac,6);
        *(undefined1 *)(param_1 + 0xd) = 0;
        *(undefined2 *)(param_1 + 0x5c) = 0;
        *(undefined1 *)(param_1 + 0xb) = 0x10;
        *(undefined2 *)(param_1 + 0x5a) = 0;
        *(undefined1 *)(param_1 + 0x47) = 0;
        *(undefined1 *)(param_1 + 8) = 0;
      }
      else if (bVar1 == 3) {
        iVar3 = *(int *)(param_1 + 0x10);
        *(undefined4 *)(param_1 + 0x3c) = _DAT_800ecf80;
        func_0x00077b38(param_1,0x8010d8ac,4);
        *(undefined1 *)(param_1 + 0xb) = 0x10;
        *(undefined1 *)(param_1 + 0xd) = 0;
        *(undefined2 *)(param_1 + 0x5c) = 0;
        *(undefined2 *)(param_1 + 0x5a) = 0;
        *(undefined1 *)(param_1 + 0x47) = 0;
        *(undefined1 *)(param_1 + 8) = 0xe0;
        *(undefined2 *)(param_1 + 0x2e) = *(undefined2 *)(iVar3 + 0x2e);
        *(short *)(param_1 + 0x32) = *(short *)(iVar3 + 0x32) + -0x118;
        *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(iVar3 + 0x36);
      }
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

