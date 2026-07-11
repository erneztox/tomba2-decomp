// FUN_80110250

void FUN_80110250(void)

{
  undefined2 in_v0;
  int in_a3;
  
  *(undefined2 *)(in_a3 + 0x4a) = in_v0;
  *(undefined2 *)(in_a3 + 0x50) = 0x300;
  *(char *)(in_a3 + 6) = *(char *)(in_a3 + 6) + '\x01';
  return;
}

