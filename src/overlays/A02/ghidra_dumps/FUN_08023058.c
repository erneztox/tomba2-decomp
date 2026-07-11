// FUN_08023058

void FUN_08023058(int param_1,int param_2,short param_3,short param_4)

{
  int iVar1;
  
  *(undefined2 *)(param_1 + 0x58) = 0;
  *(short *)(param_1 + 0x2e) =
       (short)((*(int *)(*(int *)(param_2 + 0xd0) + 0x2c) +
               *(int *)(*(int *)(param_2 + 0xdc) + 0x2c)) / 2);
  iVar1 = func_0x00083f50((int)*(short *)(param_2 + 0x56));
  *(short *)(param_1 + 0x2e) = *(short *)(param_1 + 0x2e) + (short)(iVar1 * param_3 >> 0xc);
  *(short *)(param_1 + 0x36) =
       (short)((*(int *)(*(int *)(param_2 + 0xd0) + 0x34) +
               *(int *)(*(int *)(param_2 + 0xdc) + 0x34)) / 2);
  iVar1 = func_0x00083e80((int)*(short *)(param_2 + 0x56));
  *(short *)(param_1 + 0x36) = *(short *)(param_1 + 0x36) - (short)(iVar1 * param_3 >> 0xc);
  *(short *)(param_1 + 0x32) =
       param_4 + (short)((*(int *)(*(int *)(param_2 + 0xd0) + 0x30) +
                         *(int *)(*(int *)(param_2 + 0xdc) + 0x30)) / 2);
  return;
}

