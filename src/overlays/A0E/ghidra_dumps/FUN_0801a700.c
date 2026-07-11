// FUN_0801a700

/* WARNING: Control flow encountered bad instruction data */

void FUN_0801a700(int param_1)

{
  byte bVar1;
  int iVar2;
  
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
    *(undefined4 *)(param_1 + 0x40) = 0x8011ce48;
    *(undefined4 *)(param_1 + 0x50) = 0x8011ce30;
    *(undefined1 *)(param_1 + 4) = 1;
  }
  *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x40);
  if (*(int *)(param_1 + 0x40) == 0) {
    *(undefined1 *)(param_1 + 4) = 2;
  }
  else {
    iVar2 = func_0x0002b278(param_1);
    if (iVar2 != 0) {
      return;
    }
    func_0x00031744(param_1);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

