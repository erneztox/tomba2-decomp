// FUN_80118458

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80118458(uint param_1)

{
  undefined2 uVar1;
  undefined1 uVar2;
  short sVar3;
  ushort uVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined1 *puVar8;
  int iVar9;
  int iVar10;
  int extraout_v1;
  uint uVar11;
  undefined1 *unaff_s0;
  undefined4 uVar12;
  
  uVar5 = 1;
  uVar11 = param_1;
  if (*(char *)(param_1 + 6) == '\0') {
    sVar3 = 0;
    if (((int)_DAT_800e7ffe & 0x8200U) == 0) {
      iVar10 = (int)(((uint)_DAT_1f800160 - (uint)*(ushort *)(param_1 + 0x2e)) * 0x10000) >> 0x10;
      iVar9 = (int)(((uint)_DAT_1f800164 - (uint)*(ushort *)(param_1 + 0x36)) * 0x10000) >> 0x10;
      unaff_s0 = (undefined1 *)((uint)_DAT_1f800162 - (uint)*(ushort *)(param_1 + 0x32));
      iVar6 = (int)unaff_s0 * 0x10000 >> 0x10;
      uVar11 = func_0x80084080(iVar10 * iVar10 + iVar9 * iVar9 + iVar6 * iVar6);
      uVar11 = uVar11 & 0xffff;
      puVar7 = (undefined4 *)(unaff_s0 + 800);
      if ((2000 < uVar11) ||
         (uVar5 = (uint)puVar7 & 0xffff, puVar7 = (undefined4 *)(uint)(uVar11 < 0x3e9),
         0x44c < uVar5)) {
                    /* WARNING: Could not recover jumptable at 0x801214fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)*puVar7)();
        return;
      }
      sVar3 = 2;
      if (puVar7 == (undefined4 *)0x0) {
        sVar3 = 1;
      }
    }
    uVar5 = 2;
    if (sVar3 == 1) {
      uVar5 = 5;
    }
    else {
      if (sVar3 == 2) {
        uVar5 = func_0x8009a450();
        sVar3 = 0;
        if ((uVar5 & 1) == 0) {
          uVar2 = 5;
          if (*(char *)(param_1 + 0xbf) == '\0') {
            uVar5 = 6;
            goto LAB_80121654;
          }
        }
        else {
          unaff_s0 = (undefined1 *)(uint)*(byte *)(param_1 + 0xbe);
          sVar3 = func_0x80085690(-((int)(((uint)_DAT_800e7eb6 - (uint)*(ushort *)(param_1 + 0x36))
                                         * 0x10000) >> 0x10),
                                  (int)(((uint)_DAT_800e7eae - (uint)*(ushort *)(param_1 + 0x2e)) *
                                       0x10000) >> 0x10);
          puVar8 = (undefined1 *)func_0x80077768((int)sVar3,(int)*(short *)(param_1 + 0x60),0);
          uVar2 = 3;
          if (unaff_s0 != puVar8) {
            uVar5 = *(byte *)(param_1 + 6) + 1;
            *(char *)(param_1 + 6) = (char)uVar5;
            goto LAB_8012165c;
          }
        }
        *(undefined1 *)(param_1 + 5) = uVar2;
        *(undefined1 *)(param_1 + 6) = 0;
        *(undefined1 *)(param_1 + 7) = 0;
LAB_801186c0:
        FUN_801208b4(param_1);
        return;
      }
      *(undefined1 *)(param_1 + 5) = 0;
    }
  }
  else {
    if (*(char *)(param_1 + 6) != '\x01') goto LAB_8012165c;
    unaff_s0 = (undefined1 *)(uint)*(byte *)(param_1 + 7);
    if (unaff_s0 == (undefined1 *)0x0) {
      *(undefined2 *)(param_1 + 0x58) = 0;
      if (*(char *)(param_1 + 0xbe) != '\0') {
        *(undefined2 *)(param_1 + 100) = *(undefined2 *)(param_1 + 0x60);
        *(char *)(param_1 + 7) = *(char *)(param_1 + 7) + '\x01';
        FUN_80121644();
        return;
      }
      FUN_801215ec();
      return;
    }
    uVar2 = 0;
    if (unaff_s0 == (undefined1 *)0x1) {
      uVar11 = (uint)*(short *)(param_1 + 100);
      sVar3 = func_0x800776f8(uVar11,(int)*(short *)(param_1 + 0x56),0x100);
      *(short *)(param_1 + 0x56) = sVar3;
      if (*(short *)(param_1 + 100) != sVar3) goto LAB_801186c0;
      uVar2 = 1;
      uVar5 = 1 - *(byte *)(param_1 + 0xbe);
      *(char *)(param_1 + 0xbe) = (char)uVar5;
    }
    *(undefined1 *)(param_1 + 0x46) = uVar2;
    sVar3 = *(short *)(uVar5 + 2);
  }
LAB_80121654:
  *(short *)(uVar11 + 0x3a) = sVar3;
  uVar5 = (uint)*(ushort *)(uVar5 + 4);
LAB_8012165c:
  *(short *)(param_1 + 0x86) = (short)uVar5;
  FUN_801291f4(param_1);
  if (extraout_v1 != 1) {
    if (1 < extraout_v1) {
      if (3 < extraout_v1) {
        return;
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (extraout_v1 != 0) {
      halt_baddata();
    }
    unaff_s0[0xb] = 0x20;
    *(undefined **)(unaff_s0 + 0x18) = &DAT_8012e5f8;
    *(undefined2 *)(unaff_s0 + 0x80) = 100;
    *(undefined2 *)(unaff_s0 + 0x82) = 200;
    *(undefined2 *)(unaff_s0 + 0x84) = 200;
    unaff_s0[4] = 1;
    *unaff_s0 = 1;
    uVar1 = _DAT_80137c2c;
    *(undefined2 *)(unaff_s0 + 0x86) = 400;
    *(undefined2 *)(unaff_s0 + 0x40) = 0;
    *(undefined2 *)(unaff_s0 + 0x70) = uVar1;
    uVar1 = _DAT_80137c2e;
    *(undefined4 *)(unaff_s0 + 0x60) = 0x80137c30;
    *(undefined4 *)(unaff_s0 + 100) = 0x80137c30;
    *(undefined2 *)(unaff_s0 + 0x2e) = 0x5238;
    *(undefined2 *)(unaff_s0 + 0x32) = 0xe375;
    *(undefined2 *)(unaff_s0 + 0x36) = 0x2340;
    *(undefined2 *)(unaff_s0 + 0x72) = uVar1;
    uVar4 = func_0x8009a450();
    *(ushort *)(unaff_s0 + 0x68) = (*(short *)(unaff_s0 + 0x2e) + 0x40) - (uVar4 & 0x7f);
    uVar4 = func_0x8009a450();
    *(ushort *)(unaff_s0 + 0x6a) = *(short *)(unaff_s0 + 0x32) + (uVar4 & 0x7f) + 0x100;
    uVar4 = func_0x8009a450();
    *(undefined2 *)(unaff_s0 + 0x6e) = 0;
    *(ushort *)(unaff_s0 + 0x6c) = (*(short *)(unaff_s0 + 0x36) + 0x10) - (uVar4 & 0x1f);
  }
  sVar3 = *(short *)(unaff_s0 + 0x40);
  *(short *)(unaff_s0 + 0x40) = sVar3 + 1;
  if (((short)(sVar3 + 1) == 7) && ((byte)unaff_s0[3] < 0xc)) {
    uVar12 = *(undefined4 *)(unaff_s0 + 0x10);
    iVar9 = func_0x8007a980(1,2,0);
    iVar10 = 0;
    if (iVar9 != 0) {
      *(undefined4 *)(iVar9 + 0x1c) = 0x8013362c;
      *(undefined4 *)(iVar9 + 0x10) = uVar12;
      *(undefined1 *)(iVar9 + 2) = 0x1a;
      *(undefined1 *)(iVar9 + 3) = 0;
      iVar10 = iVar9;
    }
    *(char *)(iVar10 + 3) = unaff_s0[3] + '\x01';
  }
  if (((*(short *)(unaff_s0 + 0x40) < 0x10) &&
      (*(int *)(unaff_s0 + 0x60) = *(int *)(unaff_s0 + 100), *(int *)(unaff_s0 + 100) != 0)) &&
     (*(short *)(unaff_s0 + 0x32) < -6000)) {
    iVar10 = func_0x8007778c(unaff_s0);
    if (iVar10 != 0) {
      FUN_8010eea8(unaff_s0);
      if ((_DAT_1f80017c + (ushort)(byte)unaff_s0[3] & 7) == 0) {
        uVar4 = func_0x8009a450();
        *(ushort *)(unaff_s0 + 0x68) = (*(short *)(unaff_s0 + 0x68) + 0x80) - (uVar4 & 0xff);
        *(short *)(unaff_s0 + 0x6a) = *(short *)(unaff_s0 + 0x6a) + -100;
        uVar4 = func_0x8009a450();
        *(ushort *)(unaff_s0 + 0x6c) = (*(short *)(unaff_s0 + 0x6c) + 0x40) - (uVar4 & 0x7f);
        func_0x8003116c(0xd,&stack0xfffffff0,0xffffffe2);
      }
      sVar3 = *(short *)(unaff_s0 + 0x6e);
      *(ushort *)(unaff_s0 + 0x6e) = sVar3 - 1U;
      if ((int)((uint)(ushort)(sVar3 - 1U) << 0x10) < 1) {
        func_0x80074590(2,0xfffffff2,0);
        *(undefined2 *)(unaff_s0 + 0x6e) = 9;
      }
    }
    *(short *)(unaff_s0 + 0x32) = *(short *)(unaff_s0 + 0x32) + 0x10;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  unaff_s0[4] = 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

