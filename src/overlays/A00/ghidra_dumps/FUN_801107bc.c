// FUN_801107bc

void FUN_801107bc(void)

{
  undefined2 in_v1;
  int unaff_s2;
  
  *(undefined2 *)(unaff_s2 + 0x40) = in_v1;
  *(char *)(unaff_s2 + 7) = *(char *)(unaff_s2 + 7) + '\x01';
  FUN_8011980c();
  return;
}

