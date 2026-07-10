// FUN_00007aa8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00007aa8(int param_1)

{
  undefined1 auStack_30 [2];
  short local_2e;
  short local_2a;
  short local_26;
  
  if ((0x7f < *(short *)(param_1 + 0x4e)) && ((_DAT_1f80017c & 3) == 0)) {
    _DAT_1f8000c0 = 200;
    _DAT_1f8000c2 = 200;
    _DAT_1f8000c4 = 200;
    func_0x00084470(*(int *)(param_1 + 0xc0) + 0x18,&DAT_1f8000c0,&DAT_1f8000a0);
    local_2e = *(short *)(*(int *)(param_1 + 0xc4) + 0x2c) + _DAT_1f8000a0;
    local_2a = *(short *)(*(int *)(param_1 + 0xc4) + 0x30) + _DAT_1f8000c2;
    local_26 = *(short *)(*(int *)(param_1 + 0xc4) + 0x34) + _DAT_1f8000a8;
    func_0x0003116c(8,auStack_30,0xffffffce);
    _DAT_1f8000c0 = 0xff38;
    _DAT_1f8000c2 = 200;
    _DAT_1f8000c4 = 200;
    func_0x00084470(*(int *)(param_1 + 0xc0) + 0x18,&DAT_1f8000c0,&DAT_1f8000a0);
    local_2e = *(short *)(*(int *)(param_1 + 200) + 0x2c) + _DAT_1f8000a0;
    local_2a = *(short *)(*(int *)(param_1 + 200) + 0x30) + _DAT_1f8000c2;
    local_26 = *(short *)(*(int *)(param_1 + 200) + 0x34) + _DAT_1f8000a8;
    func_0x0003116c(8,auStack_30,0xffffffce);
  }
  return;
}

