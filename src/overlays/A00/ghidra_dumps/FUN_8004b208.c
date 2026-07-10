// FUN_8004b208

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8004b208(undefined1 *param_1,int param_2)

{
  byte bVar1;
  
  if (param_1[5] == '\0') {
    param_1[5] = 1;
    *param_1 = 1;
    FUN_80041194(param_1,(int)*(short *)(param_1 + 0x86) - (int)*(short *)(param_1 + 0x84),0,0);
    if (param_2 == 0) {
      param_1[0x18] = 0;
    }
    else {
      param_1[0x18] = 0xff;
      param_1[0x19] = 0xff;
      param_1[0x1a] = 0xff;
    }
  }
  if (param_2 == 0) {
    if ((_DAT_1f80017c & 0x1f) == 0) {
      bVar1 = param_1[0xd] | 0x20;
    }
    else {
      bVar1 = param_1[0xd] & 0xdf;
    }
  }
  else if ((_DAT_1f80017c & 0x1f) == 0) {
    bVar1 = param_1[0xd] | 2;
  }
  else {
    bVar1 = param_1[0xd] & 0xfd;
  }
  param_1[0xd] = bVar1;
  return;
}

