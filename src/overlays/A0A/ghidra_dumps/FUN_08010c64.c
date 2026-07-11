// FUN_08010c64

/* WARNING: Control flow encountered bad instruction data */

void FUN_08010c64(int param_1,int param_2,int param_3)

{
  short sVar1;
  undefined1 uVar2;
  ushort uVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  short sVar7;
  int iVar8;
  int iVar9;
  
  iVar9 = (uint)*(ushort *)(param_1 + 0x2e) - (uint)*(ushort *)(param_3 + 0x2c);
  iVar5 = iVar9 * 0x10000 >> 0x10;
  iVar8 = (uint)*(ushort *)(param_1 + 0x36) - (uint)*(ushort *)(param_3 + 0x34);
  iVar6 = iVar8 * 0x10000 >> 0x10;
  uVar3 = func_0x00084080(iVar5 * iVar5 + iVar6 * iVar6);
  if ((int)(uint)uVar3 <= (int)*(short *)(param_1 + 0x80) + (int)*(short *)(param_2 + 0x80)) {
    iVar5 = 0;
    if ((*(char *)(param_1 + 5) != '\x0f') && (iVar5 = 0x24, -1 < *(short *)(param_1 + 0x17e))) {
      iVar5 = 0x48;
    }
    iVar6 = (uint)*(ushort *)(param_1 + 0x32) - (uint)*(ushort *)(param_3 + 0x30);
    if ((int)(iVar6 + (uint)*(ushort *)(param_2 + 0x84) +
                      ((uint)*(ushort *)(param_1 + 0x84) - iVar5) & 0xffff) <=
        (int)*(short *)(param_1 + 0x86) + iVar5 * -2 + (int)*(short *)(param_2 + 0x86)) {
      if (iVar6 * 0x10000 < 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      sVar7 = ((*(short *)(param_2 + 0x86) - *(ushort *)(param_2 + 0x84)) +
              (*(short *)(param_1 + 0x86) - *(ushort *)(param_1 + 0x84))) - (short)iVar5;
      sVar4 = func_0x00085690(-(int)(short)iVar8,(int)(short)iVar9);
      if (((int)*(short *)(param_2 + 0x80) + (int)*(short *)(param_1 + 0x80)) - (int)(short)uVar3 <
          (int)sVar7 - (int)(short)iVar6) {
        iVar5 = func_0x00083f50((int)sVar4);
        sVar7 = *(short *)(param_1 + 0x80);
        sVar1 = *(short *)(param_2 + 0x80);
        iVar6 = func_0x00083e80((int)sVar4);
        sVar4 = *(short *)(param_2 + 0x80);
        *(short *)(param_1 + 0x2e) =
             *(short *)(param_3 + 0x2c) + (short)(iVar5 * ((int)sVar7 + (int)sVar1) >> 0xc);
        *(short *)(param_1 + 0x36) =
             *(short *)(param_3 + 0x34) -
             (short)(iVar6 * ((int)*(short *)(param_1 + 0x80) + (int)sVar4) >> 0xc);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (sVar7 < 1) {
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
          }
          *(int *)(param_1 + 0x30) = ((*(int *)(param_3 + 0x30) + (int)sVar7) - iVar5) * 0x10000;
          halt_baddata();
        }
      }
      else {
        DAT_1f800253 = 4;
        *(int *)(param_1 + 0x30) = (*(int *)(param_3 + 0x30) + (int)sVar7) * 0x10000;
        if ((*(char *)(param_1 + 0x145) == '\x01') && (*(short *)(param_1 + 0x4a) < 0)) {
          *(undefined2 *)(param_1 + 0x4a) = 0;
        }
      }
    }
  }
  return;
}

