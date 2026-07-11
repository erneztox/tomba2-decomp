// FUN_08011b78

/* WARNING: Control flow encountered bad instruction data */

void FUN_08011b78(int param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  if ((ushort)((*(short *)(param_1 + 0x2e) - *(short *)(param_3 + 0x2c)) + 600U) < 0x259) {
    iVar2 = (uint)*(ushort *)(param_1 + 0x36) - (uint)*(ushort *)(param_3 + 0x34);
    if (((int)((uint)*(ushort *)(param_2 + 0x80) + iVar2 & 0xffff) <=
         (int)*(short *)(param_2 + 0x82)) &&
       ((int)((uint)*(ushort *)(param_2 + 0x80) +
              ((uint)*(ushort *)(param_1 + 0x32) - (uint)*(ushort *)(param_3 + 0x30)) & 0xffff) <=
        (int)*(short *)(param_2 + 0x82))) {
      iVar3 = func_0x00083f50((int)*(short *)(param_3 + 0xc));
      uVar6 = (uint)(iVar3 * *(short *)(param_2 + 0x80)) >> 0xc;
      if (*(char *)(param_2 + 3) != '\0') {
        func_0x00083e80((int)*(short *)(param_3 + 0xc));
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      iVar3 = func_0x00083e80((int)*(short *)(param_3 + 0xc));
      uVar4 = (uint)(iVar3 * *(short *)(param_2 + 0x80)) >> 0xc;
      uVar5 = uVar6;
      if ((int)(uVar6 << 0x10) < 0) {
        uVar5 = -uVar6;
      }
      uVar1 = uVar4;
      if ((int)(uVar4 << 0x10) < 0) {
        uVar1 = -uVar4;
      }
      if ((uVar1 & 0xffff) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      iVar3 = iVar2;
      if (iVar2 * 0x10000 < 0) {
        iVar3 = -iVar2;
      }
      if (iVar3 << 0x10 <= (int)(uVar5 << 0x10)) {
        iVar2 = (int)(short)iVar2 * (int)(short)uVar4;
        iVar3 = (int)(short)uVar6;
        iVar7 = iVar2 / iVar3;
        if (iVar3 == 0) {
          trap(0x1c00);
        }
        if ((iVar3 == -1) && (iVar2 == -0x80000000)) {
          trap(0x1800);
        }
        iVar2 = (int)*(short *)(param_1 + 0x32);
        iVar3 = (int)*(short *)(param_3 + 0x30);
        if (iVar2 + -0x40 < iVar3 - iVar7) {
          if (iVar3 - (iVar7 + 0x40) <=
              iVar2 + ((int)*(short *)(param_1 + 0x86) - (int)*(short *)(param_1 + 0x84))) {
            *(undefined1 *)(param_1 + 0x29) = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
        }
        else if (iVar2 - *(short *)(param_1 + 0x84) <= iVar3 - (iVar7 + -0x40)) {
          *(undefined1 *)(param_1 + 0x29) = 1;
        }
      }
    }
  }
  return;
}

