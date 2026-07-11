// FUN_0802e3bc

bool FUN_0802e3bc(int param_1,undefined1 param_2)

{
  undefined2 uVar1;
  int iVar2;
  
  iVar2 = func_0x00072ddc(param_1,0,2,0x56);
  if (iVar2 != 0) {
    *(undefined4 *)(iVar2 + 0x1c) = 0x80126f84;
    *(byte *)(iVar2 + 0x28) = *(byte *)(iVar2 + 0x28) | 0x80;
    *(undefined2 *)(iVar2 + 0x2e) = *(undefined2 *)(*(int *)(param_1 + 0xd0) + 0x2c);
    *(undefined2 *)(iVar2 + 0x32) = *(undefined2 *)(*(int *)(param_1 + 0xd0) + 0x30);
    uVar1 = *(undefined2 *)(*(int *)(param_1 + 0xd0) + 0x34);
    *(undefined1 *)(iVar2 + 3) = param_2;
    *(undefined2 *)(iVar2 + 0x36) = uVar1;
  }
  return iVar2 != 0;
}

