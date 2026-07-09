// FUN_8012348c

void FUN_8012348c(uint param_1)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  short sVar6;
  int unaff_s0;
  int iVar7;
  int unaff_s2;
  int iVar8;
  int unaff_s5;
  int unaff_s6;
  int unaff_s7;
  int unaff_s8;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  
  iVar3 = unaff_s2 << 2;
  do {
    iVar7 = *(int *)(unaff_s5 + iVar3 + 0xc0);
    iVar3 = (int)*(short *)(iVar7 + 0x16);
    if (iVar3 != 0) {
      if (iVar3 == unaff_s6) {
        uVar1 = *(ushort *)(iVar7 + 0x14);
        iVar3 = uVar1 - 0x40;
        *(short *)(iVar7 + 0x14) = (short)iVar3;
        *(ushort *)(iVar7 + 0xc) = *(short *)(iVar7 + 0xc) + uVar1;
        if (iVar3 * 0x10000 >> 0x10 < -0x40) {
          *(undefined2 *)(iVar7 + 0x14) = 0x20;
          *(short *)(iVar7 + 0x16) = *(short *)(iVar7 + 0x16) + 1;
          FUN_8012c584();
          return;
        }
LAB_801235e8:
        *(char *)(unaff_s5 + 0x2b) = (char)unaff_s6;
        iVar3 = func_0x80083e80();
        *(short *)(iVar7 + 0x32) =
             *(short *)(iVar7 + 0x60) + (short)(iVar3 * *(short *)(iVar7 + 0x4a) >> 0xc);
        *(undefined2 *)(unaff_s0 + 0x4e) = *(undefined2 *)(iVar7 + 0x2e);
        *(short *)(unaff_s0 + 0x50) = *(short *)(iVar7 + 0x32) + 0x3c;
        *(undefined2 *)(unaff_s0 + 0x52) = *(undefined2 *)(iVar7 + 0x36);
        FUN_8013ecf8();
        return;
      }
      if (iVar3 == 2) {
        sVar2 = *(short *)(iVar7 + 0x14);
        sVar6 = sVar2 + -0x20;
        *(short *)(iVar7 + 0x14) = sVar6;
        *(short *)(iVar7 + 0xc) = *(short *)(iVar7 + 0xc) + sVar2;
        if (sVar6 < -0x20) {
          iVar3 = 0x400;
          if (unaff_s2 < 6) {
            iVar8 = 0;
            unaff_s0 = 0x4000000;
            do {
              iVar4 = func_0x80083f50(unaff_s0 >> 0x10);
              iVar5 = func_0x80083e80(unaff_s0 >> 0x10);
              iVar3 = iVar3 + 0x199;
              in_stack_00000010._2_2_ = *(short *)(iVar7 + 0x2c) + (short)(iVar4 * 200 >> 0xc);
              in_stack_00000014._2_2_ = *(short *)(iVar7 + 0x30) + 0x5a;
              in_stack_00000018._2_2_ = *(short *)(iVar7 + 0x34) - (short)(iVar5 * 300 >> 0xc);
              iVar4 = func_0x8003116c(0,&stack0x00000010,0xffffff9c);
              iVar8 = iVar8 + 1;
              *(byte *)(iVar4 + 0x28) = *(byte *)(iVar4 + 0x28) | 0x80;
              unaff_s0 = iVar3 * 0x10000;
            } while (iVar8 < 5);
          }
          *(short *)(iVar7 + 0x16) = *(short *)(iVar7 + 0x16) + 1;
        }
        goto LAB_801235e8;
      }
      if (unaff_s2 == param_1 - 3) {
        *(char *)(unaff_s5 + 6) = *(char *)(unaff_s5 + 6) + '\x01';
        *(undefined1 *)(unaff_s8 + 0x16e) = 0x14;
      }
    }
    unaff_s2 = unaff_s2 + 1;
    if (*(short *)(unaff_s5 + 0x40) < unaff_s2) break;
    param_1 = (uint)*(byte *)(unaff_s5 + 8);
    iVar3 = unaff_s2 * 4;
  } while (unaff_s2 < (int)(param_1 - 2));
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
  if (*(char *)(unaff_s5 + 0x2b) != '\0') {
    if (*(short *)(unaff_s5 + 0x60) == 0) {
      *(undefined1 *)(unaff_s7 + 0x76) = 1;
      *(undefined2 *)(unaff_s5 + 0x60) = 1;
    }
    *(undefined1 *)(unaff_s5 + 0x2b) = 0;
    FUN_8012c6ac();
    return;
  }
  if (*(char *)(unaff_s7 + 0x76) != '\0') {
    *(undefined1 *)(unaff_s7 + 0x76) = 3;
    FUN_8012c090();
    return;
  }
  *(undefined2 *)(unaff_s5 + 0x60) = 0;
  FUN_8012c6ac();
  return;
}

