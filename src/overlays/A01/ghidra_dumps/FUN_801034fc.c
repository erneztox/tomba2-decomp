// FUN_801034fc

/* WARNING: Removing unreachable block (ram,0x8010c6cc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte * FUN_801034fc(void)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  undefined4 *puVar7;
  undefined6 uVar8;
  
  pbVar5 = &DAT_1f800000;
  _DAT_1f800084 = 0x7fff;
  _DAT_1f800080 = (byte *)0x0;
  puVar7 = _DAT_1f800140;
  DAT_1f800182 = DAT_1f800146;
  while( true ) {
    while( true ) {
      do {
        if (DAT_1f800182 == '\0') {
          puVar7 = _DAT_1f80014c;
          DAT_1f800182 = DAT_1f800152;
          if (_DAT_1f800080 == (byte *)0x0) {
            while (DAT_1f800182 != '\0') {
              pbVar5 = (byte *)*puVar7;
              DAT_1f800182 = DAT_1f800182 + -1;
              puVar7 = puVar7 + 1;
              if ((((*pbVar5 & 1) != 0) && (pbVar5[2] == 0x32)) &&
                 (iVar2 = func_0x8002300c(&DAT_800e7e80,pbVar5,(int)*(short *)(pbVar5 + 0x80)),
                 iVar2 != 0)) {
                DAT_1f800182 = '\0';
                _DAT_1f800080 = pbVar5;
                pbVar5[0x2b] = 2;
              }
            }
          }
          DAT_1f800182 = 0;
          return _DAT_1f800080;
        }
        pbVar6 = (byte *)*puVar7;
        DAT_1f800182 = DAT_1f800182 + -1;
        puVar7 = puVar7 + 1;
      } while ((*pbVar6 & 1) == 0);
      if (pbVar6[0xc] != 9) break;
      if (pbVar6[2] == 0x17) {
        pbVar5 = pbVar6;
        uVar8 = func_0x8002300c(&DAT_800e7e80,pbVar6,(*(short *)(pbVar6 + 0x80) * 3) / 2);
        sVar1 = (short)((uint6)uVar8 >> 0x20);
        iVar4 = 0x1f800000;
        if ((int)uVar8 != 0) {
          iVar2 = 2;
          DAT_1f800182 = '\0';
          _DAT_1f800080 = pbVar6;
          pbVar6[0x2b] = 2;
          goto LAB_8010c604;
        }
      }
    }
    uVar3 = 0x10;
    if (pbVar6[2] == 0x19) break;
    if (pbVar6[2] == 0x10) {
      iVar2 = -1;
LAB_8010c5b4:
      *(short *)(pbVar6 + 0x40) = (short)(uVar3 - 1);
      if ((int)((uVar3 - 1) * 0x10000) >> 0x10 == iVar2) {
        pbVar6[5] = pbVar6[5] + 1;
        DAT_800bf839 = 3;
        DAT_800bf80f = 0;
        _DAT_800bf83a = 0x10e;
      }
      iVar2 = *(int *)(pbVar5 + 0x30);
      sVar1 = *(short *)(pbVar5 + 0x4a);
      iVar4 = (int)*(short *)(pbVar5 + 0x4a) << 8;
LAB_8010c604:
      *(int *)(pbVar5 + 0x30) = iVar2 + iVar4;
      *(short *)(pbVar5 + 0x4a) = sVar1 + 0x100;
      sVar1 = *(short *)(pbVar6 + 0x4a);
      if (*(short *)(pbVar6 + 0x4a) != 0) {
        *(short *)(pbVar6 + 0x4a) = sVar1 + *(short *)(pbVar6 + 0x50);
        *(short *)(*(int *)(pbVar6 + 0xc0) + 0x3a) =
             *(short *)(*(int *)(pbVar6 + 0xc0) + 0x3a) + sVar1 + *(short *)(pbVar6 + 0x50);
        pbVar5 = (byte *)FUN_80115608();
        return pbVar5;
      }
      sVar1 = *(short *)(pbVar6 + 0x52);
      *(short *)(pbVar6 + 0x52) = sVar1 + 0x200;
      iVar2 = func_0x80083e80((int)(short)(sVar1 + 0x200));
      *(short *)(pbVar6 + 0x58) = (short)(iVar2 >> 4);
      iVar2 = (int)*(short *)(pbVar6 + 0x60) * (uint)*(ushort *)(*(int *)(pbVar6 + 0xc0) + 0x3a);
      if (iVar2 < 0) {
        iVar2 = iVar2 + 0xfff;
      }
      *(short *)(*(int *)(pbVar6 + 0xc4) + 2) = (short)(iVar2 >> 0xc);
      sVar1 = (short)((int)((uint)*(ushort *)(*(int *)(pbVar6 + 0xc0) + 0x3a) * 0x9d) >> 0xc) + 0x44
      ;
      *(short *)(pbVar6 + 0x86) = sVar1;
      *(short *)(pbVar6 + 0x84) = sVar1;
      func_0x80051844(pbVar6);
      pbVar6[1] = 1;
      pbVar5 = (byte *)func_0x80077ebc(pbVar6);
      pbVar6[0x29] = 0;
      return pbVar5;
    }
  }
  uVar3 = (uint)pbVar6[0xbf];
  iVar2 = 0x19;
  goto LAB_8010c5b4;
}

