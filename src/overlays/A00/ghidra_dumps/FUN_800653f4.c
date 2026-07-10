// FUN_800653f4

void FUN_800653f4(int param_1)

{
  if (*(char *)(param_1 + 6) == '\0') {
    FUN_80054198(param_1);
    FUN_80054d14(param_1,0x40,0);
    *(undefined1 *)(param_1 + 7) = 0;
    *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
  }
  else if (*(char *)(param_1 + 6) != '\x01') {
    return;
  }
  if (DAT_800bf870 == '\0') {
    func_0x8010c780(param_1);
  }
  return;
}

