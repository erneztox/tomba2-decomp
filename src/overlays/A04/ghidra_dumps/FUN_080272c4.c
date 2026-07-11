// FUN_080272c4

void FUN_080272c4(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = func_0x00072ddc(0,2,2,0x30);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x1c) = 0x80138140;
    *(char *)(iVar1 + 3) = (char)param_2;
    if (param_2 == 2) {
      *(byte *)(iVar1 + 0x28) = *(byte *)(iVar1 + 0x28) | 0x80;
    }
    *(int *)(iVar1 + 0x10) = param_1;
  }
  *(undefined2 *)(iVar1 + 0x2e) = *(undefined2 *)(param_1 + 0x2e);
  *(undefined2 *)(iVar1 + 0x32) = *(undefined2 *)(param_1 + 0x32);
  *(undefined2 *)(iVar1 + 0x36) = *(undefined2 *)(param_1 + 0x36);
  return;
}

