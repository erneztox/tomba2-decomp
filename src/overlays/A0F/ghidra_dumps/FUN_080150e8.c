// FUN_080150e8

/* WARNING: Control flow encountered bad instruction data */

void FUN_080150e8(int param_1)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 == 1) {
    iVar2 = func_0x00026ad0(param_1);
    if (iVar2 != 0) {
      func_0x0010dde4(param_1,*(undefined1 *)(param_1 + 3));
    }
    func_0x00026a68(param_1);
    func_0x0010df5c(1);
  }
  else {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        if (bVar1 != 3) {
          halt_baddata();
        }
        func_0x0007add0(param_1);
      }
      return;
    }
    if (bVar1 == 0) {
      *(undefined1 *)(param_1 + 4) = 1;
      func_0x0010dde4(param_1,0);
      func_0x0010df5c(0);
      func_0x000752b4(0);
      func_0x00075d24(0x1fff);
      func_0x00113330();
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

