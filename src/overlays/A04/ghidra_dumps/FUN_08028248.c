// FUN_08028248

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_08028248(int param_1)

{
  int iVar1;
  
  iVar1 = func_0x0007a980(2,4,0);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x1c) = 0x80120f08;
    *(undefined1 *)(iVar1 + 2) = 0x31;
    *(undefined2 *)(iVar1 + 0x2e) = *(undefined2 *)(param_1 + 0x2e);
    *(short *)(iVar1 + 0x32) = *(short *)(param_1 + 0x32) + -100;
    *(undefined2 *)(iVar1 + 0x36) = *(undefined2 *)(param_1 + 0x36);
    *(undefined1 *)(iVar1 + 0x2a) = *(undefined1 *)(param_1 + 0x2a);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return 0;
}

