// FUN_0801a888

/* WARNING: Control flow encountered bad instruction data */

void FUN_0801a888(int param_1)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 == 1) {
    iVar2 = func_0x00112d08(param_1);
    if (iVar2 != 0) {
      func_0x00112e98(param_1,*(undefined1 *)(param_1 + 3));
    }
    func_0x00026a68(param_1);
    func_0x0011321c(1);
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
      func_0x00112e98(param_1,0);
      func_0x0004d8d8(5,0);
      func_0x0011321c(0);
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

