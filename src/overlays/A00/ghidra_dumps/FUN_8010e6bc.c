// FUN_8010e6bc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_8010e6bc(undefined1 *param_1)

{
  byte bVar1;
  char cVar2;
  undefined2 uVar3;
  ushort uVar4;
  short sVar5;
  undefined2 uVar6;
  int iVar7;
  uint uVar8;
  undefined4 extraout_v1;
  int extraout_v1_00;
  short *psVar9;
  undefined2 *puVar10;
  int iVar11;
  int unaff_s3;
  ulonglong uVar12;
  
  bVar1 = param_1[4];
  iVar11 = *(int *)(param_1 + 0x10);
  uVar12 = CONCAT44(1,(uint)(bVar1 < 2));
  if (bVar1 == 1) {
    if (param_1[5] == '\0') {
      if (param_1[0x5e] == '\x01') {
        uVar8 = func_0x80074590(0x92,0,0);
        return uVar8;
      }
      if (param_1[3] == '\0') {
        if ((*(short *)(iVar11 + 0x14) == 0) &&
           (uVar4 = *(short *)(iVar11 + 0x16) - 1, *(ushort *)(iVar11 + 0x16) = uVar4,
           (int)((uint)uVar4 << 0x10) < 0)) {
          uVar8 = func_0x8009a450();
          return uVar8;
        }
      }
      else {
        param_1[0x2b] = 0;
        FUN_801141c8(param_1);
        cVar2 = param_1[0x2b];
        if (cVar2 != '\0') {
          if (param_1[3] == '\0') {
            if (cVar2 == '\x02') {
              *(undefined2 *)(iVar11 + 0x14) = 0x2000;
            }
            else {
              *(undefined2 *)(iVar11 + 0x14) = 0xe000;
            }
          }
          else if (param_1[3] == '\x01') {
            if (cVar2 == '\x02') {
              sVar5 = *(short *)(iVar11 + 0xe) + -0x1000;
              if (0x7ff < *(short *)(iVar11 + 0xe)) {
                sVar5 = -*(short *)(iVar11 + 0xe);
              }
              *(short *)(iVar11 + 0xe) = sVar5;
              *(undefined2 *)(iVar11 + 0x14) = 0xc00;
            }
            else {
              sVar5 = -*(short *)(iVar11 + 0xe);
              if (-0x800 < *(short *)(iVar11 + 0xe)) {
                sVar5 = *(short *)(iVar11 + 0xe) + 0x1000;
              }
              *(short *)(iVar11 + 0xe) = sVar5;
              *(undefined2 *)(iVar11 + 0x14) = 0xf400;
            }
          }
          goto LAB_80117a30;
        }
      }
    }
    else {
      if (param_1[5] != '\x01') {
LAB_80117a30:
        func_0x80077cfc();
        uRam00000001 = 7;
        uRam00000085 = 0x28;
        DAT_00000086 = 0;
        uRam00000087 = 0x50;
        DAT_00000088 = 0;
        DAT_00000008 = DAT_00000008 + 1;
        _DAT_00000058 = _DAT_00000058 & 0xfffff;
        uVar8 = FUN_80120a38();
        return uVar8;
      }
      if ((*(short *)(iVar11 + 0x18) == 0) || (param_1[0x5e] == '\0')) {
        *(undefined2 *)(iVar11 + 0x14) = 0xd800;
        *(undefined2 *)(iVar11 + 0x1a) = 0x200;
        if (param_1[3] == '\0') {
          if ((DAT_0000002a == '\0') && (iVar11 = func_0x80049250(1,0,0x96), iVar11 == 0)) {
            if ((int)sRam00000073 != 0) {
              return (int)sRam00000073;
            }
            uVar8 = func_0x80076d68(1);
            return uVar8;
          }
        }
        else {
          if (param_1[3] != '\x01') {
            *param_1 = 1;
            uVar8 = FUN_80117a14();
            return uVar8;
          }
          *(undefined2 *)(param_1 + 0x36) = 0xf80;
          *param_1 = 1;
          param_1[0x5e] = 2;
          param_1[5] = param_1[5] + '\x01';
        }
        goto LAB_80117a30;
      }
      *(short *)(iVar11 + 0x18) = *(short *)(iVar11 + 0x18) + -1;
    }
    uVar8 = (uint)(byte)param_1[3];
    if (uVar8 == 0) {
      psVar9 = *(short **)(param_1 + 0x10);
      iVar11 = func_0x8007778c(param_1);
      uVar3 = _DAT_1f800164;
      uVar6 = _DAT_1f800162;
      if (iVar11 == 0) {
        return 2;
      }
      if (param_1[5] == '\x02') {
        uVar8 = (uint)_DAT_1f800160;
        *(ushort *)(param_1 + 0x2e) = _DAT_1f800160;
        *(undefined2 *)(param_1 + 0x32) = uVar6;
        *(undefined2 *)(param_1 + 0x36) = uVar3;
        return uVar8;
      }
      *(short *)(param_1 + 0x2e) = *psVar9 + -0x20;
      *(short *)(param_1 + 0x32) = psVar9[1] + 0x50;
      func_0x80077b5c(param_1);
      uVar12 = func_0x8004b374(param_1,0);
    }
    else {
      uVar12 = CONCAT44(uVar8,0x1f800000);
      if (uVar8 == 1) {
        psVar9 = *(short **)(param_1 + 0x10);
        uVar8 = 0;
        if (DAT_1f800207 < 5) {
          iVar11 = func_0x8007778c(param_1);
          uVar3 = _DAT_1f800164;
          uVar6 = _DAT_1f800162;
          uVar8 = 2;
          if (iVar11 != 0) {
            if (param_1[5] == '\x02') {
              uVar8 = (uint)_DAT_1f800160;
              *(ushort *)(param_1 + 0x2e) = _DAT_1f800160;
              *(undefined2 *)(param_1 + 0x32) = uVar6;
              *(undefined2 *)(param_1 + 0x36) = uVar3;
              psVar9[0x24] = (short)((int)uVar8 >> 4);
              iVar11 = func_0x80083e80((int)psVar9[0x2b]);
              psVar9[0x26] = (short)(-iVar11 >> 4);
              psVar9[0x25] = -0x200;
              psVar9[0x22] = 0x1000;
              *(char *)(psVar9 + 3) = (char)psVar9[3] + '\x01';
              FUN_801217f4(psVar9);
              uVar8 = 8;
              if (*(char *)((int)psVar9 + 5) == '\a') {
                uVar8 = func_0x80077e20(psVar9,0x20,0x30,0xff);
              }
              else if (*(char *)((int)psVar9 + 5) == '\b') {
                uVar8 = func_0x80077e20(psVar9,0xf0,0x40,0x40);
              }
              return uVar8;
            }
            *(short *)(param_1 + 0x2e) =
                 *psVar9 + (short)((uint)(*(short *)(*(int *)(param_1 + 0xc0) + 0x1a) * 9) >> 8);
            *(short *)(param_1 + 0x32) =
                 psVar9[1] + (short)((uint)(*(short *)(*(int *)(param_1 + 0xc0) + 0x20) * 9) >> 8);
            *(short *)(param_1 + 0x58) = -psVar9[6];
            func_0x800517f8(param_1);
            uVar12 = func_0x8004b374(param_1,1);
            goto LAB_80117ce0;
          }
        }
        return uVar8;
      }
    }
  }
  else if (bVar1 < 2 == 0) {
    uVar12 = 0x100000003;
    if (bVar1 == 2) {
      uVar8 = (uint)(byte)param_1[3];
      uVar12 = CONCAT44(1,uVar8);
      if (uVar8 == 0) {
        func_0x8004d4c4(0x3a,1);
        func_0x8004b0d8(param_1);
        if (5 < DAT_00000008) {
          return 0x80110000;
        }
        uVar12 = CONCAT44((uint)DAT_00000008 << 2,&switchD_80117cec::switchdataD_80109a78);
      }
      else if (uVar8 == 1) {
        uVar8 = (uint)(byte)param_1[5];
        uVar12 = (ulonglong)CONCAT14(param_1[5],(uint)(uVar8 < 2));
        if (uVar8 == 1) {
          iVar11 = func_0x8005308c();
          if (iVar11 == 0) {
            return 0;
          }
          func_0x80040cdc(param_1,0,0x80148574);
          param_1[0x70] = 2;
          uVar12 = CONCAT44(extraout_v1,(byte)param_1[5] + 1);
          param_1[5] = (char)((byte)param_1[5] + 1);
        }
        else if (uVar8 < 2 == 0) {
          uVar12 = CONCAT44(uVar8,0xff);
          if (uVar8 == 2) {
            if (param_1[0x70] == -1) {
              param_1[4] = 3;
              uVar12 = 0xff00000003;
            }
            else {
              uVar12 = func_0x80041098(param_1);
            }
          }
        }
        else if (uVar8 == 0) {
          func_0x8004d4f4(0x28,1);
          func_0x8004ed94(0x2d,0x42);
          func_0x8004b0d8(param_1);
          iVar11 = func_0x8004bd04(param_1,0,0);
          if (iVar11 != 0) {
            func_0x8004bea8(0x28,iVar11);
            func_0x80042354(1,1);
            DAT_800bf9dc = DAT_800bf9dc | 1;
          }
          return (byte)param_1[5] + 1;
        }
      }
    }
    else if (bVar1 == 3) {
      uVar8 = func_0x8007a624(param_1);
      return uVar8;
    }
  }
  else if (bVar1 == 0) {
    uVar8 = (uint)(byte)param_1[3];
    uVar12 = CONCAT44(1,uVar8);
    if (uVar8 == 0) {
      param_1[0xb] = 0x10;
      param_1[8] = 0xf8;
      param_1[0x47] = 0;
      *(undefined2 *)(param_1 + 0x5a) = 0;
      param_1[0xd] = 0;
      *(undefined4 *)(param_1 + 0x3c) = _DAT_800ecf80;
      func_0x80077b38(param_1,0x8014c808,1);
      *(undefined4 *)(param_1 + 0x2c) = 0x13d20000;
      *(undefined4 *)(param_1 + 0x30) = 0xf7e00000;
      *(undefined4 *)(param_1 + 0x34) = 0x15aa0000;
      *(undefined2 *)(param_1 + 0x80) = 0x3c;
      *(undefined2 *)(param_1 + 0x82) = 0x78;
      *(undefined2 *)(param_1 + 0x84) = 0x50;
      *(undefined2 *)(param_1 + 0x86) = 0xa0;
      *param_1 = 4;
      *(undefined2 *)(iVar11 + 6) = *(undefined2 *)(param_1 + 0x2e);
      *(short *)(iVar11 + 8) = *(short *)(param_1 + 0x32) + -0x1a4;
      uVar6 = *(undefined2 *)(param_1 + 0x36);
      *(undefined2 *)(iVar11 + 0x16) = 0x1e;
      *(undefined2 *)(iVar11 + 10) = uVar6;
      _DAT_00000058 = CONCAT12(DAT_00000058_2,(byte)param_1[4] + 1);
      FUN_801217f4(0,0);
      func_0x8004766c(0);
      if ((DAT_00000029 == '\0') && (iVar7 = func_0x80049250(0,0,0x96), iVar7 == 0)) {
        func_0x80077c40(0,0x8014e1a4,10);
        DAT_00000084 = 0x96;
        uRam00000085 = 0;
        DAT_00000007 = 0;
        DAT_00000086 = 0x2c;
        uRam00000087 = 1;
        uVar8 = func_0x8009a450();
        return uVar8;
      }
      func_0x80077cfc(0,0x8014e1a4,9,4);
      uRam00000000 = 7;
      uVar6 = 1;
      DAT_00000007 = 1;
      puVar10 = (undefined2 *)0x0;
      iVar7 = extraout_v1_00;
      while( true ) {
        *(undefined2 *)(iVar7 + 10) = uVar6;
        *(undefined2 *)(*(int *)(param_1 + 0xc0) + 0xc) = *puVar10;
        func_0x80051b04(*(undefined4 *)(param_1 + 0xc0));
        if ((int)(uint)*(byte *)(iVar11 + 8) <= unaff_s3) break;
        unaff_s3 = unaff_s3 + 1;
        iVar7 = func_0x8007aae8();
        *(int *)(param_1 + 0xc4) = iVar7;
        *(undefined2 *)(iVar7 + 6) = puVar10[2];
        **(undefined2 **)(param_1 + 0xc4) = 0;
        *(undefined2 *)(*(int *)(param_1 + 0xc4) + 2) = 0;
        *(undefined2 *)(*(int *)(param_1 + 0xc4) + 4) = 0;
        *(undefined2 *)(*(int *)(param_1 + 0xc4) + 8) = puVar10[3];
        iVar7 = *(int *)(param_1 + 0xc4);
        uVar6 = puVar10[4];
        puVar10 = puVar10 + 5;
        param_1 = param_1 + 4;
      }
      return 0;
    }
    if (uVar8 == 1) {
      *param_1 = 4;
      param_1[0x5e] = 0;
      iVar7 = func_0x80051b70(param_1,1,0);
      if (iVar7 != 0) {
        return 0x28d20000;
      }
      *(undefined4 *)(param_1 + 0x2c) = 0x28d20000;
      *(undefined4 *)(param_1 + 0x30) = 0xf9e80000;
      *(undefined4 *)(param_1 + 0x34) = 0xf800000;
      *(undefined2 *)(param_1 + 0x80) = 0x46;
      *(undefined2 *)(param_1 + 0x82) = 0x8c;
      *(undefined2 *)(param_1 + 0x84) = 0x8c;
      *(undefined2 *)(param_1 + 0x86) = 0x8c;
      *(undefined2 *)(iVar11 + 6) = *(undefined2 *)(param_1 + 0x2e);
      *(short *)(iVar11 + 8) = *(short *)(param_1 + 0x32) + -400;
      uVar6 = *(undefined2 *)(param_1 + 0x36);
      *(undefined2 *)(iVar11 + 0xc) = 0x52;
      *(undefined2 *)(iVar11 + 10) = uVar6;
      param_1[4] = param_1[4] + '\x01';
      uVar12 = func_0x8004b354();
    }
  }
LAB_80117ce0:
                    /* WARNING: Could not recover jumptable at 0x80117cec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar8 = (**(code **)((int)(uVar12 >> 0x20) + (int)uVar12))();
  return uVar8;
}

