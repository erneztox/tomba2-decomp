// FUN_08029e94

void FUN_08029e94(undefined1 *param_1)

{
  int iVar1;
  
  iVar1 = func_0x00051b70(param_1,0xc,0x46);
  if (iVar1 == 0) {
    *param_1 = 1;
    *(undefined2 *)(param_1 + 0x80) = 100;
    *(undefined2 *)(param_1 + 0x82) = 200;
    *(undefined2 *)(param_1 + 0x84) = 0x4d;
    *(undefined2 *)(param_1 + 0x86) = 0x4d;
    *(undefined2 *)(param_1 + 0x54) = 0;
    *(undefined2 *)(param_1 + 0x56) = 0;
    *(undefined2 *)(param_1 + 0x58) = 0;
    *(undefined2 *)(param_1 + 0x42) = 0;
    param_1[4] = param_1[4] + '\x01';
  }
  return;
}

