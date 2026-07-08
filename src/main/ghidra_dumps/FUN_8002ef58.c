
void FUN_8002ef58(int param_1)

{
  byte bVar1;
  short sVar2;
  short sVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined2 *puVar10;
  short *psVar11;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (3 < bVar1) {
        return;
      }
      FUN_8007a624(param_1);
      return;
    }
    if (bVar1 != 0) {
      return;
    }
    *(undefined1 *)(param_1 + 4) = 1;
    *(undefined1 *)(param_1 + 7) = 9;
    *(undefined2 *)(param_1 + 0x4e) = 0;
    *(short *)(param_1 + 0x58) = *(short *)(param_1 + 0x58) - *(short *)(param_1 + 0x50);
    *(short *)(param_1 + 0x5c) = *(short *)(param_1 + 0x5c) - *(short *)(param_1 + 0x54);
    *(short *)(param_1 + 0x52) = *(short *)(param_1 + 0x52) - *(short *)(param_1 + 0x5a);
  }
  cVar4 = *(char *)(param_1 + 7) + -1;
  *(char *)(param_1 + 7) = cVar4;
  if (cVar4 == -1) {
    *(undefined1 *)(param_1 + 4) = 2;
  }
  else {
    iVar5 = FUN_80083f50((int)*(short *)(param_1 + 0x4e));
    iVar6 = FUN_80083e80(0x400 - ((int)((uint)*(ushort *)(param_1 + 0x4e) << 0x10) >> 0x11));
    *(short *)(param_1 + 0x2c) =
         *(short *)(param_1 + 0x50) +
         (short)((int)*(short *)(param_1 + 0x58) * (0x1000 - iVar5) >> 0xc);
    *(short *)(param_1 + 0x30) =
         *(short *)(param_1 + 0x54) +
         (short)((int)*(short *)(param_1 + 0x5c) * (0x1000 - iVar5) >> 0xc);
    *(short *)(param_1 + 0x2e) =
         *(short *)(param_1 + 0x5a) + (short)(*(short *)(param_1 + 0x52) * iVar6 >> 0xc);
    iVar6 = (int)*(short *)(param_1 + 0x4e);
    iVar5 = 0;
    if (6 < DAT_800e7e7c) {
      iVar7 = FUN_8007a980(0,6,1);
      iVar5 = 0;
      if (iVar7 != 0) {
        if (param_1 != -0x2c) {
          *(undefined2 *)(iVar7 + 0x2c) = *(undefined2 *)(param_1 + 0x2c);
          *(undefined2 *)(iVar7 + 0x2e) = *(undefined2 *)(param_1 + 0x2e);
          *(undefined2 *)(iVar7 + 0x30) = *(undefined2 *)(param_1 + 0x30);
        }
        *(undefined2 *)(iVar7 + 0x32) = 0xffd8;
        FUN_80028e10(iVar7,0x21);
        iVar5 = iVar7;
      }
    }
    psVar11 = (short *)(iVar5 + 0x50);
    if (iVar5 != 0) {
      iVar7 = 0;
      puVar10 = (undefined2 *)(iVar5 + 0x56);
      do {
        iVar8 = FUN_80083f50(iVar6);
        iVar9 = FUN_80083e80(0x400 - (iVar6 >> 1));
        *psVar11 = *(short *)(param_1 + 0x50) +
                   (short)((int)*(short *)(param_1 + 0x58) * (0x1000 - iVar8) >> 0xd);
        puVar10[-1] = *(short *)(param_1 + 0x54) +
                      (short)((int)*(short *)(param_1 + 0x5c) * (0x1000 - iVar8) >> 0xd);
        sVar2 = *(short *)(param_1 + 0x52);
        iVar6 = iVar6 + 0x40;
        iVar7 = iVar7 + 1;
        psVar11 = psVar11 + 4;
        sVar3 = *(short *)(param_1 + 0x5a);
        *puVar10 = 0x100;
        puVar10[-2] = sVar3 + (short)(sVar2 * iVar9 >> 0xc);
        puVar10 = puVar10 + 4;
      } while (iVar7 < 7);
      *(undefined1 *)(iVar5 + 0x28) = *(undefined1 *)(param_1 + 0x28);
    }
    *(short *)(param_1 + 0x4e) = *(short *)(param_1 + 0x4e) + 0xe3;
    *(short *)(param_1 + 0x2e) = *(short *)(param_1 + 0x2e) + -0xc;
  }
  return;
}

