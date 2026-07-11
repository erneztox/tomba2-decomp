// FUN_8011aff0

undefined4 FUN_8011aff0(void)

{
  int in_v0;
  int in_v1;
  int unaff_s0;
  int unaff_s1;
  
  *(int *)(in_v1 + 0x1c) = in_v0 + 0x3cfc;
  *(undefined2 *)(in_v1 + 0x2e) = *(undefined2 *)(unaff_s0 + 0x2e);
  *(undefined2 *)(in_v1 + 0x32) = *(undefined2 *)(unaff_s0 + 0x32);
  *(undefined2 *)(in_v1 + 0x36) = *(undefined2 *)(unaff_s0 + 0x36);
  *(undefined1 *)(in_v1 + 0x2a) = *(undefined1 *)(unaff_s0 + 0x2a);
  *(undefined1 *)(unaff_s1 + 0x164) = 1;
  func_0x8003116c(0x30,in_v1 + 0x2c,0xfffffff6);
  func_0x80074590(0x37,0x20,0);
  return 1;
}

