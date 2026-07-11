// FUN_0803dc74

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_0803dc74(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  
  iVar2 = func_0x0007a980(2,2,0);
  if (iVar2 != 0) {
    *(undefined1 *)(iVar2 + 2) = 0x48;
    uVar1 = *(undefined1 *)(param_1 + 3);
    *(undefined4 *)(iVar2 + 0x1c) = 0x80136848;
    *(int *)(iVar2 + 0x10) = param_1;
    *(undefined1 *)(iVar2 + 3) = uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return 0;
}

