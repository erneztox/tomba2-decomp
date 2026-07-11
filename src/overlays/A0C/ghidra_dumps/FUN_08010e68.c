// FUN_08010e68

/* WARNING: Control flow encountered bad instruction data */

void FUN_08010e68(int param_1,int param_2,int param_3)

{
  uint uVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  short sVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  if ((ushort)((*(short *)(param_1 + 0x2e) - *(short *)(param_3 + 0x2c)) + 600U) < 0x259) {
    iVar3 = (uint)*(ushort *)(param_1 + 0x36) - (uint)*(ushort *)(param_3 + 0x34);
    if (((int)((uint)*(ushort *)(param_2 + 0x80) + iVar3 & 0xffff) <=
         (int)*(short *)(param_2 + 0x82)) &&
       ((int)((uint)*(ushort *)(param_2 + 0x80) +
              ((uint)*(ushort *)(param_1 + 0x32) - (uint)*(ushort *)(param_3 + 0x30)) & 0xffff) <=
        (int)*(short *)(param_2 + 0x82))) {
      iVar4 = func_0x00083f50((int)*(short *)(param_3 + 0xc));
      uVar8 = (uint)(iVar4 * *(short *)(param_2 + 0x80)) >> 0xc;
      if (*(char *)(param_2 + 3) != '\0') {
        func_0x00083e80((int)*(short *)(param_3 + 0xc));
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      iVar4 = func_0x00083e80((int)*(short *)(param_3 + 0xc));
      uVar6 = (uint)(iVar4 * *(short *)(param_2 + 0x80)) >> 0xc;
      uVar7 = uVar8;
      if ((int)(uVar8 << 0x10) < 0) {
        uVar7 = -uVar8;
      }
      uVar1 = uVar6;
      if ((int)(uVar6 << 0x10) < 0) {
        uVar1 = -uVar6;
      }
      if ((uVar1 & 0xffff) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      iVar4 = iVar3;
      if (iVar3 * 0x10000 < 0) {
        iVar4 = -iVar3;
      }
      sVar5 = (short)iVar3;
      if (iVar4 << 0x10 <= (int)(uVar7 << 0x10)) {
        iVar3 = (int)sVar5 * (int)(short)uVar6;
        iVar4 = (int)(short)uVar8;
        if (iVar4 == 0) {
          trap(0x1c00);
        }
        if ((iVar4 == -1) && (iVar3 == -0x80000000)) {
          trap(0x1800);
        }
        sVar2 = (short)(iVar3 / iVar4);
        iVar4 = (int)*(short *)(param_1 + 0x32);
        iVar3 = (int)*(short *)(param_3 + 0x30);
        if (iVar4 + -0x20 < iVar3 - sVar2) {
          if ((iVar3 - (sVar2 + 0x20) <= iVar4 + *(short *)(param_1 + 0x84)) &&
             ((*(byte *)(param_1 + 0x145) & 1) == 0)) {
            *(short *)(param_1 + 0x32) =
                 (*(short *)(param_3 + 0x30) - (sVar2 + 0x20)) - *(short *)(param_1 + 0x84);
            func_0x00022c78(param_1);
            *(undefined2 *)(param_1 + 0x48) = 0;
            if (*(char *)(param_2 + 3) != '\0') {
              *(short *)(param_2 + 0x60) = sVar5;
              func_0x00083f50((int)*(short *)(param_3 + 0xc));
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
            *(short *)(param_2 + 0x60) = -sVar5;
            iVar3 = func_0x00083f50((int)*(short *)(param_3 + 0xc));
            *(short *)(param_1 + 0x4c) = (short)(-iVar3 >> 4);
            iVar3 = func_0x00083e80((int)*(short *)(param_3 + 0xc));
            *(short *)(param_1 + 0x4a) = (short)(iVar3 >> 4);
            *(undefined2 *)(param_1 + 0x142) = *(undefined2 *)(param_3 + 0xc);
            *(undefined1 *)(param_2 + 0x29) = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
        }
        else if (iVar4 - ((int)*(short *)(param_1 + 0x86) - (int)*(short *)(param_1 + 0x84)) <=
                 iVar3 - (sVar2 + -0x20)) {
          DAT_1f800253 = 4;
          *(short *)(param_1 + 0x32) =
               (*(short *)(param_3 + 0x30) - (sVar2 + -0x20)) +
               (*(short *)(param_1 + 0x86) - *(short *)(param_1 + 0x84));
          if (*(short *)(param_1 + 0x4a) < 0) {
            *(undefined2 *)(param_1 + 0x4a) = 0;
          }
        }
      }
    }
  }
  return;
}

