// FUN_80110850

/* WARNING: Removing unreachable block (ram,0x801198e4) */
/* WARNING: Removing unreachable block (ram,0x8012297c) */
/* WARNING: Removing unreachable block (ram,0x801229d4) */
/* WARNING: Removing unreachable block (ram,0x80122a00) */
/* WARNING: Removing unreachable block (ram,0x80122944) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_80110850(int param_1)

{
  byte bVar1;
  short in_v0;
  uint uVar2;
  int iVar3;
  int unaff_s0;
  undefined1 uVar4;
  int unaff_s1;
  int unaff_s2;
  
  iVar3 = (int)*(short *)(unaff_s2 + 0x42);
  if (in_v0 != iVar3) {
    return 0;
  }
  *(undefined1 *)(unaff_s2 + 7) = 0;
  if (iVar3 != unaff_s1) {
    uVar4 = (undefined1)unaff_s1;
    if (iVar3 < 2) {
      if (iVar3 == 0) {
        *(undefined1 *)(unaff_s0 + 6) = uVar4;
        func_0x80040cdc();
        *(undefined1 *)(unaff_s0 + 0x70) = uVar4;
        *(undefined1 *)(unaff_s2 + 0x17b) = 0;
        uVar2 = FUN_80122874();
        return uVar2;
      }
    }
    else if (iVar3 == param_1) {
      if (_DAT_800bf830 != -1) goto LAB_801198dc;
      *(undefined1 *)(unaff_s0 + 6) = 3;
      *(undefined1 *)(unaff_s2 + 0x16d) = uVar4;
      func_0x80042310();
    }
    else if (iVar3 == 3) {
      *(undefined1 *)(unaff_s0 + 6) = 0;
    }
    bVar1 = *(byte *)((*(ushort *)(*(int *)(unaff_s2 + 0xc0) + 0x16) >> 6 & 7) + 0x8014a258);
    *(byte *)(unaff_s2 + 0x5f) = bVar1;
    return (uint)bVar1;
  }
  func_0x80041098();
  if (*(char *)(unaff_s0 + 0x70) == -1) {
    *(char *)(unaff_s0 + 6) = *(char *)(unaff_s0 + 6) + '\x01';
    uVar2 = FUN_80122874();
    return uVar2;
  }
LAB_801198dc:
  iVar3 = func_0x8007778c();
  uVar2 = 0;
  if (iVar3 != 0) {
    func_0x8004190c();
    uVar2 = func_0x800518fc();
  }
  return uVar2;
}

