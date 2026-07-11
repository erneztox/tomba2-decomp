// FUN_0801888c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0801888c(int param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  
  iVar2 = func_0x00023a04(param_1,param_2,3);
  if (-1 < iVar2) {
    cVar1 = func_0x00077768((int)_DAT_1f80009c,(int)*(short *)(param_1 + 0x60),1);
    *(char *)(param_1 + 0x5f) = cVar1 + '\x02';
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return 0;
}

