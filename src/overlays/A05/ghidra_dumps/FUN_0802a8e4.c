// FUN_0802a8e4

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0802aa2c) */
/* WARNING: Removing unreachable block (ram,0x0802aa64) */
/* WARNING: Removing unreachable block (ram,0x0802aa98) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0802a8e4(int param_1)

{
  byte bVar1;
  undefined2 uVar2;
  undefined1 uVar3;
  byte bVar4;
  short sVar5;
  undefined2 uVar6;
  int iVar7;
  ushort uVar8;
  uint uVar9;
  
  bVar1 = *(byte *)(param_1 + 6);
  if (bVar1 == 1) {
    sVar5 = *(short *)(param_1 + 0x4a);
    uVar8 = *(short *)(param_1 + 0x4a) + *(short *)(param_1 + 0x50);
    *(ushort *)(param_1 + 0x4a) = uVar8;
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + sVar5 * 0x100;
    if ((int)((uint)uVar8 << 0x10) < 0) {
      return;
    }
    *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
    *(short *)(param_1 + 0x50) = *(short *)(param_1 + 0x50) * 3;
    func_0x00077c40(param_1,0x80142108,5);
    *(undefined2 *)(param_1 + 0x40) = 0;
    *(undefined1 *)(param_1 + 0xbf) = 0;
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      *(undefined1 *)(param_1 + 6) = 1;
      if (*(short *)(param_1 + 100) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      sVar5 = func_0x00085690(-((int)(((uint)*(ushort *)(param_1 + 0x36) - (uint)_DAT_800e7eb6) *
                                     0x10000) >> 0x10),
                              (int)(((uint)*(ushort *)(param_1 + 0x2e) - (uint)_DAT_800e7eae) *
                                   0x10000) >> 0x10);
      uVar3 = func_0x00077768((int)sVar5,(int)*(short *)(param_1 + 0x60),0);
      *(undefined1 *)(param_1 + 0xbe) = uVar3;
      func_0x0004130c(param_1,0);
      *(undefined1 *)(param_1 + 0x46) = *(undefined1 *)(param_1 + 0xbe);
      func_0x00077c40(param_1,0x80142108,3);
      uVar9 = (uint)*(byte *)(param_1 + 0x1b) * 3 + 1;
      if (0x13 < uVar9) {
        uVar9 = 0x13;
      }
      iVar7 = (0x20 - _DAT_800bf85c) - uVar9;
      if (iVar7 == 0) {
        trap(0x1c00);
      }
      *(short *)(param_1 + 0x6a) = (short)iVar7;
      if (*(short *)(param_1 + 0x6a) == 0) {
        trap(0x1c00);
      }
      if (iVar7 == 0) {
        trap(0x1c00);
      }
      uVar6 = (undefined2)(0x3200 / (int)*(short *)(param_1 + 0x6a));
      *(undefined2 *)(param_1 + 0x44) = uVar6;
      *(undefined2 *)(param_1 + 0x4e) = uVar6;
      *(short *)(param_1 + 0x4a) = -(short)(0x44400 / iVar7);
      *(undefined2 *)(param_1 + 0x44) = 0;
      *(short *)(param_1 + 0x50) = (short)((0x44400 / iVar7) / iVar7);
      if (*(char *)(param_1 + 0x2a) != DAT_800e7eaa) {
        return;
      }
      func_0x00074590(0x8a,0,0xffffffec);
    }
  }
  else if (bVar1 == 2) {
    if ((_DAT_1f80017c & 3) == 0) {
      uVar8 = *(short *)(param_1 + 0x40) + 1U & 3;
      *(ushort *)(param_1 + 0x40) = uVar8;
      func_0x00077c40(param_1,0x80142108,uVar8 + 5);
    }
    sVar5 = *(short *)(param_1 + 0x44) + *(short *)(param_1 + 0x4e);
    *(short *)(param_1 + 0x44) = sVar5;
    iVar7 = (int)*(short *)(param_1 + 0x4e) << 4;
    if (iVar7 < sVar5) {
      *(short *)(param_1 + 0x44) = (short)iVar7;
    }
    uVar6 = func_0x00122cd4(param_1,1);
    *(undefined2 *)(param_1 + 0x66) = uVar6;
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(short *)(param_1 + 0x4a) * 0x100;
    if (*(char *)(param_1 + 0xbf) == '\0') {
      sVar5 = *(short *)(param_1 + 0x4a) + *(short *)(param_1 + 0x50);
      *(short *)(param_1 + 0x4a) = sVar5;
      if (0x1800 < sVar5) {
        *(undefined1 *)(param_1 + 0xbf) = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    else if ((*(char *)(param_1 + 0xbf) == '\x01') &&
            (sVar5 = *(short *)(param_1 + 0x4a) + -0x100, *(short *)(param_1 + 0x4a) = sVar5,
            sVar5 < 0x1000)) {
      *(undefined1 *)(param_1 + 0xbf) = 2;
    }
    func_0x0004766c(param_1);
    bVar4 = func_0x00049250(param_1,0,
                            (int)(((uint)*(ushort *)(param_1 + 0x86) -
                                  (uint)*(ushort *)(param_1 + 0x84)) * 0x10000) >> 0x10);
    bVar1 = *(byte *)(param_1 + 0x29);
    *(byte *)(param_1 + 0x29) = bVar1 | bVar4;
    if (bVar1 == 0 && bVar4 == 0) {
      func_0x00049760(param_1);
      if (*(char *)(param_1 + 0x29) == '\0') {
        return;
      }
      *(undefined1 *)(param_1 + 5) = 10;
      *(undefined1 *)(param_1 + 6) = 0;
      if (*(char *)(param_1 + 0x2a) == DAT_800e7eaa) {
        func_0x00074590(0x89,0,0xffffffec);
      }
      func_0x0003116c(0,param_1 + 0x2c,0xffffffce);
      return;
    }
    func_0x00049674(param_1);
    if ((*(byte *)(param_1 + 0x46) & 1) == 0) {
      *(undefined2 *)(param_1 + 0x56) = _DAT_1f8001a0;
      uVar2 = _DAT_1f8001a2;
      uVar6 = _DAT_1f8001a0;
      *(undefined2 *)(param_1 + 0x58) = _DAT_1f8001a2;
      *(undefined2 *)(param_1 + 0x60) = uVar6;
      *(undefined2 *)(param_1 + 0x62) = uVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

