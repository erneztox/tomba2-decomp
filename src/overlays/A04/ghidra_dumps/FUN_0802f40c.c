// FUN_0802f40c

void FUN_0802f40c(undefined2 param_1,short param_2)

{
  undefined2 in_v1;
  int unaff_s0;
  
  *(undefined2 *)(unaff_s0 + 0x68) = 0xff;
  *(undefined2 *)(unaff_s0 + 0x6c) = 0xff;
  *(undefined2 *)(unaff_s0 + 0x6e) = 30000;
  *(undefined2 *)(unaff_s0 + 0x54) = 0;
  *(undefined2 *)(unaff_s0 + 0x60) = 0;
  *(undefined2 *)(unaff_s0 + 100) = 0;
  *(undefined1 *)(unaff_s0 + 0x5e) = 0;
  *(undefined2 *)(unaff_s0 + 0x7e) = 0;
  *(undefined1 *)(unaff_s0 + 0x2b) = 0;
  *(undefined1 *)(unaff_s0 + 0xbf) = 0;
  *(undefined2 *)(unaff_s0 + 0x66) = 0;
  *(undefined2 *)(unaff_s0 + 0x72) = 0;
  *(undefined2 *)(unaff_s0 + 0x74) = 0;
  *(short *)(unaff_s0 + 0x32) = param_2 + -0x46;
  *(undefined2 *)(unaff_s0 + 0x56) = in_v1;
  *(undefined2 *)(unaff_s0 + 0x58) = param_1;
  *(char *)(unaff_s0 + 4) = *(char *)(unaff_s0 + 4) + '\x01';
  return;
}

