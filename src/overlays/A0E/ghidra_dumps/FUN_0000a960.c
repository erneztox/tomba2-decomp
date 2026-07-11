// FUN_0000a960

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000a960(int param_1)

{
  byte bVar1;
  short sVar2;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (3 < bVar1) {
        return;
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (bVar1 != 0) {
      halt_baddata();
    }
    *(undefined2 *)(param_1 + 0x50) = 0x32;
    *(undefined1 *)(param_1 + 4) = 1;
    *(undefined2 *)(param_1 + 0x52) = 10;
  }
  func_0x0002b278(param_1);
  sVar2 = *(short *)(param_1 + 0x50) + *(short *)(param_1 + 0x52);
  *(short *)(param_1 + 0x50) = sVar2;
  if (sVar2 < 0x1f5) {
    return;
  }
  *(undefined1 *)(param_1 + 4) = 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

