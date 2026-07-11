// FUN_08021b98

void FUN_08021b98(undefined1 *param_1)

{
  int iVar1;
  
  iVar1 = func_0x00051b70(param_1,0xc,0x34);
  if (iVar1 == 0) {
    param_1[0xd] = param_1[0xd] | 4;
    *(undefined1 *)(*(int *)(param_1 + 0xc0) + 0x3f) = 0xec;
    *param_1 = 1;
    *(undefined2 *)(param_1 + 0x80) = 100;
    *(undefined2 *)(param_1 + 0x82) = 200;
    *(undefined2 *)(param_1 + 0x84) = 0x3c;
    *(undefined2 *)(param_1 + 0x86) = 0x78;
    *(undefined2 *)(param_1 + 0x48) = 0x18;
    *(undefined2 *)(param_1 + 0x54) = 0;
    *(undefined2 *)(param_1 + 0x56) = 0;
    *(undefined2 *)(param_1 + 0x58) = 0;
    param_1[0x2b] = 0;
    *(undefined2 *)(param_1 + 0x4c) = 0x20;
  }
  return;
}

