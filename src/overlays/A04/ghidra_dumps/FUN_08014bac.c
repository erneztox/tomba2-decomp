// FUN_08014bac

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_08014bac(int param_1,int param_2,int param_3)

{
  short sVar1;
  short sVar2;
  undefined1 uVar3;
  ushort uVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  iVar9 = (uint)*(ushort *)(param_1 + 0x2e) - (uint)*(ushort *)(param_3 + 0x2c);
  iVar6 = iVar9 * 0x10000 >> 0x10;
  iVar8 = (uint)*(ushort *)(param_1 + 0x36) - (uint)*(ushort *)(param_3 + 0x34);
  iVar7 = iVar8 * 0x10000 >> 0x10;
  uVar4 = func_0x00084080(iVar6 * iVar6 + iVar7 * iVar7);
  if ((int)*(short *)(param_1 + 0x80) + (int)*(short *)(param_2 + 0x80) < (int)(uint)uVar4) {
    return 0;
  }
  iVar6 = 0;
  if ((*(char *)(param_1 + 5) != '\x0f') && (iVar6 = 0x24, -1 < *(short *)(param_1 + 0x17e))) {
    iVar6 = 0x48;
  }
  iVar7 = (uint)*(ushort *)(param_1 + 0x32) - (uint)*(ushort *)(param_3 + 0x30);
  if ((int)(iVar7 + (uint)*(ushort *)(param_2 + 0x84) + ((uint)*(ushort *)(param_1 + 0x84) - iVar6)
           & 0xffff) <=
      (int)*(short *)(param_1 + 0x86) + iVar6 * -2 + (int)*(short *)(param_2 + 0x86)) {
    if (iVar7 * 0x10000 < 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    iVar7 = (((uint)*(ushort *)(param_2 + 0x86) - (uint)*(ushort *)(param_2 + 0x84)) +
            ((uint)*(ushort *)(param_1 + 0x86) - (uint)*(ushort *)(param_1 + 0x84))) - iVar6;
    sVar5 = func_0x00085690(-(int)(short)iVar8,(int)(short)iVar9);
    if ((*(char *)(param_1 + 0x78) == '\0') && (*(short *)(param_1 + 0x16e) != 0)) {
      if ((int)(short)uVar4 <=
          (int)*(short *)(param_2 + 0x80) + (int)*(short *)(param_1 + 0x80) + -0x14) {
        sVar1 = (short)iVar7;
        if (0 < iVar7 * 0x10000) {
          DAT_1f800253 = 4;
          *(short *)(param_1 + 0x32) = *(short *)(param_3 + 0x30) + sVar1;
          if (*(short *)(param_1 + 0x4a) < 0) {
            *(undefined2 *)(param_1 + 0x4a) = 0;
          }
          return 3;
        }
        if ((*(byte *)(param_1 + 0x145) & 1) != 0) {
          return 0;
        }
        func_0x00022c78(param_1);
        if (*(char *)(param_1 + 0x78) != '\0') {
          *(short *)(param_1 + 0x32) = (*(short *)(param_3 + 0x30) + sVar1) - (short)iVar6;
          halt_baddata();
        }
        iVar6 = func_0x00077768((int)sVar5,(int)*(short *)(param_2 + 0x56),0);
        uVar3 = 3;
        if (iVar6 == 0) {
          uVar3 = 2;
        }
        *(undefined1 *)(param_1 + 0x16a) = uVar3;
        func_0x00054e24(param_1,0,0);
        if (*(char *)(param_1 + 5) != '\x0f') {
          sVar5 = 0x37;
          if (-1 < *(short *)(param_1 + 0x17e)) {
            sVar5 = 0x6e;
          }
          *(short *)(param_1 + 0x32) =
               *(short *)(param_3 + 0x30) - (sVar5 + *(short *)(param_2 + 0x84));
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      iVar6 = func_0x00077768((int)sVar5,(int)*(short *)(param_2 + 0x56),0);
      if (iVar6 != 0) {
        func_0x00083f50(*(short *)(param_2 + 0x56) + 0x800);
        halt_baddata();
      }
    }
    else {
      iVar6 = func_0x00077768((int)sVar5,(int)*(short *)(param_2 + 0x56),0);
      if (iVar6 != 0) {
        func_0x00083f50(*(short *)(param_2 + 0x56) + 0x800);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    iVar6 = func_0x00083f50((int)*(short *)(param_2 + 0x56));
    sVar5 = *(short *)(param_1 + 0x80);
    sVar1 = *(short *)(param_2 + 0x80);
    iVar7 = func_0x00083e80((int)*(short *)(param_2 + 0x56));
    sVar2 = *(short *)(param_2 + 0x80);
    *(short *)(param_1 + 0x2e) =
         *(short *)(param_3 + 0x2c) + (short)((uint)(iVar6 * ((int)sVar5 + (int)sVar1)) >> 0xc);
    sVar5 = *(short *)(param_3 + 0x34);
    *(undefined2 *)(param_1 + 0x44) = 0;
    *(short *)(param_1 + 0x36) =
         sVar5 - (short)((uint)(iVar7 * ((int)*(short *)(param_1 + 0x80) + (int)sVar2)) >> 0xc);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

