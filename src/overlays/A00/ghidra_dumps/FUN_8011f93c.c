// FUN_8011f93c

void FUN_8011f93c(int param_1)

{
  if (*(char *)(param_1 + 5) == '\0') {
    if ((*(int *)(param_1 + 0x10) == 0) || (*(char *)(*(int *)(param_1 + 0x10) + 0x5e) == '\x02')) {
      *(undefined1 *)(param_1 + 0xb) = 0;
      *(undefined4 *)(param_1 + 0x10) = 0;
      *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
    }
  }
  else if (*(char *)(param_1 + 5) != '\x01') {
    FUN_8012893c();
    return;
  }
  FUN_801281b8();
  return;
}

