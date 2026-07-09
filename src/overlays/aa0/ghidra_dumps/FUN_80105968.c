// FUN_80105968

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80105968(undefined1 *param_1)

{
  short sVar1;
  short extraout_v1;
  int unaff_s2;
  
  sVar1 = _DAT_800bf812;
  if (DAT_800bf816 == '\0') {
    if (DAT_1f800137 == 0) {
      FUN_8010e408(param_1);
    }
  }
  else {
    if (1 < DAT_800bf817) {
      if ((DAT_800bf817 != 2) || (DAT_800e7feb != '\b')) goto LAB_80105a38;
      if (*(short *)(param_1 + 0x36) < 0x1a05) {
        *(undefined2 *)(param_1 + 0x36) = 0x1a04;
      }
    }
    if (((param_1[0x145] & 1) == 0) &&
       ((int)sVar1 - (int)*(short *)(param_1 + 0x62) <= (int)*(short *)(param_1 + 0x32))) {
      *(short *)(param_1 + 0x32) = sVar1 - *(short *)(param_1 + 0x62);
      func_0x80022c78(param_1);
      *(short *)(unaff_s2 + 0xe) = -extraout_v1;
      *(undefined2 *)(unaff_s2 + 0x14) = 0xc00;
      func_0x80077cfc();
      *param_1 = 7;
      *(undefined2 *)(param_1 + 0x84) = 0x28;
      *(undefined2 *)(param_1 + 0x86) = 0x50;
      *(ushort *)(param_1 + 0x58) = *(ushort *)(param_1 + 0x58) & 0xfff;
      param_1[7] = param_1[7] + '\x01';
      FUN_80120a38();
      return;
    }
  }
LAB_80105a38:
  if ((((param_1[0x17b] == '\0') && (DAT_800bf80d == '\0')) && (DAT_800bf839 == '\0')) &&
     (((DAT_800bf816 != '\0' && (DAT_800bf817 == 2)) &&
      ((*(short *)(param_1 + 0x32) < -0xe74 && (*(short *)(param_1 + 0x36) < 0x1451)))))) {
    DAT_1f800137 = DAT_800bf817;
    DAT_800bf80f = DAT_800bf817;
    _DAT_800bf83a = 0x100;
    DAT_800bf839 = '\x01';
    DAT_1f800236 = 1;
  }
  return;
}

