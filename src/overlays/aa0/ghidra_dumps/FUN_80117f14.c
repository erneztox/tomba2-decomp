// FUN_80117f14

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80117f14(short param_1)

{
  short in_v0;
  uint in_v1;
  int unaff_s0;
  
  *(undefined2 *)(unaff_s0 + 0x56) = 0;
  *(short *)(unaff_s0 + 0x50) = in_v0 - param_1;
  if ((in_v1 & 1) == 0) {
    DAT_800bfa47 = 0x80;
    DAT_800e7e85 = 0x12;
    DAT_800e7e86 = 0;
    DAT_800e7e87 = 0;
    DAT_800bf80a = 3;
    _DAT_800bf83a = 0x810;
  }
  *(char *)(unaff_s0 + 6) = *(char *)(unaff_s0 + 6) + '\x01';
  FUN_80120f2c();
  return;
}

