// FUN_8010546c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8010546c(undefined1 *param_1)

{
  char cVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  ushort uVar4;
  short sVar5;
  int iVar6;
  char cVar7;
  uint uVar8;
  short *psVar9;
  int unaff_s1;
  int unaff_s2;
  undefined8 uVar10;
  undefined1 auStack_20 [2];
  undefined2 local_1e;
  
  cVar7 = '\b';
  if (DAT_800bf80d != '\0') {
    return;
  }
  uVar4 = *(ushort *)(param_1 + 0x6a) & 0xf00;
  iVar6 = (uint)*(ushort *)(param_1 + 0x6a) << 0x10;
  uVar8 = iVar6 >> 0x1c & 7;
  if ((iVar6 >> 0x10 & 0x8000U) == 0) {
    cVar1 = param_1[0x2a];
    if (cVar1 == '\x1c') {
      unaff_s2 = (int)((*(ushort *)(param_1 + 0x2e) - 0x3cc0) * 0x10000) >> 0x10;
      unaff_s1 = (int)((*(ushort *)(param_1 + 0x36) - 0x2cb2) * 0x10000) >> 0x10;
      uVar8 = func_0x80084080(unaff_s2 * unaff_s2 + unaff_s1 * unaff_s1);
      if (((*(short *)(param_1 + 0x80) + 0x28 < (int)(uVar8 & 0xffff)) ||
          (*(short *)(param_1 + 0x86) + 0xa0 <
           (int)((uint)*(ushort *)(param_1 + 0x84) + *(ushort *)(param_1 + 0x32) + 0xbe6 & 0xffff)))
         || (-1 < *(short *)(param_1 + 0x4a))) {
        return;
      }
      _DAT_1f800080 = func_0x80085690(-unaff_s1,unaff_s2);
      param_1[0x2b] = (char)(_DAT_1f800080 >> 4);
      iVar6 = func_0x80023290(param_1);
      if (iVar6 == 0) {
        return;
      }
      uVar8 = func_0x80022c0c(param_1,1);
      goto code_r0x8010e8f0;
    }
    if (DAT_800bf9df != '\0') {
      return;
    }
    if (1 < (byte)param_1[4]) {
      return;
    }
    if (param_1[0x181] != '\0') {
      return;
    }
    if ((param_1[0x145] & 1) != 0) {
      return;
    }
    if (cVar1 != '\x1d') {
      if (cVar1 != '\x1f') {
        return;
      }
      if (*(short *)(param_1 + 0x32) < -0x7e3) {
        return;
      }
      *(undefined2 *)(param_1 + 0x32) = 0xf81c;
      if (0x2802 < *(short *)(param_1 + 0x36)) {
        *(undefined2 *)(param_1 + 0x36) = 0x2802;
      }
      DAT_800bf81e = 0;
      if ((*(ushort *)(param_1 + 0x17e) & 0x100) == 0) {
        *param_1 = 7;
        param_1[4] = 2;
        param_1[5] = 3;
        *(undefined2 *)(param_1 + 0x7a) = 0x4f00;
        *(undefined2 *)(param_1 + 0x7c) = 0xf5be;
        param_1[0x147] = 0;
        *(undefined2 *)(param_1 + 0x7e) = 0x2923;
        param_1[6] = 0;
        param_1[7] = 0;
        local_1e = *(undefined2 *)(param_1 + 0x2e);
        func_0x8003116c(0x107,auStack_20,0xfffffff6);
        func_0x80074590(7,0,0);
        return;
      }
      *(undefined2 *)(param_1 + 0x6a) = 0;
      if (param_1[5] != '\x06') {
        param_1[5] = 0x1d;
        param_1[6] = 0;
        param_1[7] = 0;
        _DAT_1f80019e = *(undefined2 *)(param_1 + 0x32);
        FUN_8010e8b0();
        return;
      }
LAB_8010589c:
      param_1[5] = 0x32;
      param_1[7] = 0;
      DAT_00000021 = param_1[0x149] & 1 | 2;
      param_1[0x149] = DAT_00000021;
LAB_8010e864:
      DAT_00000021 = DAT_00000021 + cVar7;
      uVar10 = func_0x8004b354();
      goto LAB_80117ce0;
    }
    if (*(short *)(param_1 + 0x32) < -0x7e3) {
      return;
    }
    *(undefined2 *)(param_1 + 0x32) = 0xf81c;
    if (*(short *)(param_1 + 0x2e) < 0x413c) {
      *(undefined2 *)(param_1 + 0x2e) = 0x41a0;
    }
    DAT_800bf81e = 0;
    if ((*(ushort *)(param_1 + 0x17e) & 0x100) != 0) {
      *(undefined2 *)(param_1 + 0x6a) = 0;
      if (param_1[5] == '\x06') goto LAB_8010589c;
      param_1[5] = 0x1d;
      cVar7 = '\x01';
      goto LAB_8010e864;
    }
    *param_1 = 7;
    param_1[4] = 2;
    param_1[5] = 3;
    *(undefined2 *)(param_1 + 0x7a) = 0x4097;
    *(undefined2 *)(param_1 + 0x7c) = 0xf5be;
    if (param_1 == (undefined1 *)0x2bc0) {
      func_0x80074590(0x92,0,0);
      return;
    }
    if (*(char *)(unaff_s1 + 3) == '\0') {
      uVar8 = (uint)*(short *)(unaff_s2 + 0x14);
      goto code_r0x8010e8f0;
    }
    *(undefined1 *)(unaff_s1 + 0x2b) = 0;
    FUN_801141c8();
    cVar7 = *(char *)(unaff_s1 + 0x2b);
    if (cVar7 != '\0') {
      if ((undefined1 *)(uint)*(byte *)(unaff_s1 + 3) == (undefined1 *)0x0) {
        if (cVar7 == '\x02') {
          *(undefined2 *)(unaff_s2 + 0x14) = 0x2000;
        }
        else {
          *(undefined2 *)(unaff_s2 + 0x14) = 0xe000;
        }
      }
      else if ((undefined1 *)(uint)*(byte *)(unaff_s1 + 3) == param_1) {
        if (cVar7 == '\x02') {
          sVar5 = *(short *)(unaff_s2 + 0xe) + -0x1000;
          if (0x7ff < *(short *)(unaff_s2 + 0xe)) {
            sVar5 = -*(short *)(unaff_s2 + 0xe);
          }
          *(short *)(unaff_s2 + 0xe) = sVar5;
          *(undefined2 *)(unaff_s2 + 0x14) = 0xc00;
        }
        else {
          sVar5 = -*(short *)(unaff_s2 + 0xe);
          if (-0x800 < *(short *)(unaff_s2 + 0xe)) {
            sVar5 = *(short *)(unaff_s2 + 0xe) + 0x1000;
          }
          *(short *)(unaff_s2 + 0xe) = sVar5;
          *(undefined2 *)(unaff_s2 + 0x14) = 0xf400;
        }
      }
      func_0x80077cfc();
      *param_1 = 7;
      *(undefined2 *)(param_1 + 0x84) = 0x28;
      *(undefined2 *)(param_1 + 0x86) = 0x50;
      *(ushort *)(param_1 + 0x58) = *(ushort *)(param_1 + 0x58) & 0xfff;
      param_1[7] = param_1[7] + '\x01';
      FUN_80120a38();
      return;
    }
  }
  else {
    DAT_800bf81e = 0;
    if ((uVar4 != 0x100) && (uVar4 != 0x200)) {
      DAT_800bf81e = 0;
      return;
    }
    if (1 < (byte)param_1[4]) {
      DAT_800bf81e = 0;
      return;
    }
    if ((*(ushort *)(param_1 + 0x17e) & 0x100) == 0) {
      param_1[4] = 2;
      *(undefined2 *)(param_1 + 0x6a) = 0;
      param_1[6] = 0;
      param_1[7] = 0;
      if (uVar8 < 2) {
        return;
      }
      if (3 < uVar8) {
        if (5 < uVar8) {
          return;
        }
        *param_1 = 3;
        if ((param_1[5] == '\0') && (iVar6 = func_0x80040c00(6), -1 < iVar6)) {
          func_0x80040b48(7);
          func_0x8004d4c4(0x29,1);
          func_0x8004b0d8(param_1);
          param_1[0x5e] = 2;
          param_1[4] = 1;
          param_1[5] = 0;
          param_1[6] = 0;
          DAT_800bf9e5 = '\x06';
        }
        return;
      }
      *param_1 = 5;
      cVar7 = param_1[0x2a];
      param_1[0x147] = 0;
      param_1[5] = 3;
      if ((cVar7 == '\x1d') || (cVar7 == '\x1f')) {
        iVar6 = 3;
        if (cVar7 == '\x1d') {
          iVar6 = 0;
        }
        *(undefined2 *)(param_1 + 0x7a) = *(undefined2 *)(iVar6 * 2 + -0x7feb9108);
        *(undefined2 *)(param_1 + 0x7c) = *(undefined2 *)((iVar6 + 1) * 2 + -0x7feb9108);
        uVar4 = *(ushort *)((iVar6 + 2) * 2 + -0x7feb9108);
        uVar8 = (uint)uVar4;
        *(ushort *)(param_1 + 0x7e) = uVar4;
      }
      else {
        *(undefined2 *)(param_1 + 0x7a) = _DAT_800a4ff0;
        *(undefined2 *)(param_1 + 0x7c) = _DAT_800a4ff2;
        *(undefined2 *)(param_1 + 0x7e) = _DAT_800a4ff4;
        uVar8 = (uint)DAT_800a4ff6;
        param_1[0x2a] = DAT_800a4ff6;
      }
    }
    else {
      if (param_1[0x181] != '\0') {
        DAT_800bf81e = 0;
        return;
      }
      if ((param_1[0x146] == '\x04') && (DAT_1f80027b != '\0')) {
        DAT_800bf81e = 0;
        return;
      }
      *(undefined2 *)(param_1 + 0x6a) = 0;
      if (param_1[5] == '\x06') {
        param_1[5] = 0x32;
        param_1[0x149] = param_1[0x149] & 1 | 2;
        *(undefined2 *)(param_1 + 0x54) = 0;
        *(undefined2 *)(param_1 + 0x56) = 0;
        *(undefined2 *)(param_1 + 0x58) = 0;
        param_1[0x29] = 0;
        if (DAT_800bf9e5 == '\x04') {
          param_1[0x5e] = 1;
        }
        return;
      }
      param_1[5] = 0x1d;
      param_1[6] = 0;
      param_1[4] = 1;
      uVar8 = 1;
      param_1[7] = 0;
      if (param_1[0x144] != '\x01') {
        return;
      }
      param_1[0x144] = 0;
    }
code_r0x8010e8f0:
    if ((uVar8 == 0) &&
       (uVar4 = *(short *)(unaff_s2 + 0x16) - 1, *(ushort *)(unaff_s2 + 0x16) = uVar4,
       (int)((uint)uVar4 << 0x10) < 0)) {
      func_0x8009a450();
      return;
    }
  }
  uVar8 = (uint)*(byte *)(unaff_s1 + 3);
  if (uVar8 == 0) {
    psVar9 = *(short **)(unaff_s1 + 0x10);
    iVar6 = func_0x8007778c(unaff_s1);
    uVar3 = _DAT_1f800164;
    uVar2 = _DAT_1f800162;
    if (iVar6 == 0) {
      return;
    }
    if (*(char *)(unaff_s1 + 5) == '\x02') {
      *(ushort *)(unaff_s1 + 0x2e) = _DAT_1f800160;
      *(undefined2 *)(unaff_s1 + 0x32) = uVar2;
      *(undefined2 *)(unaff_s1 + 0x36) = uVar3;
      return;
    }
    *(short *)(unaff_s1 + 0x2e) = *psVar9 + -0x20;
    *(short *)(unaff_s1 + 0x32) = psVar9[1] + 0x50;
    func_0x80077b5c(unaff_s1);
    uVar10 = func_0x8004b374(unaff_s1,0);
  }
  else {
    uVar10 = CONCAT44(uVar8,0x1f800000);
    if (uVar8 == 1) {
      psVar9 = *(short **)(unaff_s1 + 0x10);
      if (4 < DAT_1f800207) {
        return;
      }
      iVar6 = func_0x8007778c(unaff_s1);
      uVar3 = _DAT_1f800164;
      uVar2 = _DAT_1f800162;
      if (iVar6 == 0) {
        return;
      }
      if (*(char *)(unaff_s1 + 5) == '\x02') {
        uVar8 = (uint)_DAT_1f800160;
        *(ushort *)(unaff_s1 + 0x2e) = _DAT_1f800160;
        *(undefined2 *)(unaff_s1 + 0x32) = uVar2;
        *(undefined2 *)(unaff_s1 + 0x36) = uVar3;
        psVar9[0x24] = (short)((int)uVar8 >> 4);
        iVar6 = func_0x80083e80((int)psVar9[0x2b]);
        psVar9[0x26] = (short)(-iVar6 >> 4);
        psVar9[0x25] = -0x200;
        psVar9[0x22] = 0x1000;
        *(char *)(psVar9 + 3) = (char)psVar9[3] + '\x01';
        FUN_801217f4(psVar9);
        if (*(char *)((int)psVar9 + 5) == '\a') {
          func_0x80077e20(psVar9,0x20,0x30,0xff);
        }
        else if (*(char *)((int)psVar9 + 5) == '\b') {
          func_0x80077e20(psVar9,0xf0,0x40,0x40);
        }
        return;
      }
      *(short *)(unaff_s1 + 0x2e) =
           *psVar9 + (short)((uint)(*(short *)(*(int *)(unaff_s1 + 0xc0) + 0x1a) * 9) >> 8);
      *(short *)(unaff_s1 + 0x32) =
           psVar9[1] + (short)((uint)(*(short *)(*(int *)(unaff_s1 + 0xc0) + 0x20) * 9) >> 8);
      *(short *)(unaff_s1 + 0x58) = -psVar9[6];
      func_0x800517f8(unaff_s1);
      uVar10 = func_0x8004b374(unaff_s1,1);
    }
  }
LAB_80117ce0:
                    /* WARNING: Could not recover jumptable at 0x80117cec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((int)((ulonglong)uVar10 >> 0x20) + (int)uVar10))();
  return;
}

