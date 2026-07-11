// FUN_80104c50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80104c50(byte *param_1,int param_2,int param_3)

{
  char cVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  short sVar7;
  int iVar8;
  byte *pbVar9;
  int iVar10;
  short sVar11;
  
  iVar10 = (uint)*(ushort *)(param_1 + 0x2e) - (uint)*(ushort *)(param_3 + 0x2c);
  iVar4 = iVar10 * 0x10000 >> 0x10;
  iVar8 = (uint)*(ushort *)(param_1 + 0x36) - (uint)*(ushort *)(param_3 + 0x34);
  iVar5 = iVar8 * 0x10000 >> 0x10;
  uVar3 = func_0x80084080(iVar4 * iVar4 + iVar5 * iVar5);
  if ((int)(uint)uVar3 <= (int)*(short *)(param_1 + 0x80) + (int)*(short *)(param_2 + 0x80)) {
    iVar4 = 0;
    if ((param_1[5] != 0xf) && (iVar4 = 0x24, -1 < *(short *)(param_1 + 0x17e))) {
      iVar4 = 0x48;
    }
    iVar5 = (uint)*(ushort *)(param_1 + 0x32) - (uint)*(ushort *)(param_3 + 0x30);
    if ((int)(iVar5 + (uint)*(ushort *)(param_2 + 0x84) +
                      ((uint)*(ushort *)(param_1 + 0x84) - iVar4) & 0xffff) <=
        (int)*(short *)(param_1 + 0x86) + iVar4 * -2 + (int)*(short *)(param_2 + 0x86)) {
      if (iVar5 * 0x10000 < 0) {
        FUN_8010dd34();
        return;
      }
      iVar6 = (((uint)*(ushort *)(param_2 + 0x86) - (uint)*(ushort *)(param_2 + 0x84)) +
              ((uint)*(ushort *)(param_1 + 0x86) - (uint)*(ushort *)(param_1 + 0x84))) - iVar4;
      iVar8 = func_0x80085690(-(int)(short)iVar8,(int)(short)iVar10);
      sVar7 = (short)iVar6;
      sVar11 = (short)iVar8;
      if (((int)*(short *)(param_2 + 0x80) + (int)*(short *)(param_1 + 0x80)) - (int)(short)uVar3 <
          (int)sVar7 - (int)(short)iVar5) {
        if ((*param_1 & 4) == 0) {
          iVar5 = func_0x80083f50((int)sVar11);
          iVar6 = iVar5 * ((int)*(short *)(param_1 + 0x80) + (int)*(short *)(param_2 + 0x80)) >> 0xc
          ;
          iVar5 = func_0x80083e80((int)sVar11);
          sVar7 = *(short *)(param_2 + 0x80);
          *(short *)(param_1 + 0x2e) = *(short *)(param_3 + 0x2c) + (short)iVar6;
          *(short *)(param_1 + 0x36) =
               *(short *)(param_3 + 0x34) -
               (short)(iVar5 * ((int)*(short *)(param_1 + 0x80) + (int)sVar7) >> 0xc);
        }
        pbVar9 = (byte *)(int)sVar11;
        cVar1 = func_0x80077768(pbVar9,(int)*(short *)(param_1 + 0x140),1);
        param_1[0x5f] = cVar1 + 2;
LAB_8010def4:
        func_0x80049250();
        if (DAT_800e7fc7 != '\0') {
          *(ushort *)(param_1 + 6) = *(ushort *)(param_1 + 6) | 1;
          *(ushort *)(iVar6 + 0x56) = *(short *)(param_1 + 4) - 0x800U & 0xfff;
          *(short *)(iVar6 + 0x4e) =
               *(short *)(iVar6 + 0x4e) - (short)(*(short *)(iVar6 + 0x4e) + -0x40 >> 4);
          iVar5 = (uint)*(ushort *)(iVar6 + 0x50) -
                  ((int)((uint)*(ushort *)(iVar6 + 0x50) << 0x10) >> 0x14);
          *(short *)(iVar6 + 0x50) = (short)iVar5;
          iVar5 = iVar5 * 0x10000 >> 0x10;
          if (iVar5 < 0) {
            iVar5 = -iVar5;
          }
          if (iVar5 < 0x20) {
            *(undefined2 *)(iVar6 + 0x50) = 0;
          }
          *(short *)(param_1 + 0x10) = *(short *)(param_1 + 0x10) + 0x40;
          DAT_800e7eaa = *(undefined1 *)(iVar6 + 0x2a);
          sVar7 = *(short *)(iVar6 + 2);
          *(short *)(iVar6 + 2) = sVar7;
          *(short *)(iVar6 + 10) = sVar7 + 100;
          *(undefined2 *)(iVar6 + 4) = *(undefined2 *)(param_1 + 0x36);
          iVar5 = func_0x80083e80((int)*(short *)(param_1 + 0x54));
          sVar7 = (short)(iVar5 >> 6);
          sVar7 = *(short *)(iVar6 + 4) - (sVar7 + (sVar7 >> 1));
          *(short *)(iVar6 + 4) = sVar7;
          *(short *)(iVar6 + 0xc) = sVar7 + -400;
          func_0x80074590(7,0,0);
          func_0x80051b04(*(undefined4 *)(param_1 + 0xc0),1,0);
          *(undefined2 *)(iVar8 + 0x40) = 0;
          *(ushort *)(iVar8 + 0xc0) = (ushort)*(byte *)(iVar8 + 0x78);
          *(undefined2 *)(iVar8 + 0xc2) = *(undefined2 *)(*(int *)(iVar4 + 0xc0) + 0x30);
          *(undefined2 *)(iVar8 + 0xc4) = *(undefined2 *)(*(int *)(iVar4 + 0xc0) + 0x34);
          func_0x80084110(param_1 + 0xf8,*(int *)(iVar4 + 0xc0) + 0x18,0x1f800000);
          func_0x80084220(iVar8 + 0xc0,&DAT_1f800014);
          _DAT_1f800014 = _DAT_1f800014 + *(int *)(param_1 + 0x10c);
          _DAT_1f800018 = _DAT_1f800018 + *(int *)(param_1 + 0x110);
          _DAT_1f80001c = _DAT_1f80001c + *(int *)(param_1 + 0x114);
          func_0x80084660(0x1f800000);
          func_0x80084690(0x1f800000);
          FUN_80128b08(iVar4);
          return;
        }
        if (param_1[0x5e] == 2) {
          *(byte **)(param_1 + 0x14) = pbVar9;
        }
        pbVar9[0x5e] = 0;
        *(short *)(*(int *)(pbVar9 + 0xc0) + 2) = *(short *)(*(int *)(pbVar9 + 0xc0) + 2) + 0x30;
        if ((param_1[0x5e] & 2) != 0) {
          FUN_8011fec4(param_1,0x80137134);
          return;
        }
        func_0x80040d68(param_1,0x80137124);
        param_1[0x70] = 1;
        func_0x80042354(1,1);
        param_1[5] = 1;
        return;
      }
      if (sVar7 < 1) {
        if ((param_1[0x145] & 1) == 0) {
          pbVar9 = param_1;
          func_0x80022c78();
          if (param_1[0x78] == 0) {
            iVar5 = func_0x80077768((int)sVar11,(int)*(short *)(param_1 + 0x140),0);
            bVar2 = 3;
            if (iVar5 == 0) {
              bVar2 = 2;
            }
            param_1[0x16a] = bVar2;
            pbVar9 = param_1;
            func_0x80054e24(param_1,0,0);
          }
          *(int *)(param_1 + 0x30) = ((*(int *)(param_3 + 0x30) + (int)sVar7) - iVar4) * 0x10000;
          goto LAB_8010def4;
        }
      }
      else {
        DAT_1f800253 = 4;
        *(int *)(param_1 + 0x30) = (*(int *)(param_3 + 0x30) + (int)sVar7) * 0x10000;
        if ((param_1[0x145] == 1) && (*(short *)(param_1 + 0x4a) < 0)) {
          param_1[0x4a] = 0;
          param_1[0x4b] = 0;
        }
      }
    }
  }
  return;
}

