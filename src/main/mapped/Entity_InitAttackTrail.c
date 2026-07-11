/**
 * @brief Inits attack trail: sets entity[0x68] angle, entity[0x6A]=0x400, SFX 0x22, optional trail
 * @note Original: func_8006BDF0 at 0x8006BDF0
 */
// Entity_InitAttackTrail



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8006bdf0(int param_1,int param_2)

{
  short sVar1;
  
  *(byte *)(param_1 + 0x46) = *(byte *)(param_1 + 0x46) & 1;
  sVar1 = _DAT_800e7ed6;
  if (DAT_800e7e85 == '\t') {
    sVar1 = _DAT_800e7ed6 + -0x800;
  }
  *(short *)(param_1 + 0x68) = sVar1;
  *(undefined2 *)(param_1 + 0x6a) = 0x400;
  FUN_80074590(0x22,0,0);
  if (param_2 == 0) {
    FUN_80031558(param_1,*(byte *)(param_1 + 2) - 1);
  }
  return;
}
