// FUN_08018250

void FUN_08018250(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = func_0x0001ec3c();
  if (((iVar1 == 1) && ((*(byte *)(param_1 + 0x5f) & 1) == *(byte *)(param_1 + 0x147))) &&
     (*(char *)(param_1 + 0x46) == -0x3a)) {
    *(byte *)(param_2 + 0x5f) = *(byte *)(param_1 + 0x5f);
    *(byte *)(param_1 + 0x5f) = *(byte *)(param_1 + 0x5f) | 8;
  }
  return;
}

