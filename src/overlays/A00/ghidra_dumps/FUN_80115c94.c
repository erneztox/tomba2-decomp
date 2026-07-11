// FUN_80115c94

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x8011f07c) */
/* WARNING: Removing unreachable block (ram,0x80127e08) */
/* WARNING: Removing unreachable block (ram,0x80127e18) */
/* WARNING: Removing unreachable block (ram,0x02002820) */
/* WARNING: Removing unreachable block (ram,0x80128160) */
/* WARNING: Removing unreachable block (ram,0x8012817c) */
/* WARNING: Removing unreachable block (ram,0x80127dec) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80115c94(int param_1)

{
  int in_v0;
  int iVar1;
  int iVar2;
  int in_v1;
  int unaff_s0;
  
  iVar1 = (in_v0 - in_v1) * 0x10000 >> 0x10;
  iVar2 = (int)(((uint)_DAT_1f800164 - (uint)*(ushort *)(param_1 + 4)) * 0x10000) >> 0x10;
  if (0x225510 < iVar1 * iVar1 + iVar2 * iVar2) {
    *(undefined1 *)(unaff_s0 + 6) = 5;
    *(undefined1 *)(unaff_s0 + 7) = 0;
    *(undefined1 *)(unaff_s0 + 0x29) = 0;
    FUN_801280d4();
    return;
  }
  func_0x8009a450();
  return;
}

