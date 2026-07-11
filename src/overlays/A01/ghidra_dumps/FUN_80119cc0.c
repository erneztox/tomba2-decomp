// FUN_80119cc0

void FUN_80119cc0(void)

{
  int iVar1;
  int in_v1;
  int in_a3;
  int in_t0;
  
  iVar1 = (in_v1 + 0x10) * 0x10000 >> 0x10;
  *(short *)(in_a3 + 0x72) = (short)((0xa0 - iVar1) / 2);
  *(short *)(in_a3 + 0x6a) = (short)(in_v1 + 0x10);
  *(int *)(in_t0 + 0x34) = iVar1 * 0x10000 + 0x100;
  FUN_80122ca4();
  return;
}

