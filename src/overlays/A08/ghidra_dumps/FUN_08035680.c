// FUN_08035680

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_08035680(undefined1 param_1,int param_2,undefined2 *param_3)

{
  int iVar1;
  
  iVar1 = func_0x0007a980(1,2,0);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x1c) = 0x8012e274;
    *(int *)(iVar1 + 0x10) = param_2;
    *(undefined1 *)(iVar1 + 2) = 0x5b;
    *(undefined1 *)(iVar1 + 3) = param_1;
    *(undefined1 *)(iVar1 + 0x2a) = *(undefined1 *)(param_2 + 0x2a);
    *(undefined2 *)(iVar1 + 0x2e) = *param_3;
    *(undefined2 *)(iVar1 + 0x32) = param_3[1];
    *(undefined2 *)(iVar1 + 0x36) = param_3[2];
    *(undefined2 *)(iVar1 + 0x56) = *(undefined2 *)(param_2 + 0x56);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return 0;
}

