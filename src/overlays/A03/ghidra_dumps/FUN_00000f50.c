// FUN_00000f50

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000f50(void)

{
  short sVar1;
  byte bVar2;
  short sVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  byte *pbVar9;
  int iVar10;
  uint *puVar11;
  uint *puVar12;
  int iVar13;
  
  puVar11 = _DAT_800bf544;
  if (*(char *)(_DAT_1f800208 + 4) == '\x01') {
    iVar13 = *(short *)(_DAT_1f800208 + 0x6c) * 0xb;
    if (iVar13 < 0) {
      iVar13 = iVar13 + 0x1ff;
    }
    iVar13 = iVar13 >> 9;
    if (0x77f < *(short *)(_DAT_1f800208 + 0x6c)) goto LAB_00000ff8;
    iVar4 = func_0x0009a450();
    iVar13 = iVar13 + -2 + (iVar4 >> 0xe);
    if (-1 < iVar13) goto LAB_00000ff8;
  }
  iVar13 = 0;
LAB_00000ff8:
  iVar10 = 0;
  pbVar9 = &DAT_80111b40;
  iVar4 = 0xf00000;
  do {
    puVar12 = puVar11;
    uVar6 = (uint)*pbVar9;
    iVar8 = (int)(short)iVar13;
    if (uVar6 == 0) {
      trap(0x1c00);
    }
    if ((uVar6 == 0xffffffff) && (iVar8 == -0x80000000)) {
      trap(0x1800);
    }
    puVar12[1] = 0x64808080;
    puVar12[2] = iVar4 >> 0x10 | 0xc80000;
    iVar13 = (iVar8 / (int)uVar6) * 10;
    puVar12[3] = (uint)*(ushort *)(iVar13 + -0x7feee656) << 0x10 |
                 (int)*(short *)(iVar13 + -0x7feee65c) << 8 | (int)*(short *)(iVar13 + -0x7feee65e);
    puVar12[4] = (int)*(short *)(iVar13 + -0x7feee658) << 0x10 |
                 (int)*(short *)(iVar13 + -0x7feee65a);
    iVar13 = _DAT_800ed8c8;
    *puVar12 = *(uint *)(_DAT_800ed8c8 + 0xc) | 0x4000000;
    *(uint **)(iVar13 + 0xc) = puVar12;
    puVar11 = puVar12 + 5;
    uVar6 = (uint)*pbVar9;
    iVar10 = iVar10 + 1;
    iVar13 = iVar8 % (int)uVar6;
    if (uVar6 == 0) {
      trap(0x1c00);
    }
    if ((uVar6 == 0xffffffff) && (iVar8 == -0x80000000)) {
      trap(0x1800);
    }
    iVar4 = iVar4 + 0x100000;
    pbVar9 = pbVar9 + 1;
  } while (iVar10 < 3);
  puVar12[6] = 0x64808080;
  puVar12[7] = 0xc80120;
  puVar12[8] = (uint)_DAT_80111a0e << 0x10 | (int)_DAT_80111a08 << 8 | (int)_DAT_80111a06;
  puVar12[9] = (int)_DAT_80111a0c << 0x10 | (int)_DAT_80111a0a;
  iVar13 = _DAT_800ed8c8;
  *puVar11 = *(uint *)(_DAT_800ed8c8 + 0xc) | 0x4000000;
  *(uint **)(iVar13 + 0xc) = puVar11;
  puVar11 = puVar12 + 10;
  func_0x00083de0(puVar11,0,0,0xe,0);
  iVar13 = _DAT_800ed8c8;
  *puVar11 = *(uint *)(_DAT_800ed8c8 + 0xc) | 0x2000000;
  *(uint **)(iVar13 + 0xc) = puVar11;
  bVar2 = DAT_800bf9f8;
  if (DAT_1f800135 != '\0') {
    bVar2 = DAT_800bf9f8 | DAT_800e7eab;
  }
  uVar6 = 0;
  iVar13 = 0x100000;
  puVar11 = puVar12 + 0xd;
  do {
    puVar12 = puVar11;
    iVar4 = _DAT_80111b44;
    uVar5 = 0x64800000;
    if (((int)(uint)bVar2 >> (uVar6 & 0x1f) & 1U) == 0) {
      uVar5 = 0x66800000;
    }
    puVar12[1] = uVar5 | 0x8080;
    puVar12[2] = iVar13 >> 0x10 | 0xc80000;
    iVar4 = (iVar4 >> 2) * 10;
    puVar12[3] = (uint)*(ushort *)(iVar4 + -0x7feee69c) << 0x10 |
                 (int)*(short *)(iVar4 + -0x7feee6a2) << 8 | (int)*(short *)(iVar4 + -0x7feee6a4);
    puVar12[4] = (int)*(short *)(iVar4 + -0x7feee69e) << 0x10 | (int)*(short *)(iVar4 + -0x7feee6a0)
    ;
    iVar4 = _DAT_800ed8c8;
    *puVar12 = *(uint *)(_DAT_800ed8c8 + 0xc) | 0x4000000;
    *(uint **)(iVar4 + 0xc) = puVar12;
    iVar13 = iVar13 + 0x100000;
    uVar6 = uVar6 + 1;
    puVar11 = puVar12 + 5;
  } while ((int)uVar6 < 5);
  _DAT_80111b44 = _DAT_80111b44 + 1;
  if (0x57 < _DAT_80111b44) {
    _DAT_80111b44 = 0x48;
  }
  func_0x00083de0(puVar11,0,0,0x6e,0);
  iVar13 = _DAT_800ed8c8;
  *puVar11 = *(uint *)(_DAT_800ed8c8 + 0xc) | 0x2000000;
  *(uint **)(iVar13 + 0xc) = puVar11;
  puVar11 = puVar12 + 8;
  if ((_DAT_1f80020c & 7) != 0) {
    iVar13 = (_DAT_1f80020c & 7) - 1;
    if (2 < iVar13) {
      puVar12[9] = 0x66808080;
      iVar13 = iVar13 * 10;
      puVar12[10] = 0x380020;
      puVar12[0xb] = (uint)*(ushort *)(iVar13 + -0x7feee69c) << 0x10 |
                     (int)*(short *)(iVar13 + -0x7feee6a2) << 8 |
                     (int)*(short *)(iVar13 + -0x7feee6a4);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    iVar13 = iVar13 * 10;
    sVar1 = *(short *)(iVar13 + -0x7feee6a0);
    puVar12[9] = 0x66808080;
    iVar4 = 0x140 - sVar1;
    puVar12[10] = (iVar4 - (iVar4 >> 0x1f)) * 0x8000 >> 0x10 | 0x380000;
    puVar12[0xb] = (uint)*(ushort *)(iVar13 + -0x7feee69c) << 0x10 |
                   (int)*(short *)(iVar13 + -0x7feee6a2) << 8 |
                   (int)*(short *)(iVar13 + -0x7feee6a4);
    puVar12[0xc] = (int)*(short *)(iVar13 + -0x7feee69e) << 0x10 |
                   (int)*(short *)(iVar13 + -0x7feee6a0);
    iVar13 = _DAT_800ed8c8;
    *puVar11 = *(uint *)(_DAT_800ed8c8 + 0xc) | 0x4000000;
    *(uint **)(iVar13 + 0xc) = puVar11;
    puVar11 = puVar12 + 0xd;
  }
  _DAT_800bf544 = puVar11;
  func_0x00083de0(puVar11,0,0,0x2e,0);
  iVar13 = _DAT_800ed8c8;
  *puVar11 = *(uint *)(_DAT_800ed8c8 + 0xc) | 0x2000000;
  *(uint **)(iVar13 + 0xc) = puVar11;
  sVar3 = _DAT_800e7ec0;
  sVar1 = _DAT_800bf9b8;
  puVar11[4] = 0x64808080;
  puVar11[5] = 0x200010;
  puVar11[6] = (uint)_DAT_80111a40 << 0x10 | (int)_DAT_80111a3a << 8 | (int)_DAT_80111a38;
  puVar11[7] = (int)_DAT_80111a3e << 0x10 | (int)_DAT_80111a3c;
  iVar13 = _DAT_800ed8c8;
  puVar11[3] = *(uint *)(_DAT_800ed8c8 + 0xc) | 0x4000000;
  *(uint **)(iVar13 + 0xc) = puVar11 + 3;
  puVar11[9] = 0x64808080;
  puVar11[10] = 0x200018;
  puVar11[0xb] = (uint)_DAT_80111a4a << 0x10 | (int)_DAT_80111a44 << 8 | (int)_DAT_80111a42;
  puVar11[0xc] = (int)_DAT_80111a48 << 0x10 | (int)_DAT_80111a46;
  iVar13 = _DAT_800ed8c8;
  puVar11[8] = *(uint *)(_DAT_800ed8c8 + 0xc) | 0x4000000;
  *(uint **)(iVar13 + 0xc) = puVar11 + 8;
  puVar11[0xe] = 0x64808080;
  puVar11[0xf] = 0x200020;
  puVar11[0x10] = (uint)_DAT_80111a54 << 0x10 | (int)_DAT_80111a4e << 8 | (int)_DAT_80111a4c;
  puVar11[0x11] = (int)_DAT_80111a52 << 0x10 | (int)_DAT_80111a50;
  iVar13 = _DAT_800ed8c8;
  puVar11[0xd] = *(uint *)(_DAT_800ed8c8 + 0xc) | 0x4000000;
  *(uint **)(iVar13 + 0xc) = puVar11 + 0xd;
  puVar11[0x13] = 0x64808080;
  puVar11[0x14] = 0x200028;
  puVar11[0x15] = (uint)_DAT_80111a5e << 0x10 | (int)_DAT_80111a58 << 8 | (int)_DAT_80111a56;
  puVar11[0x16] = (int)_DAT_80111a5c << 0x10 | (int)_DAT_80111a5a;
  iVar13 = _DAT_800ed8c8;
  puVar11[0x12] = *(uint *)(_DAT_800ed8c8 + 0xc) | 0x4000000;
  *(uint **)(iVar13 + 0xc) = puVar11 + 0x12;
  iVar10 = (int)sVar3;
  puVar11[0x18] = 0x64808080;
  puVar11[0x19] = 0x200038;
  iVar13 = ((((iVar10 / 0x708) * 0x10000 >> 0x10) % 10) * 0x10000 >> 0x10) * 10;
  puVar11[0x1a] =
       (uint)*(ushort *)(iVar13 + -0x7feee570) << 0x10 | (int)*(short *)(iVar13 + -0x7feee576) << 8
       | (int)*(short *)(iVar13 + -0x7feee578);
  puVar11[0x1b] =
       (int)*(short *)(iVar13 + -0x7feee572) << 0x10 | (int)*(short *)(iVar13 + -0x7feee574);
  iVar13 = _DAT_800ed8c8;
  puVar11[0x17] = *(uint *)(_DAT_800ed8c8 + 0xc) | 0x4000000;
  *(uint **)(iVar13 + 0xc) = puVar11 + 0x17;
  puVar11[0x1d] = 0x64808080;
  puVar11[0x1e] = 0x200040;
  puVar11[0x1f] = (uint)_DAT_80111a7c << 0x10 | (int)_DAT_80111a76 << 8 | (int)_DAT_80111a74;
  puVar11[0x20] = (int)_DAT_80111a7a << 0x10 | (int)_DAT_80111a78;
  iVar13 = _DAT_800ed8c8;
  puVar11[0x1c] = *(uint *)(_DAT_800ed8c8 + 0xc) | 0x4000000;
  *(uint **)(iVar13 + 0xc) = puVar11 + 0x1c;
  iVar4 = (((iVar10 / 0x1e) * 0x10000 >> 0x10) % 0x3c) * 0x10000 >> 0x10;
  puVar11[0x22] = 0x64808080;
  puVar11[0x23] = 0x200048;
  iVar13 = ((((iVar4 / 10) * 0x10000 >> 0x10) % 10) * 0x10000 >> 0x10) * 10;
  puVar11[0x24] =
       (uint)*(ushort *)(iVar13 + -0x7feee570) << 0x10 | (int)*(short *)(iVar13 + -0x7feee576) << 8
       | (int)*(short *)(iVar13 + -0x7feee578);
  puVar11[0x25] =
       (int)*(short *)(iVar13 + -0x7feee572) << 0x10 | (int)*(short *)(iVar13 + -0x7feee574);
  iVar13 = _DAT_800ed8c8;
  puVar11[0x21] = *(uint *)(_DAT_800ed8c8 + 0xc) | 0x4000000;
  *(uint **)(iVar13 + 0xc) = puVar11 + 0x21;
  iVar13 = ((iVar4 % 10) * 0x10000 >> 0x10) * 10;
  puVar11[0x27] = 0x64808080;
  puVar11[0x28] = 0x200050;
  puVar11[0x29] =
       (uint)*(ushort *)(iVar13 + -0x7feee570) << 0x10 | (int)*(short *)(iVar13 + -0x7feee576) << 8
       | (int)*(short *)(iVar13 + -0x7feee578);
  puVar11[0x2a] =
       (int)*(short *)(iVar13 + -0x7feee572) << 0x10 | (int)*(short *)(iVar13 + -0x7feee574);
  iVar13 = _DAT_800ed8c8;
  puVar11[0x26] = *(uint *)(_DAT_800ed8c8 + 0xc) | 0x4000000;
  *(uint **)(iVar13 + 0xc) = puVar11 + 0x26;
  puVar11[0x2c] = 0x64808080;
  puVar11[0x2d] = 0x200058;
  puVar11[0x2e] = (uint)_DAT_80111a86 << 0x10 | (int)_DAT_80111a80 << 8 | (int)_DAT_80111a7e;
  puVar11[0x2f] = (int)_DAT_80111a84 << 0x10 | (int)_DAT_80111a82;
  iVar13 = _DAT_800ed8c8;
  puVar11[0x2b] = *(uint *)(_DAT_800ed8c8 + 0xc) | 0x4000000;
  *(uint **)(iVar13 + 0xc) = puVar11 + 0x2b;
  iVar4 = ((((iVar10 % 0x1e) * 0x10000 >> 0x10) * 100) / 0x1e) * 0x10000 >> 0x10;
  puVar11[0x31] = 0x64808080;
  puVar11[0x32] = 0x200060;
  iVar13 = ((((iVar4 / 10) * 0x10000 >> 0x10) % 10) * 0x10000 >> 0x10) * 10;
  puVar11[0x33] =
       (uint)*(ushort *)(iVar13 + -0x7feee570) << 0x10 | (int)*(short *)(iVar13 + -0x7feee576) << 8
       | (int)*(short *)(iVar13 + -0x7feee578);
  puVar11[0x34] =
       (int)*(short *)(iVar13 + -0x7feee572) << 0x10 | (int)*(short *)(iVar13 + -0x7feee574);
  iVar13 = _DAT_800ed8c8;
  puVar11[0x30] = *(uint *)(_DAT_800ed8c8 + 0xc) | 0x4000000;
  *(uint **)(iVar13 + 0xc) = puVar11 + 0x30;
  iVar13 = ((iVar4 % 10) * 0x10000 >> 0x10) * 10;
  puVar11[0x36] = 0x64808080;
  puVar11[0x37] = 0x200068;
  puVar11[0x38] =
       (uint)*(ushort *)(iVar13 + -0x7feee570) << 0x10 | (int)*(short *)(iVar13 + -0x7feee576) << 8
       | (int)*(short *)(iVar13 + -0x7feee578);
  puVar11[0x39] =
       (int)*(short *)(iVar13 + -0x7feee572) << 0x10 | (int)*(short *)(iVar13 + -0x7feee574);
  iVar13 = _DAT_800ed8c8;
  puVar11[0x35] = *(uint *)(_DAT_800ed8c8 + 0xc) | 0x4000000;
  *(uint **)(iVar13 + 0xc) = puVar11 + 0x35;
  iVar13 = (int)sVar1;
  puVar12 = puVar11 + 0x3a;
  if (iVar13 != 0) {
    puVar11[0x3b] = 0x64808080;
    puVar11[0x3c] = 0x2000d0;
    puVar11[0x3d] = (uint)_DAT_80111a68 << 0x10 | (int)_DAT_80111a62 << 8 | (int)_DAT_80111a60;
    puVar11[0x3e] = (int)_DAT_80111a66 << 0x10 | (int)_DAT_80111a64;
    iVar4 = _DAT_800ed8c8;
    *puVar12 = *(uint *)(_DAT_800ed8c8 + 0xc) | 0x4000000;
    *(uint **)(iVar4 + 0xc) = puVar12;
    puVar11[0x40] = 0x64808080;
    puVar11[0x41] = 0x2000d8;
    puVar11[0x42] = (uint)_DAT_80111a5e << 0x10 | (int)_DAT_80111a58 << 8 | (int)_DAT_80111a56;
    puVar11[0x43] = (int)_DAT_80111a5c << 0x10 | (int)_DAT_80111a5a;
    iVar4 = _DAT_800ed8c8;
    puVar11[0x3f] = *(uint *)(_DAT_800ed8c8 + 0xc) | 0x4000000;
    *(uint **)(iVar4 + 0xc) = puVar11 + 0x3f;
    puVar11[0x45] = 0x64808080;
    puVar11[0x46] = 0x2000e0;
    puVar11[0x47] = (uint)_DAT_80111a72 << 0x10 | (int)_DAT_80111a6c << 8 | (int)_DAT_80111a6a;
    puVar11[0x48] = (int)_DAT_80111a70 << 0x10 | (int)_DAT_80111a6e;
    iVar4 = _DAT_800ed8c8;
    puVar11[0x44] = *(uint *)(_DAT_800ed8c8 + 0xc) | 0x4000000;
    *(uint **)(iVar4 + 0xc) = puVar11 + 0x44;
    puVar11[0x4a] = 0x64808080;
    puVar11[0x4b] = 0x2000e8;
    puVar11[0x4c] = (uint)_DAT_80111a40 << 0x10 | (int)_DAT_80111a3a << 8 | (int)_DAT_80111a38;
    puVar11[0x4d] = (int)_DAT_80111a3e << 0x10 | (int)_DAT_80111a3c;
    iVar4 = _DAT_800ed8c8;
    puVar11[0x49] = *(uint *)(_DAT_800ed8c8 + 0xc) | 0x4000000;
    *(uint **)(iVar4 + 0xc) = puVar11 + 0x49;
    puVar11[0x4f] = 0x64808080;
    puVar11[0x50] = 0x2000f8;
    iVar4 = ((((iVar13 / 0x708) * 0x10000 >> 0x10) % 10) * 0x10000 >> 0x10) * 10;
    puVar11[0x51] =
         (uint)*(ushort *)(iVar4 + -0x7feee570) << 0x10 | (int)*(short *)(iVar4 + -0x7feee576) << 8
         | (int)*(short *)(iVar4 + -0x7feee578);
    puVar11[0x52] =
         (int)*(short *)(iVar4 + -0x7feee572) << 0x10 | (int)*(short *)(iVar4 + -0x7feee574);
    iVar4 = _DAT_800ed8c8;
    puVar11[0x4e] = *(uint *)(_DAT_800ed8c8 + 0xc) | 0x4000000;
    *(uint **)(iVar4 + 0xc) = puVar11 + 0x4e;
    puVar11[0x54] = 0x64808080;
    puVar11[0x55] = 0x200100;
    puVar11[0x56] = (uint)_DAT_80111a7c << 0x10 | (int)_DAT_80111a76 << 8 | (int)_DAT_80111a74;
    puVar11[0x57] = (int)_DAT_80111a7a << 0x10 | (int)_DAT_80111a78;
    iVar4 = _DAT_800ed8c8;
    puVar11[0x53] = *(uint *)(_DAT_800ed8c8 + 0xc) | 0x4000000;
    *(uint **)(iVar4 + 0xc) = puVar11 + 0x53;
    iVar4 = (((iVar13 / 0x1e) * 0x10000 >> 0x10) % 0x3c) * 0x10000 >> 0x10;
    puVar11[0x59] = 0x64808080;
    puVar11[0x5a] = 0x200108;
    iVar13 = ((((iVar4 / 10) * 0x10000 >> 0x10) % 10) * 0x10000 >> 0x10) * 10;
    puVar11[0x5b] =
         (uint)*(ushort *)(iVar13 + -0x7feee570) << 0x10 |
         (int)*(short *)(iVar13 + -0x7feee576) << 8 | (int)*(short *)(iVar13 + -0x7feee578);
    puVar11[0x5c] =
         (int)*(short *)(iVar13 + -0x7feee572) << 0x10 | (int)*(short *)(iVar13 + -0x7feee574);
    iVar13 = _DAT_800ed8c8;
    puVar11[0x58] = *(uint *)(_DAT_800ed8c8 + 0xc) | 0x4000000;
    *(uint **)(iVar13 + 0xc) = puVar11 + 0x58;
    iVar13 = ((iVar4 % 10) * 0x10000 >> 0x10) * 10;
    puVar11[0x5e] = 0x64808080;
    puVar11[0x5f] = 0x200110;
    puVar11[0x60] =
         (uint)*(ushort *)(iVar13 + -0x7feee570) << 0x10 |
         (int)*(short *)(iVar13 + -0x7feee576) << 8 | (int)*(short *)(iVar13 + -0x7feee578);
    puVar11[0x61] =
         (int)*(short *)(iVar13 + -0x7feee572) << 0x10 | (int)*(short *)(iVar13 + -0x7feee574);
    iVar13 = _DAT_800ed8c8;
    puVar11[0x5d] = *(uint *)(_DAT_800ed8c8 + 0xc) | 0x4000000;
    *(uint **)(iVar13 + 0xc) = puVar11 + 0x5d;
    puVar11[99] = 0x64808080;
    puVar11[100] = 0x200118;
    puVar11[0x65] = (uint)_DAT_80111a86 << 0x10 | (int)_DAT_80111a80 << 8 | (int)_DAT_80111a7e;
    puVar11[0x66] = (int)_DAT_80111a84 << 0x10 | (int)_DAT_80111a82;
    iVar13 = _DAT_800ed8c8;
    puVar11[0x62] = *(uint *)(_DAT_800ed8c8 + 0xc) | 0x4000000;
    *(uint **)(iVar13 + 0xc) = puVar11 + 0x62;
    iVar4 = (((((int)sVar1 % 0x1e) * 0x10000 >> 0x10) * 100) / 0x1e) * 0x10000 >> 0x10;
    puVar11[0x68] = 0x64808080;
    puVar11[0x69] = 0x200120;
    iVar13 = ((((iVar4 / 10) * 0x10000 >> 0x10) % 10) * 0x10000 >> 0x10) * 10;
    puVar11[0x6a] =
         (uint)*(ushort *)(iVar13 + -0x7feee570) << 0x10 |
         (int)*(short *)(iVar13 + -0x7feee576) << 8 | (int)*(short *)(iVar13 + -0x7feee578);
    puVar11[0x6b] =
         (int)*(short *)(iVar13 + -0x7feee572) << 0x10 | (int)*(short *)(iVar13 + -0x7feee574);
    iVar13 = _DAT_800ed8c8;
    puVar11[0x67] = *(uint *)(_DAT_800ed8c8 + 0xc) | 0x4000000;
    *(uint **)(iVar13 + 0xc) = puVar11 + 0x67;
    iVar13 = ((iVar4 % 10) * 0x10000 >> 0x10) * 10;
    puVar11[0x6d] = 0x64808080;
    puVar11[0x6e] = 0x200128;
    puVar11[0x6f] =
         (uint)*(ushort *)(iVar13 + -0x7feee570) << 0x10 |
         (int)*(short *)(iVar13 + -0x7feee576) << 8 | (int)*(short *)(iVar13 + -0x7feee578);
    puVar11[0x70] =
         (int)*(short *)(iVar13 + -0x7feee572) << 0x10 | (int)*(short *)(iVar13 + -0x7feee574);
    iVar13 = _DAT_800ed8c8;
    puVar11[0x6c] = *(uint *)(_DAT_800ed8c8 + 0xc) | 0x4000000;
    *(uint **)(iVar13 + 0xc) = puVar11 + 0x6c;
    puVar12 = puVar11 + 0x71;
  }
  _DAT_800bf544 = puVar12;
  func_0x00083de0(puVar12,0,0,0x1f,0);
  iVar13 = _DAT_800ed8c8;
  *puVar12 = *(uint *)(_DAT_800ed8c8 + 0xc) | 0x2000000;
  *(uint **)(iVar13 + 0xc) = puVar12;
  _DAT_800bf544 = puVar12 + 3;
  if (DAT_800bf909 != -1) {
    iVar13 = (int)_DAT_800bf9f6;
    uVar6 = (_DAT_800e7ec0 * 0x11) / iVar13;
    if (iVar13 == 0) {
      trap(0x1c00);
    }
    if ((iVar13 == -1) && (_DAT_800e7ec0 * 0x11 == -0x80000000)) {
      trap(0x1800);
    }
    iVar13 = 8 - ((int)uVar6 >> 1);
    uVar6 = (uVar6 ^ 1) & 1;
    if (iVar13 < 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (8 < iVar13) {
      uVar6 = 0;
      iVar13 = 8;
    }
    iVar4 = 7;
    _DAT_1f800080 = 3;
    _DAT_1f800084 = 0x10000;
    _DAT_1f800088 = 0x10000;
    _DAT_1f80008c = 0x1c;
    _DAT_1f80008e = 0xc0;
    _DAT_1f800090 = 0;
    do {
      if (0 < iVar13) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (iVar13 == 0) {
        uVar7 = 0;
        if ((uVar6 != 0) && (uVar7 = 1, (_DAT_1f80017c & 1) == 0)) {
          uVar7 = 0;
        }
        func_0x00109e20(iVar4,uVar7);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      func_0x00109e20(iVar4,0);
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
    func_0x00027a4c(0x80111af0,_DAT_80111aec);
  }
  return;
}

