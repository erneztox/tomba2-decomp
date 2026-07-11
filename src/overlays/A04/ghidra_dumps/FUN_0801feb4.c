// FUN_0801feb4

void FUN_0801feb4(undefined1 *param_1)

{
  int iVar1;
  
  iVar1 = func_0x00051b70(param_1,0xc,0x37);
  if (iVar1 == 0) {
    param_1[0xb] = 0xf;
    *param_1 = 1;
    param_1[0xd] = 0;
    *(undefined2 *)(param_1 + 0x80) = 0x20;
    *(undefined2 *)(param_1 + 0x82) = 0x40;
    *(undefined2 *)(param_1 + 0x84) = 0x20;
    *(undefined2 *)(param_1 + 0x86) = 0x40;
    func_0x0004b354();
  }
  return;
}

