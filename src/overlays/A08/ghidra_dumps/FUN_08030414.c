// FUN_08030414

/* WARNING: Control flow encountered bad instruction data */

void FUN_08030414(int param_1)

{
  int iVar1;
  
  iVar1 = func_0x00051b70(param_1,0xc,0x57);
  if (iVar1 == 0) {
    if (DAT_800bf928 == -1) {
      *(undefined1 *)(param_1 + 5) = 1;
      *(undefined2 *)(param_1 + 0x2e) = 0x40c9;
      *(undefined2 *)(param_1 + 0x32) = 0xf148;
      *(undefined2 *)(param_1 + 0x36) = 0x10ed;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(undefined1 *)(param_1 + 5) = 0;
    *(undefined2 *)(param_1 + 0x54) = 0;
    *(undefined2 *)(param_1 + 0x56) = 0;
    *(undefined2 *)(param_1 + 0x58) = 0;
  }
  return;
}

