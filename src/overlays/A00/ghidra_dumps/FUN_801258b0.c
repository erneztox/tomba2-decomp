// FUN_801258b0

void FUN_801258b0(ushort param_1)

{
  undefined2 in_v0;
  short in_v1;
  int unaff_s0;
  
  *(undefined2 *)(unaff_s0 + 0x50) = in_v0;
  *(short *)(unaff_s0 + 0x60) = -0x400 - in_v1;
  *(ushort *)(unaff_s0 + 0x44) = *(short *)(unaff_s0 + 0x44) + (param_1 & 0x300);
  return;
}

