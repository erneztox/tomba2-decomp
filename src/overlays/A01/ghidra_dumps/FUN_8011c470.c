// FUN_8011c470

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_8011c470(int param_1,undefined4 param_2,int param_3)

{
  byte bVar1;
  undefined4 in_zero;
  undefined4 extraout_at;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  ushort uVar6;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined2 local_1e;
  undefined4 local_18 [2];
  
  local_18[0] = 0;
  bVar1 = *(byte *)(param_1 + 5);
  uVar6 = (ushort)bVar1;
  if (bVar1 == 0) {
    *(undefined1 *)(param_1 + 5) = 1;
    uStack_28 = CONCAT22(0x4c2c,(undefined2)uStack_28);
    uStack_24 = CONCAT22(0xf814,(undefined2)uStack_24);
    local_1e = 0x1d60;
    func_0x80031470(1,&uStack_28,0xfffffff0,local_18);
    uStack_28 = CONCAT22(0x4cc8,(undefined2)uStack_28);
    uStack_24 = CONCAT22(0xf73d,(undefined2)uStack_24);
    local_1e = 0x1d97;
    func_0x80031470(1,&uStack_28,0xfffffff0,local_18);
    uStack_28 = CONCAT22(0x4c22,(undefined2)uStack_28);
    uStack_24 = CONCAT22(0xf75d,(undefined2)uStack_24);
    local_1e = 0x1cd3;
    func_0x80031470(1,&uStack_28,0xfffffff0,local_18);
    func_0x80074590(0x2d,0xffffffe8,0xffffffd8);
    param_3 = 0x48;
    func_0x80051b04(*(undefined4 *)(param_1 + 0xc0),0xc);
    *(undefined2 *)(param_1 + 0x40) = 0x1e;
    uVar6 = *(ushort *)(param_3 + 0x2e);
  }
  else if (bVar1 == 1) {
    sVar2 = *(short *)(param_1 + 0x40) + -1;
    *(short *)(param_1 + 0x40) = sVar2;
    uVar6 = 0;
    if (sVar2 != -1) {
      return 0;
    }
    DAT_800bfa3e = 3;
  }
  uStack_28 = CONCAT22((*(short *)(param_3 + 0x32) -
                       (*(short *)(*(int *)(param_3 + 0xc0) + 0x22) >> 5)) +
                       (*(short *)(*(int *)(param_3 + 0xc0) + 0x20) >> 5),
                       (uVar6 - (*(short *)(*(int *)(param_3 + 0xc0) + 0x1c) >> 5)) +
                       (*(short *)(*(int *)(param_3 + 0xc0) + 0x1a) >> 5));
  uStack_24 = CONCAT22((short)((uint)uStack_24 >> 0x10),
                       (*(short *)(param_3 + 0x36) -
                       (*(short *)(*(int *)(param_3 + 0xc0) + 0x28) >> 5)) +
                       (*(short *)(*(int *)(param_3 + 0xc0) + 0x26) >> 5));
  func_0x800329e0(6);
  setCopReg(2,in_zero,uStack_28);
  setCopReg(2,extraout_at,uStack_24);
  iVar3 = func_0x800317cc(0xffffffe0);
  uVar4 = 0x1f800000;
  if (iVar3 == 0) {
    _DAT_1f800088 = _DAT_1f800084;
    uVar5 = func_0x8009a450();
    uVar5 = (uVar5 & 0x3f) + 0x40;
    uVar4 = func_0x8002e680(0,0x30,uVar5 | uVar5 * 0x100,0);
  }
  return uVar4;
}

