// FUN_801255cc

void FUN_801255cc(void)

{
  int in_v1;
  undefined2 *unaff_s0;
  short unaff_s1;
  
  if (in_v1 != 0) {
    *(undefined4 *)(in_v1 + 0x1c) = 0x8012e478;
    *(undefined1 *)(in_v1 + 3) = 0;
    *(undefined1 *)(in_v1 + 0x5e) = 0;
    *(short *)(in_v1 + 0x40) = (unaff_s1 >> 4) + 2;
    *(undefined2 *)(in_v1 + 0x2e) = *unaff_s0;
    *(undefined2 *)(in_v1 + 0x32) = unaff_s0[1];
    *(undefined2 *)(in_v1 + 0x36) = unaff_s0[2];
  }
  return;
}

