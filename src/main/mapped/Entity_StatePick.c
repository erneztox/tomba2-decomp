/**
 * @brief Entity pick state: entity[0x78] state machine for pickup
 * @note Original: func_80043EDC at 0x80043EDC
 */
// Entity_StatePick



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_80043edc(int param_1)

{
  short sVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  
  if (*(char *)(param_1 + 0x78) != '\0') {
    if (*(char *)(param_1 + 0x78) != '\x01') {
      return 0;
    }
    if (DAT_800bf80e != '\0') {
      if ((((int)*(short *)(param_1 + 0x72) & 0x8000U) != 0) &&
         (uVar4 = (uint)DAT_800e7fc7, uVar3 = FUN_80077768((int)_DAT_800e7ed6,(int)_DAT_800e7fc0,0),
         uVar4 != uVar3)) {
        DAT_800e7fc7 = '\x01' - DAT_800e7fc7;
        FUN_80054198();
        return 1;
      }
      return 1;
    }
    return 0;
  }
  if (DAT_800e7fe4 != '\0') {
    return 1;
  }
  DAT_800e7e85 = 0x23;
  if (*(short *)(param_1 + 0x74) == 0) {
    DAT_800e7e85 = 0x1e;
  }
  DAT_800e7e86 = 0;
  uVar2 = *(ushort *)(param_1 + 0x72) & 0xf;
  *(char *)(param_1 + 0x78) = *(char *)(param_1 + 0x78) + '\x01';
  if (uVar2 == 1) {
    uVar2 = FUN_80085690((int)_DAT_1f800164 - (int)*(short *)(param_1 + 0x36),
                         (int)*(short *)(param_1 + 0x2e) - (int)_DAT_1f800160);
  }
  else {
    if (uVar2 < 2) {
      if ((*(ushort *)(param_1 + 0x72) & 0xf) == 0) {
        _DAT_1f800192 = *(undefined2 *)(param_1 + 0x76);
        return 0;
      }
      return 0;
    }
    if (uVar2 != 2) {
      return 0;
    }
    sVar1 = FUN_80085690((int)_DAT_1f800164 - (int)*(short *)(param_1 + 0x36),
                         (int)*(short *)(param_1 + 0x2e) - (int)_DAT_1f800160);
    uVar2 = sVar1 - 0x800;
  }
  _DAT_1f800192 = uVar2 & 0xfff;
  return 0;
}
