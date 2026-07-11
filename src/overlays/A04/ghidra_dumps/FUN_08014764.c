// FUN_08014764

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x08014a98) */
/* WARNING: Removing unreachable block (ram,0x08014ac0) */
/* WARNING: Removing unreachable block (ram,0x08014ae4) */
/* WARNING: Removing unreachable block (ram,0x08014b08) */
/* WARNING: Removing unreachable block (ram,0x08014aec) */
/* WARNING: Removing unreachable block (ram,0x08014b00) */
/* WARNING: Removing unreachable block (ram,0x08014b1c) */
/* WARNING: Removing unreachable block (ram,0x0010daf0) */
/* WARNING: Removing unreachable block (ram,0x08014b48) */
/* WARNING: Removing unreachable block (ram,0x0010db20) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_08014764(int param_1,int param_2,int param_3)

{
  short sVar1;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  byte bVar8;
  int iVar9;
  short sVar2;
  
  if ((ushort)((*(short *)(param_1 + 0x14c) - *(short *)(param_3 + 0x2c)) + 600U) < 0x259) {
    iVar3 = (uint)*(ushort *)(param_1 + 0x150) - (uint)*(ushort *)(param_3 + 0x34);
    if (((int)((uint)*(ushort *)(param_2 + 0x80) + iVar3 & 0xffff) <=
         (int)*(short *)(param_2 + 0x82)) &&
       (iVar4 = (uint)*(ushort *)(param_1 + 0x14e) - (uint)*(ushort *)(param_3 + 0x30),
       (int)((uint)*(ushort *)(param_2 + 0x80) + iVar4 & 0xffff) <= (int)*(short *)(param_2 + 0x82))
       ) {
      iVar5 = func_0x00083f50((int)*(short *)(param_3 + 0xc));
      iVar9 = iVar5 * *(short *)(param_2 + 0x80) >> 0xc;
      iVar5 = func_0x00083e80((int)*(short *)(param_3 + 0xc));
      iVar6 = -(iVar5 * *(short *)(param_2 + 0x80)) >> 0xc;
      iVar5 = iVar9;
      if (iVar9 << 0x10 < 0) {
        iVar5 = -iVar9;
      }
      iVar7 = iVar6;
      if (iVar6 << 0x10 < 0) {
        iVar7 = -iVar6;
      }
      bVar8 = (short)iVar5 < (short)iVar7;
      if ((short)iVar5 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if ((short)iVar7 == 0) {
        bVar8 = 2;
      }
      sVar1 = (short)iVar6;
      sVar2 = (short)iVar9;
      if (bVar8 == 1) {
        if (iVar4 * 0x10000 < 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if (iVar4 * 0x10000 <= iVar7 << 0x10) {
          if (sVar1 == 0) {
            trap(0x1c00);
          }
          if (sVar1 != 1) {
            halt_baddata();
          }
          if ((int)(short)iVar4 * (int)sVar2 != -0x80000000) {
            halt_baddata();
          }
          trap(0x1800);
          halt_baddata();
        }
      }
      else {
        if (bVar8 < 2) {
          if (bVar8 == 0) {
            if (iVar3 * 0x10000 < 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
            if (iVar5 << 0x10 < iVar3 * 0x10000) {
              return 0;
            }
            if (sVar2 == 0) {
              trap(0x1c00);
            }
            if ((sVar2 == -1) && ((int)(short)iVar3 * (int)sVar1 == -0x80000000)) {
              trap(0x1800);
            }
          }
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if (bVar8 == 2) {
          if (iVar3 * 0x10000 < 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          if (iVar3 * 0x10000 <= iVar5 << 0x10) {
            halt_baddata();
          }
        }
        else {
          if (bVar8 != 3) {
            halt_baddata();
          }
          if (iVar4 * 0x10000 < 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
        }
      }
    }
  }
  return 0;
}

