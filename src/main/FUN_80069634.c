
void FUN_80069634(int param_1)

{
  *(undefined2 *)(param_1 + 0x44) =
       *(undefined2 *)
        (&DAT_800a4a6c + (uint)*(byte *)(param_1 + 0x5e) * 2 + (*(byte *)(param_1 + 2) - 1) * 4);
  if (*(char *)(param_1 + 0x5e) != '\0') {
    *(undefined2 *)(param_1 + 0x40) = 2;
    return;
  }
  *(undefined2 *)(param_1 + 0x40) = 1;
  return;
}

