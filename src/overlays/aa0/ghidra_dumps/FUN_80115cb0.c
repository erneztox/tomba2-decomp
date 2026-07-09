// FUN_80115cb0

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x8011f07c) */
/* WARNING: Removing unreachable block (ram,0x80127e08) */
/* WARNING: Removing unreachable block (ram,0x80127e18) */
/* WARNING: Removing unreachable block (ram,0x02002820) */
/* WARNING: Removing unreachable block (ram,0x80128160) */
/* WARNING: Removing unreachable block (ram,0x8012817c) */
/* WARNING: Removing unreachable block (ram,0x80127dec) */

void FUN_80115cb0(void)

{
  int in_v0;
  int iVar1;
  int in_v1;
  int unaff_s0;
  int in_lo;
  
  iVar1 = (in_v0 - in_v1) * 0x10000 >> 0x10;
  if (0x225510 < in_lo + iVar1 * iVar1) {
    *(undefined1 *)(unaff_s0 + 6) = 5;
    *(undefined1 *)(unaff_s0 + 7) = 0;
    *(undefined1 *)(unaff_s0 + 0x29) = 0;
    FUN_801280d4();
    return;
  }
  func_0x8009a450();
  return;
}

