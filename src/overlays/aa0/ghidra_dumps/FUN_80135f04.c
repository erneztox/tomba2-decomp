// FUN_80135f04

/* WARNING: Control flow encountered bad instruction data */

void FUN_80135f04(int param_1)

{
  byte bVar1;
  short sVar2;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (3 < bVar1) {
        return;
      }
      FUN_8013ef3c();
      return;
    }
    if (bVar1 != 0) {
      halt_baddata();
    }
    *(undefined2 *)(param_1 + 0x50) = 0x14;
    *(undefined1 *)(param_1 + 4) = 1;
    *(undefined2 *)(param_1 + 0x52) = 10;
  }
  func_0x8002b278(param_1);
  sVar2 = *(short *)(param_1 + 0x50) + *(short *)(param_1 + 0x52);
  *(short *)(param_1 + 0x50) = sVar2;
  if (sVar2 < 0xc9) {
    return;
  }
  *(undefined1 *)(param_1 + 4) = 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

