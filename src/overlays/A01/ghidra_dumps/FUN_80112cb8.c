// FUN_80112cb8

/* WARNING: Removing unreachable block (ram,0x8011bdc0) */
/* WARNING: Removing unreachable block (ram,0x8011bdd0) */
/* WARNING: Removing unreachable block (ram,0x8011bdf0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80112cb8(void)

{
  undefined2 uVar1;
  int iVar2;
  int unaff_s0;
  
  iVar2 = func_0x800778e4();
  if (iVar2 != 0) {
    func_0x800517f8();
  }
  if (*(char *)(unaff_s0 + 0x5e) == '\0') {
    uVar1 = 0xa0;
    if (*(char *)(unaff_s0 + 3) == '\x01') {
      FUN_80124efc();
      return;
    }
  }
  else {
    uVar1 = 0x78;
    if (*(char *)(unaff_s0 + 0x5e) != '\x01') {
      FUN_8011bd98();
      return;
    }
  }
  *(undefined2 *)(unaff_s0 + 0x84) = uVar1;
  *(undefined1 *)(unaff_s0 + 0x29) = 0;
  *(undefined1 *)(unaff_s0 + 0x2b) = 0;
  *(undefined2 *)(unaff_s0 + 0x86) = *(undefined2 *)(unaff_s0 + 0x84);
  thunk_FUN_80124efc();
  return;
}

