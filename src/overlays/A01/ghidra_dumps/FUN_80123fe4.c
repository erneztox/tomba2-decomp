// FUN_80123fe4

void FUN_80123fe4(void)

{
  short in_v0;
  int in_v1;
  int unaff_s0;
  
  *(short *)(in_v1 + 10) = in_v0 + -0x40;
  *(short *)(*(int *)(unaff_s0 + 200) + 10) = *(short *)(*(int *)(unaff_s0 + 200) + 10) + 0x40;
  if (*(short *)(*(int *)(unaff_s0 + 0xc4) + 10) < -0x7ff) {
    FUN_8012d034();
    return;
  }
  return;
}

