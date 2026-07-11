// FUN_0801c3c8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801c3c8(int param_1)

{
  byte bVar1;
  int iVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  undefined4 uVar6;
  uint *puVar7;
  uint uVar8;
  ushort *puVar9;
  int iVar10;
  byte local_20;
  byte local_1e;
  
  if (*(char *)(param_1 + 6) != '\0') {
    *(undefined1 *)((int)_DAT_800bf544 + 3) = 2;
    _DAT_800bf544[2] = 0;
    _DAT_800bf544[1] = 0xe2000000;
    iVar2 = _DAT_800ed8c8;
    *_DAT_800bf544 = *(uint *)(_DAT_800ed8c8 + 0x1fec) | 0x2000000;
    *(uint **)(iVar2 + 0x1fec) = _DAT_800bf544;
    *(undefined1 *)((int)_DAT_800bf544 + 0xf) = 2;
    _DAT_800bf544[5] = 0;
    _DAT_800bf544[4] = 0xe2000000;
    iVar2 = _DAT_800ed8c8;
    _DAT_800bf544[3] = *(uint *)(_DAT_800ed8c8 + 0x1ff4) | 0x2000000;
    *(uint **)(iVar2 + 0x1ff4) = _DAT_800bf544 + 3;
    iVar2 = _DAT_800ed8c8;
    _DAT_800bf544 = _DAT_800bf544 + 6;
    puVar9 = (ushort *)(param_1 + 0x10);
    bVar1 = *(byte *)(param_1 + 6);
    iVar10 = *(int *)(param_1 + 0xc);
    setCopControlWord(2,0,_DAT_1f8000f8);
    setCopControlWord(2,0x800,_DAT_1f8000fc);
    setCopControlWord(2,0x1000,_DAT_1f800100);
    setCopControlWord(2,0x1800,_DAT_1f800104);
    setCopControlWord(2,0x2000,_DAT_1f800108);
    setCopControlWord(2,0x2800,_DAT_1f80010c);
    setCopControlWord(2,0x3000,_DAT_1f800110);
    setCopControlWord(2,0x3800,_DAT_1f800114);
    sVar3 = _DAT_80120928;
    sVar4 = _DAT_8012092a;
    for (; _DAT_80120928 = sVar3, _DAT_8012092a = sVar4,
        puVar9 < (ushort *)(param_1 + (uint)bVar1 * 2 + 0x10); puVar9 = puVar9 + 1) {
      puVar7 = (uint *)(iVar10 + (uint)*puVar9 * 4);
      uVar8 = *puVar7;
      uVar6 = func_0x00114a5c(puVar7 + 1,iVar2,uVar8 & 0xff);
      func_0x00114e70(uVar6,iVar2,uVar8 >> 0x10 & 0xff);
      sVar3 = _DAT_80120928;
      sVar4 = _DAT_8012092a;
    }
    *(undefined1 *)((int)_DAT_800bf544 + 3) = 2;
    local_1e = (byte)sVar4;
    local_20 = (byte)sVar3;
    _DAT_800bf544[2] = 0;
    _DAT_800bf544[1] =
         (uint)(local_1e >> 3) << 0xf | (uint)(local_20 >> 3) << 10 | 0xe2000000 | 0x318;
    iVar2 = _DAT_800ed8c8;
    *_DAT_800bf544 = *(uint *)(_DAT_800ed8c8 + 0x1fec) | 0x2000000;
    *(uint **)(iVar2 + 0x1fec) = _DAT_800bf544;
    sVar4 = _DAT_80120934;
    sVar3 = _DAT_80120932;
    *(undefined1 *)((int)_DAT_800bf544 + 0xf) = 2;
    local_1e = (byte)sVar4;
    local_20 = (byte)sVar3;
    _DAT_800bf544[5] = 0;
    _DAT_800bf544[4] =
         (uint)(local_1e >> 3) << 0xf | (uint)(local_20 >> 3) << 10 | 0xe2000000 | 0x318;
    iVar2 = _DAT_800ed8c8;
    _DAT_800bf544[3] = *(uint *)(_DAT_800ed8c8 + 0x1ff4) | 0x2000000;
    *(uint **)(iVar2 + 0x1ff4) = _DAT_800bf544 + 3;
    _DAT_800bf544 = _DAT_800bf544 + 6;
    sVar4 = _DAT_80120928 + 0x40;
    sVar5 = _DAT_80120928 + -0x80;
    _DAT_80120928 = sVar4;
    sVar3 = _DAT_8012092a;
    if ((0xbf < sVar4) &&
       (_DAT_80120928 = sVar5, sVar3 = _DAT_8012092a + 0x40, 0xbf < (short)(_DAT_8012092a + 0x40)))
    {
      sVar3 = _DAT_8012092a + -0x80;
    }
    _DAT_8012092a = sVar3;
    _DAT_8012092e = _DAT_8012092e - 2 & 0x3f;
    _DAT_80120930 = _DAT_80120930 & 0x3f;
    if ((_DAT_1f80017c & 1) != 0) {
      sVar3 = _DAT_80120932 + 0x40;
      sVar4 = _DAT_80120934;
      if (0xbf < (short)(_DAT_80120932 + 0x40)) {
        sVar3 = _DAT_80120932 + -0x80;
        sVar4 = _DAT_80120934 + 0x40;
        if (0xbf < (short)(_DAT_80120934 + 0x40)) {
          sVar4 = _DAT_80120934 + -0x80;
        }
      }
      _DAT_80120934 = sVar4;
      _DAT_80120932 = sVar3;
      _DAT_80120938 = _DAT_80120938 - 1 & 0x3f;
      _DAT_8012093a = _DAT_8012093a & 0x3f;
    }
  }
  return;
}

