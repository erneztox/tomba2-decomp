// FUN_80114d44

void FUN_80114d44(int param_1)

{
  if (*(char *)(param_1 + 6) == '\0') {
    *(undefined1 *)(param_1 + 0x5e) = 0;
    FUN_8011de34(param_1,0xf,2,3);
    func_0x80026100(0x10);
    *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
  }
  return;
}

