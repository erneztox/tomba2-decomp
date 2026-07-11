// FUN_080338bc

/* WARNING: Control flow encountered bad instruction data */

void FUN_080338bc(int param_1)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 == 1) {
    func_0x0012c628(param_1);
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
    if (bVar1 != 0) {
      halt_baddata();
    }
    if (*(char *)(param_1 + 5) == '\0') {
      iVar2 = func_0x00051b70(param_1,0xc,0x2b);
      if (iVar2 == 0) {
        *(byte *)(param_1 + 0xd) = *(byte *)(param_1 + 0xd) | 4;
        *(undefined1 *)(*(int *)(param_1 + 0xc0) + 0x3f) = 0x60;
        *(undefined2 *)(param_1 + 0x54) = 0;
        *(undefined2 *)(param_1 + 0x56) = 0xfe89;
        *(undefined2 *)(param_1 + 0x58) = 0;
        *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
        halt_baddata();
      }
      return;
    }
    if (*(char *)(param_1 + 5) != '\x01') {
      halt_baddata();
    }
    iVar2 = func_0x0012c44c(param_1);
    if (iVar2 != 0) {
      *(undefined1 *)(param_1 + 4) = 1;
      *(undefined1 *)(param_1 + 5) = 0;
      *(undefined1 *)(param_1 + 6) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  func_0x0007778c(param_1);
  func_0x000517f8(param_1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

