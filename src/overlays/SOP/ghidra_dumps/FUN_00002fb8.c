// FUN_00002fb8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00002fb8(int param_1)

{
  int iVar1;
  undefined4 local_20 [2];
  
  iVar1 = 0;
  local_20[0] = _DAT_80108ff0;
  _DAT_1f800090 = 0;
  do {
    func_0x00031d24(param_1 + 0x2c,local_20,param_1 + 0x48);
    func_0x00027768(0x8010cc08,0,0,(int)*(short *)(param_1 + 0x50));
    iVar1 = iVar1 + 1;
    *(short *)(param_1 + 0x4e) = *(short *)(param_1 + 0x4e) + 0x800;
  } while (iVar1 < 2);
  return;
}

