/**
 * @brief Save menu text draw: renders save slot labels from string table
 * @note Original: func_8003990C at 0x8003990C
 */
// Save_DrawText



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_8003990c(int param_1)

{
  s32 bVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  uVar3 = 0;
  iVar5 = 0;
  if (PTR_s_When_the_arrow_points_to_the_bac_800a3ac8 != (void*)0x0) {
    iVar4 = 4;
    do {
      if (((_DAT_800bfe34 >> (uVar3 & 0x1f) & 1U) != 0) &&
         (bVar1 = param_1 == iVar5, iVar5 = iVar5 + 1, bVar1)) {
        return uVar3;
      }
      piVar2 = (int *)((int)&PTR_s_When_the_arrow_points_to_the_bac_800a3ac8 + iVar4);
      uVar3 = uVar3 + 1;
      iVar4 = iVar4 + 4;
    } while (*piVar2 != 0);
  }
  return 0;
}
