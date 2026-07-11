// FUN_80125518

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80125518(int param_1)

{
  undefined4 in_zero;
  undefined4 extraout_at;
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 in_stack_fffffff4;
  undefined4 uVar4;
  
  if (DAT_800bf873 == '\0') {
    uVar3 = CONCAT22((*(short *)(param_1 + 0x32) -
                     (*(short *)(*(int *)(param_1 + 0xc0) + 0x22) >> 5)) +
                     (*(short *)(*(int *)(param_1 + 0xc0) + 0x20) >> 5),
                     (*(short *)(param_1 + 0x2e) -
                     (*(short *)(*(int *)(param_1 + 0xc0) + 0x1c) >> 5)) +
                     (*(short *)(*(int *)(param_1 + 0xc0) + 0x1a) >> 5));
    uVar4 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),
                     (*(short *)(param_1 + 0x36) -
                     (*(short *)(*(int *)(param_1 + 0xc0) + 0x28) >> 5)) +
                     (*(short *)(*(int *)(param_1 + 0xc0) + 0x26) >> 5));
    func_0x800329e0(6);
    setCopReg(2,in_zero,uVar3);
    setCopReg(2,extraout_at,uVar4);
    iVar1 = func_0x800317cc(0xffffffe0);
    if (iVar1 == 0) {
      _DAT_1f800088 = _DAT_1f800084;
      uVar2 = func_0x8009a450();
      uVar2 = (uVar2 & 0x3f) + 0x40;
      func_0x8002e680(0,0x30,uVar2 | uVar2 * 0x100,0,uVar3,uVar4);
    }
  }
  return;
}

