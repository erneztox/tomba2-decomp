// FUN_08041234

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08041234(int param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar4 = _DAT_8010a1ac;
  bVar1 = func_0x0009a450();
  uVar2 = func_0x0009a450();
  DAT_8013fdfb = (bVar1 & 0x3f) - 0x20;
  iVar3 = (uVar2 & 0x3f) - 0x20;
  setCopControlWord(2,0xa800,0);
  setCopControlWord(2,0xb000,0);
  setCopControlWord(2,0xb800,0);
  DAT_8013fdf7 = (bVar1 & 0x3f) - 0x40;
  _DAT_1f800090 = *(undefined4 *)(param_1 + 0x54);
  DAT_8013fe1f = (char)(uVar2 & 0x3f) + -0x40;
  DAT_8013fe1b = (undefined1)iVar3;
  DAT_8013fe3f = DAT_8013fdfb;
  DAT_8013fe43 = DAT_8013fdf7;
  DAT_8013fe47 = DAT_8013fe1b;
  DAT_8013fe4b = DAT_8013fe1f;
  func_0x000318a0(param_1 + 0x2c,param_1 + 0x50,param_1 + 0x48,iVar3,uVar4);
  func_0x00027768(0x8013fde8,0,0xffffffec,*(undefined1 *)(param_1 + 0x29));
  return;
}

