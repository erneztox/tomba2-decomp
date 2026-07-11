// FUN_08017d34

void FUN_08017d34(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = func_0x0001ec3c();
  if ((((-1 < iVar2) && (iVar2 == 1)) &&
      (bVar1 = *(byte *)(param_1 + 0x5f), *(byte *)(param_2 + 0x5e) = bVar1, (bVar1 & 1) == 0)) &&
     (((*(byte *)(param_1 + 0x5f) & 1) == *(byte *)(param_1 + 0x147) &&
      (*(char *)(param_1 + 0x46) == -0x3a)))) {
    *(byte *)(param_1 + 0x5f) = *(byte *)(param_1 + 0x5f) | 8;
    *(byte *)(param_2 + 0x5e) = *(byte *)(param_2 + 0x5e) | 8;
    DAT_800bf81e = 0;
  }
  return;
}

