// FUN_0801a73c

/* WARNING: Control flow encountered bad instruction data */

void FUN_0801a73c(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  
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
    *(undefined1 *)(param_1 + 4) = 1;
    *(undefined1 *)(param_1 + 7) = 0;
    uVar2 = func_0x0009a450();
    *(undefined4 *)(param_1 + 0x48) = uVar2;
    uVar2 = func_0x0009a450();
    *(undefined4 *)(param_1 + 0x4c) = uVar2;
  }
  bVar1 = *(char *)(param_1 + 7) + 1;
  *(byte *)(param_1 + 7) = bVar1;
  if (bVar1 < 0x10) {
    *(undefined1 *)(param_1 + 1) = 1;
  }
  else {
    *(undefined1 *)(param_1 + 4) = 2;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

