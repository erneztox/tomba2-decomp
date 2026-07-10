// FUN_00000694

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00000944) */
/* WARNING: Removing unreachable block (ram,0x00000a04) */
/* WARNING: Removing unreachable block (ram,0x00000a34) */
/* WARNING: Removing unreachable block (ram,0x00000a5c) */
/* WARNING: Removing unreachable block (ram,0x00000968) */
/* WARNING: Removing unreachable block (ram,0x0000098c) */
/* WARNING: Removing unreachable block (ram,0x000009a0) */
/* WARNING: Removing unreachable block (ram,0x00109aa4) */

void FUN_00000694(int param_1,int param_2,int param_3)

{
  short sVar1;
  int iVar3;
  int iVar4;
  int iVar5;
  short sVar6;
  int iVar7;
  byte bVar8;
  int iVar9;
  int iVar10;
  short sVar2;
  
  if ((*(char *)(param_1 + 0x2a) == '\x01') &&
     ((ushort)((*(short *)(param_1 + 0x36) - *(short *)(param_3 + 0x34)) + 600U) < 0x259)) {
    iVar3 = (uint)*(ushort *)(param_1 + 0x2e) - (uint)*(ushort *)(param_3 + 0x2c);
    if (((int)((uint)*(ushort *)(param_2 + 0x80) + iVar3 & 0xffff) <=
         (int)*(short *)(param_2 + 0x82)) &&
       (iVar4 = (uint)*(ushort *)(param_1 + 0x32) - (uint)*(ushort *)(param_3 + 0x30),
       (int)((uint)*(ushort *)(param_2 + 0x80) + iVar4 & 0xffff) <= (int)*(short *)(param_2 + 0x82))
       ) {
      iVar5 = func_0x00083f50((int)*(short *)(param_3 + 0xc));
      iVar10 = iVar5 * *(short *)(param_2 + 0x80) >> 0xc;
      iVar5 = func_0x00083e80((int)*(short *)(param_3 + 0xc));
      iVar7 = -(iVar5 * *(short *)(param_2 + 0x80)) >> 0xc;
      iVar5 = iVar10;
      if (iVar10 << 0x10 < 0) {
        iVar5 = -iVar10;
      }
      iVar9 = iVar7;
      if (iVar7 << 0x10 < 0) {
        iVar9 = -iVar7;
      }
      bVar8 = (short)iVar5 < (short)iVar9;
      if ((short)iVar5 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if ((short)iVar9 == 0) {
        bVar8 = 2;
      }
      sVar1 = (short)iVar7;
      sVar2 = (short)iVar10;
      if (bVar8 == 1) {
        iVar3 = iVar4;
        if (iVar4 * 0x10000 < 0) {
          iVar3 = -iVar4;
        }
        if (iVar9 << 0x10 < iVar3 << 0x10) {
          return;
        }
        if (sVar1 == 0) {
          trap(0x1c00);
        }
        if ((sVar1 == 1) && ((int)(short)iVar4 * (int)sVar2 == -0x80000000)) {
          trap(0x1800);
        }
      }
      else {
        sVar6 = (short)iVar3;
        if (bVar8 < 2) {
          if (bVar8 == 0) {
            if (iVar3 * 0x10000 < 0) {
              iVar3 = -iVar3;
            }
            if (iVar5 << 0x10 < iVar3 << 0x10) {
              return;
            }
            if (sVar2 == 0) {
              trap(0x1c00);
            }
            if ((sVar2 == -1) && ((int)sVar6 * (int)sVar1 == -0x80000000)) {
              trap(0x1800);
            }
          }
        }
        else if ((bVar8 != 2) && (bVar8 == 3)) {
          iVar3 = (int)*(short *)(param_3 + 0x2c);
          iVar4 = (int)*(short *)(param_1 + 0x2e);
          if (iVar4 <= iVar3) {
            if (iVar4 + *(short *)(param_1 + 0x80) < iVar3 + -0x60) {
              return;
            }
            *(short *)(param_1 + 0x2e) =
                 (*(short *)(param_3 + 0x2c) + -0x60) - *(short *)(param_1 + 0x80);
            return;
          }
          if (iVar3 + 0x60 <
              iVar4 - ((int)*(short *)(param_1 + 0x82) - (int)*(short *)(param_1 + 0x80))) {
            return;
          }
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  return;
}

