/**
 * @brief Camera mode 3 (no param): sets pos from DAT_800e7eae/b2/b6, cos calc + commit
 * @note Original: func_8006EA00 at 0x8006EA00
 */
// Camera_Mode3



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8006ea00(void)

{
  _DAT_800e8016 = _DAT_800e7eb2 + -200;
  _DAT_800e8012 = _DAT_800e7eae;
  _DAT_800e801a = _DAT_800e7eb6;
  FUN_8006d934(0x800e8008,&DAT_800e8010);
  FUN_8006d950(0x800e8008,&DAT_800e8010);
  FUN_8006e918(0x800e8008);
  FUN_8006d02c(0x800e8008);
  return;
}
