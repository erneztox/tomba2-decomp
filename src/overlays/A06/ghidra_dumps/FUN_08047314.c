// FUN_08047314

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08047314(int param_1)

{
  byte bVar1;
  undefined4 in_zero;
  undefined4 extraout_at;
  int iVar2;
  undefined4 uVar3;
  
  setCopControlWord(2,0xa800,0);
  setCopControlWord(2,0xb000,0);
  setCopControlWord(2,0xb800,0);
  uVar3 = _DAT_8010a480;
  func_0x000329e0(6);
  setCopReg(2,in_zero,*(undefined4 *)(param_1 + 0x2c));
  setCopReg(2,extraout_at,*(undefined4 *)(param_1 + 0x30));
  iVar2 = func_0x000317cc(0);
  if (iVar2 == 0) {
    _DAT_1f800088 = _DAT_1f800084;
    bVar1 = *(byte *)(param_1 + 7);
    iVar2 = (uint)bVar1 * 3;
    func_0x0002e680(0,iVar2,0xffffff,0x808040,uVar3);
    func_0x0002e680(iVar2,(uint)bVar1 << 2,0x808040,0);
  }
  return;
}

