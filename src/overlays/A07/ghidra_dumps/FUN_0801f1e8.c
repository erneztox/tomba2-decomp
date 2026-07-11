// FUN_0801f1e8

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801f1e8(int param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 == 1) {
    if (*(char *)(param_1 + 3) == '\0') {
      func_0x0011793c(param_1);
      func_0x00117d4c(param_1);
    }
    else if (*(char *)(param_1 + 3) == '\x01') {
      func_0x00117fe0(param_1);
    }
  }
  else {
    if (1 < bVar1) {
      if (3 < bVar1) {
        return;
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (bVar1 == 0) {
      if (*(char *)(param_1 + 3) == '\0') {
        *(undefined2 *)(param_1 + 0x60) = 0;
        *(undefined2 *)(param_1 + 0x62) = 0x299f;
        *(undefined2 *)(param_1 + 100) = 0xf380;
        _DAT_800bf864 = param_1;
      }
      *(char *)(param_1 + 4) = *(char *)(param_1 + 4) + '\x01';
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

