// FUN_8011943c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_8011943c(int param_1,int param_2,int param_3,int *param_4)

{
  byte bVar1;
  undefined2 uVar2;
  short sVar3;
  char cVar4;
  undefined4 in_zero;
  undefined4 extraout_at;
  ushort uVar5;
  short sVar6;
  short *psVar7;
  uint *puVar8;
  int iVar9;
  uint uVar10;
  uint *puVar11;
  undefined1 uVar12;
  uint uVar13;
  int iVar14;
  undefined1 uVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  int *piVar19;
  byte *in_t0;
  byte *pbVar20;
  uint *in_t1;
  int *in_t2;
  uint in_t3;
  uint in_t5;
  uint in_t6;
  int in_t7;
  uint unaff_s0;
  int unaff_s1;
  uint *puVar21;
  uint *unaff_s2;
  int unaff_s3;
  int *unaff_s4;
  int unaff_s5;
  int *unaff_s6;
  int unaff_s7;
  int unaff_s8;
  undefined8 uVar22;
  int in_stack_00000020;
  int in_stack_00000024;
  int in_stack_00000028;
  int in_stack_0000002c;
  int in_stack_00000030;
  int in_stack_00000034;
  int in_stack_00000038;
  int in_stack_0000003c;
  
  if (_DAT_00000009 < 0) {
    uVar22 = func_0x8006cdcc();
    do {
      uVar13 = (uint)((ulonglong)uVar22 >> 0x20);
      iVar9 = unaff_s1;
      if ((int)param_4 < *(int *)((int)uVar22 + 0x34)) {
        *(undefined2 *)(unaff_s2 + 4) = 0;
        *(short *)(unaff_s2 + 6) =
             (short)((int)(short)unaff_s2[8] + (int)(short)unaff_s4[0x21] >> 1);
        *(short *)((int)unaff_s2 + 0x12) =
             (short)((int)*(short *)((int)unaff_s2 + 10) + (int)*(short *)((int)unaff_s6 + 2) >> 1);
        *(short *)((int)unaff_s2 + 0x1a) =
             (short)((int)*(short *)((int)unaff_s2 + 0x22) + (int)*(short *)((int)unaff_s6 + 2) >> 1
                    );
        uVar16 = (uint)(ushort)unaff_s2[2] + (uint)*(ushort *)((int)unaff_s2 + 10) & 0xf;
        uVar18 = (uint)*(byte *)((int)param_4 + (uVar16 - 0x42fc));
        uVar10 = uVar16 + 4 & 0xf;
        uVar18 = uVar18 << 0x10 | uVar18 << 8 | 0x5e000000 | uVar18;
        unaff_s2[1] = uVar18;
        unaff_s2[0xb] = uVar18;
        uVar16 = (uint)*(byte *)((int)param_4 + (uVar10 - 0x42fc));
        uVar10 = uVar10 + 4 & 0xf;
        uVar16 = uVar16 << 0x10 | uVar16 << 8 | uVar16;
        unaff_s2[3] = uVar16;
        unaff_s2[0xd] = uVar16;
        uVar16 = (uint)*(byte *)((int)param_4 + (uVar10 - 0x42fc));
        uVar16 = uVar16 << 0x10 | uVar16 << 8 | uVar16;
        unaff_s2[5] = uVar16;
        unaff_s2[0xf] = uVar16;
        uVar16 = (uint)*(byte *)((int)param_4 + ((uVar10 + 4 & 0xf) - 0x42fc));
        uVar16 = uVar16 << 0x10 | uVar16 << 8 | uVar16;
        unaff_s2[7] = uVar16;
        unaff_s2[0x11] = uVar16;
        puVar21 = (uint *)(_DAT_800ed8c8 + *(int *)(unaff_s3 + 0x80) * 4);
        *unaff_s2 = *puVar21 | 0x9000000;
        *puVar21 = (uint)unaff_s2;
        unaff_s2[0xc] = unaff_s2[2];
        unaff_s2[0xe] = unaff_s2[4];
        unaff_s2[0x13] = uVar13;
        unaff_s2[0x10] = unaff_s2[6];
        unaff_s2[0x12] = unaff_s2[8];
        *(short *)((int)unaff_s2 + 0x32) = *(short *)((int)unaff_s2 + 0x32) + 1;
        *(short *)((int)unaff_s2 + 0x3a) = *(short *)((int)unaff_s2 + 0x3a) + 1;
        *(short *)((int)unaff_s2 + 0x42) = *(short *)((int)unaff_s2 + 0x42) + 1;
        *(short *)((int)unaff_s2 + 0x4a) = *(short *)((int)unaff_s2 + 0x4a) + 1;
        puVar21 = (uint *)(_DAT_800ed8c8 + *(int *)(unaff_s3 + 0x80) * 4);
        unaff_s2[10] = *puVar21 | 0x9000000;
        *puVar21 = (uint)(unaff_s2 + 10);
        puVar8 = unaff_s2 + 0x14;
        func_0x80083de0(puVar8,0,1,0x75);
        puVar11 = (uint *)(_DAT_800ed8c8 + *(int *)(unaff_s3 + 0x80) * 4);
        puVar21 = (uint *)(*puVar11 | 0x2000000);
        *puVar8 = (uint)puVar21;
        *puVar11 = (uint)puVar8;
        *(uint **)(unaff_s7 + -0xabc) = unaff_s2 + 0x17;
        return puVar21;
      }
      do {
        param_3 = param_3 + 4;
        uVar13 = uVar13 + 1;
        unaff_s1 = iVar9 + 4;
        if ((int)in_t2 <= (int)uVar13) {
          puVar21 = (uint *)0x3;
          if (-1 < (short)in_t0) {
            sVar6 = 0;
            if (*(char *)((int)in_t1 + 2) == '\x03') {
              sVar6 = *(short *)((int)in_t1 + 0x7e);
            }
            iVar14 = *(int *)(param_2 + (short)in_t0 * 4 + 0xc0);
            iVar9 = (int)*(short *)(iVar14 + 0x22) *
                    ((int)*(short *)((int)in_t1 + 0x36) - *(int *)(iVar14 + 0x34));
            puVar21 = (uint *)(*(int *)(iVar14 + 0x30) + (iVar9 >> 0xc));
            if (-1 < ((int)*(short *)((int)in_t1 + 0x32) + (int)sVar6 +
                     ((int)*(short *)((int)in_t1 + 0x86) - (int)(short)in_t1[0x21])) - (int)puVar21)
            {
              sVar3 = *(short *)(iVar14 + 0x30);
              *(undefined1 *)((int)in_t1 + 0x29) = 1;
              *(short *)((int)in_t1 + 0x32) =
                   (sVar3 - (*(short *)((int)in_t1 + 0x86) - (short)in_t1[0x21])) - sVar6;
              in_t1[0xc] = in_t1[0xc] + iVar9 * 0x10;
              if ((*(char *)((int)in_t1 + 2) != '\a') ||
                 (puVar21 = (uint *)(int)*(short *)((int)in_t1 + 0x4a), -1 < (int)puVar21)) {
                puVar21 = (uint *)-((int)((uint)*(ushort *)(iVar14 + 0x22) << 0x10) >> 0x14);
                *(short *)((int)in_t1 + 0x4a) = (short)puVar21;
              }
            }
          }
          return puVar21;
        }
        piVar19 = (int *)(iVar9 + 0xc4);
        iVar9 = unaff_s1;
      } while ((int)param_4 < *(int *)(*piVar19 + 0x34));
      uVar22 = CONCAT44(uVar13,*(undefined4 *)(param_2 + param_3 + 0xc0));
    } while( true );
  }
  *(char *)((int)unaff_s2 + 5) = *(char *)((int)unaff_s2 + 5) + '\x01';
  while( true ) {
    func_0x80084360(param_1 + 0xf8);
    func_0x80084470(&DAT_1f8000f8);
    unaff_s2[5] = unaff_s2[5] + *(int *)(unaff_s8 + 0x3c);
    uVar16 = *(uint *)(unaff_s8 + 0x44);
    unaff_s2[6] = unaff_s2[6] + *(int *)(unaff_s8 + 0x40);
    unaff_s2[7] = unaff_s2[7] + uVar16;
    func_0x80084660();
    func_0x80084690();
    puVar21 = (uint *)(unaff_s1 << 0x10);
    uVar13 = (int)puVar21 >> 0x10;
    FUN_80134064();
    if (3 < (int)unaff_s4) {
      return (uint *)0x0;
    }
    piVar19 = param_4;
    puVar11 = puVar21;
    if (unaff_s4 == (int *)0x0) {
      iVar9 = unaff_s6[0x30];
      *(short *)(unaff_s7 + 0xc0) = *(short *)(iVar9 + 0x2c) + -0xeb;
      *(undefined2 *)(unaff_s3 + 2) = *(undefined2 *)(iVar9 + 0x30);
      *(undefined2 *)(unaff_s5 + 2) = 0xf894;
      iVar9 = 0x1130;
      goto LAB_8013437c;
    }
    if (unaff_s4 == (int *)0x1) {
      iVar9 = unaff_s6[0x30];
      *(short *)(unaff_s7 + 0xc0) = *(short *)(iVar9 + 0x2c) + 0xeb;
      *(undefined2 *)(unaff_s3 + 2) = *(undefined2 *)(iVar9 + 0x30);
      *(undefined2 *)(unaff_s5 + 2) = 0xf894;
      iVar9 = 0x1130;
      goto LAB_8013437c;
    }
    if (unaff_s4 == (int *)0x2) break;
    if (unaff_s4 == (int *)0x3) {
      iVar9 = unaff_s6[*(byte *)(unaff_s6 + 2) + 0x30];
      *(short *)(unaff_s7 + 0xc0) = *(short *)(iVar9 + 0x2c) + 0xeb;
      *(undefined2 *)(unaff_s3 + 2) = *(undefined2 *)(iVar9 + 0x30);
      uVar2 = *(undefined2 *)(iVar9 + 0x34);
      *(undefined2 *)(unaff_s5 + 2) = 0xf736;
      *(undefined2 *)(unaff_s5 + 4) = 0x16ac;
      *(undefined2 *)(unaff_s3 + 4) = uVar2;
    }
    iVar14 = (int)(((uint)*(ushort *)(unaff_s5 + 2) - (uint)*(ushort *)(unaff_s3 + 2)) * 0x10000) >>
             0x10;
    iVar9 = (int)(((uint)*(ushort *)(unaff_s5 + 4) - (uint)*(ushort *)(unaff_s3 + 4)) * 0x10000) >>
            0x10;
    in_t0 = (byte *)(iVar9 * iVar9);
    unaff_s4 = (int *)((int)unaff_s4 + 1);
    unaff_s1 = func_0x80084080(in_t0 + iVar14 * iVar14);
    iVar9 = func_0x80085690(-iVar9,-iVar14);
    func_0x80051794();
    unaff_s0 = iVar9 << 0x10;
    func_0x80084d10((int)unaff_s0 >> 0x10);
    param_1 = 0x1f800000;
  }
  do {
    uVar15 = (undefined1)uVar16;
    uVar12 = (undefined1)uVar13;
    iVar9 = 0xff;
    do {
      *(undefined1 *)in_t1 = uVar12;
      *(undefined1 *)((int)in_t1 + 1) = uVar15;
      *(char *)((int)in_t1 + 2) = (char)iVar9;
      uVar13 = (uint)*(byte *)(param_4 + -2);
      uVar16 = (uint)*(byte *)((int)param_4 + -7);
      iVar9 = (uint)*in_t0 << 0x18;
      piVar19 = param_4;
      puVar11 = puVar21;
LAB_8013437c:
      puVar21 = (uint *)((iVar9 >> 0x18) - (uint)*(ushort *)(unaff_s3 + 6));
      if ((int)puVar21 * 0x10000 < 0) {
        puVar21 = (uint *)0x0;
      }
      puVar8 = (uint *)(int)(short)puVar21;
      iVar14 = uVar13 - (int)puVar8;
      iVar17 = uVar16 - (int)puVar8;
      iVar9 = (uint)*(byte *)((int)piVar19 + -6) - (int)puVar8;
      if (iVar14 < 0) {
        if (puVar8 == (uint *)0x0) {
          return (uint *)0x0;
        }
        puVar8[7] = 0x80145230;
        *(char *)((int)puVar8 + 3) = (char)unaff_s0;
        puVar8[4] = 0;
        puVar21 = puVar8;
LAB_8013d390:
        puVar21[5] = (uint)puVar11;
        return puVar21;
      }
      if (0xff < iVar14) {
        iVar14 = 0xff;
      }
      if (iVar17 < 0) goto LAB_8013d390;
      if (0xff < iVar17) {
        iVar17 = 0xff;
      }
      if (iVar9 < 0) {
        puVar21 = (uint *)FUN_8013d3ac(0);
        return puVar21;
      }
      if (0xff < iVar9) {
        iVar9 = 0xff;
      }
      *(char *)(puVar11 + 10) = (char)iVar14;
      *(char *)((int)puVar11 + 0x29) = (char)iVar17;
      *(char *)((int)puVar11 + 0x2a) = (char)iVar9;
      cVar4 = (char)unaff_s5;
      *(char *)(piVar19 + -9) = (char)piVar19[-9] + cVar4;
      *(char *)(piVar19 + -6) = (char)piVar19[-6] + cVar4;
      *(char *)(piVar19 + -3) = (char)piVar19[-3] + cVar4;
      *(char *)piVar19 = (char)*piVar19 + cVar4;
      puVar21 = (uint *)(_DAT_800ed8c8 + *unaff_s4 * 4);
      *puVar11 = *puVar21 | 0xc000000;
      *puVar21 = (uint)puVar11;
      param_4 = piVar19 + 0xd;
      puVar21 = puVar11 + 0xd;
      do {
        do {
          do {
            pbVar20 = in_t0;
            in_t0 = pbVar20 + 0x24;
            in_t2 = in_t2 + 9;
            if ((int)in_t6 < 1) {
              _DAT_800bf544 = puVar21;
              return (uint *)&LAB_800c0000;
            }
            in_t6 = *(uint *)(pbVar20 + 10);
            in_stack_00000020 = (uint)CONCAT21((ushort)*in_t0 << 8,pbVar20[0x22]) << 8;
            in_stack_00000024 = (uint)CONCAT21(in_stack_00000024._2_2_,pbVar20[0x15]) << 8;
            in_stack_00000028 = (uint)CONCAT21((ushort)pbVar20[0x25] << 8,pbVar20[0x23]) << 8;
            in_stack_0000002c = (uint)CONCAT21(in_stack_0000002c._2_2_,pbVar20[0x19]) << 8;
            in_stack_00000030 = (uint)CONCAT21((ushort)pbVar20[0x28] << 8,pbVar20[0x26]) << 8;
            in_stack_00000034 = (uint)CONCAT21(in_stack_00000034._2_2_,pbVar20[0x1d]) << 8;
            in_stack_00000038 = (uint)CONCAT21((ushort)pbVar20[0x29] << 8,pbVar20[0x27]) << 8;
            in_stack_0000003c = (uint)CONCAT21(in_stack_0000003c._2_2_,pbVar20[0x21]) << 8;
            setCopReg(2,in_zero,in_stack_00000020);
            setCopReg(2,extraout_at,in_stack_00000024);
            setCopReg(2,&stack0x00000030,in_stack_00000028);
            setCopReg(2,&stack0x00000028,in_stack_0000002c);
            setCopReg(2,&stack0x00000020,in_stack_00000030);
            setCopReg(2,iVar14,in_stack_00000034);
            piVar19[2] = *(uint *)(pbVar20 + 0x12) & 0xffffff | 0x3e000000;
            piVar19[4] = *in_t2 + in_t7;
            copFunction(2,0x280030);
            piVar19[7] = in_t6 & 0x7fffff;
            iVar9 = *(int *)(pbVar20 + 0xe);
            piVar19[10] = iVar9;
            iVar17 = getCopControlWord(2,0xf800);
            *unaff_s6 = iVar17;
          } while (*unaff_s6 < 0);
          uVar13 = getCopReg(2,0xc);
          puVar11[0xf] = uVar13;
          uVar13 = getCopReg(2,0xd);
          puVar11[0x12] = uVar13;
          uVar13 = getCopReg(2,0xe);
          puVar11[0x15] = uVar13;
          *param_4 = iVar9 >> 0x10;
          setCopReg(2,in_zero,in_stack_00000038);
          setCopReg(2,extraout_at,in_stack_0000003c);
          piVar19[5] = *(int *)(pbVar20 + 0x16);
          copFunction(2,0x180001);
          piVar19[8] = *(int *)(pbVar20 + 0x1a);
          iVar9 = getCopControlWord(2,0xf800);
          *unaff_s6 = iVar9;
        } while (*unaff_s6 < 0);
        uVar13 = getCopReg(2,0xe);
        puVar11[0x18] = uVar13;
        piVar19[0xb] = *(int *)(pbVar20 + 0x1e);
        copFunction(2,0x168002e);
        iVar9 = getCopReg(2,7);
        *unaff_s4 = iVar9;
        iVar9 = *unaff_s4 + (int)*(short *)((int)unaff_s2 + 0x32);
        uVar13 = iVar9 >> 10;
        iVar9 = (iVar9 >> (uVar13 & 0x1f)) + uVar13 * 0x200;
        *unaff_s4 = iVar9;
        if (0x7fb < iVar9 - 4U) {
          *unaff_s4 = -1;
        }
      } while (*unaff_s4 < 0);
      if ((*(byte *)((int)unaff_s2 + 3) != in_t5) && (*(byte *)((int)unaff_s2 + 3) != in_t3)) {
        bVar1 = *(byte *)((int)unaff_s2 + 5);
        if ((2 < bVar1) && ((bVar1 < 6 || ((bVar1 < 0xb && (8 < bVar1)))))) {
          ((char *)((int)piVar19 + 0x1e))[0] = '.';
          ((char *)((int)piVar19 + 0x1e))[1] = '\0';
        }
      }
      iVar9 = (int)(char)*in_t0 - (uint)*(ushort *)(unaff_s3 + 6);
      sVar6 = (short)iVar9;
      if (iVar9 * 0x10000 < 0) {
        sVar6 = 0;
      }
      iVar9 = (int)sVar6;
      iVar14 = (uint)*(byte *)(piVar19 + 2) - iVar9;
      iVar17 = (uint)*(byte *)((int)piVar19 + 9) - iVar9;
      iVar9 = (uint)*(byte *)((int)piVar19 + 10) - iVar9;
      if (iVar14 < 0) {
        puVar21 = (uint *)(unaff_s0 + 0x60);
        if (*(char *)(unaff_s0 + 7) != '\0') {
          if (*(char *)(unaff_s0 + 7) != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          if (*(short *)(*(int *)(unaff_s0 + 0x38) + 4) == 0) {
            *(short *)(unaff_s0 + 0x32) = *(short *)(unaff_s0 + 0x32) + 0x10;
            FUN_801406e4(unaff_s0,0);
            return unaff_s2;
          }
          *(ushort *)(unaff_s0 + 0x62) = *(ushort *)(unaff_s0 + 0x62) ^ 1;
                    /* WARNING: Subroutine does not return */
          *(short *)(unaff_s0 + 0x56) = *(short *)(unaff_s0 + 0x56) + 0x800;
          FUN_801402b8(unaff_s0,7,0);
        }
        iVar14 = 0x1a;
        uVar5 = *(ushort *)(unaff_s0 + 0x62);
        iVar17 = 8;
LAB_8013d19c:
                    /* WARNING: Subroutine does not return */
        *(ushort *)((int)puVar21 + 2) = uVar5 & 0xfffb;
        FUN_801402b8(unaff_s0,iVar14,iVar17);
      }
      if (0xff < iVar14) {
        iVar14 = 0xff;
      }
      if (iVar17 < 0) {
        puVar21 = (uint *)thunk_EXT_FUN_80146194(iVar9,iVar14,0);
        return puVar21;
      }
      if (0xff < iVar17) {
        iVar17 = 0xff;
      }
      uVar5 = (ushort)(iVar9 < 0x100);
      if (iVar9 < 0) {
        unaff_s0 = 0;
        goto LAB_8013d19c;
      }
      if (uVar5 == 0) {
        iVar9 = 0xff;
      }
      *(char *)(puVar11 + 0xe) = (char)iVar14;
      *(char *)((int)puVar11 + 0x39) = (char)iVar17;
      *(char *)((int)puVar11 + 0x3a) = (char)iVar9;
      iVar9 = (int)(char)*in_t0 - (uint)*(ushort *)(unaff_s3 + 6);
      sVar6 = (short)iVar9;
      if (iVar9 * 0x10000 < 0) {
        sVar6 = 0;
      }
      iVar9 = (int)sVar6;
      iVar14 = (uint)*(byte *)(piVar19 + 5) - iVar9;
      iVar17 = (uint)*(byte *)((int)piVar19 + 0x15) - iVar9;
      iVar9 = (uint)*(byte *)((int)piVar19 + 0x16) - iVar9;
      if (iVar14 < 0) {
        puVar21 = (uint *)FUN_8013d214(iVar9,0);
        return puVar21;
      }
      if (0xff < iVar14) {
        iVar14 = 0xff;
      }
      if (iVar17 < 0) {
        return (uint *)(uint)(iVar17 < 0x100);
      }
      if ((uint *)(uint)(iVar17 < 0x100) == (uint *)0x0) {
        iVar17 = 0xff;
      }
      if (iVar9 < 0) {
        unaff_s2 = (uint *)0x0;
        if (DAT_00000007 == 0) {
          uRam00000062 = uRam00000062 & 0xfffb;
                    /* WARNING: Subroutine does not return */
          FUN_801402b8(0,(int)(short)iVar14,8);
        }
        if (DAT_00000007 < 2) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        iVar9 = 0;
        sVar6 = _DAT_00000032;
        DAT_00000007 = DAT_00000007 - 1;
LAB_8013d2c4:
        *(short *)(iVar9 + 0x32) = sVar6 + 0x10;
        FUN_801406e4(iVar9,iVar14);
        return unaff_s2;
      }
      if (0xff < iVar9) {
        iVar9 = 0xff;
      }
      *(char *)(puVar11 + 0x11) = (char)iVar14;
      *(char *)((int)puVar11 + 0x45) = (char)iVar17;
      *(char *)((int)puVar11 + 0x46) = (char)iVar9;
      psVar7 = (short *)((int)(char)*in_t0 - (uint)*(ushort *)(unaff_s3 + 6));
      in_t1 = puVar11 + 0x14;
      if ((int)psVar7 * 0x10000 < 0) {
        psVar7 = (short *)0x0;
      }
      sVar6 = (short)psVar7;
      iVar9 = (int)sVar6;
      uVar13 = (uint)*(byte *)(piVar19 + 8) - iVar9;
      uVar16 = (uint)*(byte *)((int)piVar19 + 0x21) - iVar9;
      iVar9 = (uint)*(byte *)((int)piVar19 + 0x22) - iVar9;
      if ((int)uVar13 < 0) {
        iVar14 = 0;
        goto LAB_8013d2c4;
      }
      if (0xff < (int)uVar13) {
        uVar13 = 0xff;
      }
      uVar12 = (undefined1)uVar13;
      if ((int)uVar16 < 0) {
        return (uint *)(uint)((int)uVar16 < 0x100);
      }
      if ((uint *)(uint)((int)uVar16 < 0x100) == (uint *)0x0) {
        uVar16 = 0xff;
      }
      uVar15 = (undefined1)uVar16;
      if (iVar9 < 0) {
        uVar13 = func_0x80078240((int)_DAT_1f800160 - (int)*psVar7,
                                 (int)_DAT_1f800162 - (int)psVar7[1],
                                 (int)_DAT_1f800164 - (int)psVar7[2]);
        return (uint *)(uint)(uVar13 < unaff_s0);
      }
    } while (iVar9 < 0x100);
  } while( true );
}

