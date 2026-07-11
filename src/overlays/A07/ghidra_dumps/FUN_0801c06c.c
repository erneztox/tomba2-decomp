// FUN_0801c06c

/* WARNING: Control flow encountered bad instruction data */

void FUN_0801c06c(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  
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
    *(undefined2 *)(param_1 + 0x32) = 0xffa6;
    *(undefined1 *)(param_1 + 4) = 1;
    *(undefined1 *)(param_1 + 5) = 0x1e;
    *(undefined4 *)(param_1 + 0x50) = 0;
    iVar3 = func_0x0009a450();
    uVar4 = func_0x0009a450();
    *(uint *)(param_1 + 0x54) = iVar3 << 0x10 | uVar4 | 1;
  }
  cVar2 = *(char *)(param_1 + 5);
  *(char *)(param_1 + 5) = cVar2 + -1;
  if (cVar2 == '\0') {
    *(undefined1 *)(param_1 + 4) = 2;
  }
  *(undefined1 *)(param_1 + 1) = 1;
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

