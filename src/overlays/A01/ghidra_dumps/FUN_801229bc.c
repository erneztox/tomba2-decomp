// FUN_801229bc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_801229bc(void)

{
  int in_v1;
  int unaff_s0;
  
  func_0x80027144(*(undefined4 *)(in_v1 + 0x40),unaff_s0 + 0x2c,0x400,0xc);
  func_0x80074590(0xc,0,0);
  func_0x80074590(0x97,0,0);
  *(undefined4 *)(*(int *)(unaff_s0 + 0xc0) + 0x40) = 0;
  *(char *)(unaff_s0 + 6) = *(char *)(unaff_s0 + 6) + '\x01';
  DAT_800e806c = 8;
  _DAT_800e8042 = 0x2cdc;
  _DAT_800e8046 = 0xe4d5;
  _DAT_800e804a = 0x35a3;
  FUN_8012ba48();
  return;
}

