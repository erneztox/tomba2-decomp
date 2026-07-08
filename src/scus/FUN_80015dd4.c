
undefined4 FUN_80015dd4(void)

{
  undefined4 uVar1;
  int in_v1;
  uint unaff_s0;
  
  **(uint **)(in_v1 + 0x5638) = **(uint **)(in_v1 + 0x5638) | 0x800;
  *DAT_8002561c = 0x2000000;
  *DAT_8002561c = 0x1000000;
  FUN_800181e8(DAT_8002564c);
  uVar1 = 0;
  if ((unaff_s0 & 7) == 0) {
    uVar1 = FUN_800158f4();
  }
  return uVar1;
}

