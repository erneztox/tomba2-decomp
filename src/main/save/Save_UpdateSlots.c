/**
 * @brief Updates save slot display: increments entity[0x23] for each save present
 * @note Original: func_8003989C at 0x8003989C
 */
// Save_UpdateSlots



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Save_UpdateSlots(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (PTR_s_When_the_arrow_points_to_the_bac_800a3ac8 != (void*)0x0) {
    iVar2 = 4;
    do {
      if ((_DAT_800bfe34 >> (uVar3 & 0x1f) & 1U) != 0) {
        *(s8*)(param_1 + 0x23) = *(s8*)(param_1 + 0x23) + '\x01';
      }
      piVar1 = (int *)((int)&PTR_s_When_the_arrow_points_to_the_bac_800a3ac8 + iVar2);
      uVar3 = uVar3 + 1;
      iVar2 = iVar2 + 4;
    } while (*piVar1 != 0);
  }
  return;
}
