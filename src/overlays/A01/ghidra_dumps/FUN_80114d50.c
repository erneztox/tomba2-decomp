// FUN_80114d50

void FUN_80114d50(undefined4 param_1)

{
  int unaff_s0;
  
  if (*(char *)(unaff_s0 + 6) == '\0') {
    *(undefined1 *)(unaff_s0 + 0x5e) = 0;
    FUN_8011de34(param_1,0xf,2,3);
    func_0x80026100(0x10);
    *(char *)(unaff_s0 + 6) = *(char *)(unaff_s0 + 6) + '\x01';
  }
  return;
}

