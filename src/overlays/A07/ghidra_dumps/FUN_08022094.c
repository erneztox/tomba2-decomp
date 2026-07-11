// FUN_08022094

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08022094(int param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 == 1) {
    *(short *)(param_1 + 0x56) = -_DAT_1f8000f2;
    func_0x000517f8(param_1);
    *(undefined1 *)(param_1 + 1) = 1;
    func_0x00077ebc(param_1);
    *(undefined1 *)(param_1 + 0x2b) = 0;
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
      func_0x0011ae24(param_1);
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

