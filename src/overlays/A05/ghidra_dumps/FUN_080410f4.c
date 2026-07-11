// FUN_080410f4

void FUN_080410f4(void)

{
  int in_v0;
  int in_v1;
  undefined4 in_t0;
  int unaff_s0;
  
  setCopControlWord(2,0xa800,in_v1);
  setCopControlWord(2,0xb000,in_t0);
  setCopControlWord(2,0xb800,in_v1);
  *(undefined4 *)(in_v0 + 0x90) = 0;
  do {
    func_0x00031ac4(unaff_s0 + 0x2c,unaff_s0 + 0x50,unaff_s0 + 0x48);
    func_0x00027768(*(undefined4 *)(unaff_s0 + 0x3c),0,(int)*(short *)(unaff_s0 + 0x32),0);
    in_v1 = in_v1 + 1;
    *(short *)(unaff_s0 + 0x4e) = *(short *)(unaff_s0 + 0x4e) + 0x400;
  } while (in_v1 < 4);
  return;
}

