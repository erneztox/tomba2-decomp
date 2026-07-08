
undefined4 FUN_8001e094(uint param_1,int param_2)

{
  uint in_v0;
  undefined4 uVar1;
  uint in_v1;
  
  while( true ) {
    in_v1 = in_v1 + 1;
    if (in_v0 == param_1) {
      *(ushort *)(DAT_80026d88 + 0x1aa) = *(ushort *)(DAT_80026d88 + 0x1aa) & 0xffcf | 0x20;
      uVar1 = FUN_8001da40();
      return uVar1;
    }
    if (0xf00 < in_v1) break;
    in_v0 = (uint)*(ushort *)(param_2 + 0x1a6);
  }
  return 0xfffffffe;
}

