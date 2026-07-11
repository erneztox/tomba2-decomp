/**
 * @brief Floating/orbiting behavior using trig functions and GTE timer
 * @note Original: func_80029530 at 0x80029530
 */
// Entity_Behavior_Floater



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80029530(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  
  bVar1 = param_1->state;
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (3 < bVar1) {
        return;
      }
      FUN_8007a624(param_1);
      return;
    }
    if (bVar1 != 0) {
      return;
    }
    *(undefined **)(param_1 + 0x40) = &DAT_800a1ee4;
    param_1->state = 1;
    *(undefined ***)(param_1 + 0x50) = &PTR_DAT_800a1ecc;
    *(undefined4 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x4c) = 0;
    FUN_80074590(8,0,0);
  }
  param_1->sprite_data = *(int *)(param_1 + 0x40);
  if (*(int *)(param_1 + 0x40) == 0) {
    param_1->state = 2;
  }
  else {
    iVar2 = (int)_DAT_1f800168;
    param_1->pos_y = _DAT_1f800162 + 10;
    iVar2 = FUN_80083f50(iVar2);
    iVar3 = (int)_DAT_1f800168;
    param_1->pos_x = _DAT_1f800160 + (short)((uint)(iVar2 * 3) >> 8);
    iVar2 = FUN_80083e80(iVar3);
    *(short *)(param_1 + 0x30) = _DAT_1f800164 + (short)((uint)(iVar2 * 3) >> 8);
    iVar2 = FUN_8002b278(param_1);
    if (iVar2 == 0) {
      FUN_80031744(param_1);
    }
  }
  return;
}
