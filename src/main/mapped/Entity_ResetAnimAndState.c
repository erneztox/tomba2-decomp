/**
 * @brief Resets entity animation mode and sets sub-state via entity[0x74]
 * @note Original: func_800442A0 at 0x800442A0
 */
// Entity_ResetAnimAndState



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_800442a0(int param_1)

{
  int iVar1;
  
  iVar1 = param_1;
  if (((int)*(short *)(param_1 + 0x72) & 0x8000U) != 0) {
    iVar1 = _DAT_1f800214;
  }
  FUN_80041718(iVar1,(int)*(short *)(param_1 + 0x74),4);
  FUN_800440e4(&DAT_800e7e80,(int)*(short *)(param_1 + 0x76),4);
  return 1;
}
