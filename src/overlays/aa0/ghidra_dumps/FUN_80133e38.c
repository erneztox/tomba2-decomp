// FUN_80133e38

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_80133e38(undefined1 *param_1)

{
  byte bVar1;
  uint uVar2;
  char cVar3;
  undefined4 in_zero;
  undefined4 extraout_at;
  ushort uVar4;
  short sVar5;
  short sVar6;
  undefined1 *puVar7;
  uint uVar8;
  int iVar9;
  short *psVar10;
  undefined1 *puVar11;
  uint uVar12;
  uint *puVar13;
  int iVar14;
  char *pcVar15;
  int iVar16;
  uint *puVar17;
  byte *pbVar18;
  int *piVar19;
  uint uVar20;
  char *pcVar21;
  char *pcVar22;
  uint *puVar23;
  undefined4 uVar24;
  int local_48;
  undefined4 local_44;
  int local_40;
  undefined4 local_3c;
  int local_38;
  undefined4 local_34;
  int local_30;
  undefined4 local_2c;
  char local_28;
  char local_27;
  char local_26;
  
  puVar23 = _DAT_800bf544;
  puVar7 = (undefined1 *)(uint)(byte)param_1[7];
  pcVar21 = *(char **)(param_1 + 0x3c);
  cVar3 = param_1[7] * ' ';
  if (pcVar21 != (char *)0x0) {
    local_28 = *pcVar21 * '\n';
    pcVar15 = &local_28;
    local_27 = pcVar21[1] * '\n';
    puVar7 = param_1 + 0x48;
    local_26 = pcVar21[2] * '\n';
    uVar24 = 0x80133ed8;
    func_0x800318a0(param_1 + 0x2c,pcVar15);
    bVar1 = pcVar21[3];
    uVar12 = bVar1 & 0xf;
    uVar8 = bVar1 & 0x80;
    if ((bVar1 & 0x80) != 0) {
      *(undefined4 *)(param_1 + 0x40) = 0;
      sVar5 = *(short *)(uVar8 + 0x60);
      sVar6 = func_0x800782b0(uVar8 + 0x2c,(int)*(short *)(uVar12 + 0x160),
                              (int)*(short *)(puVar7 + 0x164));
      if (0x800 < ((sVar5 - sVar6) + 0x400U & 0xfff)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *(ushort *)((int)puVar23 + 2) = *(ushort *)((int)puVar23 + 2) & 0xfffe;
      return (undefined1 *)0x0;
    }
    pcVar22 = pcVar21 + 4;
    *(char **)(param_1 + 0x40) = pcVar22;
    piVar19 = *(int **)(param_1 + 0x50);
    puVar17 = puVar23 + 0xc;
    pbVar18 = (byte *)((int)piVar19 + 0x1e);
    do {
      uVar20 = *(uint *)(pbVar18 + -0x1a);
      local_48 = (uint)CONCAT21((ushort)*pbVar18 << 8,pbVar18[-2]) << 8;
      local_44 = (uint)CONCAT21(local_44._2_2_,pbVar18[-0xf]) << 8;
      local_40 = (uint)CONCAT21((ushort)pbVar18[1] << 8,pbVar18[-1]) << 8;
      local_3c = (uint)CONCAT21(local_3c._2_2_,pbVar18[-0xb]) << 8;
      local_38 = (uint)CONCAT21((ushort)pbVar18[4] << 8,pbVar18[2]) << 8;
      local_34 = (uint)CONCAT21(local_34._2_2_,pbVar18[-7]) << 8;
      local_30 = (uint)CONCAT21((ushort)pbVar18[5] << 8,pbVar18[3]) << 8;
      local_2c = (uint)CONCAT21(local_2c._2_2_,pbVar18[-3]) << 8;
      setCopReg(2,in_zero,local_48);
      setCopReg(2,extraout_at,local_44);
      setCopReg(2,&local_38,local_40);
      setCopReg(2,&local_40,local_3c);
      setCopReg(2,&local_48,local_38);
      setCopReg(2,pcVar15,local_34);
      puVar17[-0xb] = *(uint *)(pbVar18 + -0x12) & 0xffffff | 0x3e000000;
      puVar17[-9] = *piVar19 + uVar12 * 0x400000;
      copFunction(2,0x280030);
      puVar17[-6] = uVar20 & 0x7fffff;
      uVar8 = *(uint *)(pbVar18 + -0x16);
      puVar17[-3] = uVar8;
      _DAT_1f800080 = getCopControlWord(2,0xf800);
      if (-1 < _DAT_1f800080) {
        uVar2 = getCopReg(2,0xc);
        puVar23[2] = uVar2;
        uVar2 = getCopReg(2,0xd);
        puVar23[5] = uVar2;
        uVar2 = getCopReg(2,0xe);
        puVar23[8] = uVar2;
        *puVar17 = (int)uVar8 >> 0x10;
        setCopReg(2,in_zero,local_30);
        setCopReg(2,extraout_at,local_2c);
        puVar17[-8] = *(uint *)(pbVar18 + -0xe);
        copFunction(2,0x180001);
        puVar17[-5] = *(uint *)(pbVar18 + -10);
        _DAT_1f800080 = getCopControlWord(2,0xf800);
        if (-1 < _DAT_1f800080) {
          uVar8 = getCopReg(2,0xe);
          puVar23[0xb] = uVar8;
          puVar17[-2] = *(uint *)(pbVar18 + -6);
          copFunction(2,0x168002e);
          iVar9 = getCopReg(2,7);
          uVar8 = iVar9 + *(short *)(param_1 + 0x32) >> 10;
          _DAT_1f800080 = (iVar9 + *(short *)(param_1 + 0x32) >> (uVar8 & 0x1f)) + uVar8 * 0x200;
          if (0x7fb < _DAT_1f800080 - 4U) {
            _DAT_1f800080 = -1;
          }
          if (-1 < _DAT_1f800080) {
            if ((param_1[3] != '\x01') && (param_1[3] != '\x03')) {
              bVar1 = param_1[5];
              if ((2 < bVar1) && ((bVar1 < 6 || ((bVar1 < 0xb && (8 < bVar1)))))) {
                ((char *)((int)puVar17 + -0x16))[0] = '.';
                ((char *)((int)puVar17 + -0x16))[1] = '\0';
              }
            }
            sVar5 = (short)((int)(char)*pbVar18 - (uint)*(ushort *)(param_1 + 0x56));
            if ((int)(((int)(char)*pbVar18 - (uint)*(ushort *)(param_1 + 0x56)) * 0x10000) < 0) {
              sVar5 = 0;
            }
            iVar9 = (int)sVar5;
            iVar14 = (uint)(byte)puVar17[-0xb] - iVar9;
            iVar16 = (uint)*(byte *)((int)puVar17 + -0x2b) - iVar9;
            iVar9 = (uint)*(byte *)((int)puVar17 + -0x2a) - iVar9;
            if (iVar14 < 0) {
              puVar23 = (uint *)(pcVar21 + 100);
              if (pcVar21[0xb] != '\0') {
                if (pcVar21[0xb] != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
                  halt_baddata();
                }
                if (*(short *)(*(int *)(pcVar21 + 0x3c) + 4) == 0) {
                  *(short *)(pcVar21 + 0x36) = *(short *)(pcVar21 + 0x36) + 0x10;
                  FUN_801406e4(pcVar22,0);
                  return param_1;
                }
                *(ushort *)(pcVar21 + 0x66) = *(ushort *)(pcVar21 + 0x66) ^ 1;
                    /* WARNING: Subroutine does not return */
                *(short *)(pcVar21 + 0x5a) = *(short *)(pcVar21 + 0x5a) + 0x800;
                FUN_801402b8(pcVar22,7,0);
              }
              iVar14 = 0x1a;
              uVar4 = *(ushort *)(pcVar21 + 0x66);
              iVar16 = 8;
LAB_8013d19c:
                    /* WARNING: Subroutine does not return */
              *(ushort *)((int)puVar23 + 2) = uVar4 & 0xfffb;
              FUN_801402b8(pcVar22,iVar14,iVar16);
            }
            if (0xff < iVar14) {
              iVar14 = 0xff;
            }
            if (iVar16 < 0) {
              puVar7 = (undefined1 *)thunk_EXT_FUN_80146194(iVar9,iVar14,0);
              return puVar7;
            }
            if (0xff < iVar16) {
              iVar16 = 0xff;
            }
            uVar4 = (ushort)(iVar9 < 0x100);
            if (iVar9 < 0) {
              pcVar22 = (char *)0x0;
              goto LAB_8013d19c;
            }
            if (uVar4 == 0) {
              iVar9 = 0xff;
            }
            *(char *)(puVar23 + 1) = (char)iVar14;
            *(char *)((int)puVar23 + 5) = (char)iVar16;
            *(char *)((int)puVar23 + 6) = (char)iVar9;
            sVar5 = (short)((int)(char)*pbVar18 - (uint)*(ushort *)(param_1 + 0x56));
            if ((int)(((int)(char)*pbVar18 - (uint)*(ushort *)(param_1 + 0x56)) * 0x10000) < 0) {
              sVar5 = 0;
            }
            iVar9 = (int)sVar5;
            iVar14 = (uint)(byte)puVar17[-8] - iVar9;
            iVar16 = (uint)*(byte *)((int)puVar17 + -0x1f) - iVar9;
            iVar9 = (uint)*(byte *)((int)puVar17 + -0x1e) - iVar9;
            if (iVar14 < 0) {
              puVar7 = (undefined1 *)FUN_8013d214(iVar9,0);
              return puVar7;
            }
            if (0xff < iVar14) {
              iVar14 = 0xff;
            }
            if (iVar16 < 0) {
              return (undefined1 *)(uint)(iVar16 < 0x100);
            }
            if ((undefined1 *)(uint)(iVar16 < 0x100) == (undefined1 *)0x0) {
              iVar16 = 0xff;
            }
            if (iVar9 < 0) {
              if (DAT_00000007 == 0) {
                uRam00000062 = uRam00000062 & 0xfffb;
                    /* WARNING: Subroutine does not return */
                FUN_801402b8(0,(int)(short)iVar14,8,puVar17,pcVar22,puVar23,param_1,uVar24);
              }
              if (DAT_00000007 < 2) {
                    /* WARNING: Bad instruction - Truncating control flow here */
                halt_baddata();
              }
              iVar9 = 0;
              param_1 = (undefined1 *)0x0;
              sVar5 = _DAT_00000032;
              DAT_00000007 = DAT_00000007 - 1;
LAB_8013d2c4:
              *(short *)(iVar9 + 0x32) = sVar5 + 0x10;
              FUN_801406e4(iVar9,iVar14);
              return param_1;
            }
            if (0xff < iVar9) {
              iVar9 = 0xff;
            }
            *(char *)(puVar23 + 4) = (char)iVar14;
            *(char *)((int)puVar23 + 0x11) = (char)iVar16;
            *(char *)((int)puVar23 + 0x12) = (char)iVar9;
            psVar10 = (short *)((int)(char)*pbVar18 - (uint)*(ushort *)(param_1 + 0x56));
            if ((int)psVar10 * 0x10000 < 0) {
              psVar10 = (short *)0x0;
            }
            sVar5 = (short)psVar10;
            iVar9 = (int)sVar5;
            iVar14 = (uint)(byte)puVar17[-5] - iVar9;
            iVar16 = (uint)*(byte *)((int)puVar17 + -0x13) - iVar9;
            iVar9 = (uint)*(byte *)((int)puVar17 + -0x12) - iVar9;
            if (iVar14 < 0) {
              iVar14 = 0;
              goto LAB_8013d2c4;
            }
            if (0xff < iVar14) {
              iVar14 = 0xff;
            }
            if (iVar16 < 0) {
              return (undefined1 *)(uint)(iVar16 < 0x100);
            }
            if ((undefined1 *)(uint)(iVar16 < 0x100) == (undefined1 *)0x0) {
              iVar16 = 0xff;
            }
            if (iVar9 < 0) {
              pcVar21 = (char *)func_0x80078240((int)_DAT_1f800160 - (int)*psVar10,
                                                (int)_DAT_1f800162 - (int)psVar10[1],
                                                (int)_DAT_1f800164 - (int)psVar10[2]);
              return (undefined1 *)(uint)(pcVar21 < pcVar22);
            }
            if (0xff < iVar9) {
              iVar9 = 0xff;
            }
            *(char *)(puVar23 + 7) = (char)iVar14;
            *(char *)((int)puVar23 + 0x1d) = (char)iVar16;
            *(char *)((int)puVar23 + 0x1e) = (char)iVar9;
            puVar7 = (undefined1 *)((int)(char)*pbVar18 - (uint)*(ushort *)(param_1 + 0x56));
            if ((int)puVar7 * 0x10000 < 0) {
              puVar7 = (undefined1 *)0x0;
            }
            puVar11 = (undefined1 *)(int)(short)puVar7;
            pcVar15 = (char *)((uint)(byte)puVar17[-2] - (int)puVar11);
            iVar14 = (uint)*(byte *)((int)puVar17 + -7) - (int)puVar11;
            iVar9 = (uint)*(byte *)((int)puVar17 + -6) - (int)puVar11;
            if ((int)pcVar15 < 0) {
              if (puVar11 == (undefined1 *)0x0) {
                return (undefined1 *)0x0;
              }
              *(undefined4 *)(puVar11 + 0x1c) = 0x80145230;
              puVar11[3] = (char)pcVar22;
              *(undefined4 *)(puVar11 + 0x10) = 0;
              puVar7 = puVar11;
LAB_8013d390:
              *(uint **)(puVar7 + 0x14) = puVar23;
              return puVar7;
            }
            if (0xff < (int)pcVar15) {
              pcVar15 = (char *)0xff;
            }
            if (iVar14 < 0) goto LAB_8013d390;
            if (0xff < iVar14) {
              iVar14 = 0xff;
            }
            if (iVar9 < 0) {
              puVar7 = (undefined1 *)FUN_8013d3ac(0);
              return puVar7;
            }
            if (0xff < iVar9) {
              iVar9 = 0xff;
            }
            *(char *)(puVar23 + 10) = (char)pcVar15;
            *(char *)((int)puVar23 + 0x29) = (char)iVar14;
            *(char *)((int)puVar23 + 0x2a) = (char)iVar9;
            *(char *)(puVar17 + -9) = (char)puVar17[-9] + cVar3;
            *(char *)(puVar17 + -6) = (char)puVar17[-6] + cVar3;
            *(char *)(puVar17 + -3) = (char)puVar17[-3] + cVar3;
            *(char *)puVar17 = (char)*puVar17 + cVar3;
            puVar13 = (uint *)(_DAT_800ed8c8 + _DAT_1f800080 * 4);
            *puVar23 = *puVar13 | 0xc000000;
            *puVar13 = (uint)puVar23;
            puVar17 = puVar17 + 0xd;
            puVar23 = puVar23 + 0xd;
          }
        }
      }
      pbVar18 = pbVar18 + 0x24;
      piVar19 = piVar19 + 9;
    } while (0 < (int)uVar20);
    puVar7 = &LAB_800c0000;
    _DAT_800bf544 = puVar23;
  }
  return puVar7;
}

