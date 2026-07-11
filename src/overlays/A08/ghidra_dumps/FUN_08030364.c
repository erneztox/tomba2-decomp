// FUN_08030364

void FUN_08030364(undefined1 *param_1)

{
  int iVar1;
  
  iVar1 = func_0x00051b70(param_1,0xc,0x58);
  if (iVar1 == 0) {
    param_1[0xd] = param_1[0xd] | 4;
    *(undefined1 *)(*(int *)(param_1 + 0xc0) + 0x3f) = 0x1e;
    *param_1 = 1;
    *(undefined2 *)(param_1 + 0x80) = 0x78;
    *(undefined2 *)(param_1 + 0x82) = 0xf0;
    *(undefined2 *)(param_1 + 0x84) = 0x1c0;
    *(undefined2 *)(param_1 + 0x86) = 0x1c0;
    func_0x000517f8();
  }
  return;
}

