// FUN_8011980c

/* WARNING: Removing unreachable block (ram,0x801198e4) */
/* WARNING: Removing unreachable block (ram,0x8012297c) */
/* WARNING: Removing unreachable block (ram,0x801229d4) */
/* WARNING: Removing unreachable block (ram,0x80122a00) */
/* WARNING: Removing unreachable block (ram,0x80122944) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8011980c(uint param_1)

{
  int iVar1;
  uint uVar2;
  int unaff_s0;
  undefined1 uVar3;
  uint unaff_s1;
  int unaff_s2;
  
  uVar2 = (uint)*(byte *)(unaff_s0 + 6);
  if (uVar2 != unaff_s1) {
    uVar3 = (undefined1)unaff_s1;
    if (uVar2 < 2) {
      if (uVar2 == 0) {
        *(undefined1 *)(unaff_s0 + 6) = uVar3;
        func_0x80040cdc();
        *(undefined1 *)(unaff_s0 + 0x70) = uVar3;
        *(undefined1 *)(unaff_s2 + 0x17b) = 0;
        FUN_80122874();
        return;
      }
    }
    else if (uVar2 == param_1) {
      if (_DAT_800bf830 != -1) goto LAB_801198dc;
      *(undefined1 *)(unaff_s0 + 6) = 3;
      *(undefined1 *)(unaff_s2 + 0x16d) = uVar3;
      func_0x80042310();
    }
    else if (uVar2 == 3) {
      *(undefined1 *)(unaff_s0 + 6) = 0;
    }
    *(undefined1 *)(unaff_s2 + 0x5f) =
         *(undefined1 *)((*(ushort *)(*(int *)(unaff_s2 + 0xc0) + 0x16) >> 6 & 7) + 0x8014a258);
    return;
  }
  func_0x80041098();
  if (*(char *)(unaff_s0 + 0x70) == -1) {
    *(char *)(unaff_s0 + 6) = *(char *)(unaff_s0 + 6) + '\x01';
    FUN_80122874();
    return;
  }
LAB_801198dc:
  iVar1 = func_0x8007778c();
  if (iVar1 != 0) {
    func_0x8004190c();
    func_0x800518fc();
  }
  return;
}

