// FUN_80116304

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_80116304(int param_1)

{
  undefined2 uVar1;
  short sVar2;
  uint uVar3;
  uint in_v1;
  int iVar4;
  uint uVar5;
  int iVar6;
  int unaff_s0;
  int unaff_s1;
  int iVar7;
  uint unaff_s2;
  
  uVar3 = (uint)(unaff_s0 < 2);
  if (uVar3 != 0) {
    in_v1 = 0x1f800000;
    if (unaff_s0 != 0) goto LAB_8011f97c;
    iVar4 = (int)_DAT_1f800162;
    sVar2 = *(short *)(unaff_s1 + 0x32) + 0x10;
    *(short *)(unaff_s1 + 0x32) = sVar2;
    if ((int)sVar2 < iVar4 + -500) goto LAB_801169d8;
    uVar3 = *(byte *)(unaff_s1 + 6) + 1;
    *(char *)(unaff_s1 + 6) = (char)uVar3;
    goto LAB_8011f974;
  }
  uVar3 = 4;
  param_1 = unaff_s1;
  if (unaff_s0 != 2) {
    if (unaff_s0 == 4) {
      FUN_80120498();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
      switch(*(undefined1 *)(unaff_s1 + 7)) {
      case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      default:
        return;
      }
    }
    goto LAB_8011f97c;
  }
  FUN_80120498();
  uVar5 = (uint)*(byte *)(unaff_s1 + 7);
  uVar3 = (uint)(uVar5 < 2);
  if (uVar5 == unaff_s2) {
LAB_80116578:
    if (*(short *)(unaff_s1 + 0x44) < 0x4000) {
      *(short *)(unaff_s1 + 0x44) = *(short *)(unaff_s1 + 0x44) + 0x200;
    }
    iVar4 = (uint)*(ushort *)(unaff_s1 + 0x42) -
            ((int)((uint)*(ushort *)(unaff_s1 + 0x44) << 0x10) >> 0x18);
    *(short *)(unaff_s1 + 0x42) = (short)iVar4;
    if (-1 < iVar4 * 0x10000) {
LAB_801169d8:
      func_0x80076d68();
      return;
    }
    if (*(short *)(unaff_s1 + 0x52) < 0) {
      *(short *)(unaff_s1 + 0x52) = -*(short *)(unaff_s1 + 0x52);
    }
    uVar3 = *(byte *)(unaff_s1 + 7) + 1;
    *(char *)(unaff_s1 + 7) = (char)uVar3;
  }
  else if (uVar3 == 0) {
    if (uVar5 == 2) {
      *(short *)(unaff_s1 + 0x58) = *(short *)(unaff_s1 + 0x58) - *(short *)(unaff_s1 + 0x52);
      if (0x800 < *(short *)(unaff_s1 + 0x44)) {
        *(short *)(unaff_s1 + 0x44) = *(short *)(unaff_s1 + 0x44) + -0x400;
      }
      if (*(short *)(unaff_s1 + 0x58) < -0x180) {
        *(undefined2 *)(unaff_s1 + 0x58) = 0xfe80;
        *(undefined2 *)(unaff_s1 + 0x40) = 3;
        *(undefined1 *)(unaff_s1 + 6) = 4;
        *(undefined1 *)(unaff_s1 + 7) = 0;
        *(undefined1 *)(unaff_s1 + 0x5e) = 0;
        func_0x80077c40();
      }
      param_1 = (int)*(short *)(unaff_s1 + 0x58);
      iVar4 = func_0x80083e80();
      uVar3 = iVar4 >> 4;
      *(short *)(unaff_s1 + 0x4a) = (short)uVar3;
    }
  }
  else if (uVar5 == 0) {
    if (*(short *)(unaff_s1 + 0x58) != *(short *)(unaff_s1 + 0x6a)) {
      param_1 = (int)*(short *)(unaff_s1 + 0x52);
      iVar4 = (uint)*(ushort *)(unaff_s1 + 0x40) - (uint)*(ushort *)(unaff_s1 + 0x52);
      *(short *)(unaff_s1 + 0x40) = (short)iVar4;
      if ((iVar4 * 0x10000 >> 0x10) * param_1 < 0) {
        *(undefined2 *)(unaff_s1 + 0x58) = *(undefined2 *)(unaff_s1 + 0x6a);
        *(char *)(unaff_s1 + 7) = *(char *)(unaff_s1 + 7) + '\x01';
        iVar4 = *(int *)(param_1 + 0xf0);
        iVar6 = *(int *)(param_1 + 0xc0);
        iVar7 = *(int *)(param_1 + 0x10);
        iVar4 = func_0x800779d0(param_1,(*(int *)(iVar4 + 0x2c) - *(int *)(iVar6 + 0x2c)) * 0x8000
                                        >> 0x10,
                                (*(int *)(iVar4 + 0x30) - *(int *)(iVar6 + 0x30)) * 0x8000 >> 0x10,
                                (*(int *)(iVar4 + 0x34) - *(int *)(iVar6 + 0x34)) * 0x8000 >> 0x10);
        if ((iVar4 != 0) || ((iVar7 != 0 && (*(char *)(iVar7 + 1) != '\0')))) {
          *(undefined1 *)(param_1 + 1) = 1;
          *(char *)(param_1 + 8) = *(char *)(param_1 + 8) + '\x01';
          func_0x800517f8(param_1);
          if (iVar7 != 0) {
            *(undefined2 *)(iVar7 + 0x36) = *(undefined2 *)(*(int *)(param_1 + 0xf0) + 0x34);
            *(undefined2 *)(param_1 + 0x4e) = *(undefined2 *)(param_1 + 0x60);
            *(undefined2 *)(param_1 + 0x50) = *(undefined2 *)(param_1 + 0x62);
            uVar1 = *(undefined2 *)(iVar7 + 0x36);
            *(int *)(param_1 + 0x14) = param_1 + 0x66;
            *(undefined2 *)(param_1 + 0x52) = uVar1;
            *(undefined2 *)(param_1 + 0x66) = *(undefined2 *)(*(int *)(param_1 + 0xf0) + 0x2c);
            *(undefined2 *)(param_1 + 0x68) = *(undefined2 *)(*(int *)(param_1 + 0xf0) + 0x30);
            *(undefined2 *)(param_1 + 0x6a) = *(undefined2 *)(*(int *)(param_1 + 0xf0) + 0x34);
          }
          *(char *)(param_1 + 8) = *(char *)(param_1 + 8) + -1;
        }
        return;
      }
      *(short *)(unaff_s1 + 0x58) = *(short *)(unaff_s1 + 0x58) + *(short *)(unaff_s1 + 0x52);
    }
    goto LAB_80116578;
  }
LAB_8011f974:
  in_v1 = (uint)*(byte *)(uVar3 + 0x5e);
  uVar3 = 2;
LAB_8011f97c:
  if (in_v1 == uVar3) {
    *(undefined1 *)(param_1 + 0xb) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
  }
  FUN_801281b8();
  return;
}

