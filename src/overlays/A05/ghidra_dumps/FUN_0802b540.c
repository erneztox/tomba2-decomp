// FUN_0802b540

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0802b680) */
/* WARNING: Removing unreachable block (ram,0x0802b6b4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0802b540(int param_1)

{
  byte bVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined1 uVar4;
  byte bVar5;
  short sVar6;
  short sVar7;
  int iVar8;
  uint uVar9;
  
  bVar1 = *(byte *)(param_1 + 6);
  if (bVar1 == 1) {
    sVar6 = *(short *)(param_1 + 0x4a);
    sVar7 = *(short *)(param_1 + 0x4a) + *(short *)(param_1 + 0x50);
    *(short *)(param_1 + 0x4a) = sVar7;
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + sVar6 * 0x100;
    if (sVar7 <= *(short *)(param_1 + 0x50)) {
      return;
    }
    *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
    *(short *)(param_1 + 0x50) = *(short *)(param_1 + 0x50) << 1;
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      *(undefined1 *)(param_1 + 6) = 1;
      if (*(short *)(param_1 + 100) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      sVar6 = func_0x00085690(-((int)(((uint)*(ushort *)(param_1 + 0x36) - (uint)_DAT_800e7eb6) *
                                     0x10000) >> 0x10),
                              (int)(((uint)*(ushort *)(param_1 + 0x2e) - (uint)_DAT_800e7eae) *
                                   0x10000) >> 0x10);
      uVar4 = func_0x00077768((int)sVar6,(int)*(short *)(param_1 + 0x60),0);
      *(undefined1 *)(param_1 + 0xbe) = uVar4;
      func_0x0004130c(param_1,0);
      *(undefined1 *)(param_1 + 0x46) = *(undefined1 *)(param_1 + 0xbe);
      func_0x00077c40(param_1,0x80142108,3);
      uVar9 = (uint)*(byte *)(param_1 + 0x1b) * 3 + 1;
      if (0x13 < uVar9) {
        uVar9 = 0x13;
      }
      iVar8 = (0x20 - _DAT_800bf85c) - uVar9;
      if (iVar8 == 0) {
        trap(0x1c00);
      }
      if (iVar8 == 0) {
        trap(0x1c00);
      }
      *(short *)(param_1 + 0x6a) = (short)iVar8;
      *(short *)(param_1 + 0x4a) = -(short)(0x34800 / iVar8);
      *(short *)(param_1 + 0x50) = (short)((0x34800 / iVar8) / iVar8);
      if (*(char *)(param_1 + 0x2a) != DAT_800e7eaa) {
        return;
      }
      func_0x00074590(0x8a,0,0xffffffec);
    }
  }
  else if (bVar1 == 2) {
    sVar6 = *(short *)(param_1 + 0x4a);
    iVar8 = (uint)*(ushort *)(param_1 + 0x4a) + (uint)*(ushort *)(param_1 + 0x50);
    *(short *)(param_1 + 0x4a) = (short)iVar8;
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + sVar6 * 0x100;
    if (iVar8 * 0x10000 < 1) {
      *(undefined2 *)(param_1 + 0x4a) = 0x7fff;
    }
    func_0x0004766c(param_1);
    bVar5 = func_0x00049250(param_1,0,
                            (int)(((uint)*(ushort *)(param_1 + 0x86) -
                                  (uint)*(ushort *)(param_1 + 0x84)) * 0x10000) >> 0x10);
    bVar1 = *(byte *)(param_1 + 0x29);
    *(byte *)(param_1 + 0x29) = bVar1 | bVar5;
    if (bVar1 == 0 && bVar5 == 0) {
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
      uVar3 = _DAT_1f8001a2;
      uVar2 = _DAT_1f8001a0;
      *(undefined2 *)(param_1 + 0x58) = _DAT_1f8001a2;
      *(undefined2 *)(param_1 + 0x60) = uVar2;
      *(undefined2 *)(param_1 + 0x62) = uVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

