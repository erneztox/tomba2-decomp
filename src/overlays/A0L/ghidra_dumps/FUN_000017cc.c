// FUN_000017cc

void FUN_000017cc(int param_1)

{
  if (*(char *)(param_1 + 2) == '\0') {
    DAT_800bfa55 = 0;
    *(byte *)(param_1 + 100) = *(byte *)(param_1 + 100) | 0x80;
    func_0x0006cbd0(param_1,0x80114f5c);
    func_0x0006e3b0(param_1,param_1 + 0x38);
    *(char *)(param_1 + 2) = *(char *)(param_1 + 2) + '\x01';
  }
  return;
}

