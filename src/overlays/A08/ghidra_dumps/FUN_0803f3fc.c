// FUN_0803f3fc

int FUN_0803f3fc(int param_1)

{
  int iVar1;
  
  iVar1 = func_0x00072ddc(param_1,1,2,0x5f);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x1c) = 0x80137c5c;
    *(byte *)(iVar1 + 3) = *(byte *)(param_1 + 3) | 0x80;
  }
  return iVar1;
}

