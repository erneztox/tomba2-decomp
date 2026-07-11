// FUN_8012ad10

/* WARNING: Control flow encountered bad instruction data */

undefined4
FUN_8012ad10(undefined1 param_1,undefined4 param_2,undefined2 *param_3,undefined2 *param_4)

{
  int iVar1;
  
  iVar1 = func_0x8007a980(3,2,0);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x1c) = 0x80133958;
    *(undefined4 *)(iVar1 + 0x10) = param_2;
    *(undefined1 *)(iVar1 + 2) = 0x21;
    *(undefined1 *)(iVar1 + 3) = param_1;
    *(undefined2 *)(iVar1 + 0x2e) = *param_3;
    *(undefined2 *)(iVar1 + 0x32) = param_3[1];
    *(undefined2 *)(iVar1 + 0x36) = param_3[2];
    *(undefined2 *)(iVar1 + 0x4e) = *param_4;
    *(undefined2 *)(iVar1 + 0x50) = param_4[1];
    *(undefined2 *)(iVar1 + 0x52) = param_4[2];
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return 0;
}

