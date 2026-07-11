// FUN_8011d8c8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8011d8c8(void)

{
  int iVar1;
  int unaff_s0;
  
  if (*(char *)(unaff_s0 + 0x5e) == '\x02') {
    *(undefined1 *)(unaff_s0 + 5) = 2;
    FUN_80126a14();
    return;
  }
  if (((1 < *(byte *)(unaff_s0 + 3) - 7) || (*(char *)(unaff_s0 + 0x47) == '\x01')) &&
     (iVar1 = func_0x800777fc(), iVar1 != 0)) {
    *(short *)(*(int *)(unaff_s0 + 200) + 10) = -*(short *)(unaff_s0 + 0x56) - _DAT_1f8000f2;
    func_0x800517f8();
    *(undefined1 *)(unaff_s0 + 0x29) = 0;
  }
  return;
}

