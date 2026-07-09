// FUN_8011072c

/* WARNING: Removing unreachable block (ram,0x80119760) */
/* WARNING: Removing unreachable block (ram,0x80119774) */
/* WARNING: Removing unreachable block (ram,0x80119784) */

void FUN_8011072c(undefined4 param_1,int param_2)

{
  int iVar1;
  int in_v1;
  uint unaff_s0;
  uint unaff_s1;
  int unaff_s2;
  
  *(byte *)(in_v1 + 0x28) = *(byte *)(in_v1 + 0x28) | 0x80;
  DAT_800bf9e3 = DAT_800bf9e3 | (byte)(param_2 << (unaff_s1 & 0x1f));
  *(char *)(unaff_s2 + 0x5f) = *(char *)(unaff_s2 + 0x5f) - (char)(param_2 << (unaff_s0 & 0x1f));
  func_0x8004d604();
  iVar1 = func_0x8007778c();
  if (iVar1 != 0) {
    func_0x8004190c();
    func_0x800518fc();
  }
  return;
}

