// FUN_08023c80

void FUN_08023c80(int param_1)

{
  if (*(char *)(param_1 + 6) == '\0') {
    *(byte *)(param_1 + 0x1b) = *(byte *)(param_1 + 0x1b) & 0xbf;
    func_0x00051b04(*(undefined4 *)(param_1 + 0xc0),0x19,8);
    func_0x00077c40(param_1,0x80141e14,0x1c);
    *(undefined2 *)(*(int *)(param_1 + 0xc4) + 0x38) = 0x1000;
    *(undefined2 *)(*(int *)(param_1 + 0xc4) + 0x3a) = 0x1000;
    *(undefined2 *)(*(int *)(param_1 + 0xc4) + 0x3c) = 0x1000;
    func_0x00026100(4);
    *(undefined2 *)(param_1 + 0x84) = 0x32;
    *(undefined2 *)(param_1 + 0x86) = 0x92;
    *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
  }
  return;
}

