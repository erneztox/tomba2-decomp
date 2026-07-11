// FUN_08046c34

/* WARNING: Control flow encountered bad instruction data */

void FUN_08046c34(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  
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
    *(undefined4 *)(param_1 + 0x40) = 0x8014c818;
    *(undefined4 *)(param_1 + 0x50) = 0x8014c7f8;
    *(undefined4 *)(param_1 + 0x54) = 0;
    *(undefined1 *)(param_1 + 4) = 1;
    *(undefined4 *)(param_1 + 0x34) = 0x5000300;
  }
  if (1 < *(byte *)(*(int *)(param_1 + 0x10) + 4)) {
    *(undefined1 *)(param_1 + 4) = 2;
  }
  if (*(char *)(*(int *)(param_1 + 0x10) + 1) == '\0') {
    return;
  }
  *(undefined1 *)(param_1 + 1) = 1;
  *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x40);
  if (*(int *)(param_1 + 0x40) == 0) {
    *(undefined4 *)(param_1 + 0x40) = 0x8014c818;
    *(undefined4 *)(param_1 + 0x3c) = 0x8014c818;
  }
  iVar2 = func_0x00083f50(*(undefined4 *)(param_1 + 0x54));
  iVar3 = func_0x00083e80(*(undefined4 *)(param_1 + 0x54));
  *(int *)(param_1 + 0x34) = (iVar2 >> 5) + 0x300 + ((iVar3 >> 5) + 0x500) * 0x10000;
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 0xcc;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

