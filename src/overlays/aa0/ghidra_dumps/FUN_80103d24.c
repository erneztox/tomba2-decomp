// FUN_80103d24

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80103d24(int param_1)

{
  short sVar1;
  undefined1 auStack_20 [2];
  undefined2 local_1e;
  short local_1a;
  undefined2 local_16;
  
  if (DAT_800bf817 < 2) {
    func_0x8006e3f4(param_1,&DAT_800e7eac);
    local_1e = *(undefined2 *)((uint)DAT_800bf817 * 6 + -0x7feb9128);
    local_1a = *(undefined2 *)((uint)DAT_800bf817 * 6 + -0x7feb9126);
    FUN_8010cea8(&DAT_1f8000d0,auStack_20,0);
    return;
  }
  if (DAT_800bf817 == 2) {
    if (DAT_800bf8bc != -1) {
      func_0x8006e3f4(param_1,&DAT_800e7eac);
      local_1e = _DAT_80146ee4;
      local_1a = _DAT_80146ee6;
      local_16 = _DAT_80146ee8;
      func_0x8006cec4(&DAT_1f8000d0,auStack_20,0);
      *(undefined1 *)(param_1 + 0x66) = 3;
      return;
    }
    func_0x8006e3b0(param_1,&DAT_800e7eac);
    if (DAT_1f800207 < 0x28) {
      local_1e = 0x4d90;
      local_16 = 0x1800;
      FUN_8010ce18();
      return;
    }
    if (0x30 < DAT_1f800207) {
      local_1e = 0x4b70;
      local_16 = 6000;
      FUN_8010ce18();
      return;
    }
    local_1e = 0x4f00;
    local_16 = 0x1800;
    local_1a = _DAT_800e7eb2 + -300;
    func_0x8006cec4(&DAT_1f8000d0,auStack_20,0);
    if (*(short *)(param_1 + 6) != 0x2f8) {
      sVar1 = *(short *)(param_1 + 6) + 0x14;
      if (0x2f7 < *(short *)(param_1 + 6)) {
        sVar1 = *(short *)(param_1 + 6) + -0x14;
      }
      *(short *)(param_1 + 6) = sVar1;
    }
    _DAT_1f800114 = _DAT_1f800114 + *(short *)(param_1 + 6);
  }
  FUN_80115fbc();
  return;
}

