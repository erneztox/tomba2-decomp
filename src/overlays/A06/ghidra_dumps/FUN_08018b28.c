// FUN_08018b28

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08018b28(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = func_0x0001f40c(param_1,param_2,1);
  if (-1 < iVar1) {
    if ((*(char *)(param_1 + 0x144) == '\x01') && (iVar1 < 2)) {
      func_0x0001fdb4(param_2,1,3,0x1c);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(char *)(param_1 + 0x2b) = (char)(_DAT_1f80009c >> 4);
    func_0x00022d08(param_1,param_2,1,0);
  }
  return;
}

