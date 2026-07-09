// FUN_80103470

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_80103470(int param_1,int param_2)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  ushort uVar4;
  undefined1 auStack_20 [2];
  undefined2 local_1e;
  short local_1a;
  undefined2 local_16;
  
  uVar4 = *(ushort *)(param_2 + 0x6a) >> 8 & 0xf;
  if (uVar4 == 1) {
    local_1e = *(undefined2 *)(param_1 + 0x2e);
    local_1a = _DAT_1f80019e;
    local_16 = *(undefined2 *)(param_1 + 0x36);
    if (*(char *)(param_2 + 0x145) != '\0') {
      func_0x8003116c(0x10d,auStack_20,0xfffffff6);
      local_1a = local_1a + 0x50;
      func_0x8003116c(0x107,auStack_20,0xfffffff6);
      uVar2 = func_0x80074590(7,0,0);
      return uVar2;
    }
    func_0x8003116c(8,auStack_20,0xffffffb0);
    uVar2 = FUN_8010c590();
    return uVar2;
  }
  if (uVar4 != 2) {
    uVar2 = FUN_8010c590();
    return uVar2;
  }
  iVar3 = func_0x800489e4(param_1,(int)*(short *)(param_1 + 0x32));
  if (iVar3 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 4;
    if (0x14 < ((int)*(short *)(param_2 + 0x32) + (int)*(short *)(param_2 + 0x84)) -
               (int)_DAT_1f8001a4) {
      local_1e = *(undefined2 *)(param_1 + 0x2e);
      local_1a = _DAT_1f8001a4;
      local_16 = *(undefined2 *)(param_1 + 0x36);
      func_0x8003116c(0x10d,auStack_20,0xfffffff6);
      sVar1 = *(short *)(param_2 + 0x44);
      if (sVar1 < 0) {
        sVar1 = -sVar1;
      }
      if (0x1000 < sVar1) {
        local_1e = *(undefined2 *)(param_1 + 0x2e);
        local_1a = _DAT_1f8001a4;
        local_16 = *(undefined2 *)(param_1 + 0x36);
        func_0x8003116c(8,auStack_20,0xffffffb0);
      }
      uVar2 = FUN_8010c590();
      return uVar2;
    }
  }
  return uVar2;
}

