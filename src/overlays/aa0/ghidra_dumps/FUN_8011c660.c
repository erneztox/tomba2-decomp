// FUN_8011c660

/* WARNING: Removing unreachable block (ram,0x801256c0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_8011c660(undefined1 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int unaff_s1;
  
  *(undefined1 *)(unaff_s1 + 0x29) = param_1;
  *(undefined2 *)(*(int *)(unaff_s1 + 0xc0) + 2) = 0;
  iVar2 = *(int *)(*(int *)(unaff_s1 + 0x10) + (*(byte *)(unaff_s1 + 0x5f) + 2) * 4 + 0xc0);
  *(byte *)(iVar2 + 0x3e) = *(byte *)(iVar2 + 0x3e) | 0x40;
  *(undefined1 *)(unaff_s1 + 5) = 2;
  _DAT_0000001e = 0x8012e478;
  uVar1 = func_0x8009a450();
  return uVar1;
}

