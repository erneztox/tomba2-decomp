// FUN_80114f34

uint FUN_80114f34(undefined4 param_1,int param_2,undefined4 param_3)

{
  short sVar1;
  byte bVar2;
  ushort uVar3;
  undefined2 uVar4;
  uint uVar5;
  short *psVar6;
  int extraout_v1;
  uint extraout_v1_00;
  int iVar7;
  char cVar8;
  undefined1 *puVar9;
  undefined1 *unaff_s0;
  uint unaff_s1;
  short unaff_s2;
  int unaff_s3;
  undefined4 unaff_s4;
  undefined4 unaff_s5;
  
  unaff_s0[0x2a] = 3;
  *(undefined2 *)(unaff_s0 + 0x56) = 0x400;
  *(undefined2 *)(unaff_s0 + 0x40) = 0x78;
  func_0x80077c40();
  uVar5 = 4;
  iVar7 = extraout_v1;
  while( true ) {
    uVar3 = (ushort)param_3;
    cVar8 = (char)param_1;
    *(undefined4 *)(iVar7 + 0x1c) = unaff_s5;
    if (uVar5 != 0) break;
    *(undefined2 *)(iVar7 + 0x5c) = 0x347f;
    *(undefined1 *)(iVar7 + 0x5e) = 0;
    uVar5 = unaff_s1 + 1;
    do {
      do {
        unaff_s1 = uVar5;
        uVar3 = (ushort)unaff_s1;
        if (1 < (short)uVar3) {
          return (int)unaff_s2;
        }
        if ((unaff_s1 & 0xffff) == 0) {
          uVar5 = FUN_80126ec4();
          return uVar5;
        }
        bVar2 = *(byte *)(unaff_s3 + 0x183) >> 4;
        unaff_s0 = (undefined1 *)(uint)bVar2;
        uVar5 = unaff_s1 + 1;
      } while ((bVar2 & 2) == 0);
      unaff_s2 = unaff_s2 + -1;
      if ((bVar2 & 8) != 0) {
        param_2 = (int)(short)uVar3;
        uVar3 = bVar2 & 4;
        cVar8 = (char)unaff_s4;
        FUN_80121918();
        bVar2 = (char)unaff_s1 + 1;
        goto LAB_80126f58;
      }
      param_2 = 0;
      param_3 = 2;
      param_1 = unaff_s4;
      iVar7 = func_0x80072ddc();
      uVar5 = unaff_s1 + 1;
    } while (iVar7 == 0);
    *(undefined1 *)(iVar7 + 3) = 3;
    *(ushort *)(iVar7 + 0x68) = uVar3 | 2;
    uVar5 = (uint)unaff_s0 & 4;
  }
  *(undefined2 *)(iVar7 + 0x5c) = 0x343f;
  bVar2 = 4;
  *(undefined1 *)(iVar7 + 0x5e) = 4;
LAB_80126f58:
  unaff_s0[0x46] = bVar2 ^ 1;
  if (unaff_s0[0x46] != '\0') {
    unaff_s0[0x5e] = 3;
    param_2 = (uint)*(ushort *)(*(int *)(unaff_s0 + *(short *)(unaff_s0 + 0x6c) * 4 + 0xc0) + 0xc) +
              param_2;
    *(short *)(unaff_s0 + 0x6e) = (short)param_2;
    unaff_s0[5] = (char)param_2 + cVar8;
    *(undefined2 *)(unaff_s0 + 0xb8) = 3;
    *(ushort *)(unaff_s0 + 0xba) = uVar3;
    *(undefined2 *)(unaff_s0 + 0xbc) = *(undefined2 *)(unaff_s0 + 100);
    func_0x80042354();
    puVar9 = unaff_s0;
    uVar4 = func_0x80040cdc(unaff_s0,0,0x8014aa00);
    unaff_s0[0x70] = (char)unaff_s1;
    iVar7 = (extraout_v1_00 & 0xfff) - 0xc00;
    if (iVar7 < 0) {
      iVar7 = -iVar7;
    }
    *(undefined2 *)(unaff_s0 + 0x4e) = uVar4;
    *(short *)(unaff_s0 + 0x4e) = (short)(puVar9 + (0x400 - iVar7 >> 6) * -0x100);
    if ((int)(puVar9 + (0x400 - iVar7 >> 6) * -0x100) * 0x10000 < 1) {
      *(undefined2 *)(unaff_s0 + 0x4e) = 0;
      uVar5 = FUN_80142120();
      return uVar5;
    }
    return unaff_s1;
  }
  unaff_s0[0x5e] = 2;
  *(short *)(unaff_s0 + 0x6e) =
       *(short *)(*(int *)(unaff_s0 + *(short *)(unaff_s0 + 0x6c) * 4 + 0xc0) + 0xc) -
       (short)param_2;
  *(short *)(*(int *)(unaff_s0 + *(short *)(unaff_s0 + 0x6c) * 4 + 0xc0) + 0x14) =
       -*(short *)(*(int *)(unaff_s0 + *(short *)(unaff_s0 + 0x6c) * 4 + 0xc0) + 0x14);
  bVar2 = *(byte *)(*(int *)(unaff_s0 + *(short *)(unaff_s0 + 0x6c) * 4 + 0xc0) + 0x3e);
  if ((bVar2 & 1) != 0) {
    *(byte *)(*(int *)(unaff_s0 + *(short *)(unaff_s0 + 0x6c) * 4 + 0xc0) + 0x3e) = bVar2 | 0x80;
    uVar5 = FUN_80130054();
    return uVar5;
  }
  if ((bVar2 & 0x10) == 0) {
    if (((int)*(short *)(unaff_s0 + 0x62) & 0xff00U) != 0xff00) {
      uVar5 = (*(ushort *)(unaff_s0 + 0x62) & 0x7f00) >> 8;
      if ((*(short *)(unaff_s0 + 0x6c) == 3) && (((int)*(short *)(unaff_s0 + 0x62) & 0x8000U) == 0))
      {
        uVar5 = uVar5 + 1;
      }
      if (uVar5 < 5) {
        func_0x8004cbd8(unaff_s0,uVar5 + 1);
        iVar7 = *(int *)(unaff_s0 + *(short *)(unaff_s0 + 0x6c) * 4 + 0xc0);
        if ((*(byte *)(iVar7 + 0x3e) | 0x80) == 0) {
          uVar5 = 3;
          if (iVar7 != 2) {
            if (iVar7 != 3) goto LAB_801395bc;
            uVar5 = func_0x8007a624(unaff_s0);
          }
        }
        else {
          if (iVar7 != 0) {
LAB_801395bc:
            uVar5 = func_0x8009a450();
            return uVar5;
          }
          uVar5 = func_0x80051b70(unaff_s0,0xc,*(undefined1 *)((byte)unaff_s0[3] + 0x8014a9a8));
          if (uVar5 == 0) {
            unaff_s0[4] = unaff_s0[4] + '\x01';
            unaff_s0[0xbf] = (char)unaff_s1;
            *(undefined2 *)(unaff_s0 + 0x50) = 0;
            unaff_s0[0x29] = 0;
            *(undefined2 *)(unaff_s0 + 0x5a) = *(undefined2 *)(unaff_s0 + 0x56);
            unaff_s0[0x28] = unaff_s0[0x28] | 0x80;
            if (*(char *)((byte)unaff_s0[3] + 0x8014a9b0) != '\0') {
              unaff_s0[0x2a] = *(char *)((byte)unaff_s0[3] + 0x8014a9b0);
              psVar6 = (short *)((uint)(byte)unaff_s0[3] * 0xc + -0x7feb5648);
              sVar1 = *psVar6;
              if (*psVar6 != 0) {
                *(short *)(unaff_s0 + 0x60) = sVar1 - *(short *)(unaff_s0 + 0x2e);
                uVar5 = FUN_801390d8();
                return uVar5;
              }
              *(short *)(unaff_s0 + 0x60) = sVar1;
              sVar1 = *(short *)((uint)(byte)unaff_s0[3] * 0xc + -0x7feb5644);
              if (*(short *)((uint)(byte)unaff_s0[3] * 0xc + -0x7feb5644) != 0) {
                *(short *)(unaff_s0 + 100) = sVar1 - *(short *)(unaff_s0 + 0x36);
                uVar5 = FUN_8013911c();
                return uVar5;
              }
              *(short *)(unaff_s0 + 100) = sVar1;
              uVar5 = (uint)(byte)unaff_s0[3];
              *(undefined2 *)(unaff_s0 + 0x62) = *(undefined2 *)(uVar5 * 0xc + -0x7feb5646);
              unaff_s0[0x5f] = *(undefined1 *)(uVar5 * 0xc + -0x7feb5642);
              uVar3 = *(ushort *)(uVar5 * 0xc + -0x7feb5640);
              *(ushort *)(unaff_s0 + 0x82) = uVar3;
              iVar7 = (uint)uVar3 << 0x10;
              *(short *)(unaff_s0 + 0x80) = (short)((iVar7 >> 0x10) - (iVar7 >> 0x1f) >> 1);
              uVar3 = *(ushort *)((uint)(byte)unaff_s0[3] * 0xc + -0x7feb563e);
              *unaff_s0 = 1;
              *(ushort *)(unaff_s0 + 0x86) = uVar3;
              iVar7 = (uint)uVar3 << 0x10;
              *(short *)(unaff_s0 + 0x84) = (short)((iVar7 >> 0x10) - (iVar7 >> 0x1f) >> 1);
            }
            uVar5 = 0x80110000;
            if ((byte)unaff_s0[3] < 6) {
                    /* WARNING: Jumptable at 0x8013025c did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
              uVar5 = (**(code **)((uint)(byte)unaff_s0[3] * 4 + -0x7fef60bc))();
              return uVar5;
            }
          }
        }
        return uVar5;
      }
      *(byte *)(*(int *)(unaff_s0 + *(short *)(unaff_s0 + 0x6c) * 4 + 0xc0) + 0x3e) =
           *(byte *)(*(int *)(unaff_s0 + *(short *)(unaff_s0 + 0x6c) * 4 + 0xc0) + 0x3e) | 0x10;
    }
  }
  if (unaff_s0[1] != '\0') {
    uVar5 = func_0x80074590(0x83,0,0);
    return uVar5;
  }
  unaff_s0[6] = unaff_s0[6] + '\x01';
  uVar5 = FUN_801303f8(0x83);
  return uVar5;
}

