// FUN_8011dfc0

uint FUN_8011dfc0(void)

{
  short sVar1;
  byte bVar2;
  undefined2 uVar3;
  uint uVar4;
  int iVar5;
  uint in_v0;
  short *psVar6;
  uint extraout_v1;
  char cVar7;
  undefined1 *puVar8;
  int iVar9;
  ushort uVar10;
  undefined1 *puVar11;
  char cVar12;
  uint unaff_s1;
  short unaff_s2;
  int unaff_s3;
  char unaff_s4;
  undefined4 unaff_s5;
  
  do {
    if (1 < (short)in_v0) {
      return (int)unaff_s2;
    }
    if ((unaff_s1 & 0xffff) == 0) {
      uVar4 = FUN_80126ec4();
      return uVar4;
    }
    bVar2 = *(byte *)(unaff_s3 + 0x183) >> 4;
    puVar11 = (undefined1 *)(uint)bVar2;
    if ((bVar2 & 2) != 0) {
      unaff_s2 = unaff_s2 + -1;
      cVar12 = (char)unaff_s1;
      cVar7 = unaff_s4;
      if ((bVar2 & 8) != 0) {
        iVar9 = (int)(short)(ushort)unaff_s1;
        uVar10 = bVar2 & 4;
        FUN_80121918();
        bVar2 = cVar12 + 1;
LAB_80126f58:
        puVar11[0x46] = bVar2 ^ 1;
        if (puVar11[0x46] != '\0') {
          puVar11[0x5e] = 3;
          iVar9 = (uint)*(ushort *)(*(int *)(puVar11 + *(short *)(puVar11 + 0x6c) * 4 + 0xc0) + 0xc)
                  + iVar9;
          *(short *)(puVar11 + 0x6e) = (short)iVar9;
          puVar11[5] = (char)iVar9 + cVar7;
          *(undefined2 *)(puVar11 + 0xb8) = 3;
          *(ushort *)(puVar11 + 0xba) = uVar10;
          *(undefined2 *)(puVar11 + 0xbc) = *(undefined2 *)(puVar11 + 100);
          func_0x80042354();
          puVar8 = puVar11;
          uVar3 = func_0x80040cdc(puVar11,0,0x8014aa00);
          puVar11[0x70] = cVar12;
          iVar9 = (extraout_v1 & 0xfff) - 0xc00;
          if (iVar9 < 0) {
            iVar9 = -iVar9;
          }
          *(undefined2 *)(puVar11 + 0x4e) = uVar3;
          *(short *)(puVar11 + 0x4e) = (short)(puVar8 + (0x400 - iVar9 >> 6) * -0x100);
          if ((int)(puVar8 + (0x400 - iVar9 >> 6) * -0x100) * 0x10000 < 1) {
            *(undefined2 *)(puVar11 + 0x4e) = 0;
            uVar4 = FUN_80142120();
            return uVar4;
          }
          return unaff_s1;
        }
        puVar11[0x5e] = 2;
        *(short *)(puVar11 + 0x6e) =
             *(short *)(*(int *)(puVar11 + *(short *)(puVar11 + 0x6c) * 4 + 0xc0) + 0xc) -
             (short)iVar9;
        *(short *)(*(int *)(puVar11 + *(short *)(puVar11 + 0x6c) * 4 + 0xc0) + 0x14) =
             -*(short *)(*(int *)(puVar11 + *(short *)(puVar11 + 0x6c) * 4 + 0xc0) + 0x14);
        bVar2 = *(byte *)(*(int *)(puVar11 + *(short *)(puVar11 + 0x6c) * 4 + 0xc0) + 0x3e);
        if ((bVar2 & 1) != 0) {
          *(byte *)(*(int *)(puVar11 + *(short *)(puVar11 + 0x6c) * 4 + 0xc0) + 0x3e) = bVar2 | 0x80
          ;
          uVar4 = FUN_80130054();
          return uVar4;
        }
        if ((bVar2 & 0x10) == 0) {
          if (((int)*(short *)(puVar11 + 0x62) & 0xff00U) != 0xff00) {
            uVar4 = (*(ushort *)(puVar11 + 0x62) & 0x7f00) >> 8;
            if ((*(short *)(puVar11 + 0x6c) == 3) &&
               (((int)*(short *)(puVar11 + 0x62) & 0x8000U) == 0)) {
              uVar4 = uVar4 + 1;
            }
            if (uVar4 < 5) {
              func_0x8004cbd8(puVar11,uVar4 + 1);
              iVar9 = *(int *)(puVar11 + *(short *)(puVar11 + 0x6c) * 4 + 0xc0);
              if ((*(byte *)(iVar9 + 0x3e) | 0x80) == 0) {
                uVar4 = 3;
                if (iVar9 != 2) {
                  if (iVar9 != 3) goto LAB_801395bc;
                  uVar4 = func_0x8007a624(puVar11);
                }
              }
              else {
                if (iVar9 != 0) {
LAB_801395bc:
                  uVar4 = func_0x8009a450();
                  return uVar4;
                }
                uVar4 = func_0x80051b70(puVar11,0xc,*(undefined1 *)((byte)puVar11[3] + 0x8014a9a8));
                if (uVar4 == 0) {
                  puVar11[4] = puVar11[4] + '\x01';
                  puVar11[0xbf] = cVar12;
                  *(undefined2 *)(puVar11 + 0x50) = 0;
                  puVar11[0x29] = 0;
                  *(undefined2 *)(puVar11 + 0x5a) = *(undefined2 *)(puVar11 + 0x56);
                  puVar11[0x28] = puVar11[0x28] | 0x80;
                  if (*(char *)((byte)puVar11[3] + 0x8014a9b0) != '\0') {
                    puVar11[0x2a] = *(char *)((byte)puVar11[3] + 0x8014a9b0);
                    psVar6 = (short *)((uint)(byte)puVar11[3] * 0xc + -0x7feb5648);
                    sVar1 = *psVar6;
                    if (*psVar6 != 0) {
                      *(short *)(puVar11 + 0x60) = sVar1 - *(short *)(puVar11 + 0x2e);
                      uVar4 = FUN_801390d8();
                      return uVar4;
                    }
                    *(short *)(puVar11 + 0x60) = sVar1;
                    sVar1 = *(short *)((uint)(byte)puVar11[3] * 0xc + -0x7feb5644);
                    if (*(short *)((uint)(byte)puVar11[3] * 0xc + -0x7feb5644) != 0) {
                      *(short *)(puVar11 + 100) = sVar1 - *(short *)(puVar11 + 0x36);
                      uVar4 = FUN_8013911c();
                      return uVar4;
                    }
                    *(short *)(puVar11 + 100) = sVar1;
                    uVar4 = (uint)(byte)puVar11[3];
                    *(undefined2 *)(puVar11 + 0x62) = *(undefined2 *)(uVar4 * 0xc + -0x7feb5646);
                    puVar11[0x5f] = *(undefined1 *)(uVar4 * 0xc + -0x7feb5642);
                    uVar10 = *(ushort *)(uVar4 * 0xc + -0x7feb5640);
                    *(ushort *)(puVar11 + 0x82) = uVar10;
                    iVar9 = (uint)uVar10 << 0x10;
                    *(short *)(puVar11 + 0x80) = (short)((iVar9 >> 0x10) - (iVar9 >> 0x1f) >> 1);
                    uVar10 = *(ushort *)((uint)(byte)puVar11[3] * 0xc + -0x7feb563e);
                    *puVar11 = 1;
                    *(ushort *)(puVar11 + 0x86) = uVar10;
                    iVar9 = (uint)uVar10 << 0x10;
                    *(short *)(puVar11 + 0x84) = (short)((iVar9 >> 0x10) - (iVar9 >> 0x1f) >> 1);
                  }
                  uVar4 = 0x80110000;
                  if ((byte)puVar11[3] < 6) {
                    /* WARNING: Jumptable at 0x8013025c did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
                    uVar4 = (**(code **)((uint)(byte)puVar11[3] * 4 + -0x7fef60bc))();
                    return uVar4;
                  }
                }
              }
              return uVar4;
            }
            *(byte *)(*(int *)(puVar11 + *(short *)(puVar11 + 0x6c) * 4 + 0xc0) + 0x3e) =
                 *(byte *)(*(int *)(puVar11 + *(short *)(puVar11 + 0x6c) * 4 + 0xc0) + 0x3e) | 0x10;
          }
        }
        if (puVar11[1] != '\0') {
          uVar4 = func_0x80074590(0x83,0,0);
          return uVar4;
        }
        puVar11[6] = puVar11[6] + '\x01';
        uVar4 = FUN_801303f8(0x83);
        return uVar4;
      }
      iVar9 = 0;
      uVar10 = 2;
      iVar5 = func_0x80072ddc();
      if (iVar5 != 0) {
        *(undefined1 *)(iVar5 + 3) = 3;
        *(ushort *)(iVar5 + 0x68) = (ushort)unaff_s1 | 2;
        *(undefined4 *)(iVar5 + 0x1c) = unaff_s5;
        if ((bVar2 & 4) != 0) {
          *(undefined2 *)(iVar5 + 0x5c) = 0x343f;
          bVar2 = 4;
          *(undefined1 *)(iVar5 + 0x5e) = 4;
          goto LAB_80126f58;
        }
        *(undefined2 *)(iVar5 + 0x5c) = 0x347f;
        *(undefined1 *)(iVar5 + 0x5e) = 0;
      }
    }
    in_v0 = unaff_s1 + 1;
    unaff_s1 = in_v0;
  } while( true );
}

