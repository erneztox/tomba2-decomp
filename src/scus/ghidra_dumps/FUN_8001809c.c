
void FUN_8001809c(uint param_1)

{
  undefined2 uVar1;
  uint in_v0;
  uint in_v1;
  uint uVar2;
  int in_t0;
  int in_t1;
  int unaff_s0;
  int unaff_s1;
  
  uVar2 = (-(int)*(short *)(in_t1 + 6) & 0xf8U) << 2;
  *(uint *)(in_t0 + 8) =
       param_1 | in_v0 | in_v1 | uVar2 | (int)(-(int)*(short *)(in_t1 + 4) & 0xffU) >> 3;
  uVar1 = 0x20;
  *(short *)(unaff_s1 + 0x76) = (short)uVar2;
  do {
    *(undefined2 *)(unaff_s1 + 0x68) = uVar1;
    *(undefined2 *)(unaff_s1 + 0x6a) = *(undefined2 *)(unaff_s0 + 0xc);
    *(undefined2 *)(unaff_s1 + 0x6c) = *(undefined2 *)(unaff_s0 + 0xe);
    *(undefined2 *)(unaff_s1 + 0x6e) = *(undefined2 *)(unaff_s0 + 0x10);
    *(undefined2 *)(unaff_s1 + 0x70) = *(undefined2 *)(unaff_s0 + 8);
    *(undefined2 *)(unaff_s1 + 0x72) = *(undefined2 *)(unaff_s0 + 8);
    *(undefined2 *)(unaff_s1 + 0x74) = *(undefined2 *)(unaff_s0 + 8);
    uVar1 = 0x14;
    *(undefined2 *)(unaff_s1 + 0x76) = *(undefined2 *)(unaff_s0 + 8);
  } while( true );
}

