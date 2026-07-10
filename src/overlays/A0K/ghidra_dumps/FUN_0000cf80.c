// FUN_0000cf80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000cf80(int param_1,undefined4 param_2,undefined4 param_3)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint *puVar4;
  uint uVar5;
  ushort *puVar6;
  int iVar7;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  undefined4 local_1c;
  
  if (*(char *)(param_1 + 6) != '\0') {
    setCopControlWord(2,0xa800,0);
    setCopControlWord(2,0xb000,0);
    setCopControlWord(2,0xb800,0);
    _DAT_1f8000c0 = func_0x00083f50((int)_DAT_800e7ed6,param_2,param_3,0);
    _DAT_1f8000c0 = -_DAT_1f8000c0;
    _DAT_1f8000c2 = func_0x00083e80((int)_DAT_800e7ed6);
    uVar2 = _DAT_800ed8c8;
    puVar6 = (ushort *)(param_1 + 0x10);
    _DAT_1f8000c2 = -_DAT_1f8000c2;
    bVar1 = *(byte *)(param_1 + 6);
    iVar7 = *(int *)(param_1 + 0xc);
    func_0x00051b34(0x1f8000f8,&local_38);
    local_20 = _DAT_1f800110 - _DAT_1f800240;
    setCopControlWord(2,0,local_38);
    setCopControlWord(2,0x800,local_34);
    setCopControlWord(2,0x1000,local_30);
    setCopControlWord(2,0x1800,local_2c);
    setCopControlWord(2,0x2000,local_28);
    setCopControlWord(2,0x2800,_DAT_1f80010c);
    setCopControlWord(2,0x3000,local_20);
    setCopControlWord(2,0x3800,_DAT_1f800114);
    local_24 = _DAT_1f80010c;
    local_1c = _DAT_1f800114;
    for (; puVar6 < (ushort *)(param_1 + (uint)bVar1 * 2 + 0x10); puVar6 = puVar6 + 1) {
      puVar4 = (uint *)(iVar7 + (uint)*puVar6 * 4);
      uVar5 = *puVar4;
      uVar3 = func_0x00114f1c(puVar4 + 1,uVar2,uVar5 & 0xff);
      func_0x0011562c(uVar3,uVar2,uVar5 >> 0x10 & 0xff);
    }
  }
  return;
}

