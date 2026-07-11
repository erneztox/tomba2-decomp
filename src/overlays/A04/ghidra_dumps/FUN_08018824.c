// FUN_08018824

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08018824(int param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  
  iVar2 = func_0x00023a04(param_1,param_2,1);
  if (-1 < iVar2) {
    if (iVar2 == 0) {
      cVar1 = func_0x00077768((int)_DAT_1f80009c,(int)*(short *)(param_1 + 0x60),1);
      *(char *)(param_1 + 0x5f) = cVar1 + '\x02';
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (iVar2 == 2) {
      *(undefined1 *)(param_1 + 0x29) = 1;
    }
  }
  return;
}

