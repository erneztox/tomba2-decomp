// FUN_08021428

void FUN_08021428(int param_1)

{
  func_0x00051b70(param_1,0xc,0x59);
  *(byte *)(param_1 + 0xd) = *(byte *)(param_1 + 0xd) | 4;
  *(undefined1 *)(*(int *)(param_1 + 0xc0) + 0x3f) = 0x20;
  func_0x000517f8();
  return;
}

