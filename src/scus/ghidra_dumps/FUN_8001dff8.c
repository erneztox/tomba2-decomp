
undefined4 FUN_8001dff8(int param_1,undefined4 param_2,int param_3)

{
  ushort uVar1;
  undefined4 uVar2;
  uint uVar3;
  ushort uVar4;
  undefined4 *unaff_s0;
  int iStack00000018;
  uint in_stack_0000001c;
  
  iStack00000018 = param_1;
  if (param_1 < 2) {
    if (param_1 != 0) {
      uVar2 = FUN_8001da40();
      return uVar2;
    }
    if (*(short *)(DAT_80026d88 + 0x1a6) != DAT_80026da0) {
      uVar3 = 1;
      do {
        if (0xf00 < uVar3) {
          DAT_80026dd8 = param_3;
          return 0xfffffffe;
        }
        uVar3 = uVar3 + 1;
      } while (*(short *)(DAT_80026d88 + 0x1a6) != DAT_80026da0);
    }
    DAT_80026dd8 = param_3;
    *(ushort *)(DAT_80026d88 + 0x1aa) = *(ushort *)(DAT_80026d88 + 0x1aa) | 0x30;
    uVar2 = FUN_8001da40();
    return uVar2;
  }
  if (param_1 == 2) {
    DAT_80026da0 = (short)(in_stack_0000001c >> (DAT_80026db0 & 0x1f));
    *(short *)(DAT_80026d88 + 0x1a6) = DAT_80026da0;
    uVar2 = FUN_8001da40();
    return uVar2;
  }
  if (param_1 != 3) {
    uVar2 = FUN_8001da40();
    return uVar2;
  }
  uVar4 = 0x20;
  if (DAT_80026dd8 == param_3) {
    uVar4 = 0x30;
  }
  uVar3 = 1;
  uVar1 = *(ushort *)(DAT_80026d88 + 0x1aa);
  while ((uVar1 & 0x30) != uVar4) {
    if (0xf00 < uVar3) {
      return 0xfffffffe;
    }
    uVar3 = uVar3 + 1;
    uVar1 = *(ushort *)(DAT_80026d88 + 0x1aa);
  }
  if (DAT_80026dd8 != 1) {
    FUN_8001dcb4();
    DAT_80026ddc = *unaff_s0;
    DAT_80026de0 = ((uint)unaff_s0[1] >> 6) + (uint)((unaff_s0[1] & 0x3f) != 0);
    *DAT_80026d8c = DAT_80026ddc;
    *DAT_80026d90 = DAT_80026de0 << 0x10 | 0x10;
    uVar2 = 0x1000201;
    if (DAT_80026dd8 == 1) {
      uVar2 = 0x1000200;
    }
    *DAT_80026d94 = uVar2;
    return 0;
  }
  FUN_8001dcdc();
  FUN_8001dd6c(0x8001d66c);
  DAT_80026d10 = FUN_8001d20c(0xf0000009,0x20,0x2000,0);
  FUN_8001d21c();
  uVar2 = FUN_80017cfc();
  return uVar2;
}

