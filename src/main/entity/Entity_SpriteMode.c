/**
 * @brief Entity sprite mode setter: checks entity[0x72], switches on mode
 * @note Original: func_80042A8C at 0x80042A8C
 */
// Entity_SpriteMode



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_80042a8c(int param_1)

{
  short sVar1;
  short sVar2;
  
  DAT_800e806e = 0;
  sVar1 = param_1->event_id;
  if (sVar1 == 0) {
    FUN_8006e1c0((int)param_1->event_param);
  }
  else if (sVar1 < 1) {
    if (sVar1 == -1) {
      FUN_8006e1e4();
      return 1;
    }
  }
  else if (sVar1 == 1) {
    DAT_800e806c = *(undefined1 *)(param_1 + 0x74);
  }
  if (*(short *)(param_1 + 0x76) == 0) {
    sVar1 = *(short *)(param_1 + 100);
    _DAT_800e8044 = (int)*(short *)(param_1 + 0x66) << 0x10;
    sVar2 = param_1->target_angle;
  }
  else {
    if (*(short *)(param_1 + 0x76) != 1) {
      return 1;
    }
    _DAT_800e8044 = (_DAT_1f800162 + -0x8c) * 0x10000;
    sVar2 = _DAT_1f800164;
    sVar1 = _DAT_1f800160;
  }
  _DAT_800e8040 = (int)sVar1 << 0x10;
  _DAT_800e8048 = (int)sVar2 << 0x10;
  return 1;
}
