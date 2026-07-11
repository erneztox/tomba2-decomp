/**
 * @brief Converts entity world position to screen coords via GTE and checks visibility
 * @note Original: func_8004DAEC at 0x8004DAEC
 */
// Entity_WorldToScreen



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_8004daec(int param_1)

{
  int iVar1;
  
  iVar1 = _DAT_800e7f50;
  _DAT_1f8000c0 = 0x14;
  _DAT_1f8000c2 = 0;
  _DAT_1f8000c4 = 0x32;
  FUN_800844c0(_DAT_800e7f50 + 0x18,&DAT_1f8000c0,&DAT_1f8000c8);
  *(short *)(param_1 + 0x2e) = _DAT_1f8000c8 + *(short *)(iVar1 + 0x2c);
  *(short *)(param_1 + 0x32) = _DAT_1f8000ca + *(short *)(iVar1 + 0x30);
  *(short *)(param_1 + 0x36) = _DAT_1f8000cc + *(short *)(iVar1 + 0x34);
  FUN_8007778c(param_1);
  FUN_80077b5c(param_1);
  return DAT_800bf80a == '\0';
}
