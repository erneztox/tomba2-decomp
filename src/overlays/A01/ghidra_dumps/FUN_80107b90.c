// FUN_80107b90

void FUN_80107b90(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = func_0x8001f40c(param_1,param_2,1);
  if (-1 < iVar1) {
    if ((*(char *)(param_1 + 0x164) == '\f') || (*(byte *)(param_2 + 3) - 3 < 2)) {
      func_0x80133cac(0,param_2,&stack0xfffffff0,&stack0xfffffff8);
      return;
    }
    func_0x8001ff7c(param_1,param_2,iVar1,1);
  }
  return;
}

