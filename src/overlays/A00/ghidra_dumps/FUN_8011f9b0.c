// FUN_8011f9b0

void FUN_8011f9b0(int param_1)

{
  int unaff_s1;
  int unaff_s3;
  
  if (*(char *)(param_1 + 5) == '\0') {
    if ((*(int *)(param_1 + 0x10) == 0) || (*(char *)(*(int *)(param_1 + 0x10) + 0x5e) == '\x02')) {
      *(undefined1 *)(param_1 + 0xb) = 0;
      *(undefined4 *)(param_1 + 0x10) = 0;
      *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
    }
    if (5 < DAT_1f800207) {
      return;
    }
    FUN_801281b8(param_1);
    FUN_801285ec(param_1);
  }
  else if (*(char *)(param_1 + 5) == '\x01') {
    FUN_801281b8(param_1);
    return;
  }
  func_0x80081218();
  *(undefined2 *)(unaff_s1 + 2) = 0xcd;
  func_0x80081218();
  *(undefined1 *)(unaff_s3 + 6) = 0;
  *(char *)(unaff_s3 + 5) = *(char *)(unaff_s3 + 5) + '\x01';
  return;
}

