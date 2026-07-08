
void FUN_80019ce0(int param_1,int param_2,int param_3,int param_4)

{
  char *in_v0;
  int in_v1;
  int iVar1;
  int in_t1;
  
  param_1 = param_1 - (in_v1 - param_2);
  iVar1 = (param_3 + param_4 >> 5) - (param_4 >> 0x1f);
  param_4 = param_4 + iVar1 * -0x3c;
  in_v0[2] = (char)param_1 +
             ((char)(int)((longlong)param_1 * (longlong)in_t1 >> 0x22) - (char)(param_1 >> 0x1f)) *
             '\x06';
  in_v0[1] = (char)param_4 +
             ((char)(int)((longlong)param_4 * (longlong)in_t1 >> 0x22) - (char)(param_4 >> 0x1f)) *
             '\x06';
  *in_v0 = (char)iVar1 +
           ((char)(int)((longlong)iVar1 * (longlong)in_t1 >> 0x22) - (char)(iVar1 >> 0x1f)) * '\x06'
  ;
  return;
}

