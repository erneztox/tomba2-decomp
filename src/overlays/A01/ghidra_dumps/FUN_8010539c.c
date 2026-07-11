// FUN_8010539c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

ushort * FUN_8010539c(byte *param_1,int param_2)

{
  byte bVar1;
  short sVar2;
  short sVar3;
  ushort uVar4;
  ushort uVar5;
  ushort *puVar6;
  int iVar7;
  ushort *puVar8;
  uint uVar9;
  byte *pbVar10;
  int unaff_s4;
  
  puVar6 = (ushort *)func_0x8001f40c(param_1,param_2,0);
  if ((int)puVar6 < 0) {
    return puVar6;
  }
  pbVar10 = &DAT_1f800000;
  if ((*param_1 & 4) == 0) {
    iVar7 = func_0x80083f50(_DAT_1f80009c);
    pbVar10 = (byte *)(iVar7 * ((int)*(short *)(param_1 + 0x80) + (int)*(short *)(param_2 + 0x80))
                      >> 0xc);
    iVar7 = func_0x80083e80(_DAT_1f80009c);
    sVar2 = *(short *)(param_2 + 0x80);
    *(short *)(param_1 + 0x2e) = *(short *)(param_2 + 0x2e) + (short)pbVar10;
    *(short *)(param_1 + 0x36) =
         *(short *)(param_2 + 0x36) -
         (short)(iVar7 * ((int)*(short *)(param_1 + 0x80) + (int)sVar2) >> 0xc);
  }
  if (*(char *)(param_2 + 0x5e) == '\0') {
    param_1[0x2b] = (byte)(_DAT_1f80009c >> 4);
    iVar7 = func_0x80022d08(param_1,param_2,1,1);
    if (iVar7 == 0) {
      return (ushort *)0x0;
    }
    iVar7 = func_0x80058304(param_1,1);
  }
  else {
    if ((param_1[0x144] != 1) || (1 < (int)puVar6)) {
      if (((uint)puVar6 & 1) != 0) {
        return (ushort *)0x1;
      }
      param_1[0x60] = 1;
      iVar7 = func_0x80077768((int)_DAT_1f80009c,(int)*(short *)(param_1 + 0x140),1);
      param_1[0x5f] = (byte)(ushort *)(iVar7 + 2);
      return (ushort *)(iVar7 + 2);
    }
    iVar7 = func_0x8001fdb4(param_2,2,3,0x1e);
  }
  iVar7 = (int)pbVar10 - iVar7;
  if (iVar7 < 0) {
    iVar7 = iVar7 + 0x1f;
  }
  iVar7 = (uint)*(ushort *)(param_2 + 0x32) + (iVar7 >> 5);
  *(short *)(param_2 + 0x32) = (short)iVar7;
  *(short *)(param_2 + 0x58) = ((short)((uint)(iVar7 * 0x10000) >> 0x10) - (short)param_1) * 0x10;
  if ((*(ushort *)(param_2 + 0x66) & 1) != 0) {
    iVar7 = func_0x80083e80((int)*(short *)(param_2 + 100) - (*(short *)(param_2 + 0x56) + -0x800));
    *(short *)(param_2 + 0x56) = *(short *)(param_2 + 0x56) + (short)(iVar7 >> 5);
    uVar4 = FUN_80117188(param_2);
    if ((ushort *)(int)(short)uVar4 != (ushort *)0x0) {
      return (ushort *)(int)(short)uVar4;
    }
    uVar5 = *(short *)(param_2 + 0x42) - 1;
    *(ushort *)(param_2 + 0x42) = uVar5;
    if (0 < (int)((uint)uVar5 << 0x10)) {
LAB_8010e614:
      return (ushort *)(int)(short)uVar4;
    }
    iVar7 = func_0x800781e0((int)*(short *)(param_2 + 0x2e) - (int)_DAT_1f800160,
                            (int)*(short *)(param_2 + 0x36) - (int)_DAT_1f800164);
    if ((((int)_DAT_800e7ffe & 0x8200U) == 0) && (iVar7 < 0x641)) {
      if (900 < iVar7) {
        return (ushort *)&DAT_80130000;
      }
      if (300 < iVar7) {
        return (ushort *)&DAT_80130000;
      }
      iVar7 = func_0x8009a450();
      pbVar10 = &DAT_80130000;
      if (*(char *)((iVar7 >> 8 & 0xfU) + 0x80135c18) != '\0') {
        uVar9 = func_0x8009a450();
        uVar4 = (ushort)*(byte *)((uVar9 & 0xf) + 0x80135c28);
        goto LAB_8010e614;
      }
    }
    else {
      if (pbVar10[0x71] != 0xff) {
        return (ushort *)0xff;
      }
      func_0x80040d68(iVar7,*(undefined4 *)((uint)pbVar10[0x5e] * 4 + -0x7fec8eec));
    }
    pbVar10[5] = 2;
    pbVar10[0x70] = 1;
    return (ushort *)0x1;
  }
  sVar2 = *(short *)(param_2 + 100);
  sVar3 = *(short *)(param_2 + 0x56);
  *(undefined4 *)(pbVar10 + 0x3c) = *(undefined4 *)(sVar2 + 0x38);
  puVar8 = (ushort *)func_0x800519e0((int)sVar3,0xf,*(undefined4 *)(sVar2 + 0x3c),0x8013581c);
  if (puVar8 != (ushort *)0x0) {
    return puVar8;
  }
  func_0x80040cdc(pbVar10,0x801393c0,0x80137124);
  if (DAT_800bf910 != -1) {
    pbVar10[0x5e] = 0;
    func_0x80041718(pbVar10,0xd,0);
    pbVar10[0x56] = 0;
    pbVar10[0x57] = 8;
    *pbVar10 = 9;
    pbVar10[0x80] = 0xb4;
    pbVar10[0x81] = 0;
    pbVar10[0x82] = 0x68;
    pbVar10[0x83] = 1;
    pbVar10[0x84] = 0x78;
    pbVar10[0x85] = 0;
    pbVar10[0x54] = 0;
    pbVar10[0x55] = 0;
    pbVar10[0x58] = 0;
    pbVar10[0x59] = 0;
    pbVar10[0xb] = 0;
    pbVar10[0x86] = 0xf0;
    pbVar10[0x87] = 0;
    pbVar10[0x2b] = 0;
    pbVar10[0x29] = 0;
    pbVar10[0x14] = 0;
    pbVar10[0x15] = 0;
    pbVar10[0x16] = 0;
    pbVar10[0x17] = 0;
    pbVar10[4] = pbVar10[4] + 1;
    return (ushort *)0xf0;
  }
  pbVar10[0x5e] = 1;
  pbVar10[0x6c] = 0x50;
  pbVar10[0x6d] = 0;
  pbVar10[0x6e] = 0;
  pbVar10[0x6f] = 0;
  pbVar10[0x7c] = 0;
  pbVar10[0x7d] = 0;
  pbVar10[0x7e] = 0;
  pbVar10[0x7f] = 0;
  pbVar10[0x7a] = 0;
  pbVar10[0x7b] = 0;
  pbVar10[0x40] = 0;
  pbVar10[0x41] = 0;
  pbVar10[0x42] = 0;
  pbVar10[0x43] = 0;
  pbVar10[0xe] = 0;
  pbVar10[0xf] = 0;
  puVar8 = *(ushort **)((uint)pbVar10[3] * 4 + -0x7fec86dc);
  if (pbVar10[0x47] != 3) {
    puVar8 = puVar8 + (uint)pbVar10[0x47] * 0xb;
  }
  iVar7 = func_0x8007aae8(pbVar10,0);
  *(int *)(pbVar10 + 0xc0) = iVar7;
  *(undefined2 *)(iVar7 + 6) = 0xffff;
  **(undefined2 **)(pbVar10 + 0xc0) = 0;
  *(undefined2 *)(*(int *)(pbVar10 + 0xc0) + 4) = 0;
  *(undefined2 *)(*(int *)(pbVar10 + 0xc0) + 8) = 0;
  *(undefined2 *)(*(int *)(pbVar10 + 0xc0) + 10) = 0;
  *(undefined2 *)(*(int *)(pbVar10 + 0xc0) + 0xc) = 0;
  *(undefined4 *)(*(int *)(pbVar10 + 0xc0) + 0x40) = 0;
  *(ushort *)(pbVar10 + 0x88) = *puVar8;
  *(ushort *)(pbVar10 + 0x8a) = puVar8[1];
  *(ushort *)(pbVar10 + 0x8c) = puVar8[2];
  *(ushort *)(pbVar10 + 0x54) = puVar8[3];
  *(ushort *)(pbVar10 + 0x56) = puVar8[4];
  *(ushort *)(pbVar10 + 0x58) = puVar8[5];
  *(ushort *)(*(int *)(pbVar10 + 0xc0) + 0x3a) = puVar8[6];
  *(ushort *)(pbVar10 + 0x80) = puVar8[7];
  *(ushort *)(pbVar10 + 0x82) = puVar8[8];
  *(ushort *)(pbVar10 + 0x84) = puVar8[9];
  bVar1 = pbVar10[0x47];
  uVar9 = (uint)bVar1;
  *(ushort *)(pbVar10 + 0x86) = puVar8[10];
  if (uVar9 == 2) {
    *(ushort *)(*(int *)(pbVar10 + 0xc0) + 2) = *(ushort *)(*(int *)(pbVar10 + 0xc0) + 0x3a) >> 1;
    if (*(short *)(pbVar10 + 0x82) != 0) {
LAB_80120678:
      pbVar10[0x4a] = 0;
      pbVar10[0x4b] = 0;
      pbVar10[0x50] = 0;
      pbVar10[0x51] = 2;
      *(undefined2 *)(*(int *)(pbVar10 + 0xc0) + 0x16) =
           *(undefined2 *)(*(int *)(pbVar10 + 0xc0) + 0x3a);
      *(undefined2 *)(*(int *)(pbVar10 + 0xc0) + 0x12) = 0;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
      switch(pbVar10[3]) {
      case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      default:
        *(undefined2 *)(pbVar10 + 0x78) = *(undefined2 *)(*(int *)(pbVar10 + 0xc0) + 2);
        puVar6 = (ushort *)FUN_801291f4();
        return puVar6;
      }
    }
    *pbVar10 = bVar1;
  }
  else {
    if (uVar9 == 0) {
      *(undefined2 *)(*(int *)(pbVar10 + 0xc0) + 2) = 0x140;
      uVar9 = 0;
      goto LAB_801295f4;
    }
    if (uVar9 != 1) {
      *(undefined2 *)(*(int *)(pbVar10 + 0xc0) + 2) = 0x140;
      goto LAB_80120678;
    }
    *(undefined2 *)(*(int *)(pbVar10 + 0xc0) + 2) = 0x140;
    *(ushort *)(pbVar10 + 0x70) = *(short *)(*(int *)(pbVar10 + 0xc0) + 0x3a) + puVar8[-5];
  }
  while (FUN_80130d9c(uVar9), puVar8 < puVar6) {
    uVar9 = (uint)*puVar8;
    puVar8 = puVar8 + 1;
LAB_801295f4:
    uVar9 = FUN_80130838(unaff_s4 + uVar9 * 4 + 4);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

