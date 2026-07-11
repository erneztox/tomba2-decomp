// FUN_8010e4b0

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

undefined1 * FUN_8010e4b0(void)

{
  byte bVar1;
  short sVar2;
  short sVar3;
  short in_v0;
  ushort uVar4;
  ushort uVar5;
  undefined1 *puVar6;
  int iVar7;
  uint uVar8;
  byte *unaff_s0;
  short unaff_s1;
  ushort *puVar9;
  int unaff_s2;
  ushort *unaff_s3;
  int unaff_s4;
  
  *(short *)(unaff_s2 + 0x32) = in_v0;
  *(short *)(unaff_s2 + 0x58) = (in_v0 - unaff_s1) * 0x10;
  if ((*(ushort *)(unaff_s2 + 0x66) & 1) != 0) {
    iVar7 = func_0x80083e80((int)*(short *)(unaff_s2 + 100) - (*(short *)(unaff_s2 + 0x56) + -0x800)
                           );
    *(short *)(unaff_s2 + 0x56) = *(short *)(unaff_s2 + 0x56) + (short)(iVar7 >> 5);
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
    iVar7 = func_0x800781e0((int)*(short *)(unaff_s2 + 0x2e) - (int)_DAT_1f800160,
                            (int)*(short *)(unaff_s2 + 0x36) - (int)_DAT_1f800164);
    if ((((int)_DAT_800e7ffe & 0x8200U) == 0) && (iVar7 < 0x641)) {
      if (900 < iVar7) {
        return &DAT_80130000;
      }
      if (300 < iVar7) {
        return &DAT_80130000;
      }
      iVar7 = func_0x8009a450();
      unaff_s0 = &DAT_80130000;
      if (*(char *)((iVar7 >> 8 & 0xfU) + 0x80135c18) != '\0') {
        uVar8 = func_0x8009a450();
        uVar4 = (ushort)*(byte *)((uVar8 & 0xf) + 0x80135c28);
        goto LAB_8010e614;
      }
    }
    else {
      if (unaff_s0[0x71] != 0xff) {
        return (undefined1 *)0xff;
      }
      func_0x80040d68(iVar7,*(undefined4 *)((uint)unaff_s0[0x5e] * 4 + -0x7fec8eec));
    }
    unaff_s0[5] = 2;
    unaff_s0[0x70] = 1;
    return (undefined1 *)0x1;
  }
  sVar2 = *(short *)(unaff_s2 + 100);
  sVar3 = *(short *)(unaff_s2 + 0x56);
  *(undefined4 *)(unaff_s0 + 0x3c) = *(undefined4 *)(sVar2 + 0x38);
  puVar6 = (undefined1 *)func_0x800519e0((int)sVar3,0xf,*(undefined4 *)(sVar2 + 0x3c),0x8013581c);
  if (puVar6 != (undefined1 *)0x0) {
    return puVar6;
  }
  func_0x80040cdc();
  if (DAT_800bf910 != -1) {
    unaff_s0[0x5e] = 0;
    func_0x80041718();
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
  iVar7 = func_0x8007aae8();
  *(int *)(unaff_s0 + 0xc0) = iVar7;
  *(undefined2 *)(iVar7 + 6) = 0xffff;
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
        puVar6 = (undefined1 *)FUN_801291f4();
        return puVar6;
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
  while (FUN_80130d9c(uVar8), puVar9 < unaff_s3) {
    uVar8 = (uint)*puVar9;
    puVar9 = puVar9 + 1;
LAB_801295f4:
    uVar8 = FUN_80130838(unaff_s4 + uVar8 * 4 + 4);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

