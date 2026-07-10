// FUN_80072efc

void FUN_80072efc(int param_1)

{
  *(short *)(param_1 + 0x56) = *(short *)(param_1 + 0x5a) - *(short *)(param_1 + 0x50);
  return;
}

