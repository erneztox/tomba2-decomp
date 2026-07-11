// FUN_0801385c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0801385c(byte *param_1,int param_2,int param_3)

{
  bool bVar1;
  ushort uVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  
  iVar7 = (uint)*(ushort *)(param_1 + 0x2e) - (uint)*(ushort *)(param_3 + 0x2c);
  uVar8 = 2;
  if ((param_1[0x16b] & 1) != 0) {
    if (param_1[0x16b] == 3) {
      func_0x00083f50((int)*(short *)(param_3 + 10));
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    iVar4 = func_0x00083f50((int)*(short *)(param_3 + 10));
    sVar3 = (short)((uint)(iVar4 * 0x89) >> 10);
    iVar4 = iVar7 * 0x10000 >> 0x10;
    if (iVar4 < 0) {
      sVar3 = -sVar3;
    }
    iVar5 = func_0x00083f50((int)*(short *)(param_3 + 8));
    iVar5 = iVar5 * sVar3 >> 0xc;
    sVar3 = (short)iVar5;
    if (iVar4 < 0) {
      if (iVar4 < sVar3) {
        uVar8 = 0;
        *(short *)(param_1 + 0x2e) = *(short *)(param_3 + 0x2c) + sVar3;
        iVar7 = iVar5;
      }
    }
    else if (sVar3 < iVar4) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  iVar4 = func_0x00083e80((int)*(short *)(param_3 + 10));
  iVar5 = func_0x00083e80((int)*(short *)(param_3 + 8));
  *(short *)(param_1 + 0x36) = *(short *)(param_3 + 0x34) + (short)(-(iVar4 * (short)iVar7) >> 0xc);
  if (param_1[0x16b] == 3) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iVar4 = ((uint)*(ushort *)(param_3 + 0x30) - (iVar5 * (short)iVar7 >> 0xc)) -
          (*(ushort *)(param_1 + 0x62) + 100);
  uVar6 = iVar4 * 0x10000 >> 0x10;
  if (((int)uVar6 <= (int)*(short *)(param_1 + 0x32)) && (uVar6 = 0, (param_1[0x145] & 1) == 0)) {
    if (param_1[0x16b] == 1) {
      DAT_800bf840 = 0x46;
    }
    *(short *)(param_1 + 0x32) = (short)iVar4;
    func_0x00022c78(param_1);
    uVar2 = *(ushort *)(param_3 + 8);
    if (0x800 < (uVar2 & 0xfff)) {
      *(ushort *)(param_1 + 0x142) = uVar2 - 0x1000;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(ushort *)(param_1 + 0x142) = uVar2;
    *(undefined1 *)(param_2 + 0x29) = 4;
    uVar6 = -iVar7;
    bVar1 = DAT_1f800137 == '\0';
    *(short *)(param_2 + 0x44) = (short)uVar6;
    if (bVar1) {
      uVar6 = 1;
      if ((((param_1[0x16b] == 1) && (uVar6 = (uint)param_1[0x78], uVar6 == 0)) &&
          (uVar6 = 0x14, param_1[0x46] != 0x14)) && (uVar6 = (uint)param_1[0x147], uVar8 == uVar6))
      {
        _DAT_1f800196 = *(undefined2 *)(param_1 + 0x140);
        param_1[0x61] = 0x41;
        uVar6 = 0xe;
        param_1[4] = 1;
        param_1[5] = 0xe;
        param_1[6] = 0;
        param_1[7] = 0;
        param_1[0x146] = 0;
        *param_1 = *param_1 | 4;
      }
    }
  }
  return uVar6;
}

