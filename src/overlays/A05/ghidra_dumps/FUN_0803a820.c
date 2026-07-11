// FUN_0803a820

/* WARNING: Control flow encountered bad instruction data */

void FUN_0803a820(int param_1)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 == 1) {
    *(undefined1 *)(param_1 + 1) = 1;
    func_0x000517f8(param_1);
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
      iVar2 = func_0x00051b70(param_1,0xc,0);
      if (iVar2 != 0) {
        return;
      }
      *(byte *)(param_1 + 0xd) = *(byte *)(param_1 + 0xd) | 4;
      *(char *)(param_1 + 4) = *(char *)(param_1 + 4) + '\x01';
      *(undefined1 *)(*(int *)(param_1 + 0xc0) + 0x3f) = 0x10;
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

