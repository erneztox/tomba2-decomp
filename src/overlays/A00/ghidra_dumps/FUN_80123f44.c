// FUN_80123f44

void FUN_80123f44(int param_1)

{
  if (*(char *)(param_1 + 0x5f) == '\0') {
    func_0x80074590(6,4,0x1e);
    return;
  }
  *(char *)(param_1 + 0x5f) = *(char *)(param_1 + 0x5f) + -1;
  return;
}

