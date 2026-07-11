// FUN_80120298

void FUN_80120298(void)

{
  short in_v0;
  int unaff_s0;
  
  *(short *)(unaff_s0 + 0x94) = in_v0 + -0x20;
  if ((short)(in_v0 + -0x20) < 0x101) {
    *(undefined2 *)(unaff_s0 + 0x94) = 0x100;
    *(int *)(unaff_s0 + 0x30) = *(int *)(unaff_s0 + 0x30) + *(short *)(unaff_s0 + 0x50) * 0x100;
    *(undefined1 *)(unaff_s0 + 0x5e) = 2;
    FUN_801322a8((int)*(short *)(unaff_s0 + 0x32));
    return;
  }
  *(short *)(*(int *)(unaff_s0 + 0xc0) + 0xc) =
       *(short *)(*(int *)(unaff_s0 + 0xc0) + 0xc) + *(short *)(unaff_s0 + 0x94);
  func_0x800517f8();
  return;
}

