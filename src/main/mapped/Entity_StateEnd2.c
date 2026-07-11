/**
 * @brief Entity state end variant 2: checks timer, plays SFX, transitions
 * @note Original: func_80053E50 at 0x80053E50
 */
// Entity_StateEnd2



undefined4 FUN_80053e50(byte *param_1)

{
  if (0 < *(short *)(param_1 + 0x16e)) {
    return 0;
  }
  DAT_800bf81e = 0;
  FUN_80058304(param_1,0xb);
  if (param_1[0x164] == 1) {
    if ((*param_1 & 4) == 0) {
      if ((param_1[0xd] & 0x80) == 0) {
        FUN_800521f4(0,0x81,0x81,0xf);
      }
      param_1[0xd] = 0;
      param_1[0x61] = 0;
      FUN_80053d90(param_1);
      *param_1 = 3;
      param_1[0x16e] = 0;
      param_1[0x16f] = 0;
      param_1[0x170] = 0;
      param_1[0x171] = 0;
      param_1[0x146] = 0;
LAB_80053fac:
      param_1[4] = 2;
      param_1[5] = 1;
      param_1[6] = 0;
      DAT_800bf80d = 1;
      FUN_800312d4(6,param_1 + 0x2c,0xffffffb0);
      return 1;
    }
    if ((param_1[0xd] & 0x80) != 0) {
      return 1;
    }
    FUN_800521f4(0,0x81,0x81,0xf);
    param_1[0xd] = param_1[0xd] | 0x82;
  }
  else if (DAT_800bf80d < '\x01') {
    FUN_800521f4(0,0x81,0x81,0xf);
    param_1[0xd] = 0;
    param_1[0x61] = 0;
    FUN_80053d90(param_1);
    *param_1 = 3;
    param_1[0x16e] = 0;
    param_1[0x16f] = 0;
    param_1[0x170] = 0;
    param_1[0x171] = 0;
    param_1[0x146] = 0;
    param_1[0x16a] = 0;
    goto LAB_80053fac;
  }
  return 1;
}
