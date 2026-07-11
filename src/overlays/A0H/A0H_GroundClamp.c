// A0H_GroundClamp - Clamp Y to ground DAT_800bf812

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void A0H_GroundClamp(int param_1)

{
  if (((param_1->state_flag145 & 1) == 0) &&
     ((int)_DAT_800bf812 - (int)param_1->angle_delta <= (int)*(short *)(param_1 + 0x32))) {
    *(short *)(param_1 + 0x32) = _DAT_800bf812 - param_1->angle_delta;
    func_0x00022c78(param_1);
  }
  return;
}

