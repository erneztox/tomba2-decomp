// FUN_8010666c

/* WARNING: Removing unreachable block (ram,0x8010690c) */
/* WARNING: Removing unreachable block (ram,0x80106a14) */
/* WARNING: Removing unreachable block (ram,0x80106a4c) */
/* WARNING: Removing unreachable block (ram,0x80106ad8) */
/* WARNING: Removing unreachable block (ram,0x80106b00) */
/* WARNING: Removing unreachable block (ram,0x80106a5c) */
/* WARNING: Removing unreachable block (ram,0x80106aac) */
/* WARNING: Removing unreachable block (ram,0x80106a80) */
/* WARNING: Removing unreachable block (ram,0x80106aa4) */
/* WARNING: Removing unreachable block (ram,0x80106ad0) */
/* WARNING: Removing unreachable block (ram,0x80106938) */
/* WARNING: Removing unreachable block (ram,0x80106964) */
/* WARNING: Removing unreachable block (ram,0x80106994) */
/* WARNING: Removing unreachable block (ram,0x801069a8) */
/* WARNING: Removing unreachable block (ram,0x801069fc) */
/* WARNING: Removing unreachable block (ram,0x80106974) */
/* WARNING: Removing unreachable block (ram,0x80106988) */
/* WARNING: Removing unreachable block (ram,0x8010697c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_8010666c(int param_1,int param_2,int param_3)

{
  short sVar1;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  short sVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  short sVar2;
  
  uVar4 = 0;
  if ((ushort)((*(short *)(param_1 + 0x2e) - *(short *)(param_3 + 0x2c)) + 600U) < 0x259) {
    iVar3 = (uint)*(ushort *)(param_1 + 0x36) - (uint)*(ushort *)(param_3 + 0x34);
    uVar4 = (uint)((int)*(short *)(param_2 + 0x82) <
                  (int)((uint)*(ushort *)(param_2 + 0x80) + iVar3 & 0xffff));
    if (uVar4 == 0) {
      iVar5 = (uint)*(ushort *)(param_1 + 0x32) - (uint)*(ushort *)(param_3 + 0x30);
      uVar4 = (uint)((int)*(short *)(param_2 + 0x82) <
                    (int)((uint)*(ushort *)(param_2 + 0x80) + iVar5 & 0xffff));
      if (uVar4 == 0) {
        iVar6 = func_0x80083f50((int)*(short *)(param_3 + 0xc));
        iVar12 = iVar6 * *(short *)(param_2 + 0x80) >> 0xc;
        iVar6 = func_0x80083e80((int)*(short *)(param_3 + 0xc));
        iVar9 = -(iVar6 * *(short *)(param_2 + 0x80)) >> 0xc;
        iVar6 = iVar12;
        if (iVar12 << 0x10 < 0) {
          iVar6 = -iVar12;
        }
        iVar11 = iVar9;
        if (iVar9 << 0x10 < 0) {
          iVar11 = -iVar9;
        }
        iVar10 = (int)(short)iVar11;
        uVar4 = (uint)((short)iVar6 < iVar10);
        if ((short)iVar6 != 0) {
          if (iVar10 == 0) {
            uVar4 = 2;
          }
          sVar1 = (short)iVar12;
          sVar2 = (short)iVar9;
          if (uVar4 == 1) {
            iVar3 = iVar5;
            if (iVar5 * 0x10000 < 0) {
              iVar3 = -iVar5;
            }
            uVar7 = (uint)(iVar11 << 0x10 < iVar3 << 0x10);
            if (uVar7 != 0) {
              return uVar7;
            }
            if (sVar2 == 0) {
              trap(0x1c00);
            }
            if ((sVar2 == 1) && ((int)(short)iVar5 * (int)sVar1 == -0x80000000)) {
              trap(0x1800);
            }
          }
          else {
            sVar8 = (short)iVar3;
            if (uVar4 < 2) {
              if (uVar4 == 0) {
                if (iVar3 * 0x10000 < 0) {
                  iVar3 = -iVar3;
                }
                uVar7 = (uint)(iVar6 << 0x10 < iVar3 << 0x10);
                if (uVar7 != 0) {
                  return uVar7;
                }
                if (sVar1 == 0) {
                  trap(0x1c00);
                }
                if ((sVar1 == -1) && ((int)sVar8 * (int)sVar2 == -0x80000000)) {
                  trap(0x1800);
                }
              }
            }
            else if ((uVar4 != 2) && (uVar4 == 3)) {
              iVar3 = (int)*(short *)(param_3 + 0x34);
              iVar5 = (int)*(short *)(param_1 + 0x36);
              if (iVar5 <= iVar3) {
                if (iVar5 + *(short *)(param_1 + 0x80) < (int)(iVar3 - 0x60U)) {
                  return iVar3 - 0x60U;
                }
                uVar4 = (*(ushort *)(param_3 + 0x34) - 0x60) - (uint)*(ushort *)(param_1 + 0x80);
                *(short *)(param_1 + 0x36) = (short)uVar4;
                return uVar4;
              }
              uVar4 = (uint)(iVar3 + 0x60 <
                            iVar5 - ((int)*(short *)(param_1 + 0x82) -
                                    (int)*(short *)(param_1 + 0x80)));
              if (uVar4 != 0) {
                return uVar4;
              }
              uVar4 = (uint)*(ushort *)(param_3 + 0x34) +
                      ((uint)*(ushort *)(param_1 + 0x82) - (uint)*(ushort *)(param_1 + 0x80)) + 0x61
              ;
              *(char *)(iVar12 + 6) = (char)uVar4;
              return uVar4;
            }
          }
          return uVar4 & 1;
        }
        if (iVar12 == param_1) {
          func_0x8004d4c4(0x45,1,3);
          func_0x8004b0d8(iVar5);
          *(undefined1 *)(iVar5 + 4) = 3;
          DAT_800bf9df = DAT_800bf9df | 0x20;
          uVar4 = FUN_80118830();
          return uVar4;
        }
        if (iVar12 < 2) {
          if (iVar12 != 0) {
            uVar4 = FUN_80118830();
            return uVar4;
          }
          iVar3 = func_0x80040b48(5);
          if (-1 < iVar3) {
            func_0x8004d4c4(0x24,1);
            func_0x8004b0d8(iVar5);
          }
          *(undefined1 *)(iVar5 + 4) = 3;
          uVar4 = FUN_80118830();
          return uVar4;
        }
        if (iVar12 == iVar10) {
          *(undefined1 *)(iVar5 + 4) = 3;
          func_0x8004d4c4(0x78,1,3);
          func_0x8004b0d8(iVar5);
          DAT_800bf9ea = DAT_800bf9ea & ~(byte)(param_1 << ((int)*(short *)(iVar5 + 0x60) & 0x1fU))
                         & ~(byte)(param_1 << ((int)*(short *)(iVar5 + 0x60) + 4U & 0x1f));
          func_0x80040c00(0x4e);
          uVar4 = FUN_80118830();
          return uVar4;
        }
        if (iVar12 != 3) {
          uVar4 = FUN_80118830();
          return uVar4;
        }
        func_0x8004d4c4(0x53,1,3);
        func_0x8004b0d8(iVar5);
        *(undefined1 *)(iVar5 + 4) = 3;
        DAT_800bf9ee = DAT_800bf9ee | 2;
        uVar4 = FUN_80118830();
        return uVar4;
      }
    }
  }
  return uVar4;
}

