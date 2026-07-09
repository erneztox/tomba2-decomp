// FUN_80121b44

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_80121b44(undefined1 param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 in_zero;
  undefined4 extraout_at;
  char in_v0;
  ushort uVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  undefined2 *puVar7;
  undefined1 *puVar8;
  uint uVar9;
  short *psVar10;
  undefined1 *puVar11;
  undefined1 in_v1;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  undefined1 *puVar15;
  int iVar16;
  int *piVar17;
  byte *pbVar18;
  int *piVar19;
  int iVar20;
  int unaff_s0;
  char *pcVar21;
  char *pcVar22;
  int unaff_s1;
  uint *puVar23;
  undefined1 *unaff_s2;
  int *piVar24;
  int in_stack_00000020;
  int in_stack_00000024;
  int in_stack_00000028;
  int in_stack_0000002c;
  int in_stack_00000030;
  int in_stack_00000034;
  int in_stack_00000038;
  int in_stack_0000003c;
  char in_stack_00000040;
  char cStack00000041;
  char cStack00000042;
  
  *(char *)(unaff_s1 + 5) = in_v0 + '\x01';
  *(undefined2 *)(*(int *)(unaff_s1 + unaff_s0 * 4 + 0xc0) + 0xe) = 0;
  unaff_s2[9] = param_1;
  unaff_s2[4] = in_v1;
  *unaff_s2 = in_v1;
  unaff_s2[0xd] = 0;
  unaff_s2[0xb] = 0;
  *(undefined2 *)(unaff_s2 + 0x86) = 0x46;
  iVar6 = func_0x8007aae8();
  *(int *)(unaff_s0 + 0xc0) = iVar6;
  *(short *)(iVar6 + 6) = (short)unaff_s1 + -1;
  if (unaff_s1 != 0) {
    **(undefined2 **)(unaff_s0 + 0xc0) = 0xff74;
    *(undefined2 *)(*(int *)(unaff_s0 + 0xc0) + 2) = 0;
    *(undefined2 *)(*(int *)(unaff_s0 + 0xc0) + 4) = 0;
    *(undefined4 *)(*(int *)(unaff_s0 + 0xc0) + 8) = 0;
    *(undefined4 *)(*(int *)(unaff_s0 + 0xc0) + 0xc) = 0;
    func_0x80051b04(*(undefined4 *)(unaff_s0 + 0xc0),0xc);
    if (unaff_s1 + 1 < 2) {
      puVar8 = (undefined1 *)FUN_80133e24();
      return puVar8;
    }
    return (undefined1 *)0x0;
  }
  puVar7 = *(undefined2 **)(unaff_s2 + 0xc0);
  *puVar7 = 0;
  piVar24 = (int *)(puVar7 + 0x40);
  puVar8 = (undefined1 *)(uint)(byte)unaff_s2[7];
  pcVar21 = *(char **)(unaff_s2 + 0x3c);
  cVar2 = unaff_s2[7] * ' ';
  if (pcVar21 != (char *)0x0) {
    in_stack_00000040 = *pcVar21 * '\n';
    puVar8 = &stack0x00000040;
    cStack00000041 = pcVar21[1] * '\n';
    puVar15 = unaff_s2 + 0x48;
    cStack00000042 = pcVar21[2] * '\n';
    func_0x800318a0(unaff_s2 + 0x2c,puVar8);
    bVar1 = pcVar21[3];
    uVar12 = bVar1 & 0xf;
    uVar9 = bVar1 & 0x80;
    if ((bVar1 & 0x80) != 0) {
      *(undefined4 *)(unaff_s2 + 0x40) = 0;
      sVar4 = *(short *)(uVar9 + 0x60);
      sVar5 = func_0x800782b0(uVar9 + 0x2c,(int)*(short *)(uVar12 + 0x160),
                              (int)*(short *)(puVar15 + 0x164));
      if (0x800 < ((sVar4 - sVar5) + 0x400U & 0xfff)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      uRam00000002 = uRam00000002 & 0xfffe;
      return (undefined1 *)0x0;
    }
    pcVar22 = pcVar21 + 4;
    *(char **)(unaff_s2 + 0x40) = pcVar22;
    piVar19 = *(int **)(unaff_s2 + 0x50);
    piVar17 = (int *)0x30;
    pbVar18 = (byte *)((int)piVar19 + 0x1e);
    puVar23 = (uint *)0x0;
    do {
      uVar9 = *(uint *)(pbVar18 + -0x1a);
      in_stack_00000020 = (uint)CONCAT21((ushort)*pbVar18 << 8,pbVar18[-2]) << 8;
      in_stack_00000024 = (uint)CONCAT21(in_stack_00000024._2_2_,pbVar18[-0xf]) << 8;
      in_stack_00000028 = (uint)CONCAT21((ushort)pbVar18[1] << 8,pbVar18[-1]) << 8;
      in_stack_0000002c = (uint)CONCAT21(in_stack_0000002c._2_2_,pbVar18[-0xb]) << 8;
      in_stack_00000030 = (uint)CONCAT21((ushort)pbVar18[4] << 8,pbVar18[2]) << 8;
      in_stack_00000034 = (uint)CONCAT21(in_stack_00000034._2_2_,pbVar18[-7]) << 8;
      in_stack_00000038 = (uint)CONCAT21((ushort)pbVar18[5] << 8,pbVar18[3]) << 8;
      in_stack_0000003c = (uint)CONCAT21(in_stack_0000003c._2_2_,pbVar18[-3]) << 8;
      setCopReg(2,in_zero,in_stack_00000020);
      setCopReg(2,extraout_at,in_stack_00000024);
      setCopReg(2,&stack0x00000030,in_stack_00000028);
      setCopReg(2,&stack0x00000028,in_stack_0000002c);
      setCopReg(2,&stack0x00000020,in_stack_00000030);
      setCopReg(2,puVar8,in_stack_00000034);
      piVar17[-0xb] = *(uint *)(pbVar18 + -0x12) & 0xffffff | 0x3e000000;
      piVar17[-9] = *piVar19 + uVar12 * 0x400000;
      copFunction(2,0x280030);
      piVar17[-6] = uVar9 & 0x7fffff;
      iVar6 = *(int *)(pbVar18 + -0x16);
      piVar17[-3] = iVar6;
      iVar20 = getCopControlWord(2,0xf800);
      *piVar24 = iVar20;
      if (-1 < *piVar24) {
        uVar13 = getCopReg(2,0xc);
        puVar23[2] = uVar13;
        uVar13 = getCopReg(2,0xd);
        puVar23[5] = uVar13;
        uVar13 = getCopReg(2,0xe);
        puVar23[8] = uVar13;
        *piVar17 = iVar6 >> 0x10;
        setCopReg(2,in_zero,in_stack_00000038);
        setCopReg(2,extraout_at,in_stack_0000003c);
        piVar17[-8] = *(int *)(pbVar18 + -0xe);
        copFunction(2,0x180001);
        piVar17[-5] = *(int *)(pbVar18 + -10);
        iVar6 = getCopControlWord(2,0xf800);
        *piVar24 = iVar6;
        if (-1 < *piVar24) {
          uVar13 = getCopReg(2,0xe);
          puVar23[0xb] = uVar13;
          piVar17[-2] = *(int *)(pbVar18 + -6);
          copFunction(2,0x168002e);
          iVar6 = getCopReg(2,7);
          *piVar24 = iVar6;
          uVar13 = *piVar24 + (int)*(short *)(unaff_s2 + 0x32) >> 10;
          iVar6 = (*piVar24 + (int)*(short *)(unaff_s2 + 0x32) >> (uVar13 & 0x1f)) + uVar13 * 0x200;
          *piVar24 = iVar6;
          if (0x7fb < iVar6 - 4U) {
            *piVar24 = -1;
          }
          if (-1 < *piVar24) {
            if ((unaff_s2[3] != '\x01') && (unaff_s2[3] != '\x03')) {
              bVar1 = unaff_s2[5];
              if ((2 < bVar1) && ((bVar1 < 6 || ((bVar1 < 0xb && (8 < bVar1)))))) {
                ((char *)((int)piVar17 + -0x16))[0] = '.';
                ((char *)((int)piVar17 + -0x16))[1] = '\0';
              }
            }
            sVar4 = (short)((int)(char)*pbVar18 - (uint)*(ushort *)(unaff_s2 + 0x56));
            if ((int)(((int)(char)*pbVar18 - (uint)*(ushort *)(unaff_s2 + 0x56)) * 0x10000) < 0) {
              sVar4 = 0;
            }
            iVar6 = (int)sVar4;
            iVar20 = (uint)*(byte *)(piVar17 + -0xb) - iVar6;
            iVar16 = (uint)*(byte *)((int)piVar17 + -0x2b) - iVar6;
            iVar6 = (uint)*(byte *)((int)piVar17 + -0x2a) - iVar6;
            if (iVar20 < 0) {
              puVar23 = (uint *)(pcVar21 + 100);
              if (pcVar21[0xb] != '\0') {
                if (pcVar21[0xb] != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
                  halt_baddata();
                }
                if (*(short *)(*(int *)(pcVar21 + 0x3c) + 4) == 0) {
                  *(short *)(pcVar21 + 0x36) = *(short *)(pcVar21 + 0x36) + 0x10;
                  FUN_801406e4(pcVar22,0);
                  return unaff_s2;
                }
                *(ushort *)(pcVar21 + 0x66) = *(ushort *)(pcVar21 + 0x66) ^ 1;
                    /* WARNING: Subroutine does not return */
                *(short *)(pcVar21 + 0x5a) = *(short *)(pcVar21 + 0x5a) + 0x800;
                FUN_801402b8(pcVar22,7,0);
              }
              iVar20 = 0x1a;
              uVar3 = *(ushort *)(pcVar21 + 0x66);
              iVar16 = 8;
LAB_8013d19c:
                    /* WARNING: Subroutine does not return */
              *(ushort *)((int)puVar23 + 2) = uVar3 & 0xfffb;
              FUN_801402b8(pcVar22,iVar20,iVar16);
            }
            if (0xff < iVar20) {
              iVar20 = 0xff;
            }
            if (iVar16 < 0) {
              puVar8 = (undefined1 *)thunk_EXT_FUN_80146194(iVar6,iVar20,0);
              return puVar8;
            }
            if (0xff < iVar16) {
              iVar16 = 0xff;
            }
            uVar3 = (ushort)(iVar6 < 0x100);
            if (iVar6 < 0) {
              pcVar22 = (char *)0x0;
              goto LAB_8013d19c;
            }
            if (uVar3 == 0) {
              iVar6 = 0xff;
            }
            *(char *)(puVar23 + 1) = (char)iVar20;
            *(char *)((int)puVar23 + 5) = (char)iVar16;
            *(char *)((int)puVar23 + 6) = (char)iVar6;
            sVar4 = (short)((int)(char)*pbVar18 - (uint)*(ushort *)(unaff_s2 + 0x56));
            if ((int)(((int)(char)*pbVar18 - (uint)*(ushort *)(unaff_s2 + 0x56)) * 0x10000) < 0) {
              sVar4 = 0;
            }
            iVar6 = (int)sVar4;
            iVar20 = (uint)*(byte *)(piVar17 + -8) - iVar6;
            iVar16 = (uint)*(byte *)((int)piVar17 + -0x1f) - iVar6;
            iVar6 = (uint)*(byte *)((int)piVar17 + -0x1e) - iVar6;
            if (iVar20 < 0) {
              puVar8 = (undefined1 *)FUN_8013d214(iVar6,0);
              return puVar8;
            }
            if (0xff < iVar20) {
              iVar20 = 0xff;
            }
            if (iVar16 < 0) {
              return (undefined1 *)(uint)(iVar16 < 0x100);
            }
            if ((undefined1 *)(uint)(iVar16 < 0x100) == (undefined1 *)0x0) {
              iVar16 = 0xff;
            }
            if (iVar6 < 0) {
              unaff_s2 = (undefined1 *)0x0;
              if (DAT_00000007 == 0) {
                uRam00000062 = uRam00000062 & 0xfffb;
                    /* WARNING: Subroutine does not return */
                FUN_801402b8(0,(int)(short)iVar20,8);
              }
              if (DAT_00000007 < 2) {
                    /* WARNING: Bad instruction - Truncating control flow here */
                halt_baddata();
              }
              iVar6 = 0;
              sVar4 = _DAT_00000032;
              DAT_00000007 = DAT_00000007 - 1;
LAB_8013d2c4:
              *(short *)(iVar6 + 0x32) = sVar4 + 0x10;
              FUN_801406e4(iVar6,iVar20);
              return unaff_s2;
            }
            if (0xff < iVar6) {
              iVar6 = 0xff;
            }
            *(char *)(puVar23 + 4) = (char)iVar20;
            *(char *)((int)puVar23 + 0x11) = (char)iVar16;
            *(char *)((int)puVar23 + 0x12) = (char)iVar6;
            psVar10 = (short *)((int)(char)*pbVar18 - (uint)*(ushort *)(unaff_s2 + 0x56));
            if ((int)psVar10 * 0x10000 < 0) {
              psVar10 = (short *)0x0;
            }
            sVar4 = (short)psVar10;
            iVar6 = (int)sVar4;
            iVar20 = (uint)*(byte *)(piVar17 + -5) - iVar6;
            iVar16 = (uint)*(byte *)((int)piVar17 + -0x13) - iVar6;
            iVar6 = (uint)*(byte *)((int)piVar17 + -0x12) - iVar6;
            if (iVar20 < 0) {
              iVar20 = 0;
              goto LAB_8013d2c4;
            }
            if (0xff < iVar20) {
              iVar20 = 0xff;
            }
            if (iVar16 < 0) {
              return (undefined1 *)(uint)(iVar16 < 0x100);
            }
            if ((undefined1 *)(uint)(iVar16 < 0x100) == (undefined1 *)0x0) {
              iVar16 = 0xff;
            }
            if (iVar6 < 0) {
              pcVar21 = (char *)func_0x80078240((int)_DAT_1f800160 - (int)*psVar10,
                                                (int)_DAT_1f800162 - (int)psVar10[1],
                                                (int)_DAT_1f800164 - (int)psVar10[2]);
              return (undefined1 *)(uint)(pcVar21 < pcVar22);
            }
            if (0xff < iVar6) {
              iVar6 = 0xff;
            }
            *(char *)(puVar23 + 7) = (char)iVar20;
            *(char *)((int)puVar23 + 0x1d) = (char)iVar16;
            *(char *)((int)puVar23 + 0x1e) = (char)iVar6;
            puVar15 = (undefined1 *)((int)(char)*pbVar18 - (uint)*(ushort *)(unaff_s2 + 0x56));
            if ((int)puVar15 * 0x10000 < 0) {
              puVar15 = (undefined1 *)0x0;
            }
            puVar11 = (undefined1 *)(int)(short)puVar15;
            puVar8 = (undefined1 *)((uint)*(byte *)(piVar17 + -2) - (int)puVar11);
            iVar20 = (uint)*(byte *)((int)piVar17 + -7) - (int)puVar11;
            iVar6 = (uint)*(byte *)((int)piVar17 + -6) - (int)puVar11;
            if ((int)puVar8 < 0) {
              if (puVar11 == (undefined1 *)0x0) {
                return (undefined1 *)0x0;
              }
              *(undefined4 *)(puVar11 + 0x1c) = 0x80145230;
              puVar11[3] = (char)pcVar22;
              *(undefined4 *)(puVar11 + 0x10) = 0;
              puVar15 = puVar11;
LAB_8013d390:
              *(uint **)(puVar15 + 0x14) = puVar23;
              return puVar15;
            }
            if (0xff < (int)puVar8) {
              puVar8 = (undefined1 *)0xff;
            }
            if (iVar20 < 0) goto LAB_8013d390;
            if (0xff < iVar20) {
              iVar20 = 0xff;
            }
            if (iVar6 < 0) {
              puVar8 = (undefined1 *)FUN_8013d3ac(0);
              return puVar8;
            }
            if (0xff < iVar6) {
              iVar6 = 0xff;
            }
            *(char *)(puVar23 + 10) = (char)puVar8;
            *(char *)((int)puVar23 + 0x29) = (char)iVar20;
            *(char *)((int)puVar23 + 0x2a) = (char)iVar6;
            *(char *)(piVar17 + -9) = (char)piVar17[-9] + cVar2;
            *(char *)(piVar17 + -6) = (char)piVar17[-6] + cVar2;
            *(char *)(piVar17 + -3) = (char)piVar17[-3] + cVar2;
            *(char *)piVar17 = (char)*piVar17 + cVar2;
            puVar14 = (uint *)(_DAT_800ed8c8 + *piVar24 * 4);
            *puVar23 = *puVar14 | 0xc000000;
            *puVar14 = (uint)puVar23;
            piVar17 = piVar17 + 0xd;
            puVar23 = puVar23 + 0xd;
          }
        }
      }
      pbVar18 = pbVar18 + 0x24;
      piVar19 = piVar19 + 9;
    } while (0 < (int)uVar9);
    puVar8 = &LAB_800c0000;
    _DAT_800bf544 = puVar23;
  }
  return puVar8;
}

