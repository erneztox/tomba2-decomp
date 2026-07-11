// FUN_8012a5d8

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_8012a5d8(undefined4 param_1,short param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = func_0x8007a980(1,2,0);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x1c) = 0x80132fd0;
    *(undefined1 *)(iVar1 + 2) = 0x12;
    iVar2 = param_2 * 6;
    *(undefined4 *)(iVar1 + 0x10) = param_1;
    *(char *)(iVar1 + 3) = (char)param_2;
    *(undefined2 *)(iVar1 + 0x2e) = *(undefined2 *)(iVar2 + -0x7fec7510);
    *(undefined2 *)(iVar1 + 0x32) = *(undefined2 *)(iVar2 + -0x7fec750e);
    *(undefined2 *)(iVar1 + 0x36) = *(undefined2 *)(iVar2 + -0x7fec750c);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return 0;
}

