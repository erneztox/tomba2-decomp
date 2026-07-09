// FUN_8011a440

undefined4 FUN_8011a440(uint param_1)

{
  byte bVar1;
  ushort uVar2;
  short sVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  short sVar7;
  uint uVar8;
  int iVar9;
  int unaff_s2;
  int iVar10;
  int unaff_s5;
  int unaff_s6;
  int unaff_s7;
  int unaff_s8;
  
  bVar1 = *(byte *)(param_1 + 6);
  uVar8 = param_1;
  if (bVar1 == 1) {
    func_0x80041098();
    if (*(char *)(param_1 + 0x70) != -1) {
      return 0;
    }
    *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
    func_0x80042310();
    iVar4 = 0;
  }
  else if (bVar1 < 2) {
    iVar4 = 0;
    if (bVar1 == 0) {
      *(undefined1 *)(param_1 + 6) = 1;
      func_0x80040cdc(param_1,&DAT_8014e4ec,0x80149854);
      *(undefined1 *)(param_1 + 0x70) = 1;
      uVar5 = FUN_8012348c();
      return uVar5;
    }
  }
  else {
    iVar4 = 0;
    if (bVar1 == 2) {
      *(undefined1 *)(param_1 + 6) = 0;
      iVar4 = 1;
    }
  }
  do {
    iVar9 = *(int *)(unaff_s5 + iVar4 + 0xc0);
    iVar4 = (int)*(short *)(iVar9 + 0x16);
    if (iVar4 != 0) {
      if (iVar4 == unaff_s6) {
        uVar2 = *(ushort *)(iVar9 + 0x14);
        iVar4 = uVar2 - 0x40;
        *(short *)(iVar9 + 0x14) = (short)iVar4;
        *(ushort *)(iVar9 + 0xc) = *(short *)(iVar9 + 0xc) + uVar2;
        if (iVar4 * 0x10000 >> 0x10 < -0x40) {
          *(undefined2 *)(iVar9 + 0x14) = 0x20;
          *(short *)(iVar9 + 0x16) = *(short *)(iVar9 + 0x16) + 1;
          uVar5 = FUN_8012c584();
          return uVar5;
        }
LAB_801235e8:
        *(char *)(unaff_s5 + 0x2b) = (char)unaff_s6;
        iVar4 = func_0x80083e80();
        *(short *)(iVar9 + 0x32) =
             *(short *)(iVar9 + 0x60) + (short)(iVar4 * *(short *)(iVar9 + 0x4a) >> 0xc);
        *(undefined2 *)(param_1 + 0x4e) = *(undefined2 *)(iVar9 + 0x2e);
        *(short *)(param_1 + 0x50) = *(short *)(iVar9 + 0x32) + 0x3c;
        *(undefined2 *)(param_1 + 0x52) = *(undefined2 *)(iVar9 + 0x36);
        uVar5 = FUN_8013ecf8();
        return uVar5;
      }
      if (iVar4 == 2) {
        sVar3 = *(short *)(iVar9 + 0x14);
        sVar7 = sVar3 + -0x20;
        *(short *)(iVar9 + 0x14) = sVar7;
        *(short *)(iVar9 + 0xc) = *(short *)(iVar9 + 0xc) + sVar3;
        if (sVar7 < -0x20) {
          iVar4 = 0x400;
          if (unaff_s2 < 6) {
            iVar10 = 0;
            param_1 = 0x4000000;
            do {
              func_0x80083f50((int)param_1 >> 0x10);
              func_0x80083e80((int)param_1 >> 0x10);
              iVar4 = iVar4 + 0x199;
              iVar6 = func_0x8003116c(0,&stack0xfffffff0,0xffffff9c);
              iVar10 = iVar10 + 1;
              *(byte *)(iVar6 + 0x28) = *(byte *)(iVar6 + 0x28) | 0x80;
              param_1 = iVar4 * 0x10000;
            } while (iVar10 < 5);
          }
          *(short *)(iVar9 + 0x16) = *(short *)(iVar9 + 0x16) + 1;
        }
        goto LAB_801235e8;
      }
      if (unaff_s2 == uVar8 - 3) {
        *(char *)(unaff_s5 + 6) = *(char *)(unaff_s5 + 6) + '\x01';
        *(undefined1 *)(unaff_s8 + 0x16e) = 0x14;
      }
    }
    unaff_s2 = unaff_s2 + 1;
    if (*(short *)(unaff_s5 + 0x40) < unaff_s2) break;
    iVar4 = unaff_s2 * 4;
    uVar8 = (uint)*(byte *)(unaff_s5 + 8);
  } while (unaff_s2 < (int)(*(byte *)(unaff_s5 + 8) - 2));
  uVar2 = *(short *)(unaff_s5 + 0x42) + 1;
  *(ushort *)(unaff_s5 + 0x42) = uVar2;
  if ((uVar2 & *(ushort *)(unaff_s5 + 0x62)) == 0) {
    sVar3 = *(short *)(unaff_s5 + 0x40) + 1;
    *(short *)(unaff_s5 + 0x40) = sVar3;
    if (7 < sVar3) {
      uVar5 = FUN_8012c610();
      return uVar5;
    }
    if (4 < sVar3) {
      *(undefined2 *)(unaff_s5 + 0x62) = 0xf;
    }
  }
  if (*(char *)(unaff_s5 + 0x2b) == '\0') {
    if (*(char *)(unaff_s7 + 0x76) == '\0') {
      *(undefined2 *)(unaff_s5 + 0x60) = 0;
      uVar5 = FUN_8012c6ac();
      return uVar5;
    }
    *(undefined1 *)(unaff_s7 + 0x76) = 3;
    uVar5 = FUN_8012c090();
    return uVar5;
  }
  if (*(short *)(unaff_s5 + 0x60) == 0) {
    *(undefined1 *)(unaff_s7 + 0x76) = 1;
    *(undefined2 *)(unaff_s5 + 0x60) = 1;
  }
  *(undefined1 *)(unaff_s5 + 0x2b) = 0;
  uVar5 = FUN_8012c6ac();
  return uVar5;
}

