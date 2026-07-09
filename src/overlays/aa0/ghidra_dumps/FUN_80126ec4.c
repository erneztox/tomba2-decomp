// FUN_80126ec4

void FUN_80126ec4(char param_1,undefined4 param_2,undefined2 param_3)

{
  byte bVar1;
  ushort uVar2;
  short sVar3;
  undefined2 uVar4;
  short *psVar5;
  uint uVar6;
  uint extraout_v1;
  int iVar7;
  undefined1 *puVar8;
  undefined1 *unaff_s0;
  undefined1 unaff_s1;
  
  *(undefined2 *)(*(int *)(unaff_s0 + *(short *)(unaff_s0 + 0x6c) * 4 + 0xc0) + 0x14) = 0x240;
  *(undefined2 *)(*(int *)(unaff_s0 + 0xc4) + 0x12) = 0x10;
  *(undefined2 *)(*(int *)(unaff_s0 + 0xc4) + 0x14) = 0xfff8;
  *(undefined2 *)(unaff_s0 + 0x74) = 1;
  if (unaff_s0[0x46] != '\0') {
    *(short *)(*(int *)(unaff_s0 + 0xc4) + 0x12) = -*(short *)(*(int *)(unaff_s0 + 0xc4) + 0x12);
    *(short *)(*(int *)(unaff_s0 + 0xc4) + 0x14) = -*(short *)(*(int *)(unaff_s0 + 0xc4) + 0x14);
  }
  if ((unaff_s0[0x47] & 1) == 0) {
    unaff_s0[0x46] = unaff_s0[0x46] ^ 1;
  }
  if (unaff_s0[0x46] != '\0') {
    unaff_s0[0x5e] = 3;
    sVar3 = *(short *)(*(int *)(unaff_s0 + *(short *)(unaff_s0 + 0x6c) * 4 + 0xc0) + 0xc) + 0x800;
    *(short *)(unaff_s0 + 0x6e) = sVar3;
    unaff_s0[5] = (char)sVar3 + param_1;
    *(undefined2 *)(unaff_s0 + 0xb8) = 3;
    *(undefined2 *)(unaff_s0 + 0xba) = param_3;
    *(undefined2 *)(unaff_s0 + 0xbc) = *(undefined2 *)(unaff_s0 + 100);
    func_0x80042354();
    puVar8 = unaff_s0;
    uVar4 = func_0x80040cdc();
    unaff_s0[0x70] = unaff_s1;
    iVar7 = (extraout_v1 & 0xfff) - 0xc00;
    if (iVar7 < 0) {
      iVar7 = -iVar7;
    }
    *(undefined2 *)(unaff_s0 + 0x4e) = uVar4;
    *(short *)(unaff_s0 + 0x4e) = (short)(puVar8 + (0x400 - iVar7 >> 6) * -0x100);
    if ((int)(puVar8 + (0x400 - iVar7 >> 6) * -0x100) * 0x10000 < 1) {
      *(undefined2 *)(unaff_s0 + 0x4e) = 0;
      FUN_80142120();
      return;
    }
    return;
  }
  unaff_s0[0x5e] = 2;
  *(short *)(unaff_s0 + 0x6e) =
       *(short *)(*(int *)(unaff_s0 + *(short *)(unaff_s0 + 0x6c) * 4 + 0xc0) + 0xc) + -0x800;
  *(short *)(*(int *)(unaff_s0 + *(short *)(unaff_s0 + 0x6c) * 4 + 0xc0) + 0x14) =
       -*(short *)(*(int *)(unaff_s0 + *(short *)(unaff_s0 + 0x6c) * 4 + 0xc0) + 0x14);
  bVar1 = *(byte *)(*(int *)(unaff_s0 + *(short *)(unaff_s0 + 0x6c) * 4 + 0xc0) + 0x3e);
  if ((bVar1 & 1) != 0) {
    *(byte *)(*(int *)(unaff_s0 + *(short *)(unaff_s0 + 0x6c) * 4 + 0xc0) + 0x3e) = bVar1 | 0x80;
    FUN_80130054();
    return;
  }
  if ((bVar1 & 0x10) == 0) {
    if (((int)*(short *)(unaff_s0 + 0x62) & 0xff00U) != 0xff00) {
      uVar6 = (*(ushort *)(unaff_s0 + 0x62) & 0x7f00) >> 8;
      if ((*(short *)(unaff_s0 + 0x6c) == 3) && (((int)*(short *)(unaff_s0 + 0x62) & 0x8000U) == 0))
      {
        uVar6 = uVar6 + 1;
      }
      if (uVar6 < 5) {
        func_0x8004cbd8();
        iVar7 = *(int *)(unaff_s0 + *(short *)(unaff_s0 + 0x6c) * 4 + 0xc0);
        if ((*(byte *)(iVar7 + 0x3e) | 0x80) == 0) {
          if (iVar7 != 2) {
            if (iVar7 != 3) goto LAB_801395bc;
            func_0x8007a624();
          }
        }
        else {
          if (iVar7 != 0) {
LAB_801395bc:
            func_0x8009a450();
            return;
          }
          iVar7 = func_0x80051b70();
          if (iVar7 == 0) {
            unaff_s0[4] = unaff_s0[4] + '\x01';
            unaff_s0[0xbf] = unaff_s1;
            *(undefined2 *)(unaff_s0 + 0x50) = 0;
            unaff_s0[0x29] = 0;
            *(undefined2 *)(unaff_s0 + 0x5a) = *(undefined2 *)(unaff_s0 + 0x56);
            unaff_s0[0x28] = unaff_s0[0x28] | 0x80;
            if (*(char *)((byte)unaff_s0[3] + 0x8014a9b0) != '\0') {
              unaff_s0[0x2a] = *(char *)((byte)unaff_s0[3] + 0x8014a9b0);
              psVar5 = (short *)((uint)(byte)unaff_s0[3] * 0xc + -0x7feb5648);
              sVar3 = *psVar5;
              if (*psVar5 != 0) {
                *(short *)(unaff_s0 + 0x60) = sVar3 - *(short *)(unaff_s0 + 0x2e);
                FUN_801390d8();
                return;
              }
              *(short *)(unaff_s0 + 0x60) = sVar3;
              sVar3 = *(short *)((uint)(byte)unaff_s0[3] * 0xc + -0x7feb5644);
              if (*(short *)((uint)(byte)unaff_s0[3] * 0xc + -0x7feb5644) != 0) {
                *(short *)(unaff_s0 + 100) = sVar3 - *(short *)(unaff_s0 + 0x36);
                FUN_8013911c();
                return;
              }
              *(short *)(unaff_s0 + 100) = sVar3;
              uVar6 = (uint)(byte)unaff_s0[3];
              *(undefined2 *)(unaff_s0 + 0x62) = *(undefined2 *)(uVar6 * 0xc + -0x7feb5646);
              unaff_s0[0x5f] = *(undefined1 *)(uVar6 * 0xc + -0x7feb5642);
              uVar2 = *(ushort *)(uVar6 * 0xc + -0x7feb5640);
              *(ushort *)(unaff_s0 + 0x82) = uVar2;
              iVar7 = (uint)uVar2 << 0x10;
              *(short *)(unaff_s0 + 0x80) = (short)((iVar7 >> 0x10) - (iVar7 >> 0x1f) >> 1);
              uVar2 = *(ushort *)((uint)(byte)unaff_s0[3] * 0xc + -0x7feb563e);
              *unaff_s0 = 1;
              *(ushort *)(unaff_s0 + 0x86) = uVar2;
              iVar7 = (uint)uVar2 << 0x10;
              *(short *)(unaff_s0 + 0x84) = (short)((iVar7 >> 0x10) - (iVar7 >> 0x1f) >> 1);
            }
            if ((byte)unaff_s0[3] < 6) {
                    /* WARNING: Jumptable at 0x8013025c did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)((uint)(byte)unaff_s0[3] * 4 + -0x7fef60bc))();
              return;
            }
          }
        }
        return;
      }
      *(byte *)(*(int *)(unaff_s0 + *(short *)(unaff_s0 + 0x6c) * 4 + 0xc0) + 0x3e) =
           *(byte *)(*(int *)(unaff_s0 + *(short *)(unaff_s0 + 0x6c) * 4 + 0xc0) + 0x3e) | 0x10;
    }
  }
  if (unaff_s0[1] != '\0') {
    func_0x80074590(0x83,0,0);
    return;
  }
  unaff_s0[6] = unaff_s0[6] + '\x01';
  FUN_801303f8(0x83);
  return;
}

