// FUN_0801f4c0

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801f4c0(undefined1 *param_1)

{
  byte bVar1;
  short sVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  ushort uVar5;
  int iVar6;
  int iVar7;
  ushort uVar8;
  ushort uVar9;
  
  bVar1 = param_1[4];
  if (bVar1 != 1) {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        halt_baddata();
      }
      param_1[0xb] = 0xff;
      param_1[0xd] = 1;
      param_1[0x29] = 0;
      param_1[0x5f] = 0;
      param_1[0x2b] = 0;
      param_1[0x5e] = 0;
      param_1[0xbf] = 0;
      *(undefined2 *)(param_1 + 0x62) = 300;
      *(undefined2 *)(param_1 + 0x42) = 0;
      iVar6 = func_0x0004766c(param_1);
      if (iVar6 != 0) {
        param_1[4] = 1;
        func_0x00049760(param_1);
        uVar3 = _DAT_1f8001a0;
        *(undefined2 *)(param_1 + 0x44) = 0x100;
        *(undefined2 *)(param_1 + 0x60) = uVar3;
        *(undefined2 *)(param_1 + 0x56) = uVar3;
        if (param_1[0xbe] != '\0') {
          *(undefined2 *)(param_1 + 100) = 0x800;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        *(undefined2 *)(param_1 + 100) = 0;
        *(undefined2 *)(param_1 + 0x80) = 0x50;
        *(undefined2 *)(param_1 + 0x82) = 0xa0;
        *(undefined2 *)(param_1 + 0x84) = 0x50;
        *(undefined2 *)(param_1 + 0x86) = 0xa0;
        iVar6 = func_0x000310f4(0xd01,0);
        *(int *)(param_1 + 0x10) = iVar6;
        if (iVar6 != 0) {
          *(undefined1 **)(iVar6 + 0x10) = param_1;
          halt_baddata();
        }
        return;
      }
    }
    else {
      if (bVar1 != 2) {
        if (bVar1 != 3) {
          halt_baddata();
        }
        DAT_1f80025b = DAT_1f80025b + -1;
        func_0x0007a624(param_1);
        return;
      }
      if (*(int *)(param_1 + 0x10) != 0) {
        *(undefined1 *)(*(int *)(param_1 + 0x10) + 4) = 2;
      }
    }
    param_1[4] = 3;
    halt_baddata();
  }
  if ((DAT_1f800259 != '\0') || (DAT_800bf80d != '\0')) {
LAB_0801f940:
    *param_1 = 2;
    param_1[4] = 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (DAT_800bf809 == '\0') {
    sVar2 = *(short *)(param_1 + 0x62);
    *(short *)(param_1 + 0x62) = sVar2 + -1;
    if (sVar2 == 1) {
      *param_1 = 2;
      param_1[4] = 2;
      halt_baddata();
    }
    bVar1 = param_1[5];
    if (bVar1 == 1) {
      iVar6 = func_0x00083f50((int)*(short *)(param_1 + 100));
      sVar2 = *(short *)(param_1 + 0x44);
      iVar7 = func_0x00083e80((int)*(short *)(param_1 + 100));
      iVar6 = (int)(short)(iVar6 * sVar2 >> 0xc);
      *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + *(short *)(param_1 + 0x4c) * iVar6;
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + *(short *)(param_1 + 0x48) * iVar6;
      *(int *)(param_1 + 0x30) =
           *(int *)(param_1 + 0x30) + (iVar7 * *(short *)(param_1 + 0x44) * 0x10 >> 0x10) * 0x100;
      func_0x0004766c(param_1);
      func_0x00049760(param_1);
      uVar3 = _DAT_1f8001a0;
      *(undefined2 *)(param_1 + 0x60) = _DAT_1f8001a0;
      *(undefined2 *)(param_1 + 0x56) = uVar3;
      func_0x0011836c(param_1);
      if (param_1[0x2b] != '\0') {
        param_1[5] = 2;
        *(undefined2 *)(param_1 + 0x40) = 0x96;
        halt_baddata();
      }
    }
    else {
      if (bVar1 < 2) {
        if (bVar1 != 0) {
          halt_baddata();
        }
        sVar2 = *(short *)(param_1 + 0x44);
        *(short *)(param_1 + 0x44) = sVar2 + 0xe0;
        if (0x1000 < (short)(sVar2 + 0xe0)) {
          *(undefined2 *)(param_1 + 0x44) = 0x1000;
          *param_1 = 1;
          param_1[5] = param_1[5] + '\x01';
        }
        iVar6 = func_0x00083f50((int)*(short *)(param_1 + 100));
        sVar2 = *(short *)(param_1 + 0x44);
        iVar7 = func_0x00083e80((int)*(short *)(param_1 + 100));
        iVar6 = (int)(short)(iVar6 * sVar2 >> 0xc);
        *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + *(short *)(param_1 + 0x4c) * iVar6;
        *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + *(short *)(param_1 + 0x48) * iVar6;
        *(int *)(param_1 + 0x30) =
             *(int *)(param_1 + 0x30) + (iVar7 * *(short *)(param_1 + 0x44) * 0x10 >> 0x10) * 0x100;
        func_0x0004766c(param_1);
        func_0x00049760(param_1);
        uVar3 = _DAT_1f8001a0;
        *(undefined2 *)(param_1 + 0x60) = _DAT_1f8001a0;
        *(undefined2 *)(param_1 + 0x56) = uVar3;
        halt_baddata();
      }
      if (bVar1 == 2) {
        iVar6 = func_0x0006cec4(param_1 + 0x2c,0x800e7eac,0);
        if (iVar6 != 0) {
          param_1[5] = param_1[5] + '\x01';
        }
        if (DAT_800e7fe4 == '\0') {
          iVar6 = (int)_DAT_800e7ec4;
          if (iVar6 < 0) {
            iVar6 = -iVar6;
          }
          if (0x1400 < iVar6) {
            _DAT_800e7ec4 = _DAT_800e7ec4 >> 1;
          }
        }
        sVar2 = *(short *)(param_1 + 0x40);
        *(short *)(param_1 + 0x40) = sVar2 + -1;
        if (sVar2 == 1) {
          *(undefined2 *)(param_1 + 0x40) = 0x96;
          DAT_800e7eab = (undefined1)(_DAT_800e7ed6 >> 4);
          func_0x00022d08(&DAT_800e7e80,param_1,1,1);
        }
        uVar8 = *(short *)(param_1 + 0x42) + 1;
        uVar5 = uVar8 & 0xff;
        *(ushort *)(param_1 + 0x42) = uVar8;
        if (0x7f < uVar5) {
          uVar5 = 0x80;
        }
        uVar9 = uVar8 & 0xff00 | uVar5;
        uVar8 = _DAT_800e7e68 & 0xf0;
        *(ushort *)(param_1 + 0x42) = uVar9;
        if (uVar8 == 0) goto LAB_0801fa4c;
        if (uVar5 < 10) {
          uVar5 = uVar9 + 0x100 & 0xff00;
          *(ushort *)(param_1 + 0x42) = uVar5;
          if (0x4ff < (short)uVar5) goto LAB_0801f940;
          goto LAB_0801fa4c;
        }
      }
      else {
        if (bVar1 != 3) {
          halt_baddata();
        }
        sVar2 = *(short *)(param_1 + 0x40);
        *(short *)(param_1 + 0x40) = sVar2 + -1;
        if (sVar2 == 1) {
          *(undefined2 *)(param_1 + 0x40) = 0x96;
          DAT_800e7eab = (undefined1)(_DAT_800e7ed6 >> 4);
          func_0x00022d08(&DAT_800e7e80,param_1,1,1);
        }
        uVar4 = _DAT_1f800164;
        uVar3 = _DAT_1f800162;
        if (DAT_800e7fe4 == '\0') {
          _DAT_800e7ec4 = _DAT_800e7ec4 >> 1;
        }
        uVar8 = *(short *)(param_1 + 0x42) + 1;
        uVar5 = uVar8 & 0xff;
        *(undefined2 *)(param_1 + 0x2e) = _DAT_1f800160;
        *(undefined2 *)(param_1 + 0x32) = uVar3;
        *(undefined2 *)(param_1 + 0x36) = uVar4;
        *(ushort *)(param_1 + 0x42) = uVar8;
        if (0x7f < uVar5) {
          uVar5 = 0x80;
        }
        uVar9 = uVar8 & 0xff00 | uVar5;
        uVar8 = _DAT_800e7e68 & 0xf0;
        *(ushort *)(param_1 + 0x42) = uVar9;
        if (uVar8 == 0) goto LAB_0801fa4c;
        if (uVar5 < 10) {
          uVar5 = uVar9 + 0x100 & 0xff00;
          *(ushort *)(param_1 + 0x42) = uVar5;
          if (0x4ff < (short)uVar5) {
            *param_1 = 2;
            param_1[4] = 2;
            halt_baddata();
          }
          goto LAB_0801fa4c;
        }
      }
      *(undefined2 *)(param_1 + 0x42) = 0;
    }
  }
LAB_0801fa4c:
  func_0x0007778c(param_1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

