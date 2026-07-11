/**
 * @brief Menu text drawer variant 2: renders with different format
 * @note Original: func_80078988 at 0x80078988
 */
// Menu_TextDraw2



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_80078988(short param_1,undefined2 param_2,int param_3,char *param_4,int param_5)

{
  undefined1 uVar1;
  ushort uVar2;
  short sVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  uint *puVar8;
  uint uVar9;
  undefined **ppuVar10;
  
  _DAT_1f800024 = CONCAT13(0x75,_DAT_1f800024);
  _DAT_1f800028 = CONCAT22(param_2,param_1);
  if (param_3 < 0x10) {
    uVar2 = ((short)param_3 + 0x1f0) * 0x40 | 0x3f;
  }
  else {
    uVar2 = ((short)param_3 + 0x1e0) * 0x40 | 0x3e;
  }
  _DAT_1f80002c = CONCAT22(uVar2,_DAT_1f80002c);
  if (*param_4 != '\0') {
    do {
      uVar5 = (uint)CONCAT11(*param_4,param_4[1]);
      uVar9 = 0xa0a;
      if ((((uVar5 != 0xa0a) && (uVar9 = uVar5 + 0x7dc1, 0x19 < (uVar5 + 0x7da0 & 0xffff))) &&
          (uVar9 = uVar5 + 0x7dc0, 0x19 < (uVar5 + 0x7d7f & 0xffff))) &&
         (uVar9 = uVar5 + 0x7dc1, 9 < (uVar5 + 0x7db1 & 0xffff))) {
        ppuVar10 = &PTR_DAT_800a55e0;
        puVar4 = PTR_DAT_800a55e0;
        while (puVar4 != (undefined *)0x0) {
          iVar6 = FUN_8009a640(*ppuVar10,param_4,2);
          if (iVar6 == 0) {
            uVar9 = (uint)*(ushort *)(ppuVar10 + 1);
            goto LAB_80078ac8;
          }
          ppuVar10 = ppuVar10 + 2;
          puVar4 = *ppuVar10;
        }
        uVar9 = 0xff02;
      }
LAB_80078ac8:
      param_4 = param_4 + 2;
      if ((uVar9 & 0xffff) == 0xff02) {
        sVar3 = _DAT_1f800028 + 8;
LAB_80078bfc:
        _DAT_1f800028 = CONCAT22(_DAT_1f80002a,sVar3);
        puVar7 = _DAT_800bf544;
      }
      else if ((uVar9 & 0xffff) == 0xa0a) {
        _DAT_1f800028 = CONCAT22(_DAT_1f80002a + 8,param_1);
        puVar7 = _DAT_800bf544;
      }
      else {
        _DAT_1f80002c = CONCAT11((char)(((uVar9 & 0xfff) >> 5) << 3),(char)((uVar9 & 0x1f) << 3));
        puVar7 = (uint *)(_DAT_800ed8c8 + param_5 * 4);
        *_DAT_800bf544 = *puVar7 | 0x3000000;
        *puVar7 = (uint)_DAT_800bf544;
        _DAT_800bf544[1] = _DAT_1f800024;
        _DAT_800bf544[2] = _DAT_1f800028;
        _DAT_800bf544[3] = _DAT_1f80002c;
        puVar7 = _DAT_800bf544 + 4;
        _DAT_1f800028 = CONCAT22(_DAT_1f80002a,_DAT_1f800028 + 8);
        if ((uVar9 & 0x8000) != 0) {
          uVar1 = 0x40;
          if ((uVar9 & 0x1000) == 0) {
            uVar1 = 0x38;
          }
          _DAT_1f80002c = CONCAT11(0x40,uVar1);
          puVar8 = (uint *)(_DAT_800ed8c8 + param_5 * 4);
          *puVar7 = *puVar8 | 0x3000000;
          *puVar8 = (uint)puVar7;
          _DAT_800bf544[5] = _DAT_1f800024;
          _DAT_800bf544[6] = _DAT_1f800028;
          _DAT_800bf544[7] = _DAT_1f80002c;
          _DAT_800bf544 = _DAT_800bf544 + 8;
          sVar3 = _DAT_1f800028 + 5;
          goto LAB_80078bfc;
        }
      }
      _DAT_800bf544 = puVar7;
    } while (*param_4 != '\0');
  }
  puVar7 = _DAT_800bf544;
  FUN_80083de0(_DAT_800bf544,0,0,0x1f,0);
  puVar8 = (uint *)(_DAT_800ed8c8 + param_5 * 4);
  *puVar7 = *puVar8 | 0x2000000;
  *puVar8 = (uint)puVar7;
  _DAT_800bf544 = _DAT_800bf544 + 3;
  iVar6 = (int)_DAT_1f800028;
  return iVar6 - param_1;
}
