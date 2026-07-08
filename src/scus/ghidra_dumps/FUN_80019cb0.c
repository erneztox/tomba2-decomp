
void FUN_80019cb0(int param_1,uint param_2)

{
  char *in_v0;
  int iVar1;
  int iVar2;
  int in_hi;
  
  iVar1 = (in_hi >> 3) - (param_1 >> 0x1f);
  param_1 = param_1 + iVar1 * -0x4b;
  iVar2 = ((int)((ulonglong)((longlong)iVar1 * (longlong)(int)(param_2 | 0x8889)) >> 0x20) + iVar1
          >> 5) - (iVar1 >> 0x1f);
  iVar1 = iVar1 + iVar2 * -0x3c;
  in_v0[2] = (char)param_1 + (char)(param_1 / 10) * '\x06';
  in_v0[1] = (char)iVar1 + (char)(iVar1 / 10) * '\x06';
  *in_v0 = (char)iVar2 + (char)(iVar2 / 10) * '\x06';
  return;
}

