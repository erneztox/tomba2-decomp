// FUN_8006cdcc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_8006cdcc(int param_1)

{
  if (*(short *)(param_1 + 0x84) != 0) {
    *(short *)(param_1 + 0x84) = *(short *)(param_1 + 0x84) + -1;
    _DAT_1f8000d0 = _DAT_1f8000d0 + *(short *)(param_1 + 0x78) * 0x200;
    _DAT_1f8000d4 = _DAT_1f8000d4 + *(short *)(param_1 + 0x7a) * 0x200;
    _DAT_1f8000d8 = _DAT_1f8000d8 + *(short *)(param_1 + 0x7c) * 0x200;
    *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + *(short *)(param_1 + 0x7e) * 0x200;
    *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + *(short *)(param_1 + 0x80) * 0x200;
    *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + *(short *)(param_1 + 0x82) * 0x200;
    return 0;
  }
  return 1;
}

