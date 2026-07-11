// FUN_080266a4

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_080266a4(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x78) == '\0') {
    iVar1 = func_0x0006fb0c(param_1,0x93);
    if (iVar1 != 0) {
      func_0x000440e4(&DAT_800e7e80,0xcf,2);
      _DAT_800bf844 = iVar1;
      *(undefined2 *)(iVar1 + 0x60) = 0xfff0;
      *(undefined1 *)(iVar1 + 0x5e) = 0;
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

