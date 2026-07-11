// FUN_08011744

/* WARNING: Control flow encountered bad instruction data */

void FUN_08011744(int param_1,int param_2,int param_3)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  if ((ushort)((*(short *)(param_1 + 0x36) - *(short *)(param_3 + 0x34)) + 600U) < 0x259) {
    iVar7 = (uint)*(ushort *)(param_1 + 0x2e) - (uint)*(ushort *)(param_3 + 0x2c);
    if (((int)((uint)*(ushort *)(param_2 + 0x80) + iVar7 & 0xffff) <=
         (int)*(short *)(param_2 + 0x82)) &&
       ((int)((uint)*(ushort *)(param_2 + 0x80) +
              ((uint)*(ushort *)(param_1 + 0x32) - (uint)*(ushort *)(param_3 + 0x30)) & 0xffff) <=
        (int)*(short *)(param_2 + 0x82))) {
      iVar3 = func_0x00083f50((int)*(short *)(param_3 + 0xc));
      iVar6 = iVar3 * *(short *)(param_2 + 0x80) >> 0xc;
      iVar3 = func_0x00083e80((int)*(short *)(param_3 + 0xc));
      uVar5 = -(iVar3 * *(short *)(param_2 + 0x80)) >> 0xc;
      iVar3 = iVar6;
      if (iVar6 << 0x10 < 0) {
        iVar3 = -iVar6;
      }
      uVar2 = uVar5;
      if ((int)(uVar5 << 0x10) < 0) {
        uVar2 = -uVar5;
      }
      if ((uVar2 & 0xffff) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      iVar4 = iVar7;
      if (iVar7 * 0x10000 < 0) {
        iVar4 = -iVar7;
      }
      if (iVar4 << 0x10 <= iVar3 << 0x10) {
        iVar7 = -(int)(short)iVar7 * (int)(short)uVar5;
        iVar3 = (int)(short)iVar6;
        iVar6 = iVar7 / iVar3;
        if (iVar3 == 0) {
          trap(0x1c00);
        }
        if ((iVar3 == -1) && (iVar7 == -0x80000000)) {
          trap(0x1800);
        }
        iVar7 = (int)*(short *)(param_3 + 0x30);
        iVar3 = (int)*(short *)(param_1 + 0x32);
        sVar1 = *(short *)(param_3 + 0x30);
        if (iVar3 < iVar7 + iVar6) {
          if (iVar7 + iVar6 + -0x40 <=
              iVar3 + ((int)*(short *)(param_1 + 0x86) - (int)*(short *)(param_1 + 0x84))) {
            *(undefined1 *)(param_1 + 0x29) = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
        }
        else if (iVar3 - *(short *)(param_1 + 0x84) <= iVar7 + iVar6) {
          *(undefined1 *)(param_1 + 0x29) = 1;
          *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x84) + sVar1 + (short)iVar6;
        }
      }
    }
  }
  return;
}

