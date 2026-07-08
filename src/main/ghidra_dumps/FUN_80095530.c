
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_80095530(uint param_1,undefined2 param_2,undefined2 param_3)

{
  int iVar1;
  short sVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar7 = *(int *)(&DAT_80104c30 + (param_1 & 0xff) * 4) + ((int)(param_1 & 0xff00) >> 8) * 0xb0;
  *(undefined2 *)(iVar7 + 0x58) = param_2;
  *(undefined2 *)(iVar7 + 0x5a) = param_3;
  if (0x7e < *(ushort *)(iVar7 + 0x58)) {
    *(undefined2 *)(iVar7 + 0x58) = 0x7f;
  }
  if (0x7e < *(ushort *)(iVar7 + 0x5a)) {
    *(undefined2 *)(iVar7 + 0x5a) = 0x7f;
  }
  iVar8 = 0;
  if ('\0' < DAT_80105cec) {
    iVar1 = 0;
    do {
      if ((((DAT_800ac3f4 & 1 << (iVar1 >> 0x10 & 0x1fU)) == 0) &&
          (iVar1 = (iVar1 >> 0x10) * 0x38, *(short *)(iVar1 + -0x7fefab28) == (short)param_1)) &&
         ((int)*(short *)(iVar1 + -0x7fefab20) == (int)*(char *)(iVar7 + 0x26))) {
        FUN_800962b0((int)*(short *)(iVar1 + -0x7fefab20),(int)*(short *)(iVar1 + -0x7fefab26));
        iVar6 = (*(short *)(iVar1 + -0x7fefab26) * 0x10 + (int)*(short *)(iVar1 + -0x7fefab22)) *
                0x20 + _DAT_80105ce8;
        uVar5 = (((int)((uint)*(byte *)(_DAT_80105ce4 + 0x18) *
                       (((int)*(short *)(iVar1 + -0x7fefab30) *
                        (int)*(short *)(*(short *)(iVar1 + -0x7fefab2c) * 2 + iVar7 + 0x60)) / 0x7f)
                       * 0x3fff) / 0x3f01) *
                 (uint)*(byte *)(*(short *)(iVar1 + -0x7fefab24) * 0x10 + _DAT_80105cdc + 1) *
                (uint)*(byte *)(iVar6 + 2)) / 0x3f01;
        uVar4 = (uVar5 * *(ushort *)(iVar7 + 0x58)) / 0x7f;
        uVar3 = (uint)*(byte *)(iVar6 + 3);
        uVar5 = (uVar5 * *(ushort *)(iVar7 + 0x5a)) / 0x7f;
        if (uVar3 < 0x40) {
          uVar5 = (uVar5 * uVar3) / 0x3f;
        }
        else {
          uVar4 = (uVar4 * (0x7f - uVar3)) / 0x3f;
        }
        sVar2 = (short)iVar8;
        uVar3 = (uint)*(byte *)(*(short *)(sVar2 * 0x38 + -0x7fefab24) * 0x10 + _DAT_80105cdc + 4);
        if (uVar3 < 0x40) {
          uVar5 = (uint)((ulonglong)((longlong)(int)((uVar5 & 0xffff) * uVar3) * 0x82082083) >> 0x25
                        );
        }
        else {
          uVar4 = (int)((uVar4 & 0xffff) * (0x7f - uVar3)) / 0x3f;
        }
        uVar3 = (uint)*(byte *)(sVar2 * 0x38 + -0x7fefab2e);
        if (uVar3 < 0x40) {
          uVar5 = (uint)((ulonglong)((longlong)(int)((uVar5 & 0xffff) * uVar3) * 0x82082083) >> 0x25
                        );
        }
        else {
          uVar4 = (int)((uVar4 & 0xffff) * (0x7f - uVar3)) / 0x3f;
        }
        uVar3 = uVar4 & 0xffff;
        if (_DAT_80105cd8 == 1) {
          if (uVar3 < (uVar5 & 0xffff)) {
            uVar4 = uVar5;
          }
          uVar3 = uVar4 & 0xffff;
          uVar5 = uVar4;
        }
        iVar1 = (int)sVar2;
        *(short *)(&DAT_80105a28 + iVar1 * 0x10) = (short)((int)(uVar3 * uVar3) / 0x3fff);
        *(short *)(&DAT_80105a2a + iVar1 * 0x10) =
             (short)((int)((uVar5 & 0xffff) * (uVar5 & 0xffff)) / 0x3fff);
        (&DAT_80105a08)[iVar1] = (&DAT_80105a08)[iVar1] | 3;
      }
      iVar8 = iVar8 + 1;
      iVar1 = iVar8 * 0x10000;
    } while (iVar8 * 0x10000 >> 0x10 < (int)DAT_80105cec);
  }
  return (int)(short)param_1;
}

