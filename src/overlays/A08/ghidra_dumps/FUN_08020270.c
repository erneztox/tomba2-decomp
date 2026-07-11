// FUN_08020270

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08020270(int param_1)

{
  undefined4 in_zero;
  undefined4 extraout_at;
  undefined4 extraout_at_00;
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 local_80 [2];
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined2 local_50;
  undefined2 local_4e;
  undefined2 local_4c;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 local_30;
  undefined1 local_2f;
  undefined1 local_2e;
  
  local_80[0] = _DAT_80109a70;
  local_78 = _DAT_80109a74;
  local_74 = _DAT_80109a78;
  local_70 = _DAT_80109a7c;
  local_6c = _DAT_80109a80;
  local_68 = _DAT_80109a84;
  local_64 = _DAT_80109a88;
  local_60 = _DAT_80109a8c;
  local_5c = _DAT_80109a90;
  setCopControlWord(2,0xa800,0);
  setCopControlWord(2,0xb000,0);
  setCopControlWord(2,0xb800,0);
  _DAT_1f800090 = (int)*(short *)(param_1 + 0x52);
  func_0x000321d8(&local_78,local_80,&local_70);
  func_0x00027768(0x8014464c,0,0xffffff9c,0);
  func_0x000321d8(&local_68,local_80,&local_60);
  func_0x00027768(0x8014464c,0,0xffffff9c,0);
  local_38 = _DAT_80109a9c;
  local_30 = DAT_80109aa0;
  local_2f = DAT_80109aa1;
  local_2e = DAT_80109aa2;
  local_40 = *(undefined4 *)(param_1 + 0x54);
  iVar2 = (int)*(short *)(param_1 + 0x5c);
  if (0xfff < iVar2) {
    iVar2 = 0x1000;
  }
  iVar1 = iVar2 * 0x96;
  if (iVar1 < 0) {
    iVar1 = iVar1 + 0xfff;
  }
  iVar2 = iVar2 * 300;
  local_58 = CONCAT22(0xdaf4,(short)(iVar1 >> 0xc) + 0x3b2f);
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xfff;
  }
  local_54 = CONCAT22(local_54._2_2_,(short)(iVar2 >> 0xc) + 0x1dcf);
  local_50 = 0x37ad;
  local_4e = 0xdc90;
  local_4c = 0x1e7a;
  local_3c = local_40;
  func_0x00029664(&local_58,2,&local_40,&local_30);
  func_0x000329e0(6);
  setCopReg(2,in_zero,local_58);
  setCopReg(2,extraout_at,local_54);
  iVar2 = func_0x000317cc(0);
  if (iVar2 == 0) {
    _DAT_1f800088 = _DAT_1f800084;
    func_0x0002e680(0,0xf,*(undefined4 *)(param_1 + 0x58),0x28);
  }
  local_40 = *(undefined4 *)(param_1 + 0x60);
  iVar1 = (int)*(short *)(param_1 + 0x68);
  iVar2 = iVar1 << 2;
  if (0xfff < iVar1) {
    iVar1 = 0x1000;
    iVar2 = 0x4000;
  }
  iVar3 = (iVar2 + iVar1) * -0x1e;
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xfff;
  }
  iVar2 = (iVar2 + iVar1) * -0x3c;
  local_58 = CONCAT22(0xdaf4,(short)(iVar3 >> 0xc) + 0x3d10);
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xfff;
  }
  local_54 = CONCAT22(local_54._2_2_,(short)(iVar2 >> 0xc) + 0x21a0);
  local_50 = 0x3a4e;
  local_4e = 0xdc90;
  local_4c = 0x23de;
  local_3c = local_40;
  func_0x00029664(&local_58,2,&local_40,&local_30);
  func_0x000329e0(6);
  setCopReg(2,in_zero,local_58);
  setCopReg(2,extraout_at_00,local_54);
  iVar2 = func_0x000317cc(0);
  if (iVar2 == 0) {
    _DAT_1f800088 = _DAT_1f800084;
    func_0x0002e680(0,0xf,*(undefined4 *)(param_1 + 100),0x28);
  }
  return;
}

