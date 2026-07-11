// FUN_0803dcd0

void FUN_0803dcd0(int param_1)

{
  if (*(char *)(param_1 + 6) == '\0') {
    **(undefined2 **)(param_1 + 0xc0) = 0;
    *(undefined2 *)(*(int *)(param_1 + 0xc0) + 2) = 0x50;
    *(undefined2 *)(*(int *)(param_1 + 0xc0) + 4) = 0x68;
    **(undefined2 **)(param_1 + 0xc4) = 0;
    *(undefined2 *)(*(int *)(param_1 + 0xc4) + 2) = 0x50;
    *(undefined2 *)(*(int *)(param_1 + 0xc4) + 4) = 0xff98;
    *(undefined2 *)(*(int *)(param_1 + 0xc0) + 8) = 0;
    *(undefined2 *)(*(int *)(param_1 + 0xc0) + 10) = 0;
    *(undefined2 *)(*(int *)(param_1 + 0xc0) + 0xc) = 0;
    *(undefined2 *)(*(int *)(param_1 + 0xc4) + 8) = 0;
    *(undefined2 *)(*(int *)(param_1 + 0xc4) + 10) = 0;
    *(undefined2 *)(*(int *)(param_1 + 0xc4) + 0xc) = 0;
    *(undefined2 *)(*(int *)(param_1 + 0xc0) + 2) = 0;
    *(undefined2 *)(*(int *)(param_1 + 0xc4) + 2) = 0;
    *(undefined2 *)(*(int *)(param_1 + 0xc0) + 8) = 0xfb1e;
    *(undefined2 *)(*(int *)(param_1 + 0xc4) + 8) = 0x4e2;
    *(undefined2 *)(param_1 + 0x58) = 0xc00;
    *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
  }
  if (*(char *)(param_1 + 1) != '\0') {
    func_0x000518fc(param_1);
  }
  return;
}

