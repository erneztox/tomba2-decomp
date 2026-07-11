// FUN_8011332c

void FUN_8011332c(char param_1)

{
  byte in_v0;
  byte in_v1;
  int unaff_s0;
  char unaff_s1;
  
  *(byte *)(unaff_s0 + 0x184) = in_v0 | in_v1;
  *(char *)(unaff_s0 + 0x185) = param_1 + unaff_s1;
  if ((*(char *)(unaff_s0 + 0x4e) != -1) && ((char)(param_1 + unaff_s1) == '\b')) {
    func_0x80040c00(10);
    *(char *)(unaff_s0 + 0x189) = unaff_s1;
  }
  return;
}

