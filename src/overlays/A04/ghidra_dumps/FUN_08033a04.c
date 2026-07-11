// FUN_08033a04

void FUN_08033a04(undefined4 param_1)

{
  ushort uVar1;
  int unaff_s0;
  
  uVar1 = *(short *)(unaff_s0 + 0xe) + 1U & 0xf;
  *(ushort *)(unaff_s0 + 0xe) = uVar1;
  if (uVar1 == 0) {
    uVar1 = func_0x0009a450(param_1,0xc);
    *(ushort *)(unaff_s0 + 0x40) = (uVar1 & 0x3f) + 10;
  }
  return;
}

