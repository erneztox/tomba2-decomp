// FUN_08042f94

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_08042f94(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x78) == '\0') {
    iVar1 = func_0x001238d0(param_1,4);
    if (iVar1 != 0) {
      DAT_800bfa38 = 2;
      *(int *)(param_1 + 0x14) = iVar1;
      func_0x000440e4(&DAT_800e7e80,0xcf,2);
      *(char *)(param_1 + 0x78) = *(char *)(param_1 + 0x78) + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    if (*(char *)(param_1 + 0x78) != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (DAT_800bf80e != '\0') {
      return 1;
    }
  }
  return 0;
}

