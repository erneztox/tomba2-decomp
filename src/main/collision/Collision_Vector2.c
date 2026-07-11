/**
 * @brief Collision vector calc variant 2: GTE cos/sin, stores result
 * @note Original: func_800492B0 at 0x800492B0
 */
// Collision_Vector2



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_800492b0(int param_1,short param_2,short param_3,short param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  ushort uVar4;
  
  iVar1 = FUN_80083e80((int)param_4);
  iVar2 = FUN_80083f50((int)param_4);
  _DAT_1f8001be = *(short *)(param_1 + 0x32) + param_3;
  _DAT_1f8001c0 = *(short *)(param_1 + 0x36) + (short)(-iVar1 * (int)param_2 >> 0xc);
  _DAT_1f8001bc = *(short *)(param_1 + 0x2e) + (short)(iVar2 * param_2 >> 0xc);
  iVar1 = FUN_800498c8();
  uVar3 = 0;
  if (iVar1 != 0) {
    iVar1 = FUN_80045724();
    if (iVar1 == 0) {
      uVar3 = 0;
    }
    else {
      uVar4 = _DAT_1f8001a6 & 0xf00;
      if (uVar4 != 0x600) {
        if (uVar4 < 0x601) {
          if (uVar4 != 0x100) {
            return 1;
          }
          if (DAT_800bf873 != '\0') {
            _DAT_1f8001a6 = _DAT_1f8001a6 & 0xff;
            return 1;
          }
        }
        else if (uVar4 != 0x700) {
          return 1;
        }
      }
      uVar3 = 2;
    }
  }
  return uVar3;
}
