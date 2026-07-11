// A0H_GroundClampConditional - Ground clamp with DAT_800bf816 flag

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void A0H_GroundClampConditional(int param_1)

{
  if (DAT_800bf816 != '\0') {
    if (((param_1->state_flag145 & 1) == 0) &&
       ((int)_DAT_800bf812 - (int)param_1->angle_delta <= (int)*(short *)(param_1 + 0x32))) {
      *(short *)(param_1 + 0x32) = _DAT_800bf812 - param_1->angle_delta;
      func_0x00022c78(param_1);
    }
  }
  return;
}

