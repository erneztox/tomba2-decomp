// FUN_00003e30

void FUN_00003e30(int param_1)

{
  int iVar1;
  
  func_0x00051b70(param_1,0xc,0);
  *(byte *)(param_1 + 0xd) = *(byte *)(param_1 + 0xd) | 4;
  *(undefined1 *)(*(int *)(param_1 + 0xc0) + 0x3f) = 0xe0;
  func_0x000517f8(param_1);
  iVar1 = func_0x00072ddc(param_1,1,3,0x10);
  if (iVar1 != 0) {
    *(undefined1 *)(iVar1 + 3) = 1;
    *(undefined4 *)(iVar1 + 0x1c) = 0x8010ca1c;
    *(undefined2 *)(iVar1 + 0x2e) = *(undefined2 *)(param_1 + 0x2e);
    *(undefined2 *)(iVar1 + 0x32) = *(undefined2 *)(param_1 + 0x32);
    *(undefined2 *)(iVar1 + 0x36) = *(undefined2 *)(param_1 + 0x36);
  }
  return;
}

