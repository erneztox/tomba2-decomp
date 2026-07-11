// FUN_08011334

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_08011334(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 2000;
  do {
    iVar1 = func_0x001075f8(param_1,param_2);
    if (iVar1 != 0) {
      iVar2 = 1 - *(int *)(param_1 + 8);
      *(int *)(param_1 + 8) = iVar2;
      func_0x0009cce0(iVar1,*(undefined4 *)(param_1 + iVar2 * 4));
      func_0x0008cf40(iVar1);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return 0xffffffff;
}

