// FUN_8010b134

void FUN_8010b134(int param_1)

{
  int unaff_s0;
  
  if ((*(char *)(param_1 + 0x181) == '\0') &&
     ((*(char *)(param_1 + 0x146) != '\x04' || (DAT_1f80027b == '\0')))) {
    *(undefined2 *)(param_1 + 0x6a) = 0;
    if (*(char *)(param_1 + 5) == '\x06') {
      *(undefined1 *)(param_1 + 5) = 0x32;
      *(byte *)(param_1 + 0x149) = *(byte *)(param_1 + 0x149) & 1 | 2;
      *(byte *)(unaff_s0 + 0xd) = *(byte *)(unaff_s0 + 0xd) & 0xfd;
      *(char *)(unaff_s0 + 7) = *(char *)(unaff_s0 + 7) + '\x01';
      FUN_8011d0f4();
      return;
    }
    *(undefined1 *)(param_1 + 5) = 0x1d;
    *(undefined1 *)(param_1 + 6) = 0;
    *(undefined1 *)(param_1 + 4) = 1;
    *(undefined1 *)(param_1 + 7) = 0;
    if (*(char *)(param_1 + 0x144) == '\x01') {
      *(undefined1 *)(param_1 + 0x144) = 0;
    }
  }
  return;
}

