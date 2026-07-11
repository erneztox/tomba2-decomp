// FUN_080119a0

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_080119a0(byte *param_1,undefined1 *param_2)

{
  bool bVar1;
  short sVar2;
  undefined2 uVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  if ((((DAT_800bf80d == '\0') && (DAT_1f800259 == '\0')) && (DAT_800bf809 == '\0')) &&
     ((DAT_800bf80a == '\0' && ((*param_1 & 0xc) == 0)))) {
    sVar2 = *(short *)(param_2 + 0x84);
    uVar3 = *(undefined2 *)(param_2 + 0x86);
    if ((*(ushort *)(param_1 + 0x17e) & 0x40) != 0) {
      *(short *)(param_2 + 0x84) = sVar2 + 400;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(short *)(param_2 + 0x84) = sVar2 + 200;
    *(short *)(param_2 + 0x86) = *(short *)(param_2 + 0x86) + 200;
    iVar5 = func_0x00022f04(param_1,param_2);
    if (iVar5 != 0) {
      DAT_800bf81e = 0;
      iVar5 = ((uint)*(ushort *)(param_1 + 0x84) + (uint)*(ushort *)(param_2 + 0x84) + 300) -
              ((uint)*(ushort *)(param_2 + 0x32) - (uint)*(ushort *)(param_1 + 0x32));
      if (_DAT_1f800090 != 0) {
        DAT_800bf848 = DAT_1f800090;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      DAT_800bf848 = 1;
      if (param_1[0x78] == 0) {
        func_0x00074590(0x25,0,0);
      }
      bVar1 = _DAT_1f800094 != 0;
      *(short *)(param_1 + 0x44) = *(short *)(param_1 + 0x44) - (*(short *)(param_1 + 0x44) >> 2);
      if (bVar1) {
        param_1[0x50] = 0;
        param_1[0x51] = 0;
        param_1[0x4a] = 0;
        param_1[0x4b] = 0;
        *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) - (iVar5 * 0x10000 >> 4);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      iVar6 = (uint)*(ushort *)(param_1 + 0x4a) + iVar5 * -2;
      *(short *)(param_1 + 0x4a) = (short)iVar6;
      iVar6 = iVar6 * 0x10000 >> 0x10;
      if (0x280 < iVar6) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (iVar5 * 0x10000 >> 0x10 < 500) {
        if (iVar6 < -0x3e00) {
          param_1[0x4a] = 0;
          param_1[0x4b] = 0xc2;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      }
      else if (iVar6 < -0x2800) {
        param_1[0x4a] = 0;
        param_1[0x4b] = 0xd8;
      }
      uVar7 = (uint)param_1[0x46];
      if (((uVar7 - 0x13 < 3) || (uVar7 == 0xca)) || ((uVar7 == 0xe5 || (uVar7 == 0xe6)))) {
        if ((_DAT_1f800090 == 0) || (param_1[0x145] != 1)) {
          func_0x00054d14(param_1,0x12,4);
          halt_baddata();
        }
        DAT_800bf848 = 4;
      }
      sVar4 = *(short *)(param_2 + 100);
      *(short *)(param_2 + 100) = sVar4 + 1;
      if ((((0x3c < (short)(sVar4 + 1)) && (*(short *)(param_1 + 0x16e) != 0)) &&
          (DAT_1f800137 == '\0')) &&
         ((((param_1[0x177] & 2) == 0 && (param_1[0x78] == 0)) &&
          ((*(ushort *)(param_1 + 0x17e) & 0x400) == 0)))) {
        if ((DAT_800bfad5 == '\0') && (iVar5 = func_0x00022d08(param_1,0,1,1), iVar5 != 0)) {
          param_1[7] = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        param_1[7] = 1;
        param_1[4] = 2;
        param_1[5] = 6;
        param_1[6] = 0;
        *param_1 = *param_1 | 0xc;
        *param_2 = 2;
        *(undefined2 *)(param_2 + 0x40) = 0;
      }
      param_2[0x5e] = 1;
      *(short *)(param_2 + 0x84) = sVar2;
      *(undefined2 *)(param_2 + 0x86) = uVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(undefined2 *)(param_2 + 100) = 0;
  }
  return;
}

