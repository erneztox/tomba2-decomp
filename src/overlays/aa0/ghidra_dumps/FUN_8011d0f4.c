// FUN_8011d0f4

undefined4 FUN_8011d0f4(int param_1)

{
  short in_v0;
  
  if (0x2000 < in_v0) {
    *(undefined2 *)(param_1 + 0x4a) = 0x2000;
  }
  if (*(char *)(param_1 + 0x29) != '\0') {
    *(undefined1 *)(param_1 + 0xbf) = 0;
    return 1;
  }
  return 0;
}

