// FUN_080157c4

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_080157c4(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  
  if ((*(ushort *)(param_1 + 0x17e) & 0x200) == 0) {
    if ((*(ushort *)(param_1 + 0x17e) & 0x8000) != 0) {
      func_0x0001f830();
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    iVar2 = func_0x00020364(param_1,param_2,0x80);
    if (iVar2 == 3) {
      cVar1 = func_0x00077768((int)_DAT_1f80009c,(int)*(short *)(param_1 + 0x140),1);
      *(char *)(param_2 + 0x5f) = cVar1 + '\x02';
    }
  }
  return;
}

