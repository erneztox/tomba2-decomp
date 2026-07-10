// FUN_80055284

void FUN_80055284(int param_1)

{
  if (*(char *)(param_1 + 0x147) != '\0') {
    *(ushort *)(param_1 + 0x56) = *(short *)(param_1 + 0x140) - 0x800U & 0xfff;
    return;
  }
  *(undefined2 *)(param_1 + 0x56) = *(undefined2 *)(param_1 + 0x140);
  return;
}

