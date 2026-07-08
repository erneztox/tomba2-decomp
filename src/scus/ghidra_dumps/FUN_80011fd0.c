
void FUN_80011fd0(int param_1)

{
  uint uVar1;
  int iVar2;
  int local_8;
  
  iVar2 = *(int *)(param_1 + 0x34);
  local_8 = 0x800000;
  while (iVar2 == 0) {
    local_8 = local_8 + -1;
    if (local_8 == 0) {
      *(undefined4 *)(param_1 + 0x34) = 1;
      uVar1 = (uint)(*(int *)(param_1 + 0x28) == 0);
      *(uint *)(param_1 + 0x28) = uVar1;
      *(undefined2 *)(param_1 + 0x2c) = *(undefined2 *)(param_1 + uVar1 * 8 + 0x18);
      *(undefined2 *)(param_1 + 0x2e) =
           *(undefined2 *)(param_1 + *(int *)(param_1 + 0x28) * 8 + 0x1a);
    }
    iVar2 = *(int *)(param_1 + 0x34);
  }
  *(undefined4 *)(param_1 + 0x34) = 0;
  return;
}

