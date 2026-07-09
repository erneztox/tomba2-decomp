// FUN_8010b42c

void FUN_8010b42c(int param_1)

{
  int unaff_s0;
  
  *(undefined1 *)(unaff_s0 + 0x2b) = 1;
  *(char *)(unaff_s0 + 0x46) = (char)(*(ushort *)(param_1 + 0x56) >> 4);
  func_0x8001e860();
  DAT_1f800182 = 0;
  return;
}

