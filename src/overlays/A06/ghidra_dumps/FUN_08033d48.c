// FUN_08033d48

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08033d48(void)

{
  byte bVar1;
  short sVar2;
  undefined2 in_v0;
  int iVar3;
  int iVar4;
  undefined1 *unaff_s3;
  int unaff_s4;
  int unaff_s6;
  
  *(undefined2 *)(unaff_s3 + 0x32) = in_v0;
  if ((((int)_DAT_800e7ffe & 0x8200U) != 0) ||
     (iVar3 = (int)(((uint)_DAT_1f800160 - (uint)*(ushort *)(unaff_s3 + 0x2e)) * 0x10000) >> 0x10,
     iVar4 = (int)(((uint)_DAT_1f800164 - (uint)*(ushort *)(unaff_s3 + 0x36)) * 0x10000) >> 0x10,
     iVar3 = func_0x00084080(iVar3 * iVar3 + iVar4 * iVar4), 400 < iVar3)) {
    return;
  }
  DAT_800bf841 = 1;
  func_0x0006e1c0(8);
  func_0x0006cba8(unaff_s3 + 0x2c);
  *(undefined4 *)(unaff_s3 + 0x14) = 0;
  iVar3 = -*(int *)(unaff_s4 + 0x34) + 0x4b1a;
  if (iVar3 < 0) {
    iVar3 = -*(int *)(unaff_s4 + 0x34) + 0x4b29;
  }
  *(short *)(unaff_s3 + 0x52) = (short)(iVar3 >> 4);
  unaff_s3[7] = 0;
  unaff_s3[6] = unaff_s3[6] + '\x01';
  func_0x0006cba8(unaff_s3 + 0x2c);
  sVar2 = *(short *)(unaff_s3 + 0x32);
  *(short *)(unaff_s3 + 0x32) = sVar2 + 0x10;
  if (-0xd99 < (short)(sVar2 + 0x10)) {
    *(undefined2 *)(unaff_s3 + 0x32) = 0xf268;
  }
  bVar1 = unaff_s3[7];
  if (bVar1 != 1) {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        halt_baddata();
      }
      *(short *)(*(int *)(unaff_s3 + 0xc0) + 2) = *(short *)(*(int *)(unaff_s3 + 0xc0) + 2) + 5;
      *(short *)(unaff_s3 + 0x36) = *(short *)(unaff_s3 + 0x36) + *(short *)(unaff_s3 + 0x52);
      if (-1 < *(short *)(*(int *)(unaff_s3 + 0xc0) + 2)) {
        unaff_s6 = unaff_s6 + 1;
        *(undefined2 *)(*(int *)(unaff_s3 + 0xc0) + 2) = 0;
        *(undefined2 *)(unaff_s3 + 0x36) = 0x4b1a;
      }
      sVar2 = *(short *)(unaff_s3 + 0x54);
      *(ushort *)(unaff_s3 + 0x54) = sVar2 - 0x40U;
      if ((int)((uint)(ushort)(sVar2 - 0x40U) << 0x10) < 1) {
        *(undefined2 *)(unaff_s3 + 0x54) = 0;
        unaff_s6 = unaff_s6 + 1;
      }
      if (unaff_s6 != 2) {
        halt_baddata();
      }
    }
    else {
      if (bVar1 != 2) {
        if (bVar1 != 3) {
          halt_baddata();
        }
        if (*(short *)(unaff_s3 + 0xe) != 0) {
          return;
        }
        *(undefined2 *)(unaff_s3 + 0x2e) = 0x2380;
        *(undefined2 *)(unaff_s3 + 0x36) = 0x4b1a;
        *(undefined4 *)(unaff_s3 + 0x10) = 0;
        *(undefined2 *)(unaff_s3 + 0x32) = 0xf268;
        **(undefined2 **)(unaff_s3 + 0xc0) = 0x8c;
        func_0x00041194();
        *(undefined2 *)(unaff_s3 + 0x32) = 0xf268;
        *(undefined2 *)(unaff_s3 + 0x60) = 0;
        *unaff_s3 = 1;
        unaff_s3[5] = 3;
        unaff_s3[6] = 0;
        DAT_800bf841 = 0;
        func_0x0006e1e4();
        func_0x0006ea00();
        func_0x00040c00(0x6b);
        return;
      }
      if (*(short *)(unaff_s3 + 0x32) != -0xd98) {
        return;
      }
      func_0x00074590(0x1c,0,0);
    }
    unaff_s3[7] = unaff_s3[7] + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  sVar2 = *(short *)(unaff_s3 + 0x56);
  *(short *)(unaff_s3 + 0x56) = sVar2 + -0x40;
  if (0x400 < (short)(sVar2 + -0x40)) {
    return;
  }
  *(undefined2 *)(unaff_s3 + 0x56) = 0x400;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

