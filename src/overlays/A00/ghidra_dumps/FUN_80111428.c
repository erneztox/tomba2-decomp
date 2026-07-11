// FUN_80111428

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80111428(void)

{
  int in_v0;
  int unaff_s2;
  
  *(int *)(unaff_s2 + 0x30) = *(int *)(unaff_s2 + 0x30) + in_v0 * 0x100;
  if (_DAT_80148874 < *(short *)(unaff_s2 + 0x32)) {
    func_0x80041768();
    *(char *)(unaff_s2 + 6) = *(char *)(unaff_s2 + 6) + '\x01';
    *(short *)(unaff_s2 + 0x32) = _DAT_80148874;
    FUN_8011a5e8();
    return;
  }
  return;
}

