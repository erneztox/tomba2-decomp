
void FUN_800970ec(undefined4 param_1,undefined2 param_2,int param_3)

{
  *(undefined2 *)(DAT_800ac604 + 0x1a6) = param_2;
  FUN_800976c8();
  *(ushort *)(DAT_800ac604 + 0x1aa) = *(ushort *)(DAT_800ac604 + 0x1aa) | 0x30;
  FUN_800976c8();
  FUN_800976a0();
  *DAT_800ac608 = param_1;
  *DAT_800ac60c = param_3 << 0x10 | 0x10;
  DAT_800ac654 = 1;
  *DAT_800ac610 = 0x1000200;
  return;
}

