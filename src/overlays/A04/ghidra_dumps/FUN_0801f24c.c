// FUN_0801f24c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801f24c(void)

{
  int iVar1;
  undefined1 uVar2;
  char cVar3;
  undefined1 *puVar4;
  short sVar5;
  int iVar6;
  uint *puVar7;
  undefined1 auStack_20 [2];
  short local_1e;
  undefined1 auStack_10 [4];
  int local_c;
  
  _DAT_80140be0 = _DAT_801442ce;
  _DAT_80140bdc = _DAT_801442cc;
  puVar7 = _DAT_800bf544;
  _DAT_80140bd4 = _DAT_1f800160;
  _DAT_80140bd8 = _DAT_1f800164;
  _DAT_801442ce = _DAT_1f800164;
  _DAT_801442cc = _DAT_1f800160;
  func_0x00084700(&DAT_80140bd4,auStack_20,auStack_10,&local_c);
  if (-1 < local_c) {
    iVar6 = (((_DAT_1f8000f2 + -0x400) * 0x1f) / 100 + (0x295f - _DAT_1f8000da >> 2) + -0x140) *
            0x10000 >> 0x10;
    if (iVar6 < 0x140) {
      puVar4 = (undefined1 *)((int)puVar7 + 7);
      do {
        if (-0xa1 < iVar6) {
          *(undefined4 *)(puVar4 + -3) = 0x808080;
          *(undefined4 *)(puVar4 + 9) = 0x808080;
          *(undefined4 *)(puVar4 + 0x15) = 0x808080;
          *(undefined4 *)(puVar4 + 0x21) = 0x808080;
          puVar4[5] = DAT_80140bf4 + '?';
          puVar4[0x11] = DAT_80140bf4;
          puVar4[0x1d] = DAT_80140bf4 + '?';
          uVar2 = DAT_80140bf4;
          sVar5 = (short)iVar6;
          *(short *)(puVar4 + 1) = sVar5;
          *(short *)(puVar4 + 0x19) = sVar5;
          *(short *)(puVar4 + 3) = local_1e + -0x60;
          *(short *)(puVar4 + 0xf) = local_1e + -0x60;
          *(short *)(puVar4 + 0x1b) = local_1e + 0x30;
          *(short *)(puVar4 + 0x27) = local_1e + 0x30;
          puVar4[0x29] = uVar2;
          uVar2 = DAT_80140bf6;
          *(short *)(puVar4 + 0xd) = sVar5 + 0xa0;
          *(short *)(puVar4 + 0x25) = sVar5 + 0xa0;
          puVar4[6] = uVar2;
          uVar2 = DAT_80140bf6;
          *(undefined2 *)(puVar4 + 7) = 0x39f7;
          puVar4[0x12] = uVar2;
          cVar3 = DAT_80140bf6;
          *(undefined2 *)(puVar4 + 0x13) = 0x2c;
          puVar4[0x1e] = cVar3 + '?';
          cVar3 = DAT_80140bf6;
          *puVar4 = 0x3e;
          puVar4[0x2a] = cVar3 + '?';
          iVar1 = _DAT_800ed8c8;
          *puVar7 = *(uint *)(_DAT_800ed8c8 + 0x24) | 0xc000000;
          *(uint **)(iVar1 + 0x24) = puVar7;
          puVar4 = puVar4 + 0x34;
          puVar7 = puVar7 + 0xd;
        }
        iVar6 = iVar6 + 0xa0;
      } while (iVar6 < 0x140);
    }
    _DAT_80140bf8 = _DAT_80140bf8 - 1;
    _DAT_800bf544 = puVar7;
    if ((int)((uint)_DAT_80140bf8 << 0x10) < 1) {
      _DAT_80140bf8 = 2;
      _DAT_80140bf4 = _DAT_80140bf4 + 0x40;
      if (0xff < _DAT_80140bf4) {
        _DAT_80140bf4 = 0;
        _DAT_80140bf6 = _DAT_80140bf6 + 0x40;
        if (0xff < _DAT_80140bf6) {
          _DAT_80140bf6 = 0;
        }
      }
    }
  }
  return;
}

