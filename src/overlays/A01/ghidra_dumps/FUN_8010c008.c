// FUN_8010c008

void FUN_8010c008(void)

{
  int in_v0;
  int in_v1;
  int iVar1;
  int in_lo;
  short sStack00000010;
  undefined2 uStack00000012;
  undefined2 uStack00000014;
  short sStack00000018;
  undefined2 uStack0000001a;
  undefined2 uStack0000001c;
  short sStack00000020;
  undefined2 uStack00000022;
  undefined2 uStack00000024;
  short sStack00000028;
  undefined2 uStack0000002a;
  undefined2 uStack0000002c;
  
  if (in_v0 == 0) {
    trap(0x1c00);
  }
  if ((in_v0 == -1) && (in_v1 == -0x80000000)) {
    trap(0x1800);
  }
  iVar1 = 0;
  uStack00000012 = 0xfff4;
  uStack0000001a = 0xfff4;
  sStack00000010 = 0;
  sStack00000018 = 0x18;
  sStack00000020 = 0;
  sStack00000028 = 0x18;
  uStack00000022 = 0xc;
  uStack0000002a = 0xc;
  uStack00000014 = 0;
  uStack0000001c = 0;
  uStack00000024 = 0;
  uStack0000002c = 0;
  if (0 < in_lo) {
    do {
      func_0x8003b320();
      iVar1 = iVar1 + 1;
      sStack00000010 = sStack00000010 + -0x18;
      sStack00000018 = sStack00000018 + -0x18;
      sStack00000020 = sStack00000020 + -0x18;
      sStack00000028 = sStack00000028 + -0x18;
    } while (iVar1 * 0x10000 >> 0x10 < in_lo);
  }
  return;
}

