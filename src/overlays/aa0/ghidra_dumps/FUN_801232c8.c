// FUN_801232c8

void FUN_801232c8(void)

{
  ushort uVar1;
  short sVar2;
  int in_v0;
  int iVar3;
  int iVar4;
  short sVar5;
  int unaff_s0;
  int iVar6;
  int unaff_s2;
  int iVar7;
  int unaff_s5;
  int iVar8;
  int unaff_s7;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  
  *(undefined1 *)(unaff_s5 + 0x2b) = 0;
  if (unaff_s2 <= in_v0) {
    iVar8 = -0x7feb6050;
    do {
      if ((int)(*(byte *)(unaff_s5 + 8) - 2) <= unaff_s2) break;
      iVar6 = *(int *)(unaff_s5 + unaff_s2 * 4 + 0xc0);
      *(short *)(iVar6 + 2) = *(short *)(iVar6 + 2) + *(short *)(iVar6 + 0x12);
      *(short *)(iVar6 + 0x12) = *(short *)(iVar6 + 0x12) + *(short *)(iVar6 + 0x10);
      if ((*(short *)(iVar8 + 4) < *(short *)(iVar6 + 2)) &&
         (*(undefined2 *)(iVar6 + 2) = *(undefined2 *)(iVar8 + 4), *(short *)(iVar6 + 0x16) == 0)) {
        func_0x80074590(0x85,0xfffffff6,0x1b);
        return;
      }
      unaff_s2 = unaff_s2 + 1;
      iVar8 = iVar8 + 0x10;
    } while (unaff_s2 <= *(short *)(unaff_s5 + 0x40));
    iVar8 = 2;
    if (1 < *(short *)(unaff_s5 + 0x40)) {
      do {
        if ((int)(*(byte *)(unaff_s5 + 8) - 2) <= iVar8) break;
        iVar6 = *(int *)(unaff_s5 + iVar8 * 4 + 0xc0);
        sVar2 = *(short *)(iVar6 + 0x16);
        if (sVar2 != 0) {
          if (sVar2 == 1) {
            uVar1 = *(ushort *)(iVar6 + 0x14);
            iVar8 = uVar1 - 0x40;
            *(short *)(iVar6 + 0x14) = (short)iVar8;
            *(ushort *)(iVar6 + 0xc) = *(short *)(iVar6 + 0xc) + uVar1;
            if (iVar8 * 0x10000 >> 0x10 < -0x40) {
              *(undefined2 *)(iVar6 + 0x14) = 0x20;
              *(short *)(iVar6 + 0x16) = *(short *)(iVar6 + 0x16) + 1;
              FUN_8012c584();
              return;
            }
LAB_801235e8:
            *(undefined1 *)(unaff_s5 + 0x2b) = 1;
            iVar8 = func_0x80083e80();
            *(short *)(iVar6 + 0x32) =
                 *(short *)(iVar6 + 0x60) + (short)(iVar8 * *(short *)(iVar6 + 0x4a) >> 0xc);
            *(undefined2 *)(unaff_s0 + 0x4e) = *(undefined2 *)(iVar6 + 0x2e);
            *(short *)(unaff_s0 + 0x50) = *(short *)(iVar6 + 0x32) + 0x3c;
            *(undefined2 *)(unaff_s0 + 0x52) = *(undefined2 *)(iVar6 + 0x36);
            FUN_8013ecf8();
            return;
          }
          if (sVar2 == 2) {
            sVar2 = *(short *)(iVar6 + 0x14);
            sVar5 = sVar2 + -0x20;
            *(short *)(iVar6 + 0x14) = sVar5;
            *(short *)(iVar6 + 0xc) = *(short *)(iVar6 + 0xc) + sVar2;
            if (sVar5 < -0x20) {
              iVar7 = 0x400;
              if (iVar8 < 6) {
                iVar8 = 0;
                unaff_s0 = 0x4000000;
                do {
                  iVar3 = func_0x80083f50(unaff_s0 >> 0x10);
                  iVar4 = func_0x80083e80(unaff_s0 >> 0x10);
                  iVar7 = iVar7 + 0x199;
                  in_stack_00000010._2_2_ = *(short *)(iVar6 + 0x2c) + (short)(iVar3 * 200 >> 0xc);
                  in_stack_00000014._2_2_ = *(short *)(iVar6 + 0x30) + 0x5a;
                  in_stack_00000018._2_2_ = *(short *)(iVar6 + 0x34) - (short)(iVar4 * 300 >> 0xc);
                  iVar3 = func_0x8003116c(0,&stack0x00000010,0xffffff9c);
                  iVar8 = iVar8 + 1;
                  *(byte *)(iVar3 + 0x28) = *(byte *)(iVar3 + 0x28) | 0x80;
                  unaff_s0 = iVar7 * 0x10000;
                } while (iVar8 < 5);
              }
              *(short *)(iVar6 + 0x16) = *(short *)(iVar6 + 0x16) + 1;
            }
            goto LAB_801235e8;
          }
          if (iVar8 == *(byte *)(unaff_s5 + 8) - 3) {
            *(char *)(unaff_s5 + 6) = *(char *)(unaff_s5 + 6) + '\x01';
            DAT_800bf9de = 0x14;
          }
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 <= *(short *)(unaff_s5 + 0x40));
    }
  }
  uVar1 = *(short *)(unaff_s5 + 0x42) + 1;
  *(ushort *)(unaff_s5 + 0x42) = uVar1;
  if ((uVar1 & *(ushort *)(unaff_s5 + 0x62)) == 0) {
    sVar2 = *(short *)(unaff_s5 + 0x40) + 1;
    *(short *)(unaff_s5 + 0x40) = sVar2;
    if (7 < sVar2) {
      FUN_8012c610();
      return;
    }
    if (4 < sVar2) {
      *(undefined2 *)(unaff_s5 + 0x62) = 0xf;
    }
  }
  if (*(char *)(unaff_s5 + 0x2b) == '\0') {
    if (*(char *)(unaff_s7 + 0x76) == '\0') {
      *(undefined2 *)(unaff_s5 + 0x60) = 0;
      FUN_8012c6ac();
      return;
    }
    *(undefined1 *)(unaff_s7 + 0x76) = 3;
    FUN_8012c090();
    return;
  }
  if (*(short *)(unaff_s5 + 0x60) == 0) {
    *(undefined1 *)(unaff_s7 + 0x76) = 1;
    *(undefined2 *)(unaff_s5 + 0x60) = 1;
  }
  *(undefined1 *)(unaff_s5 + 0x2b) = 0;
  FUN_8012c6ac();
  return;
}

