// FUN_8010e320

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

undefined1 * FUN_8010e320(byte *param_1,undefined4 param_2,undefined1 *param_3)

{
  byte bVar1;
  short sVar2;
  short sVar3;
  ushort uVar4;
  ushort uVar5;
  int iVar6;
  undefined1 *puVar7;
  uint uVar8;
  byte *unaff_s0;
  ushort *puVar9;
  int unaff_s2;
  int unaff_s4;
  
  if (param_1 == (byte *)0x1) {
    iVar6 = -(int)*(short *)(unaff_s2 + 0x4e) + 0x70;
    if (iVar6 < 0) {
      iVar6 = -(int)*(short *)(unaff_s2 + 0x4e) + 0x7f;
    }
    *(short *)(unaff_s2 + 0x4e) = *(short *)(unaff_s2 + 0x4e) + (short)(iVar6 >> 4);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
    switch(*(undefined1 *)(unaff_s2 + 3)) {
    case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    sVar2 = *(short *)(unaff_s2 + 0x32);
    iVar6 = func_0x80083f50((int)*(short *)(unaff_s2 + 0x70));
    param_1 = (byte *)((int)sVar2 + (iVar6 >> 5));
    sVar2 = *(short *)(unaff_s2 + 0x32);
    iVar6 = func_0x8009a450();
    *(short *)(unaff_s2 + 0x70) = *(short *)(unaff_s2 + 0x70) + (short)(iVar6 >> 9);
    iVar6 = (int)param_1 - (int)*(short *)(unaff_s2 + 0x32);
    if (iVar6 < 0) {
      iVar6 = iVar6 + 0x1f;
    }
    iVar6 = (uint)*(ushort *)(unaff_s2 + 0x32) + (iVar6 >> 5);
    *(short *)(unaff_s2 + 0x32) = (short)iVar6;
    *(short *)(unaff_s2 + 0x58) = ((short)((uint)(iVar6 * 0x10000) >> 0x10) - sVar2) * 0x10;
    if ((*(ushort *)(unaff_s2 + 0x66) & 1) != 0) {
      iVar6 = func_0x80083e80((int)*(short *)(unaff_s2 + 100) -
                              (*(short *)(unaff_s2 + 0x56) + -0x800));
      *(short *)(unaff_s2 + 0x56) = *(short *)(unaff_s2 + 0x56) + (short)(iVar6 >> 5);
      uVar4 = FUN_80117188();
      if ((undefined1 *)(int)(short)uVar4 != (undefined1 *)0x0) {
        return (undefined1 *)(int)(short)uVar4;
      }
      uVar5 = *(short *)(unaff_s2 + 0x42) - 1;
      *(ushort *)(unaff_s2 + 0x42) = uVar5;
      if (0 < (int)((uint)uVar5 << 0x10)) {
LAB_8010e614:
        return (undefined1 *)(int)(short)uVar4;
      }
      iVar6 = func_0x800781e0((int)*(short *)(unaff_s2 + 0x2e) - (int)_DAT_1f800160,
                              (int)*(short *)(unaff_s2 + 0x36) - (int)_DAT_1f800164);
      if ((((int)_DAT_800e7ffe & 0x8200U) == 0) && (iVar6 < 0x641)) {
        if (900 < iVar6) {
          return &DAT_80130000;
        }
        if (300 < iVar6) {
          return &DAT_80130000;
        }
        iVar6 = func_0x8009a450();
        param_1 = &DAT_80130000;
        if (*(char *)((iVar6 >> 8 & 0xfU) + 0x80135c18) != '\0') {
          uVar8 = func_0x8009a450();
          uVar4 = (ushort)*(byte *)((uVar8 & 0xf) + 0x80135c28);
          goto LAB_8010e614;
        }
      }
      else {
        if (param_1[0x71] != 0xff) {
          return (undefined1 *)0xff;
        }
        func_0x80040d68(iVar6,*(undefined4 *)((uint)param_1[0x5e] * 4 + -0x7fec8eec));
      }
      param_1[5] = 2;
      param_1[0x70] = 1;
      return (undefined1 *)0x1;
    }
    sVar2 = *(short *)(unaff_s2 + 100);
    sVar3 = *(short *)(unaff_s2 + 0x56);
    *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(sVar2 + 0x38);
    puVar7 = (undefined1 *)func_0x800519e0((int)sVar3,0xf,*(undefined4 *)(sVar2 + 0x3c),0x8013581c);
    if (puVar7 != (undefined1 *)0x0) {
      return puVar7;
    }
    param_2 = 0x801393c0;
    param_3 = &DAT_80130000;
    unaff_s0 = param_1;
  }
  func_0x80040cdc(param_1,param_2,param_3 + 0x7124);
  if (DAT_800bf910 != -1) {
    unaff_s0[0x5e] = 0;
    func_0x80041718(unaff_s0,0xd,0);
    unaff_s0[0x56] = 0;
    unaff_s0[0x57] = 8;
    *unaff_s0 = 9;
    unaff_s0[0x80] = 0xb4;
    unaff_s0[0x81] = 0;
    unaff_s0[0x82] = 0x68;
    unaff_s0[0x83] = 1;
    unaff_s0[0x84] = 0x78;
    unaff_s0[0x85] = 0;
    unaff_s0[0x54] = 0;
    unaff_s0[0x55] = 0;
    unaff_s0[0x58] = 0;
    unaff_s0[0x59] = 0;
    unaff_s0[0xb] = 0;
    unaff_s0[0x86] = 0xf0;
    unaff_s0[0x87] = 0;
    unaff_s0[0x2b] = 0;
    unaff_s0[0x29] = 0;
    unaff_s0[0x14] = 0;
    unaff_s0[0x15] = 0;
    unaff_s0[0x16] = 0;
    unaff_s0[0x17] = 0;
    unaff_s0[4] = unaff_s0[4] + 1;
    return (undefined1 *)0xf0;
  }
  unaff_s0[0x5e] = 1;
  unaff_s0[0x6c] = 0x50;
  unaff_s0[0x6d] = 0;
  unaff_s0[0x6e] = 0;
  unaff_s0[0x6f] = 0;
  unaff_s0[0x7c] = 0;
  unaff_s0[0x7d] = 0;
  unaff_s0[0x7e] = 0;
  unaff_s0[0x7f] = 0;
  unaff_s0[0x7a] = 0;
  unaff_s0[0x7b] = 0;
  unaff_s0[0x40] = 0;
  unaff_s0[0x41] = 0;
  unaff_s0[0x42] = 0;
  unaff_s0[0x43] = 0;
  unaff_s0[0xe] = 0;
  unaff_s0[0xf] = 0;
  puVar9 = *(ushort **)((uint)unaff_s0[3] * 4 + -0x7fec86dc);
  if (unaff_s0[0x47] != 3) {
    puVar9 = puVar9 + (uint)unaff_s0[0x47] * 0xb;
  }
  iVar6 = func_0x8007aae8(unaff_s0,0);
  *(int *)(unaff_s0 + 0xc0) = iVar6;
  *(undefined2 *)(iVar6 + 6) = 0xffff;
  **(undefined2 **)(unaff_s0 + 0xc0) = 0;
  *(undefined2 *)(*(int *)(unaff_s0 + 0xc0) + 4) = 0;
  *(undefined2 *)(*(int *)(unaff_s0 + 0xc0) + 8) = 0;
  *(undefined2 *)(*(int *)(unaff_s0 + 0xc0) + 10) = 0;
  *(undefined2 *)(*(int *)(unaff_s0 + 0xc0) + 0xc) = 0;
  *(undefined4 *)(*(int *)(unaff_s0 + 0xc0) + 0x40) = 0;
  *(ushort *)(unaff_s0 + 0x88) = *puVar9;
  *(ushort *)(unaff_s0 + 0x8a) = puVar9[1];
  *(ushort *)(unaff_s0 + 0x8c) = puVar9[2];
  *(ushort *)(unaff_s0 + 0x54) = puVar9[3];
  *(ushort *)(unaff_s0 + 0x56) = puVar9[4];
  *(ushort *)(unaff_s0 + 0x58) = puVar9[5];
  *(ushort *)(*(int *)(unaff_s0 + 0xc0) + 0x3a) = puVar9[6];
  *(ushort *)(unaff_s0 + 0x80) = puVar9[7];
  *(ushort *)(unaff_s0 + 0x82) = puVar9[8];
  *(ushort *)(unaff_s0 + 0x84) = puVar9[9];
  bVar1 = unaff_s0[0x47];
  uVar8 = (uint)bVar1;
  *(ushort *)(unaff_s0 + 0x86) = puVar9[10];
  if (uVar8 == 2) {
    *(ushort *)(*(int *)(unaff_s0 + 0xc0) + 2) = *(ushort *)(*(int *)(unaff_s0 + 0xc0) + 0x3a) >> 1;
    if (*(short *)(unaff_s0 + 0x82) != 0) {
LAB_80120678:
      unaff_s0[0x4a] = 0;
      unaff_s0[0x4b] = 0;
      unaff_s0[0x50] = 0;
      unaff_s0[0x51] = 2;
      *(undefined2 *)(*(int *)(unaff_s0 + 0xc0) + 0x16) =
           *(undefined2 *)(*(int *)(unaff_s0 + 0xc0) + 0x3a);
      *(undefined2 *)(*(int *)(unaff_s0 + 0xc0) + 0x12) = 0;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
      switch(unaff_s0[3]) {
      case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      default:
        *(undefined2 *)(unaff_s0 + 0x78) = *(undefined2 *)(*(int *)(unaff_s0 + 0xc0) + 2);
        puVar7 = (undefined1 *)FUN_801291f4();
        return puVar7;
      }
    }
    *unaff_s0 = bVar1;
  }
  else {
    if (uVar8 == 0) {
      *(undefined2 *)(*(int *)(unaff_s0 + 0xc0) + 2) = 0x140;
      uVar8 = 0;
      goto LAB_801295f4;
    }
    if (uVar8 != 1) {
      *(undefined2 *)(*(int *)(unaff_s0 + 0xc0) + 2) = 0x140;
      goto LAB_80120678;
    }
    *(undefined2 *)(*(int *)(unaff_s0 + 0xc0) + 2) = 0x140;
    *(ushort *)(unaff_s0 + 0x70) = *(short *)(*(int *)(unaff_s0 + 0xc0) + 0x3a) + puVar9[-5];
  }
  while (FUN_80130d9c(uVar8), puVar9 < (ushort *)(unaff_s2 + 0x60)) {
    uVar8 = (uint)*puVar9;
    puVar9 = puVar9 + 1;
LAB_801295f4:
    uVar8 = FUN_80130838(unaff_s4 + uVar8 * 4 + 4);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

