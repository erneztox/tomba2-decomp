// FUN_80112b60

void FUN_80112b60(int param_1)

{
  int in_v1;
  int unaff_s0;
  
  *(undefined2 *)(unaff_s0 + 0x2e) = *(undefined2 *)((in_v1 + -4) * 6 + param_1);
  *(undefined2 *)(unaff_s0 + 0x32) =
       *(undefined2 *)((*(byte *)(unaff_s0 + 3) - 4) * 6 + param_1 + 2);
  *(undefined2 *)(unaff_s0 + 0x36) =
       *(undefined2 *)((*(byte *)(unaff_s0 + 3) - 4) * 6 + param_1 + 4);
  FUN_8011bc08();
  return;
}

