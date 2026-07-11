// FUN_801344b8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_801344b8(int param_1)

{
  short sVar1;
  undefined4 in_zero;
  undefined4 extraout_at;
  int iVar2;
  int iVar3;
  undefined1 *local_38 [6];
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 local_18;
  undefined1 local_17;
  undefined1 local_16;
  
  local_38[0] = (undefined1 *)0x1073000b;
  local_38[1] = (undefined1 *)0x28620008;
  local_38[2] = &DAT_10400005;
  local_38[3] = (undefined1 *)0x0;
  local_38[4] = (undefined1 *)0x10760007;
  local_38[5] = (undefined1 *)0x3c021f80;
  sVar1 = *(short *)(param_1 + 0x60);
  local_20 = CONCAT22(*(undefined2 *)(param_1 + 0x32),*(undefined2 *)(param_1 + 0x2e));
  local_1c = CONCAT22(local_1c._2_2_,*(undefined2 *)(param_1 + 0x36));
  iVar2 = (uint)*(ushort *)(param_1 + 0x62) << 0x10;
  if (sVar1 != 0) {
    local_18 = (undefined1)(iVar2 >> 0x14);
    local_17 = local_18;
    local_16 = local_18;
    func_0x800318a0(&local_20,&local_18,param_1 + 0x54);
    func_0x80027768(local_38[sVar1],0,0xffffff06,0);
    FUN_8013d570();
    return;
  }
  func_0x800329e0(4);
  setCopReg(2,in_zero,local_20);
  setCopReg(2,extraout_at,local_1c);
  iVar3 = func_0x800317cc(0xffffffc0);
  if (iVar3 == 0) {
    _DAT_1f800084 = _DAT_1f800084 * (iVar2 >> 0x10) >> 8;
    _DAT_1f800088 = _DAT_1f800084;
    func_0x800328ec(0x1073000b);
  }
  return;
}

