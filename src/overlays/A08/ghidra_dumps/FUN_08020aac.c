// FUN_08020aac

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08020aac(int param_1)

{
  undefined4 in_zero;
  undefined4 extraout_at;
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 local_40;
  undefined4 local_3c;
  short local_38;
  short local_36;
  short local_34;
  int local_30;
  int local_2c;
  
  uVar4 = 0xd687;
  setCopControlWord(2,0xd800,6);
  setCopControlWord(2,0xe000,0);
  iVar10 = 0;
  iVar9 = 0;
  local_2c = 0x66666667;
  iVar8 = 0;
  _DAT_1f800090 = *(int *)(param_1 + 0x50) + -500;
  local_30 = param_1;
  do {
    uVar2 = uVar4 & 0x3f;
    iVar5 = uVar4 * 5 + 1;
    uVar4 = iVar5 * 5 + 1;
    iVar6 = uVar4 * 5 + 1;
    iVar3 = (uVar4 & 0xff) - 0x200;
    local_36 = -0xd80;
    uVar4 = iVar6 * 5 + 1;
    iVar7 = (int)((iVar6 + (uint)_DAT_1f80017c * 0x100 & 0xfff) * 0xd) >> 0xc;
    iVar6 = (uVar2 + 0x20) * iVar7;
    local_38 = ((short)(int)((longlong)iVar8 * (longlong)local_2c >> 0x25) - (short)(iVar8 >> 0x1f))
               + 0x25ac;
    local_34 = ((short)(int)((longlong)iVar9 * (longlong)local_2c >> 0x25) - (short)(iVar9 >> 0x1f))
               + 0x1600;
    iVar1 = func_0x00083f50(iVar3);
    local_40 = CONCAT22(local_40._2_2_,local_38 + (short)(iVar1 * iVar6 >> 0xc));
    iVar1 = func_0x00083e80(iVar3);
    local_3c = CONCAT22(local_3c._2_2_,local_34 + (short)(iVar1 * iVar6 >> 0xc));
    local_40 = CONCAT22(local_36 + ((0x28 - ((ushort)iVar5 & 0xf)) + (short)iVar7) * (short)iVar7,
                        (undefined2)local_40);
    func_0x000318a0(&local_40,0x800a1cd4,local_30 + 0x48);
    setCopReg(2,in_zero,local_40);
    setCopReg(2,extraout_at,local_3c);
    iVar6 = func_0x000317cc(0xffffffd8);
    if (iVar6 == 0) {
      _DAT_1f800088 = _DAT_1f800084;
      func_0x00027a4c(iVar7 * 0x10 + -0x7ff62a04,_DAT_8009d5f8);
    }
    iVar9 = iVar9 + 0x23d;
    iVar10 = iVar10 + 1;
    iVar8 = iVar8 + 0x11e;
  } while (iVar10 < 0x50);
  return;
}

