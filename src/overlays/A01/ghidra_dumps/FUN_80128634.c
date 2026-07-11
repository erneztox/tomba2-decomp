// FUN_80128634

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80128634(void)

{
  undefined2 uVar1;
  undefined2 uVar2;
  uint *unaff_s5;
  int unaff_s7;
  byte bStack00000010;
  byte bStack00000012;
  
  uVar2 = _DAT_801388ee;
  uVar1 = _DAT_801388ec;
  *(undefined1 *)((int)unaff_s5 + 3) = 2;
  bStack00000012 = (byte)uVar2;
  bStack00000010 = (byte)uVar1;
  unaff_s5[2] = 0;
  unaff_s5[1] = (uint)(bStack00000012 >> 3) << 0xf | (uint)(bStack00000010 >> 3) << 10 | 0xe2000000
                | 0x318;
  *unaff_s5 = *(uint *)(unaff_s7 + 0x1ffc) | 0x2000000;
  *(uint **)(unaff_s7 + 0x1ffc) = unaff_s5;
  _DAT_800bf544 = unaff_s5 + 3;
  return;
}

