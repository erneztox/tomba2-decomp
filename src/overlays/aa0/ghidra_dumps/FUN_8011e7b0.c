// FUN_8011e7b0

/* WARNING: Removing unreachable block (ram,0x8012778c) */

void FUN_8011e7b0(void)

{
  int iVar1;
  int unaff_s0;
  
  *(undefined1 *)(unaff_s0 + 5) = 0;
  *(undefined1 *)(unaff_s0 + 6) = 0;
  *(undefined2 *)(unaff_s0 + 0x76) = 0;
  *(undefined2 *)(unaff_s0 + 0x48) = 0;
  *(undefined2 *)(unaff_s0 + 0x4e) = 0;
  iVar1 = FUN_801308e0();
  if (iVar1 != 0) {
    *(undefined2 *)(*(int *)(unaff_s0 + 0xc4) + 10) = *(undefined2 *)(unaff_s0 + 0x70);
  }
  return;
}

