// FUN_0803a8dc

/* WARNING: Control flow encountered bad instruction data */

void FUN_0803a8dc(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  
  bVar1 = *(byte *)(param_1 + 4);
  iVar3 = *(int *)(param_1 + 0x10);
  if (bVar1 == 1) {
    cVar2 = *(char *)(iVar3 + 1);
    *(char *)(param_1 + 1) = cVar2;
    if (cVar2 == '\0') {
      return;
    }
    *(undefined2 *)(param_1 + 0x60) = *(undefined2 *)(iVar3 + 0x2e);
    *(undefined2 *)(param_1 + 0x62) = *(undefined2 *)(iVar3 + 0x32);
    *(short *)(param_1 + 100) = *(short *)(iVar3 + 0x36) + -8;
    *(undefined2 *)(param_1 + 0x66) = *(undefined2 *)(iVar3 + 0x2e);
    *(undefined2 *)(param_1 + 0x68) = *(undefined2 *)(iVar3 + 0x32);
    *(short *)(param_1 + 0x6a) = *(short *)(iVar3 + 0x36) + 8;
    *(undefined2 *)(param_1 + 0x6c) = *(undefined2 *)(iVar3 + 0x60);
    *(undefined2 *)(param_1 + 0x6e) = *(undefined2 *)(iVar3 + 0x62);
    *(short *)(param_1 + 0x70) = *(short *)(iVar3 + 100) + -8;
    *(undefined2 *)(param_1 + 0x72) = *(undefined2 *)(iVar3 + 0x60);
    *(undefined2 *)(param_1 + 0x74) = *(undefined2 *)(iVar3 + 0x62);
    *(short *)(param_1 + 0x76) = *(short *)(iVar3 + 100) + 8;
  }
  else {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        if (bVar1 != 3) {
          halt_baddata();
        }
        func_0x0007a624();
      }
      return;
    }
    if (bVar1 == 0) {
      *(undefined1 *)(param_1 + 4) = 1;
      *(undefined1 *)(param_1 + 0xb) = 0x14;
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

