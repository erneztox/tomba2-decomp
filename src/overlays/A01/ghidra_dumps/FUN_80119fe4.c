// FUN_80119fe4

void FUN_80119fe4(int param_1,short param_2)

{
  if (*(char *)(param_1 + 0xbe) == '\0') {
    *(short *)(param_1 + 0x44) = param_2;
    FUN_80122fa4();
    return;
  }
  *(short *)(param_1 + 0x44) = -param_2;
  func_0x8004130c(param_1,0);
  return;
}

