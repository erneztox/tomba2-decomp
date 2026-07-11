// FUN_8011d108

undefined4 FUN_8011d108(int param_1)

{
  undefined2 in_v0;
  
  *(undefined2 *)(param_1 + 0x4a) = in_v0;
  if (*(char *)(param_1 + 0x29) != '\0') {
    *(undefined1 *)(param_1 + 0xbf) = 0;
    return 1;
  }
  return 0;
}

