// FUN_0802c2e8

/* WARNING: Control flow encountered bad instruction data */

void FUN_0802c2e8(int param_1)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 == 1) {
    iVar2 = func_0x0007778c(param_1);
    if (iVar2 == 0) {
      return;
    }
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
      iVar2 = func_0x00051b70(param_1,0xc,0x1f);
      if (iVar2 != 0) {
        return;
      }
      *(char *)(param_1 + 4) = *(char *)(param_1 + 4) + '\x01';
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

