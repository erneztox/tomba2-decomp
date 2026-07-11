// FUN_0801a7b8

/* WARNING: Control flow encountered bad instruction data */

void FUN_0801a7b8(int param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 < 4) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      return;
    }
    if (bVar1 != 0) {
      halt_baddata();
    }
    *(undefined4 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x4c) = 0;
    func_0x00031220(0xf05,param_1 + 0x2c,0);
    func_0x00031220(0xf06,param_1 + 0x2c,0);
    *(undefined1 *)(param_1 + 4) = 1;
    *(undefined1 *)(param_1 + 7) = 0;
  }
  bVar1 = *(char *)(param_1 + 7) + 1;
  *(byte *)(param_1 + 7) = bVar1;
  if (0x1d < bVar1) {
    *(undefined1 *)(param_1 + 4) = 2;
  }
  *(undefined1 *)(param_1 + 1) = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

