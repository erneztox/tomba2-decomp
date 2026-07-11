// FUN_80103a88

/* WARNING: Removing unreachable block (ram,0x80103d14) */
/* WARNING: Removing unreachable block (ram,0x80103e24) */
/* WARNING: Removing unreachable block (ram,0x80103e58) */
/* WARNING: Removing unreachable block (ram,0x80103e68) */
/* WARNING: Removing unreachable block (ram,0x80103e7c) */
/* WARNING: Removing unreachable block (ram,0x80103ea8) */
/* WARNING: Removing unreachable block (ram,0x80103ee0) */
/* WARNING: Removing unreachable block (ram,0x80103ea0) */
/* WARNING: Removing unreachable block (ram,0x80103d38) */
/* WARNING: Removing unreachable block (ram,0x80103d64) */
/* WARNING: Removing unreachable block (ram,0x80103d6c) */
/* WARNING: Removing unreachable block (ram,0x80103d7c) */
/* WARNING: Removing unreachable block (ram,0x80103d90) */
/* WARNING: Removing unreachable block (ram,0x80103d9c) */
/* WARNING: Removing unreachable block (ram,0x80103db0) */
/* WARNING: Removing unreachable block (ram,0x80103e18) */
/* WARNING: Removing unreachable block (ram,0x8010cf40) */
/* WARNING: Removing unreachable block (ram,0x8010cf48) */
/* WARNING: Removing unreachable block (ram,0x8010cf5c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80103a88(int param_1,int param_2,int param_3)

{
  short sVar1;
  int iVar3;
  int iVar4;
  int iVar5;
  short sVar6;
  int iVar7;
  int iVar8;
  byte bVar9;
  int iVar10;
  short sVar2;
  
  if ((ushort)((*(short *)(param_1 + 0x36) - *(short *)(param_3 + 0x34)) + 600U) < 0x259) {
    iVar3 = (uint)*(ushort *)(param_1 + 0x2e) - (uint)*(ushort *)(param_3 + 0x2c);
    if (((int)((uint)*(ushort *)(param_2 + 0x80) + iVar3 & 0xffff) <=
         (int)*(short *)(param_2 + 0x82)) &&
       (iVar4 = (uint)*(ushort *)(param_1 + 0x32) - (uint)*(ushort *)(param_3 + 0x30),
       (int)((uint)*(ushort *)(param_2 + 0x80) + iVar4 & 0xffff) <= (int)*(short *)(param_2 + 0x82))
       ) {
      iVar5 = func_0x80083f50((int)*(short *)(param_2 + 0x58));
      iVar10 = iVar5 * *(short *)(param_2 + 0x80) >> 0xc;
      iVar5 = func_0x80083e80((int)*(short *)(param_2 + 0x58));
      iVar7 = -(iVar5 * *(short *)(param_2 + 0x80)) >> 0xc;
      iVar5 = iVar10;
      if (iVar10 << 0x10 < 0) {
        iVar5 = -iVar10;
      }
      iVar8 = iVar7;
      if (iVar7 << 0x10 < 0) {
        iVar8 = -iVar7;
      }
      bVar9 = (short)iVar5 < (short)iVar8;
      if ((short)iVar5 == 0) {
        FUN_8010cb5c(iVar8,3);
        return;
      }
      if ((short)iVar8 == 0) {
        bVar9 = 2;
      }
      sVar1 = (short)iVar7;
      sVar2 = (short)iVar10;
      sVar6 = (short)iVar4;
      if (bVar9 == 1) {
        if (iVar4 * 0x10000 < 0) {
          iVar4 = -iVar4;
        }
        if (iVar8 << 0x10 < iVar4 << 0x10) {
          return;
        }
        if (sVar1 == 0) {
          trap(0x1c00);
        }
        if ((sVar1 == 1) && ((int)sVar6 * (int)sVar2 == -0x80000000)) {
          trap(0x1800);
        }
      }
      else if (bVar9 < 2) {
        if (bVar9 == 0) {
          iVar4 = iVar3;
          if (iVar3 * 0x10000 < 0) {
            iVar4 = -iVar3;
          }
          if (iVar5 << 0x10 < iVar4 << 0x10) {
            return;
          }
          if (sVar2 == 0) {
            trap(0x1c00);
          }
          if ((sVar2 == -1) && ((int)(short)iVar3 * (int)sVar1 == -0x80000000)) {
            trap(0x1800);
          }
        }
      }
      else if ((bVar9 != 2) && (bVar9 == 3)) {
        iVar3 = (int)*(short *)(param_3 + 0x2c);
        iVar4 = (int)*(short *)(param_1 + 0x2e);
        if (iVar4 <= iVar3) {
          if (iVar4 + *(short *)(param_1 + 0x80) < iVar3 + -0x6e) {
            return;
          }
          *(short *)(param_1 + 0x2e) =
               (*(short *)(param_3 + 0x2c) + -0x6e) - *(short *)(param_1 + 0x80);
          return;
        }
        if (iVar3 + 0x6e <
            iVar4 - ((int)*(short *)(param_1 + 0x82) - (int)*(short *)(param_1 + 0x80))) {
          return;
        }
        FUN_8010cf3c(*(undefined2 *)(param_1 + 0x80));
        return;
      }
      iVar3 = func_0x80051b70(iVar8,bVar9,0x1f);
      if (iVar3 == 0) {
        *(undefined2 *)(iVar10 + 0x54) = 0;
        *(undefined2 *)(iVar10 + 0x56) = 0;
        *(undefined2 *)(iVar10 + 0x58) = 0;
      }
      return;
    }
  }
  return;
}

