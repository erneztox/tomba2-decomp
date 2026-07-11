// FUN_000099a4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000099a4(int param_1)

{
  uint uVar1;
  undefined4 local_50 [4];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  local_50[0] = _DAT_8010921c;
  local_50[1] = _DAT_80109220;
  local_50[2] = _DAT_80109224;
  local_50[3] = _DAT_80109228;
  local_40 = _DAT_8010922c;
  local_3c = _DAT_80109230;
  local_38 = _DAT_80109234;
  local_34 = _DAT_80109238;
  local_30 = _DAT_8010923c;
  local_2c = _DAT_80109240;
  local_28 = _DAT_80109244;
  local_24 = _DAT_80109248;
  local_20 = _DAT_8010924c;
  local_1c = _DAT_80109250;
  setCopControlWord(2,0xa800,0);
  setCopControlWord(2,0xb000,0);
  setCopControlWord(2,0xb800,0);
  _DAT_1f800090 = 0;
  if (*(byte *)(param_1 + 7) < 0xc) {
    func_0x00031ac4(param_1 + 0x2c,&local_38,param_1 + 0x48);
    func_0x00027768(local_50[*(byte *)(param_1 + 7) >> 1],0,0,0);
  }
  if (*(byte *)(param_1 + 7) < 0x10) {
    uVar1 = (uint)(*(byte *)(param_1 + 7) >> 1);
    func_0x00031ac4(param_1 + 0x2c,&local_38 + uVar1,param_1 + 0x48);
    func_0x00027768(0x8011cd34,*(undefined1 *)((int)&local_38 + uVar1 * 4 + 3),0,0);
  }
  return;
}

