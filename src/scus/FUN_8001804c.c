
void FUN_8001804c(int param_1,int param_2,int param_3,uint param_4,byte *param_5)

{
  undefined2 uVar1;
  uint uVar2;
  int unaff_s0;
  int unaff_s1;
  
  uVar2 = 0xe1000000;
  *(undefined1 *)(param_1 + 3) = 2;
  if (param_3 != 0) {
    uVar2 = 0xe1000200;
  }
  param_4 = param_4 & 0x9ff;
  if (param_2 != 0) {
    param_4 = param_4 | 0x400;
  }
  *(uint *)(param_1 + 4) = uVar2 | param_4;
  if (param_5 != (byte *)0x0) {
    uVar2 = (-(int)*(short *)(param_5 + 6) & 0xf8U) << 2;
    *(uint *)(param_1 + 8) =
         (uint)(param_5[2] >> 3) << 0xf | (uint)(*param_5 >> 3) << 10 | 0xe2000000 | uVar2 |
         (int)(-(int)*(short *)(param_5 + 4) & 0xffU) >> 3;
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
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}

