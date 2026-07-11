// FUN_080414c4

/* WARNING: Control flow encountered bad instruction data */

void FUN_080414c4(int param_1)

{
  byte bVar1;
  char cVar2;
  
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
    *(undefined4 *)(param_1 + 4) = 0xa000001;
    *(undefined4 *)(param_1 + 0x54) = 0x80140328;
    *(undefined2 *)(param_1 + 0x4e) = 0;
    *(undefined4 *)(param_1 + 0x50) = 0x100410;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 0x40) = 0x80140340;
  }
  cVar2 = *(char *)(param_1 + 7) + -1;
  *(char *)(param_1 + 7) = cVar2;
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x40);
  if (cVar2 == '\0') {
    *(undefined1 *)(param_1 + 4) = 2;
  }
  else {
    *(undefined1 *)(param_1 + 1) = 1;
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 0x70607;
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 0x199;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

