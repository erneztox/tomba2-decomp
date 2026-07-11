// FUN_080119d4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_080119d4(undefined4 param_1,int param_2)

{
  char cVar1;
  int iVar2;
  
  iVar2 = func_0x0001f40c(param_1,param_2,1);
  if (-1 < iVar2) {
    cVar1 = func_0x00077768((int)((_DAT_1f80009c + 0x800) * 0x10000) >> 0x10,
                            (int)*(short *)(param_2 + 0x60),1);
    *(char *)(param_2 + 0x5f) = cVar1 + '\x02';
    func_0x0001ff7c(param_1,param_2,iVar2,1);
  }
  return;
}

