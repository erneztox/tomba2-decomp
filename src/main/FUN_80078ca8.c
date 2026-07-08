
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_80078ca8(uint param_1,uint param_2,short param_3,byte *param_4,int param_5)

{
  byte bVar1;
  uint *puVar2;
  uint uVar3;
  ushort uVar4;
  short sVar5;
  int iVar6;
  char cVar7;
  int iVar8;
  uint *puVar9;
  int iVar10;
  
  if (param_3 < 0x10) {
    uVar4 = (param_3 + 0x1f0) * 0x40 | 0x3f;
  }
  else {
    uVar4 = (param_3 + 0x1e0) * 0x40 | 0x3e;
  }
  _DAT_1f80000c = CONCAT22(uVar4,_DAT_1f80000c);
  _DAT_1f800004 = CONCAT13(0x65,_DAT_1f800004);
  bVar1 = *param_4;
  uVar3 = param_1;
  puVar2 = _DAT_800bf544;
  do {
    _DAT_1f800008 = uVar3;
    _DAT_1f800010 = param_2;
    _DAT_800bf544 = puVar2;
    if (bVar1 == 0) {
      FUN_80083de0(puVar2,0,0,0x1f,0);
      puVar9 = (uint *)(_DAT_800ed8c8 + param_5 * 4);
      *puVar2 = *puVar9 | 0x2000000;
      *puVar9 = (uint)puVar2;
      _DAT_800bf544 = _DAT_800bf544 + 3;
      iVar6 = (int)_DAT_1f800008;
      return iVar6 - (param_1 & 0xffff);
    }
    _DAT_1f800008 = (short)uVar3;
    if (bVar1 == 0x20) {
LAB_80078f70:
      _DAT_1f800008 = uVar3;
      sVar5 = _DAT_1f800008 + 8;
      _DAT_1f800008 = CONCAT22(_DAT_1f80000a,sVar5);
    }
    else {
      _DAT_1f80000a = (short)(uVar3 >> 0x10);
      _DAT_1f800012 = (short)(param_2 >> 0x10);
      if (bVar1 != 10) {
        iVar6 = (int)param_3;
        if (bVar1 == 1) {
          iVar8 = (int)_DAT_1f800008;
          iVar10 = (int)_DAT_1f80000a;
          FUN_80078988(iVar8,iVar10,iVar6,&DAT_80016da8,param_5);
          uVar3 = _DAT_1f800008;
        }
        else if (bVar1 == 2) {
          iVar8 = (int)_DAT_1f800008;
          iVar10 = (int)_DAT_1f80000a;
          FUN_80078988(iVar8,iVar10,iVar6,&DAT_80016dac,param_5);
          uVar3 = _DAT_1f800008;
        }
        else if (bVar1 == 3) {
          iVar8 = (int)_DAT_1f800008;
          iVar10 = (int)_DAT_1f80000a;
          FUN_80078988(iVar8,iVar10,iVar6,&DAT_80016da4,param_5);
          uVar3 = _DAT_1f800008;
        }
        else if (bVar1 == 4) {
          iVar8 = (int)_DAT_1f800008;
          iVar10 = (int)_DAT_1f80000a;
          FUN_80078988(iVar8,iVar10,iVar6,&DAT_80016da0,param_5);
          uVar3 = _DAT_1f800008;
        }
        else {
          iVar8 = (uint)*param_4 + (int)_DAT_1f800180;
          iVar6 = iVar8;
          if (iVar8 < 0) {
            iVar6 = iVar8 + 0x1f;
          }
          iVar10 = (uint)*param_4 + (int)_DAT_1f800180;
          if (iVar10 < 0) {
            iVar10 = iVar10 + 0x1f;
          }
          cVar7 = (char)(iVar10 >> 5) * (char)(param_2 >> 0x10);
          uVar3 = _DAT_1f80000c >> 0x10;
          if (_DAT_1f800012 == 0x10) {
            cVar7 = cVar7 + '\b';
          }
          _DAT_1f80000c =
               CONCAT22((short)uVar3,
                        CONCAT11(cVar7,((char)iVar8 + (char)(iVar6 >> 5) * -0x20) * (char)param_2));
          puVar9 = (uint *)(_DAT_800ed8c8 + param_5 * 4);
          *puVar2 = *puVar9 | 0x4000000;
          *puVar9 = (uint)puVar2;
          puVar2[1] = _DAT_1f800004;
          puVar2[2] = _DAT_1f800008;
          puVar2[3] = _DAT_1f80000c;
          puVar2[4] = _DAT_1f800010;
          uVar3 = _DAT_1f800008;
          _DAT_800bf544 = puVar2 + 5;
        }
        goto LAB_80078f70;
      }
      _DAT_1f800008 = CONCAT22(_DAT_1f80000a + _DAT_1f800012,(short)param_1) & 0xffff0fff;
    }
    param_4 = param_4 + 1;
    bVar1 = *param_4;
    uVar3 = _DAT_1f800008;
    param_2 = _DAT_1f800010;
    puVar2 = _DAT_800bf544;
  } while( true );
}

