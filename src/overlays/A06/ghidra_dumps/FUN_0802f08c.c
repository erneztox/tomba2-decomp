// FUN_0802f08c

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_0802f08c(undefined4 param_1,int param_2)

{
  int iVar1;
  
  param_2 = param_2 * 10;
  iVar1 = func_0x0004d7ec((int)*(short *)(param_2 + -0x7feb82a6),1);
  if ((iVar1 == 0) && (iVar1 = func_0x00072ddc(param_1,2,2,8), iVar1 != 0)) {
    *(undefined4 *)(iVar1 + 0x1c) = 0x80128120;
    *(undefined1 *)(iVar1 + 0x5e) = 0;
    *(undefined2 *)(iVar1 + 0xe) = *(undefined2 *)(param_2 + -0x7feb82a6);
    *(undefined1 *)(iVar1 + 3) = *(undefined1 *)(param_2 + -0x7feb82a4);
    *(undefined2 *)(iVar1 + 0x68) = *(undefined2 *)(param_2 + -0x7feb82a2);
    *(undefined2 *)(iVar1 + 0x60) = *(undefined2 *)(param_2 + -0x7feb82a0);
    if (*(short *)(iVar1 + 0x68) != 0) {
      *(undefined2 *)(iVar1 + 0x62) = 4;
      *(undefined2 *)(iVar1 + 100) = 2;
      *(undefined1 *)(iVar1 + 0x2a) = 0x12;
      *(undefined2 *)(iVar1 + 0x6a) = 5;
      *(byte *)(iVar1 + 0x28) = *(byte *)(iVar1 + 0x28) | 0x80;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return 0;
}

