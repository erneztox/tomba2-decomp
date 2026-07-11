// FUN_80123ff8

void FUN_80123ff8(void)

{
  int in_v1;
  int unaff_s0;
  
  *(short *)(in_v1 + 10) = *(short *)(in_v1 + 10) + 0x40;
  if (*(short *)(*(int *)(unaff_s0 + 0xc4) + 10) < -0x7ff) {
    FUN_8012d034();
    return;
  }
  return;
}

