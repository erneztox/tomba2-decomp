// FUN_00008440

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00008440(int param_1)

{
  byte bVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
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
    uVar3 = _DAT_8011bb66;
    uVar2 = _DAT_8011bb64;
    *(undefined4 *)(param_1 + 0x38) = 0;
    *(undefined2 *)(param_1 + 0x32) = 0;
    *(undefined2 *)(param_1 + 0x44) = uVar2;
    *(undefined2 *)(param_1 + 0x46) = uVar3;
  }
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x38);
  if (*(int *)(param_1 + 0x38) == 0) {
    *(undefined4 *)(param_1 + 0x38) = 0x8011bb68;
    *(undefined4 *)(param_1 + 0x34) = 0x8011bb68;
  }
  *(undefined1 *)(param_1 + 1) = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

