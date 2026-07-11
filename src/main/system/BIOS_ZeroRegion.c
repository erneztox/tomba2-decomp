/**
 * @brief BIOS zero region: zeros 9 words at BIOS struct+0x62C, calls FUN_800858f0 + FUN_800808a0
 * @note Original: func_8009BFC0 at 0x8009BFC0
 */
// BIOS_ZeroRegion



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8009bfc0(void)

{
  int iVar1;
  s32 *puVar2;
  int iVar3;
  s32 unaff_retaddr;
  
  _DAT_80105f38 = unaff_retaddr;
  FUN_80080890();
  iVar1 = (*(code *)&SUB_000000b0)();
  iVar3 = 9;
  puVar2 = (s32 *)(*(int *)(iVar1 + 0x16c) + 0x62c);
  do {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  FUN_800858f0();
  FUN_800808a0();
  return;
}
