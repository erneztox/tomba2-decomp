
void FUN_80017e8c(undefined2 *param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
                 int param_5)

{
  int iVar1;
  
  iVar1 = FUN_80018b50();
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined1 *)((int)param_1 + 0x19) = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined1 *)((int)param_1 + 0x1b) = 0;
  *(undefined1 *)(param_1 + 0xb) = 1;
  param_1[3] = (short)param_5;
  if (iVar1 != 0) {
    FUN_80017704();
    return;
  }
  *(bool *)((int)param_1 + 0x17) = param_5 < 0x101;
  param_1[4] = param_2;
  param_1[5] = param_3;
  param_1[10] = 10;
  *(undefined1 *)(param_1 + 0xc) = 0;
  return;
}

