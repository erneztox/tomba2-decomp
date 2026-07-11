// FUN_080188e0

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_080188e0(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = func_0x00023a04(param_1,param_2,4);
  if (-1 < iVar1) {
    if (*(char *)(param_1 + 3) == '\x04') {
      if (iVar1 == 0) {
        func_0x00077768((int)_DAT_1f80009c,(int)*(short *)(param_1 + 0x60),1);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (iVar1 != 2) {
        return;
      }
      if (_DAT_1f80008c < (int)*(short *)(param_1 + 0x80) + (int)*(short *)(param_2 + 0x80) + -0x28)
      {
        *(undefined1 *)(param_1 + 0x29) = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    *(char *)(param_1 + 0x5f) = *(char *)(param_1 + 0xbe) + '\x02';
  }
  return;
}

