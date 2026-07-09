// FUN_80116f10

void FUN_80116f10(void)

{
  int in_v1;
  short *psVar1;
  int in_a3;
  
  psVar1 = (short *)(*(int *)((uint)*(byte *)(in_a3 + 3) * 4 + in_v1 + -0x6ba0) +
                    *(short *)(in_a3 + 0x6c) * 6);
  FUN_8011ff18((int)psVar1[2] - (int)*(short *)(in_a3 + 0x36),
               (int)*psVar1 - (int)*(short *)(in_a3 + 0x2e));
  return;
}

