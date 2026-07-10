// FUN_80088210

int FUN_80088210(int param_1)

{
  return ((int)(*(byte *)(param_1 + 0xe3) + 1) >> 1) * 4 +
         ((uint)*(byte *)(param_1 + 0xe9) * 5 + 3 & 0xffc) + 4 + (uint)*(ushort *)(param_1 + 0xec);
}

