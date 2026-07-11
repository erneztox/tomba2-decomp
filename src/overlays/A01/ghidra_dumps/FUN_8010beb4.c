// FUN_8010beb4

/* WARNING: Removing unreachable block (ram,0x8010c010) */
/* WARNING: Removing unreachable block (ram,0x8010c020) */
/* WARNING: Removing unreachable block (ram,0x8010c028) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_8010beb4(int param_1)

{
  ushort uVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uStack_38;
  undefined2 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  uint uVar6;
  
  uVar3 = 10;
  if ((DAT_1f800207 == '\n') && (uVar3 = 0x101, *(short *)(param_1 + 4) == 0x101)) {
    _DAT_1f8000c0 = *(undefined2 *)(*(int *)(param_1 + 0xc0) + 0x2c);
    _DAT_1f8000c2 = *(short *)(*(int *)(param_1 + 0xc0) + 0x30) + -0x20;
    _DAT_1f8000c4 = *(undefined2 *)(*(int *)(param_1 + 0xc0) + 0x34);
    func_0x80084470(&DAT_1f8000f8,&DAT_1f8000c0,&DAT_1f800014);
    _DAT_1f800014 = _DAT_1f800014 + _DAT_1f80010c;
    _DAT_1f800018 = _DAT_1f800018 + _DAT_1f800110;
    _DAT_1f80001c = _DAT_1f80001c + _DAT_1f800114;
    iVar4 = _DAT_1f800114;
    func_0x80084660(&DAT_1f8000f8);
    func_0x80084690(0x1f800000);
    DAT_1f800007 = 0x2d;
    _DAT_1f80000e = 0x3e3f;
    _DAT_1f80000c = 0xd000;
    _DAT_1f800014 = 0xfd018;
    _DAT_1f80001c = CONCAT22(DAT_1f80001c_2,0xd800);
    _DAT_1f800024 = 0xd818;
    if ((*(char *)(param_1 + 6) == '\0') && (0x46e6 < _DAT_1f800160)) {
      uStack_2c = 0x1f800000;
      uStack_38 = 0x1f800000;
      uStack_30 = param_1;
      sVar2 = func_0x80076d68();
      FUN_8011d9e4(&DAT_1f8000f8,iVar4 + 1);
      if (*(short *)(&DAT_1f800158 + (iVar4 + 1) * 2) != 2) {
        *(undefined2 *)(&DAT_1f800158 + iVar4 * 2) = 0;
        uVar3 = FUN_8011dfc4();
        return uVar3;
      }
      uVar1 = *(ushort *)(_DAT_1f800130 + 4);
      if ((int)((uint)uVar1 << 0x10) >> 0x14 != (int)*(short *)(&DAT_1f800158 + iVar4 * 2)) {
        func_0x80051b04(_DAT_1f8001c0,0x15);
        *(short *)(&DAT_1f800158 + iVar4 * 2) = (short)uVar1 >> 4;
      }
      return (int)sVar2;
    }
    iVar5 = ((int)((*(ushort *)(param_1 + 0x2e) - 0x46e6) * 0x10000) >> 0x10) / 0x18;
    iVar4 = 0;
    uVar3 = 0xc;
    uStack_38._0_2_ = 0;
    uStack_38._2_2_ = 0xfff4;
    uStack_30._2_2_ = 0xfff4;
    uStack_30._0_2_ = 0x18;
    uVar6 = 0;
    uStack_34 = 0;
    uStack_2c = (uint)uStack_2c._2_2_ << 0x10;
    if (0 < iVar5) {
      do {
        func_0x8003b320(0x1f800000,&uStack_38,0);
        iVar4 = iVar4 + 1;
        uStack_38._0_2_ = (short)uStack_38 + -0x18;
        uStack_30._0_2_ = (short)uStack_30 + -0x18;
        uVar3 = uVar6 - 0x18;
        uVar6 = uVar3 & 0xffff;
      } while (iVar4 * 0x10000 >> 0x10 < iVar5);
    }
  }
  return uVar3;
}

