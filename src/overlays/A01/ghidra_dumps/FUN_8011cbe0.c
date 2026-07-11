// FUN_8011cbe0

void FUN_8011cbe0(void)

{
  int in_v0;
  undefined1 in_v1;
  int iVar1;
  int unaff_s0;
  
  if (*(byte *)(in_v0 + -0x6ea) == 0) {
    *(undefined1 *)(unaff_s0 + 0x5e) = 0;
  }
  else {
    if (2 < *(byte *)(in_v0 + -0x6ea)) {
      *(undefined1 *)(unaff_s0 + 0x5e) = 2;
      if (DAT_800bf873 != '\0') {
        iVar1 = *(int *)(unaff_s0 + 0xc0);
        func_0x80051b04();
        *(undefined1 *)(iVar1 + 6) = 0;
        FUN_8012f188();
        return;
      }
      return;
    }
    *(undefined1 *)(unaff_s0 + 0x5e) = in_v1;
  }
  FUN_8012ebf8();
  return;
}

