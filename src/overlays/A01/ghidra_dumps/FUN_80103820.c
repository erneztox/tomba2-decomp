// FUN_80103820

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80103820(undefined1 *param_1)

{
  if ((DAT_800bf80d == '\0') && (DAT_800bf871 < 0xf)) {
    if ((_DAT_800bfe56 & 2) == 0) {
      if (((int)*(short *)(param_1 + 0x6a) & 0x8000U) == 0) {
        if ((((DAT_800bf8be != -1) && ((*(ushort *)(param_1 + 0x17e) & 0x20) != 0)) &&
            (-0x1a90 < *(short *)(param_1 + 0x32))) &&
           ((*(ushort *)(param_1 + 0x2e) - 0x28b5 < 0x4b5 && (param_1[0x179] != '\0')))) {
          *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + 0x20;
        }
      }
      else if ((*(ushort *)(param_1 + 0x6a) & 0xf00) == 0x700) {
        *param_1 = 3;
        param_1[4] = 2;
        param_1[5] = 5;
        param_1[6] = 0;
        param_1[7] = 0;
        FUN_8010c918();
        return;
      }
    }
    else if (DAT_800bf839 == '\0') {
      if (((int)*(short *)(param_1 + 0x6a) & 0x8000U) == 0) {
        if (*(short *)(param_1 + 0x32) < -0x8fb) {
          return;
        }
      }
      else {
        if ((*(ushort *)(param_1 + 0x6a) & 0xf00) != 0x700) {
          return;
        }
        if (param_1[0x164] != '\x01') {
          *param_1 = 3;
          FUN_8010c898();
          return;
        }
      }
      FUN_8010c6ec();
      FUN_8010c918();
      return;
    }
  }
  return;
}

