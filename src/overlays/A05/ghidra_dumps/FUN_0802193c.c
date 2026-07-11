// FUN_0802193c

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_0802193c(int param_1)

{
  undefined4 uVar1;
  
  if (*(short *)(param_1 + 0x72) == 0) {
    uVar1 = func_0x001310f8();
    *(undefined4 *)(param_1 + 0x14) = uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    *(undefined1 *)(*(int *)(param_1 + 0x14) + 4) = 3;
  }
  return 1;
}

