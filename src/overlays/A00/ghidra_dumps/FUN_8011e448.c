// FUN_8011e448

void FUN_8011e448(int param_1,int param_2)

{
  undefined1 in_v0;
  int unaff_s0;
  
  *(undefined1 *)(param_1 + 0x5e) = in_v0;
  *(undefined2 *)(param_1 + 0x5c) = 0x347f;
  *(undefined1 *)(param_1 + 0x5e) = 0;
  *(ushort *)(param_1 + 0x60) = *(ushort *)(unaff_s0 + 0x7a) >> 4 & 3;
  *(undefined1 *)(param_2 + 0x3e) = 1;
  FUN_80131768(param_1,(int)*(short *)(unaff_s0 + 0x6c),0);
  *(undefined1 *)(unaff_s0 + 5) = 0;
  *(undefined1 *)(unaff_s0 + 6) = 0;
  *(undefined1 *)(unaff_s0 + 0x5e) = 0;
  FUN_801303f8();
  return;
}

