// FUN_80125548

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80125548(short param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5
                 ,undefined4 param_6)

{
  short sVar1;
  short sVar2;
  short sVar3;
  undefined4 in_zero;
  undefined4 extraout_at;
  int iVar4;
  uint uVar5;
  short in_v1;
  
  sVar3 = *(short *)(param_3 + 0x36);
  sVar1 = *(short *)(*(int *)(param_3 + 0xc0) + 0x28);
  param_5 = CONCAT22((param_1 - (*(short *)(*(int *)(param_3 + 0xc0) + 0x22) >> 5)) +
                     (*(short *)(*(int *)(param_3 + 0xc0) + 0x20) >> 5),
                     (in_v1 - (*(short *)(*(int *)(param_3 + 0xc0) + 0x1c) >> 5)) +
                     (*(short *)(*(int *)(param_3 + 0xc0) + 0x1a) >> 5));
  sVar2 = *(short *)(*(int *)(param_3 + 0xc0) + 0x26);
  func_0x800329e0(6);
  setCopReg(2,in_zero,param_5);
  setCopReg(2,extraout_at,
            CONCAT22((short)((uint)param_6 >> 0x10),(sVar3 - (sVar1 >> 5)) + (sVar2 >> 5)));
  iVar4 = func_0x800317cc(0xffffffe0);
  if (iVar4 == 0) {
    _DAT_1f800088 = _DAT_1f800084;
    uVar5 = func_0x8009a450();
    uVar5 = (uVar5 & 0x3f) + 0x40;
    func_0x8002e680(0,0x30,uVar5 | uVar5 * 0x100,0);
  }
  return;
}

