// FUN_8011deb0

int FUN_8011deb0(char param_1,int param_2,ushort param_3)

{
  ushort uVar1;
  byte bVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  short *psVar6;
  uint uVar7;
  uint extraout_v1;
  char cVar8;
  undefined1 *puVar9;
  undefined1 *unaff_s0;
  int iVar10;
  short sVar11;
  
  cVar8 = 'p';
  iVar10 = 0;
  if (DAT_800bf8f4 == -1) {
    iVar4 = 0;
    uVar3 = 0xff;
LAB_80126f78:
    param_2 = (uint)*(ushort *)(*(int *)(unaff_s0 + iVar4 * 4 + 0xc0) + 0xc) + param_2;
    *(short *)(unaff_s0 + 0x6e) = (short)param_2;
    unaff_s0[5] = (char)param_2 + cVar8;
    *(undefined2 *)(unaff_s0 + 0xb8) = uVar3;
    *(ushort *)(unaff_s0 + 0xba) = param_3;
    *(undefined2 *)(unaff_s0 + 0xbc) = *(undefined2 *)(unaff_s0 + 100);
    func_0x80042354();
    puVar9 = unaff_s0;
    uVar3 = func_0x80040cdc(unaff_s0,0,0x8014aa00);
    unaff_s0[0x70] = (char)iVar10;
    iVar4 = (extraout_v1 & 0xfff) - 0xc00;
    if (iVar4 < 0) {
      iVar4 = -iVar4;
    }
    *(undefined2 *)(unaff_s0 + 0x4e) = uVar3;
    *(short *)(unaff_s0 + 0x4e) = (short)(puVar9 + (0x400 - iVar4 >> 6) * -0x100);
    if ((int)(puVar9 + (0x400 - iVar4 >> 6) * -0x100) * 0x10000 < 1) {
      *(undefined2 *)(unaff_s0 + 0x4e) = 0;
      iVar10 = FUN_80142120();
      return iVar10;
    }
    return iVar10;
  }
  sVar11 = 2;
  iVar4 = 0;
  do {
    if (iVar4 == 0) {
      iVar10 = FUN_80126ec4();
      return iVar10;
    }
    bVar2 = DAT_800bf9f3 >> 4;
    unaff_s0 = (undefined1 *)(uint)bVar2;
    if ((bVar2 & 2) != 0) {
      sVar11 = sVar11 + -1;
      cVar8 = param_1;
      if ((bVar2 & 8) != 0) {
        param_2 = (int)(short)(ushort)iVar10;
        param_3 = bVar2 & 4;
        FUN_80121918();
        bVar2 = (char)iVar10 + 1;
LAB_80126f58:
        unaff_s0[0x46] = bVar2 ^ 1;
        uVar3 = 3;
        if (unaff_s0[0x46] == '\0') {
          unaff_s0[0x5e] = 2;
          *(short *)(unaff_s0 + 0x6e) =
               *(short *)(*(int *)(unaff_s0 + *(short *)(unaff_s0 + 0x6c) * 4 + 0xc0) + 0xc) -
               (short)param_2;
          *(short *)(*(int *)(unaff_s0 + *(short *)(unaff_s0 + 0x6c) * 4 + 0xc0) + 0x14) =
               -*(short *)(*(int *)(unaff_s0 + *(short *)(unaff_s0 + 0x6c) * 4 + 0xc0) + 0x14);
          bVar2 = *(byte *)(*(int *)(unaff_s0 + *(short *)(unaff_s0 + 0x6c) * 4 + 0xc0) + 0x3e);
          if ((bVar2 & 1) != 0) {
            *(byte *)(*(int *)(unaff_s0 + *(short *)(unaff_s0 + 0x6c) * 4 + 0xc0) + 0x3e) =
                 bVar2 | 0x80;
            iVar10 = FUN_80130054();
            return iVar10;
          }
          if ((bVar2 & 0x10) == 0) {
            if (((int)*(short *)(unaff_s0 + 0x62) & 0xff00U) != 0xff00) {
              uVar7 = (*(ushort *)(unaff_s0 + 0x62) & 0x7f00) >> 8;
              if ((*(short *)(unaff_s0 + 0x6c) == 3) &&
                 (((int)*(short *)(unaff_s0 + 0x62) & 0x8000U) == 0)) {
                uVar7 = uVar7 + 1;
              }
              if (uVar7 < 5) {
                func_0x8004cbd8(unaff_s0,uVar7 + 1);
                iVar4 = *(int *)(unaff_s0 + *(short *)(unaff_s0 + 0x6c) * 4 + 0xc0);
                if ((*(byte *)(iVar4 + 0x3e) | 0x80) == 0) {
                  iVar5 = 3;
                  if (iVar4 != 2) {
                    if (iVar4 != 3) goto LAB_801395bc;
                    iVar5 = func_0x8007a624(unaff_s0);
                  }
                }
                else {
                  if (iVar4 != 0) {
LAB_801395bc:
                    iVar10 = func_0x8009a450();
                    return iVar10;
                  }
                  iVar5 = func_0x80051b70(unaff_s0,0xc,
                                          *(undefined1 *)((byte)unaff_s0[3] + 0x8014a9a8));
                  if (iVar5 == 0) {
                    unaff_s0[4] = unaff_s0[4] + '\x01';
                    unaff_s0[0xbf] = (char)iVar10;
                    *(undefined2 *)(unaff_s0 + 0x50) = 0;
                    unaff_s0[0x29] = 0;
                    *(undefined2 *)(unaff_s0 + 0x5a) = *(undefined2 *)(unaff_s0 + 0x56);
                    unaff_s0[0x28] = unaff_s0[0x28] | 0x80;
                    if (*(char *)((byte)unaff_s0[3] + 0x8014a9b0) != '\0') {
                      unaff_s0[0x2a] = *(char *)((byte)unaff_s0[3] + 0x8014a9b0);
                      psVar6 = (short *)((uint)(byte)unaff_s0[3] * 0xc + -0x7feb5648);
                      sVar11 = *psVar6;
                      if (*psVar6 != 0) {
                        *(short *)(unaff_s0 + 0x60) = sVar11 - *(short *)(unaff_s0 + 0x2e);
                        iVar10 = FUN_801390d8();
                        return iVar10;
                      }
                      *(short *)(unaff_s0 + 0x60) = sVar11;
                      sVar11 = *(short *)((uint)(byte)unaff_s0[3] * 0xc + -0x7feb5644);
                      if (*(short *)((uint)(byte)unaff_s0[3] * 0xc + -0x7feb5644) != 0) {
                        *(short *)(unaff_s0 + 100) = sVar11 - *(short *)(unaff_s0 + 0x36);
                        iVar10 = FUN_8013911c();
                        return iVar10;
                      }
                      *(short *)(unaff_s0 + 100) = sVar11;
                      uVar7 = (uint)(byte)unaff_s0[3];
                      *(undefined2 *)(unaff_s0 + 0x62) = *(undefined2 *)(uVar7 * 0xc + -0x7feb5646);
                      unaff_s0[0x5f] = *(undefined1 *)(uVar7 * 0xc + -0x7feb5642);
                      uVar1 = *(ushort *)(uVar7 * 0xc + -0x7feb5640);
                      *(ushort *)(unaff_s0 + 0x82) = uVar1;
                      iVar10 = (uint)uVar1 << 0x10;
                      *(short *)(unaff_s0 + 0x80) =
                           (short)((iVar10 >> 0x10) - (iVar10 >> 0x1f) >> 1);
                      uVar1 = *(ushort *)((uint)(byte)unaff_s0[3] * 0xc + -0x7feb563e);
                      *unaff_s0 = 1;
                      *(ushort *)(unaff_s0 + 0x86) = uVar1;
                      iVar10 = (uint)uVar1 << 0x10;
                      *(short *)(unaff_s0 + 0x84) =
                           (short)((iVar10 >> 0x10) - (iVar10 >> 0x1f) >> 1);
                    }
                    iVar5 = -0x7fef0000;
                    if ((byte)unaff_s0[3] < 6) {
                    /* WARNING: Jumptable at 0x8013025c did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
                      iVar10 = (**(code **)((uint)(byte)unaff_s0[3] * 4 + -0x7fef60bc))();
                      return iVar10;
                    }
                  }
                }
                return iVar5;
              }
              *(byte *)(*(int *)(unaff_s0 + *(short *)(unaff_s0 + 0x6c) * 4 + 0xc0) + 0x3e) =
                   *(byte *)(*(int *)(unaff_s0 + *(short *)(unaff_s0 + 0x6c) * 4 + 0xc0) + 0x3e) |
                   0x10;
            }
          }
          if (unaff_s0[1] != '\0') {
            iVar10 = func_0x80074590(0x83,0,0);
            return iVar10;
          }
          unaff_s0[6] = unaff_s0[6] + '\x01';
          iVar10 = FUN_801303f8(0x83);
          return iVar10;
        }
        iVar4 = (int)*(short *)(unaff_s0 + 0x6c);
        unaff_s0[0x5e] = 3;
        goto LAB_80126f78;
      }
      param_2 = 0;
      param_3 = 2;
      iVar4 = func_0x80072ddc();
      if (iVar4 != 0) {
        *(undefined1 *)(iVar4 + 3) = 3;
        *(ushort *)(iVar4 + 0x68) = (ushort)iVar10 | 2;
        *(undefined **)(iVar4 + 0x1c) = &DAT_80126264;
        if ((bVar2 & 4) != 0) {
          *(undefined2 *)(iVar4 + 0x5c) = 0x343f;
          bVar2 = 4;
          *(undefined1 *)(iVar4 + 0x5e) = 4;
          goto LAB_80126f58;
        }
        *(undefined2 *)(iVar4 + 0x5c) = 0x347f;
        *(undefined1 *)(iVar4 + 0x5e) = 0;
      }
    }
    iVar10 = iVar10 + 1;
    iVar4 = iVar10 * 0x10000;
    if (1 < iVar10 * 0x10000 >> 0x10) {
      return (int)sVar11;
    }
  } while( true );
}

