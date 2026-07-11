// FUN_8011d3e8

void FUN_8011d3e8(int param_1)

{
  if ((DAT_800bf9fd >> 2 & 3) == 3) {
    *(undefined1 *)(param_1 + 0x5e) = 1;
    *(undefined1 *)(param_1 + 5) = 0;
    *(undefined1 *)(param_1 + 6) = 0;
    *(undefined1 *)(param_1 + 7) = 0;
    FUN_801263c4();
    return;
  }
  func_0x800735f4(param_1,0x4a);
  return;
}

