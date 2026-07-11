// FUN_0802baac

int FUN_0802baac(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = func_0x00072ddc(param_1,1,4,0x59);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x1c) = 0x8012485c;
    *(undefined1 *)(iVar1 + 0x5e) = 0;
    *(byte *)(iVar1 + 0x28) = *(byte *)(iVar1 + 0x28) | 0x80;
  }
  return iVar1;
}

