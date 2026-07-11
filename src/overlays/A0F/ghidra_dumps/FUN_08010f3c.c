// FUN_08010f3c

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_08010f3c(int param_1,int param_2,int param_3)

{
  short sVar1;
  undefined1 uVar2;
  ushort uVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  
  iVar6 = func_0x00083e80((int)*(short *)(param_3 + 0xc));
  iVar7 = func_0x00083f50((int)*(short *)(param_2 + 0x56));
  iVar13 = (int)(short)(iVar6 * 0x6e >> 0xc);
  iVar6 = func_0x00083e80((int)*(short *)(param_2 + 0x56));
  iVar11 = (uint)*(ushort *)(param_3 + 0x2c) - (iVar7 * iVar13 >> 0xc);
  iVar9 = (uint)*(ushort *)(param_1 + 0x2e) - iVar11;
  iVar7 = iVar9 * 0x10000 >> 0x10;
  iVar10 = (uint)*(ushort *)(param_3 + 0x34) + (iVar6 * iVar13 >> 0xc);
  iVar13 = (uint)*(ushort *)(param_1 + 0x36) - iVar10;
  iVar6 = iVar13 * 0x10000 >> 0x10;
  uVar3 = func_0x00084080(iVar7 * iVar7 + iVar6 * iVar6);
  if ((int)*(short *)(param_1 + 0x80) + (int)*(short *)(param_2 + 0x80) < (int)(uint)uVar3) {
    return 0;
  }
  iVar6 = 0;
  if ((*(char *)(param_1 + 5) != '\x0f') && (iVar6 = 0x24, -1 < *(short *)(param_1 + 0x17e))) {
    iVar6 = 0x48;
  }
  iVar7 = func_0x00083f50((int)*(short *)(param_3 + 0xc));
  iVar7 = (uint)*(ushort *)(param_3 + 0x30) + (iVar7 * 0x6e >> 0xc);
  iVar12 = (uint)*(ushort *)(param_1 + 0x32) - iVar7;
  if ((int)(iVar12 + (uint)*(ushort *)(param_2 + 0x84) + ((uint)*(ushort *)(param_1 + 0x84) - iVar6)
           & 0xffff) <=
      (int)*(short *)(param_1 + 0x86) + iVar6 * -2 + (int)*(short *)(param_2 + 0x86)) {
    if (iVar12 * 0x10000 < 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    iVar12 = (((uint)*(ushort *)(param_2 + 0x86) - (uint)*(ushort *)(param_2 + 0x84)) +
             ((uint)*(ushort *)(param_1 + 0x86) - (uint)*(ushort *)(param_1 + 0x84))) - iVar6;
    sVar4 = func_0x00085690(-(int)(short)iVar13,(int)(short)iVar9);
    if (((*(short *)(param_1 + 0x16e) != 0) && (*(char *)(param_1 + 0x78) == '\0')) &&
       ((int)(short)uVar3 <=
        (int)*(short *)(param_2 + 0x80) + (int)*(short *)(param_1 + 0x80) + -0x14)) {
      sVar5 = (short)iVar7;
      sVar1 = (short)iVar12;
      if (iVar12 * 0x10000 < 1) {
        uVar8 = 0;
        if ((*(byte *)(param_1 + 0x145) & 1) == 0) {
          func_0x00022c78(param_1);
          if (*(char *)(param_1 + 0x78) == '\0') {
            iVar6 = func_0x00077768((int)sVar4,(int)*(short *)(param_2 + 0x56),0);
            uVar2 = 3;
            if (iVar6 == 0) {
              uVar2 = 2;
            }
            *(undefined1 *)(param_1 + 0x16a) = uVar2;
            func_0x00054e24(param_1,0,0);
            if (*(char *)(param_2 + 2) == '\x04') {
              *(undefined1 *)(param_2 + 0x46) = 0x1e;
            }
            sVar5 = sVar5 + sVar1;
            if (*(char *)(param_1 + 5) != '\x0f') {
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
          }
          else {
            sVar5 = (sVar5 + sVar1) - (short)iVar6;
          }
          *(short *)(param_1 + 0x32) = sVar5;
          halt_baddata();
        }
      }
      else {
        *(short *)(param_1 + 0x32) = sVar5 + sVar1;
        DAT_1f800253 = 4;
        uVar8 = 3;
        if ((*(char *)(param_1 + 0x145) == '\x01') && (uVar8 = 3, *(short *)(param_1 + 0x4a) < 0)) {
          *(undefined2 *)(param_1 + 0x4a) = 0;
        }
      }
      return uVar8;
    }
    iVar6 = func_0x00077768((int)sVar4,(int)*(short *)(param_2 + 0x56),0);
    if (iVar6 != 0) {
      func_0x00083f50(*(short *)(param_2 + 0x56) + 0x800);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    iVar6 = func_0x00083f50((int)*(short *)(param_2 + 0x56));
    sVar4 = *(short *)(param_1 + 0x80);
    sVar5 = *(short *)(param_2 + 0x80);
    iVar7 = func_0x00083e80((int)*(short *)(param_2 + 0x56));
    sVar1 = *(short *)(param_2 + 0x80);
    *(short *)(param_1 + 0x2e) =
         (short)iVar11 + (short)((uint)(iVar6 * ((int)sVar4 + (int)sVar5)) >> 0xc);
    *(short *)(param_1 + 0x36) =
         (short)iVar10 -
         (short)((uint)(iVar7 * ((int)*(short *)(param_1 + 0x80) + (int)sVar1)) >> 0xc);
    *(undefined2 *)(param_1 + 0x44) = 0;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

