// FUN_8010398c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8010398c(int param_1)

{
  ushort uVar1;
  
  uVar1 = _DAT_800bf812;
  if (DAT_800bf816 == '\0') {
    if (DAT_1f800137 == '\0') {
      FUN_8010c7bc(param_1);
    }
  }
  else {
    if (DAT_800bf817 == '\x02') {
      if (0x41e6 < *(short *)(param_1 + 0x36)) {
        FUN_8010c99c(param_1,_DAT_800bf812 + 0x28);
        return;
      }
    }
    else if ((DAT_800bf817 == '\x05') && (*(short *)(param_1 + 0x2e) < 0x19df)) {
      *(undefined2 *)(param_1 + 0x2e) = 0x19df;
    }
    if (((*(byte *)(param_1 + 0x145) & 1) == 0) &&
       ((int)(short)uVar1 - (int)*(short *)(param_1 + 0x62) <= (int)*(short *)(param_1 + 0x32))) {
      *(ushort *)(param_1 + 0x32) = uVar1 - *(short *)(param_1 + 0x62);
      func_0x80022c78(param_1);
      *(byte *)(param_1 + 0x29) = *(byte *)(param_1 + 0x29) | 0x80;
      FUN_8010ca0c();
      return;
    }
  }
  FUN_8010c2ec(param_1);
  return;
}

