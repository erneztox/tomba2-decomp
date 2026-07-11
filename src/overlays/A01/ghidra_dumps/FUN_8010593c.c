// FUN_8010593c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x80105bc8) */
/* WARNING: Removing unreachable block (ram,0x80105c4c) */
/* WARNING: Removing unreachable block (ram,0x80105c78) */
/* WARNING: Removing unreachable block (ram,0x80105c88) */
/* WARNING: Removing unreachable block (ram,0x8010ec68) */
/* WARNING: Removing unreachable block (ram,0x80105c9c) */
/* WARNING: Removing unreachable block (ram,0x80105cc8) */
/* WARNING: Removing unreachable block (ram,0x80105cc0) */
/* WARNING: Removing unreachable block (ram,0x80105bf0) */
/* WARNING: Removing unreachable block (ram,0x80105c30) */
/* WARNING: Removing unreachable block (ram,0x8010ed38) */
/* WARNING: Removing unreachable block (ram,0x8010ed4c) */
/* WARNING: Removing unreachable block (ram,0x80117d18) */
/* WARNING: Removing unreachable block (ram,0x80117da0) */
/* WARNING: Removing unreachable block (ram,0x80117db0) */
/* WARNING: Removing unreachable block (ram,0x80117db8) */
/* WARNING: Removing unreachable block (ram,0x80117dc0) */
/* WARNING: Removing unreachable block (ram,0x80117dc4) */
/* WARNING: Removing unreachable block (ram,0x80117dcc) */
/* WARNING: Removing unreachable block (ram,0x80117de0) */
/* WARNING: Removing unreachable block (ram,0x80117de8) */
/* WARNING: Removing unreachable block (ram,0x8010ed58) */
/* WARNING: Removing unreachable block (ram,0x8010ed60) */
/* WARNING: Removing unreachable block (ram,0x8010ed70) */
/* WARNING: Removing unreachable block (ram,0x8010ed88) */
/* WARNING: Removing unreachable block (ram,0x8010eda0) */
/* WARNING: Removing unreachable block (ram,0x8010edd0) */
/* WARNING: Removing unreachable block (ram,0x80117ed4) */
/* WARNING: Removing unreachable block (ram,0x80117edc) */
/* WARNING: Removing unreachable block (ram,0x80117ee4) */
/* WARNING: Removing unreachable block (ram,0x80117ee8) */
/* WARNING: Removing unreachable block (ram,0x80117f1c) */
/* WARNING: Removing unreachable block (ram,0x80117ef0) */
/* WARNING: Removing unreachable block (ram,0x80117f04) */
/* WARNING: Removing unreachable block (ram,0x80117f14) */
/* WARNING: Removing unreachable block (ram,0x80120f18) */
/* WARNING: Removing unreachable block (ram,0x80120f20) */
/* WARNING: Removing unreachable block (ram,0x80120f64) */
/* WARNING: Removing unreachable block (ram,0x80120f38) */
/* WARNING: Removing unreachable block (ram,0x80120f48) */
/* WARNING: Removing unreachable block (ram,0x80120eec) */
/* WARNING: Removing unreachable block (ram,0x80120efc) */
/* WARNING: Removing unreachable block (ram,0x80121074) */
/* WARNING: Removing unreachable block (ram,0x80121084) */
/* WARNING: Removing unreachable block (ram,0x8012108c) */
/* WARNING: Removing unreachable block (ram,0x80117f3c) */
/* WARNING: Removing unreachable block (ram,0x8010efb4) */
/* WARNING: Removing unreachable block (ram,0x8010efc8) */
/* WARNING: Removing unreachable block (ram,0xa2020002) */
/* WARNING: Removing unreachable block (ram,0x8010f060) */
/* WARNING: Removing unreachable block (ram,0x8010f0a0) */
/* WARNING: Removing unreachable block (ram,0x8010f0a4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_8010593c(int param_1,int param_2,int param_3)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  short sVar6;
  int iVar7;
  byte bVar8;
  uint uVar9;
  
  uVar3 = 0;
  if ((ushort)((*(short *)(param_1 + 0x36) - *(short *)(param_3 + 0x34)) + 600U) < 0x259) {
    iVar2 = (uint)*(ushort *)(param_1 + 0x2e) - (uint)*(ushort *)(param_3 + 0x2c);
    uVar3 = (uint)((int)*(short *)(param_2 + 0x82) <
                  (int)((uint)*(ushort *)(param_2 + 0x80) + iVar2 & 0xffff));
    if (uVar3 == 0) {
      iVar4 = (uint)*(ushort *)(param_1 + 0x32) - (uint)*(ushort *)(param_3 + 0x30);
      uVar3 = (uint)((int)*(short *)(param_2 + 0x82) <
                    (int)((uint)*(ushort *)(param_2 + 0x80) + iVar4 & 0xffff));
      if (uVar3 == 0) {
        iVar5 = func_0x80083f50((int)*(short *)(param_2 + 0x58));
        uVar9 = iVar5 * *(short *)(param_2 + 0x80) >> 0xc;
        iVar5 = func_0x80083e80((int)*(short *)(param_2 + 0x58));
        iVar5 = -(iVar5 * *(short *)(param_2 + 0x80)) >> 0xc;
        uVar3 = uVar9;
        if ((int)(uVar9 << 0x10) < 0) {
          uVar3 = -uVar9;
        }
        iVar7 = iVar5;
        if (iVar5 << 0x10 < 0) {
          iVar7 = -iVar5;
        }
        sVar6 = (short)iVar7;
        bVar8 = (short)uVar3 < sVar6;
        if ((short)uVar3 == 0) {
          *(short *)(iVar2 + 0x10) = sVar6;
          iVar2 = uVar9 - (int)*(short *)(param_1 + 0x32);
          if (iVar2 < 0) {
            iVar2 = iVar2 + 0xf;
          }
          *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + (short)(iVar2 >> 4);
          return uVar9;
        }
        if (sVar6 == 0) {
          bVar8 = 2;
        }
        sVar6 = (short)iVar5;
        sVar1 = (short)uVar9;
        if (bVar8 == 1) {
          iVar2 = iVar4;
          if (iVar4 * 0x10000 < 0) {
            iVar2 = -iVar4;
          }
          uVar3 = (uint)(iVar7 << 0x10 < iVar2 << 0x10);
          if (uVar3 == 0) {
            if (sVar6 == 0) {
              trap(0x1c00);
            }
            if ((sVar6 == 1) && ((int)(short)iVar4 * (int)sVar1 == -0x80000000)) {
              trap(0x1800);
            }
            uVar3 = FUN_8010eb5c();
            return uVar3;
          }
        }
        else if (bVar8 < 2) {
          if (bVar8 != 0) {
            uVar3 = FUN_8010eb5c();
            return uVar3;
          }
          iVar4 = iVar2;
          if (iVar2 * 0x10000 < 0) {
            iVar4 = -iVar2;
          }
          uVar3 = (uint)((int)(uVar3 << 0x10) < iVar4 << 0x10);
          if (uVar3 == 0) {
            if (sVar1 == 0) {
              trap(0x1c00);
            }
            if ((sVar1 == -1) && ((int)(short)iVar2 * (int)sVar6 == -0x80000000)) {
              trap(0x1800);
            }
            uVar3 = FUN_8010eb5c();
            return uVar3;
          }
        }
        else {
          if (bVar8 == 2) {
            uVar3 = FUN_8010eb5c();
            return uVar3;
          }
          if (bVar8 != 3) {
            uVar3 = FUN_8010eb5c();
            return uVar3;
          }
          iVar2 = (int)*(short *)(param_3 + 0x2c);
          iVar4 = (int)*(short *)(param_1 + 0x2e);
          if (iVar2 < iVar4) {
            uVar3 = (uint)(iVar2 + 0x6e < iVar4 - *(short *)(param_1 + 0x80));
            if (uVar3 == 0) {
              uVar3 = FUN_8010ed34();
              return uVar3;
            }
          }
          else {
            uVar3 = iVar2 - 0x6e;
            if ((int)uVar3 <= iVar4 + *(short *)(param_1 + 0x80)) {
              uVar3 = (*(ushort *)(param_3 + 0x2c) - 0x6e) - (uint)*(ushort *)(param_1 + 0x80);
              *(short *)(param_1 + 0x2e) = (short)uVar3;
            }
          }
        }
      }
    }
  }
  return uVar3;
}

