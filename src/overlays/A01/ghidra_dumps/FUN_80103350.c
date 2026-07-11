// FUN_80103350

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80103350(int param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x17b);
  if (*(short *)(param_1 + 0x2e) < 700) {
    if (((cVar1 != '\0' || DAT_800bf80d != '\0') || DAT_800bf839 != '\0') || (DAT_800bf873 != '\0'))
    {
      *(undefined2 *)(param_1 + 0x2e) = 700;
      FUN_8010c488();
      return;
    }
    if (DAT_800bf816 == '\0') {
      DAT_1f800236 = 1;
      DAT_1f800137 = 2;
      DAT_800bf80f = 2;
      DAT_800bf839 = 1;
      _DAT_800bf83a = 7;
      FUN_8010c488();
      return;
    }
  }
  else if ((*(short *)(param_1 + 0x32) < -0x12bf) || (*(short *)(param_1 + 0x36) < 0x4e21)) {
    if ((*(char *)(param_1 + 0x2a) == '\x10') && (0x3cbd < *(short *)(param_1 + 0x36))) {
      if (((DAT_800bf873 == '\0') && (-0x1856 < *(short *)(param_1 + 0x32))) &&
         ((cVar1 == '\0' && DAT_800bf80d == '\0') && DAT_800bf839 == '\0')) {
        DAT_1f800236 = 1;
        DAT_1f800137 = 2;
        DAT_800bf80f = 2;
        DAT_800bf839 = '\x01';
        _DAT_800bf83a = 0x200;
      }
      *(undefined2 *)(param_1 + 0x36) = 0x3cbe;
      func_0x80054198(param_1);
    }
  }
  else if ((((cVar1 == '\0' && DAT_800bf80d == '\0') && DAT_800bf839 == '\0') && (DAT_800bf9fb < 3))
          && (DAT_800bf816 != '\0')) {
    DAT_1f800236 = 2;
    DAT_1f800137 = 2;
    DAT_800bf80f = 2;
    DAT_800bf839 = 1;
    _DAT_800bf83a = 0x300;
    FUN_8010c488();
    return;
  }
  return;
}

