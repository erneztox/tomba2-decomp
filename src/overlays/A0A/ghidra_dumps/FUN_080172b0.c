// FUN_080172b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_080172b0(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  byte *pbVar4;
  uint *puVar5;
  uint uVar6;
  ushort *puVar7;
  int iVar8;
  
  uVar2 = _DAT_800ed8c8;
  bVar1 = *(byte *)(param_1 + 6);
  puVar7 = (ushort *)(param_1 + 0x10);
  if (bVar1 != 0) {
    iVar8 = *(int *)(param_1 + 0xc);
    setCopControlWord(2,0,_DAT_1f8000f8);
    setCopControlWord(2,0x800,_DAT_1f8000fc);
    setCopControlWord(2,0x1000,_DAT_1f800100);
    setCopControlWord(2,0x1800,_DAT_1f800104);
    setCopControlWord(2,0x2000,_DAT_1f800108);
    setCopControlWord(2,0x2800,_DAT_1f80010c);
    setCopControlWord(2,0x3000,_DAT_1f800110);
    setCopControlWord(2,0x3800,_DAT_1f800114);
    for (; puVar7 < (ushort *)(param_1 + (uint)bVar1 * 2 + 0x10); puVar7 = puVar7 + 1) {
      puVar5 = (uint *)(iVar8 + (uint)*puVar7 * 4);
      uVar6 = *puVar5;
      uVar3 = func_0x0010f97c(puVar5 + 1,uVar2,uVar6 & 0xff);
      func_0x0010fd74(uVar3,uVar2,uVar6 >> 0x10 & 0xff);
    }
    _DAT_8011bf18 = _DAT_8011bf18 - 1 & 0x3f;
    _DAT_8011bf1c = _DAT_8011bf1c - 1;
    if ((int)((uint)_DAT_8011bf1c << 0x10) < 0) {
      _DAT_8011bf1e = _DAT_8011bf1e + 1;
      if (5 < _DAT_8011bf1e) {
        _DAT_8011bf1e = 0;
      }
      _DAT_8011bf1c = 3;
    }
    pbVar4 = (byte *)(_DAT_8011bf1e * 2 + -0x7fee40e0);
    _DAT_8011bf14 = *pbVar4 + _DAT_8011bf18;
    _DAT_8011bf1a = (ushort)*pbVar4;
    _DAT_8011bf16 = (ushort)*(byte *)(_DAT_8011bf1e * 2 + -0x7fee40df);
  }
  return;
}

