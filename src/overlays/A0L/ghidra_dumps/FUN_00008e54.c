// FUN_00008e54

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00008e54(int param_1)

{
  undefined2 uVar1;
  
  if (*(char *)(param_1 + 5) == '\0') {
    *(undefined1 *)(param_1 + 5) = 1;
    if (_DAT_800bf85c != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar1 = func_0x00079634(_DAT_800bf858,param_1 + 0x44);
    *(undefined2 *)(param_1 + 0xe) = uVar1;
    *(undefined2 *)(param_1 + 0x54) = *(undefined2 *)(param_1 + 0x2e);
    *(undefined2 *)(param_1 + 0x56) = *(undefined2 *)(param_1 + 0x32);
    *(undefined2 *)(param_1 + 0x58) = *(undefined2 *)(param_1 + 0x36);
  }
  if (DAT_800bfa58 != '\0') {
    *(undefined1 *)(param_1 + 4) = 1;
    *(undefined1 *)(param_1 + 5) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined1 *)(param_1 + 4) = 0;
  return;
}

