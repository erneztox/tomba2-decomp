
void FUN_8001805c(undefined4 param_1,int param_2,int param_3,uint param_4)

{
  undefined1 in_v0;
  undefined2 uVar1;
  uint in_v1;
  uint uVar2;
  int in_t0;
  byte *in_t1;
  int unaff_s0;
  int unaff_s1;
  
  *(undefined1 *)(in_t0 + 3) = in_v0;
  if (param_3 != 0) {
    in_v1 = in_v1 | 0x200;
  }
  param_4 = param_4 & 0x9ff;
  if (param_2 != 0) {
    param_4 = param_4 | 0x400;
  }
  *(uint *)(in_t0 + 4) = in_v1 | param_4;
  if (in_t1 != (byte *)0x0) {
    uVar2 = (-(int)*(short *)(in_t1 + 6) & 0xf8U) << 2;
    *(uint *)(in_t0 + 8) =
         (uint)(in_t1[2] >> 3) << 0xf | (uint)(*in_t1 >> 3) << 10 | 0xe2000000 | uVar2 |
         (int)(-(int)*(short *)(in_t1 + 4) & 0xffU) >> 3;
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
  *(undefined4 *)(in_t0 + 8) = 0;
  return;
}

