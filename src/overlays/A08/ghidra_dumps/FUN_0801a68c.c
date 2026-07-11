// FUN_0801a68c

/* WARNING: Control flow encountered bad instruction data */

void FUN_0801a68c(int param_1,int param_2)

{
  int iVar1;
  
  *(undefined1 *)(param_1 + 0x78) = 0;
  iVar1 = func_0x00112970(param_1,param_2,0x90);
  if (iVar1 != 0) {
    *(undefined1 *)(param_1 + 0x78) = 3;
    *(int *)(param_1 + 0x10) = iVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined1 *)(param_2 + 4) = 2;
  *(undefined1 *)(param_2 + 5) = 2;
  *(undefined1 *)(param_2 + 6) = 0;
  func_0x00054d14(param_1,0x26,0);
  *(undefined1 *)(param_1 + 0x145) = 1;
  *(undefined1 *)(param_1 + 7) = 1;
  *(undefined1 *)(param_1 + 6) = 7;
  *(undefined1 *)(param_1 + 0x29) = 0;
  *(undefined1 *)(param_1 + 0x144) = 0;
  *(undefined1 *)(param_1 + 0x148) = 0;
  *(undefined2 *)(param_1 + 0x4a) = 0;
  *(undefined2 *)(param_1 + 0x58) = 0x20;
  return;
}

