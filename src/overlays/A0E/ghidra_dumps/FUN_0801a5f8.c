// FUN_0801a5f8

/* WARNING: Control flow encountered bad instruction data */

void FUN_0801a5f8(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  
  bVar1 = *(byte *)(param_1 + 4);
  iVar3 = *(int *)(param_1 + 0x10);
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
    *(undefined2 *)(param_1 + 0x48) = 0xb0;
    *(undefined2 *)(param_1 + 0x4a) = 0xb0;
    *(undefined1 *)(param_1 + 4) = 1;
    *(undefined1 *)(param_1 + 5) = 10;
  }
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x38);
  if (*(int *)(param_1 + 0x38) == 0) {
    *(undefined4 *)(param_1 + 0x38) = 0x8011b030;
    *(undefined4 *)(param_1 + 0x34) = 0x8011b030;
  }
  if (iVar3 == 0) {
    cVar2 = *(char *)(param_1 + 5);
    *(char *)(param_1 + 5) = cVar2 + -1;
    if (cVar2 != '\0') {
      func_0x0002b278();
      halt_baddata();
    }
  }
  else if (*(byte *)(iVar3 + 4) < 2) {
    *(undefined2 *)(param_1 + 0x2c) = *(undefined2 *)(iVar3 + 0x2e);
    *(undefined2 *)(param_1 + 0x2e) = *(undefined2 *)(iVar3 + 0x32);
    *(undefined2 *)(param_1 + 0x30) = *(undefined2 *)(iVar3 + 0x36);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined1 *)(param_1 + 4) = 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

