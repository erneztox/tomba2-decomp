// FUN_0803cb28

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0803cb28(int param_1)

{
  byte bVar1;
  ushort uVar2;
  undefined2 uVar3;
  uint uVar4;
  short sVar5;
  short sVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  
  bVar1 = *(byte *)(param_1 + 0x78);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        if (bVar1 != 3) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        uVar4 = func_0x00085690((int)*(short *)(param_1 + 0x36) - (int)(short)_DAT_1f800164,
                                (int)(short)_DAT_1f800160 - (int)*(short *)(param_1 + 0x2e));
        iVar8 = (uVar4 & 0xfff) + 0x300;
        sVar6 = *(short *)(param_1 + 0x56) + 0x10;
        *(short *)(param_1 + 0x56) = sVar6;
        if (iVar8 <= sVar6) {
          *(short *)(param_1 + 0x56) = (short)iVar8;
        }
        sVar6 = *(short *)(param_1 + 0x50) + 0x38;
        *(short *)(param_1 + 0x50) = sVar6;
        if (-0x401 < sVar6) {
          *(undefined2 *)(param_1 + 0x50) = 0xfc00;
        }
        *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(short *)(param_1 + 0x50) * 0x100;
        if (-0x1bbc < *(short *)(param_1 + 0x32)) {
          iVar8 = *(int *)(param_1 + 0x14);
          *(short *)(iVar8 + 0x2e) = *(short *)(param_1 + 0x2e) + 0x11;
          *(short *)(iVar8 + 0x32) = *(short *)(param_1 + 0x32) + 0x11;
          *(short *)(iVar8 + 0x36) = *(short *)(param_1 + 0x36) + 0x11;
          *(undefined2 *)(iVar8 + 0x56) = *(undefined2 *)(param_1 + 0x56);
          *(undefined2 *)(iVar8 + 0x58) = *(undefined2 *)(param_1 + 0x58);
          return 0;
        }
        *(undefined2 *)(param_1 + 0x32) = 0xe444;
        *(undefined2 *)(param_1 + 0x50) = 0;
        halt_baddata();
      }
      goto LAB_0803cc2c;
    }
    if (bVar1 != 0) {
      halt_baddata();
    }
    uVar7 = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(param_1 + 0x14) = _DAT_800bf860;
    _DAT_800bf860 = uVar7;
    func_0x00041718(param_1,0x16,4);
    *(undefined2 *)(param_1 + 0x40) = 0;
    *(char *)(param_1 + 0x78) = *(char *)(param_1 + 0x78) + '\x01';
  }
  sVar6 = *(short *)(param_1 + 0x40);
  sVar5 = *(short *)(param_1 + 0x40) + 1;
  *(short *)(param_1 + 0x36) = *(short *)(param_1 + 0x40) * -9 + 0x238c;
  *(short *)(param_1 + 0x40) = sVar5;
  *(short *)(param_1 + 0x2e) =
       0x10c2 - ((short)((ulonglong)((longlong)(int)sVar6 * 0x55555556) >> 0x20) - (sVar6 >> 0xf));
  if (0x11 < sVar5) {
    *(char *)(param_1 + 0x78) = *(char *)(param_1 + 0x78) + '\x01';
  }
LAB_0803cc2c:
  if (*(char *)(param_1 + 0x79) != '\x01') {
    return 0;
  }
  _DAT_800e8040 = 0x12e00000;
  _DAT_800e8044 = 0xe4b90000;
  _DAT_800e8048 = 0x24270000;
  _DAT_800e8076 = 0x130;
  _DAT_800e8078 = 0x1060;
  DAT_800e806e = 0;
  _DAT_800e8074 = 0x700;
  iVar9 = (int)(((uint)*(ushort *)(param_1 + 0x36) - (uint)_DAT_1f800164) * 0x10000) >> 0x10;
  iVar8 = (int)(((uint)*(ushort *)(param_1 + 0x2e) - (uint)_DAT_1f800160) * 0x10000) >> 0x10;
  DAT_800e806c = *(char *)(param_1 + 0x79);
  uVar2 = func_0x00085690(iVar9,iVar8);
  *(ushort *)(param_1 + 100) = uVar2 & 0xfff;
  uVar3 = func_0x00084080(iVar8 * iVar8 + iVar9 * iVar9);
  *(undefined2 *)(param_1 + 0x66) = uVar3;
  *(undefined2 *)(param_1 + 0x50) = 0xf800;
  *(short *)(param_1 + 0x68) = *(short *)(param_1 + 100) + 0x1180;
  func_0x00041718(param_1,0x17,4);
  *(char *)(param_1 + 0x78) = *(char *)(param_1 + 0x78) + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

