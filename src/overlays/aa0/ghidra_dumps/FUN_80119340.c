// FUN_80119340

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x80119460) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_80119340(undefined4 param_1,int param_2,int param_3,int *param_4)

{
  byte bVar1;
  undefined2 uVar2;
  short sVar3;
  bool bVar4;
  char cVar5;
  undefined4 in_zero;
  undefined4 extraout_at;
  undefined1 uVar6;
  ushort uVar7;
  short sVar8;
  short *psVar9;
  uint *puVar10;
  int extraout_v1;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint *puVar15;
  uint uVar16;
  undefined1 uVar17;
  uint uVar18;
  uint uVar19;
  int *piVar20;
  byte *in_t0;
  byte *pbVar21;
  uint *in_t1;
  int *in_t2;
  uint in_t3;
  uint in_t5;
  uint in_t6;
  int in_t7;
  uint unaff_s0;
  int unaff_s1;
  uint *puVar22;
  uint *unaff_s2;
  int unaff_s3;
  int *unaff_s4;
  int unaff_s5;
  int *unaff_s6;
  int unaff_s7;
  int unaff_s8;
  undefined8 uVar23;
  int in_stack_00000020;
  int in_stack_00000024;
  int in_stack_00000028;
  int in_stack_0000002c;
  int in_stack_00000030;
  int in_stack_00000034;
  int in_stack_00000038;
  int in_stack_0000003c;
  
  if (*(char *)(unaff_s0 + 0x70) != -1) {
    if (*(char *)(unaff_s0 + 7) == '\0') {
      bVar4 = false;
      if (0x18 < DAT_1f800207) {
        iVar11 = func_0x800519e0();
        bVar4 = true;
        if (iVar11 == 0) {
          *(char *)(unaff_s0 + 7) = *(char *)(unaff_s0 + 7) + '\x01';
          if (DAT_800bf8f6 != -1) {
            func_0x80077c40();
            puVar22 = (uint *)FUN_801224fc();
            return puVar22;
          }
          puVar22 = (uint *)FUN_801224c0();
          return puVar22;
        }
      }
    }
    else {
      if (*(char *)(unaff_s0 + 7) != '\x01') {
        puVar22 = (uint *)FUN_801224fc();
        return puVar22;
      }
      bVar4 = true;
      if (DAT_1f800207 < 0x19) {
        func_0x8007addc();
        bVar4 = false;
        *(char *)(unaff_s0 + 7) = *(char *)(unaff_s0 + 7) + -1;
      }
    }
    if (bVar4) {
      uVar6 = 1;
      if (((DAT_1f800137 != '\0') || (uVar6 = 1, *(byte *)(unaff_s5 + 0x2a) - 0x20 < 4)) ||
         ((*(char *)(unaff_s0 + 0x47) == '\x03' && (uVar6 = 2, _DAT_1f800162 < -0xce3)))) {
        *(undefined1 *)(unaff_s0 + 1) = uVar6;
        func_0x80077e7c();
      }
      puVar22 = (uint *)0x0;
      if (*(char *)(unaff_s0 + 1) != '\0') {
        func_0x8004190c();
        puVar22 = (uint *)func_0x800518fc();
      }
    }
    else {
      puVar22 = (uint *)0x3;
      if (DAT_800bf8f7 == -1) {
        *(undefined1 *)(unaff_s0 + 4) = 3;
        puVar22 = (uint *)FUN_80122598();
        return puVar22;
      }
    }
    return puVar22;
  }
  func_0x80042310();
  iVar13 = 0x42;
  func_0x80040b48();
  *(char *)(unaff_s3 + 0x145) = (char)unaff_s1;
  sVar8 = 1;
  iVar11 = extraout_v1;
  while( true ) {
    if (-1 < sVar8) {
      *(undefined2 *)(iVar11 + 8) = 0;
    }
    unaff_s0 = unaff_s0 + 1;
    iVar14 = iVar13 + 4;
    if (4 < (int)unaff_s0) break;
    *(short *)(*(int *)(iVar13 + 0xc4) + 8) = *(short *)(*(int *)(iVar13 + 0xc4) + 8) + 8;
    iVar11 = *(int *)(iVar13 + 0xc4);
    sVar8 = *(short *)(iVar11 + 8);
    iVar13 = iVar14;
  }
  if (*(short *)(unaff_s2[0x31] + 8) < 0) {
    uVar23 = func_0x8006cdcc();
    do {
      uVar16 = (uint)((ulonglong)uVar23 >> 0x20);
      iVar11 = unaff_s1;
      if ((int)param_4 < *(int *)((int)uVar23 + 0x34)) {
        *(undefined2 *)(unaff_s2 + 4) = 0;
        *(short *)(unaff_s2 + 6) =
             (short)((int)(short)unaff_s2[8] + (int)(short)unaff_s4[0x21] >> 1);
        *(short *)((int)unaff_s2 + 0x12) =
             (short)((int)*(short *)((int)unaff_s2 + 10) + (int)*(short *)((int)unaff_s6 + 2) >> 1);
        *(short *)((int)unaff_s2 + 0x1a) =
             (short)((int)*(short *)((int)unaff_s2 + 0x22) + (int)*(short *)((int)unaff_s6 + 2) >> 1
                    );
        uVar18 = (uint)(ushort)unaff_s2[2] + (uint)*(ushort *)((int)unaff_s2 + 10) & 0xf;
        uVar19 = (uint)*(byte *)((int)param_4 + (uVar18 - 0x42fc));
        uVar12 = uVar18 + 4 & 0xf;
        uVar19 = uVar19 << 0x10 | uVar19 << 8 | 0x5e000000 | uVar19;
        unaff_s2[1] = uVar19;
        unaff_s2[0xb] = uVar19;
        uVar18 = (uint)*(byte *)((int)param_4 + (uVar12 - 0x42fc));
        uVar12 = uVar12 + 4 & 0xf;
        uVar18 = uVar18 << 0x10 | uVar18 << 8 | uVar18;
        unaff_s2[3] = uVar18;
        unaff_s2[0xd] = uVar18;
        uVar18 = (uint)*(byte *)((int)param_4 + (uVar12 - 0x42fc));
        uVar18 = uVar18 << 0x10 | uVar18 << 8 | uVar18;
        unaff_s2[5] = uVar18;
        unaff_s2[0xf] = uVar18;
        uVar18 = (uint)*(byte *)((int)param_4 + ((uVar12 + 4 & 0xf) - 0x42fc));
        uVar18 = uVar18 << 0x10 | uVar18 << 8 | uVar18;
        unaff_s2[7] = uVar18;
        unaff_s2[0x11] = uVar18;
        puVar22 = (uint *)(_DAT_800ed8c8 + *(int *)(unaff_s3 + 0x80) * 4);
        *unaff_s2 = *puVar22 | 0x9000000;
        *puVar22 = (uint)unaff_s2;
        unaff_s2[0xc] = unaff_s2[2];
        unaff_s2[0xe] = unaff_s2[4];
        unaff_s2[0x13] = uVar16;
        unaff_s2[0x10] = unaff_s2[6];
        unaff_s2[0x12] = unaff_s2[8];
        *(short *)((int)unaff_s2 + 0x32) = *(short *)((int)unaff_s2 + 0x32) + 1;
        *(short *)((int)unaff_s2 + 0x3a) = *(short *)((int)unaff_s2 + 0x3a) + 1;
        *(short *)((int)unaff_s2 + 0x42) = *(short *)((int)unaff_s2 + 0x42) + 1;
        *(short *)((int)unaff_s2 + 0x4a) = *(short *)((int)unaff_s2 + 0x4a) + 1;
        puVar22 = (uint *)(_DAT_800ed8c8 + *(int *)(unaff_s3 + 0x80) * 4);
        unaff_s2[10] = *puVar22 | 0x9000000;
        *puVar22 = (uint)(unaff_s2 + 10);
        puVar10 = unaff_s2 + 0x14;
        func_0x80083de0(puVar10,0,1,0x75);
        puVar15 = (uint *)(_DAT_800ed8c8 + *(int *)(unaff_s3 + 0x80) * 4);
        puVar22 = (uint *)(*puVar15 | 0x2000000);
        *puVar10 = (uint)puVar22;
        *puVar15 = (uint)puVar10;
        *(uint **)(unaff_s7 + -0xabc) = unaff_s2 + 0x17;
        return puVar22;
      }
      do {
        param_3 = param_3 + 4;
        uVar16 = uVar16 + 1;
        unaff_s1 = iVar11 + 4;
        if ((int)in_t2 <= (int)uVar16) {
          puVar22 = (uint *)0x3;
          if (-1 < (short)in_t0) {
            sVar8 = 0;
            if (*(char *)((int)in_t1 + 2) == '\x03') {
              sVar8 = *(short *)((int)in_t1 + 0x7e);
            }
            iVar13 = *(int *)(param_2 + (short)in_t0 * 4 + 0xc0);
            iVar11 = (int)*(short *)(iVar13 + 0x22) *
                     ((int)*(short *)((int)in_t1 + 0x36) - *(int *)(iVar13 + 0x34));
            puVar22 = (uint *)(*(int *)(iVar13 + 0x30) + (iVar11 >> 0xc));
            if (-1 < ((int)*(short *)((int)in_t1 + 0x32) + (int)sVar8 +
                     ((int)*(short *)((int)in_t1 + 0x86) - (int)(short)in_t1[0x21])) - (int)puVar22)
            {
              sVar3 = *(short *)(iVar13 + 0x30);
              *(undefined1 *)((int)in_t1 + 0x29) = 1;
              *(short *)((int)in_t1 + 0x32) =
                   (sVar3 - (*(short *)((int)in_t1 + 0x86) - (short)in_t1[0x21])) - sVar8;
              in_t1[0xc] = in_t1[0xc] + iVar11 * 0x10;
              if ((*(char *)((int)in_t1 + 2) != '\a') ||
                 (puVar22 = (uint *)(int)*(short *)((int)in_t1 + 0x4a), -1 < (int)puVar22)) {
                puVar22 = (uint *)-((int)((uint)*(ushort *)(iVar13 + 0x22) << 0x10) >> 0x14);
                *(short *)((int)in_t1 + 0x4a) = (short)puVar22;
              }
            }
          }
          return puVar22;
        }
        piVar20 = (int *)(iVar11 + 0xc4);
        iVar11 = unaff_s1;
      } while ((int)param_4 < *(int *)(*piVar20 + 0x34));
      uVar23 = CONCAT44(uVar16,*(undefined4 *)(param_2 + param_3 + 0xc0));
    } while( true );
  }
  *(char *)((int)unaff_s2 + 5) = *(char *)((int)unaff_s2 + 5) + '\x01';
  while( true ) {
    func_0x80084360(iVar14 + 0xf8);
    func_0x80084470(&DAT_1f8000f8);
    unaff_s2[5] = unaff_s2[5] + *(int *)(unaff_s8 + 0x3c);
    uVar18 = *(uint *)(unaff_s8 + 0x44);
    unaff_s2[6] = unaff_s2[6] + *(int *)(unaff_s8 + 0x40);
    unaff_s2[7] = unaff_s2[7] + uVar18;
    func_0x80084660();
    func_0x80084690();
    puVar22 = (uint *)(unaff_s1 << 0x10);
    uVar16 = (int)puVar22 >> 0x10;
    FUN_80134064();
    if (3 < (int)unaff_s4) {
      return (uint *)0x0;
    }
    piVar20 = param_4;
    puVar15 = puVar22;
    if (unaff_s4 == (int *)0x0) {
      iVar11 = unaff_s6[0x30];
      *(short *)(unaff_s7 + 0xc0) = *(short *)(iVar11 + 0x2c) + -0xeb;
      *(undefined2 *)(unaff_s3 + 2) = *(undefined2 *)(iVar11 + 0x30);
      *(undefined2 *)(unaff_s5 + 2) = 0xf894;
      iVar11 = 0x1130;
      goto LAB_8013437c;
    }
    if (unaff_s4 == (int *)0x1) {
      iVar11 = unaff_s6[0x30];
      *(short *)(unaff_s7 + 0xc0) = *(short *)(iVar11 + 0x2c) + 0xeb;
      *(undefined2 *)(unaff_s3 + 2) = *(undefined2 *)(iVar11 + 0x30);
      *(undefined2 *)(unaff_s5 + 2) = 0xf894;
      iVar11 = 0x1130;
      goto LAB_8013437c;
    }
    if (unaff_s4 == (int *)0x2) break;
    if (unaff_s4 == (int *)0x3) {
      iVar11 = unaff_s6[*(byte *)(unaff_s6 + 2) + 0x30];
      *(short *)(unaff_s7 + 0xc0) = *(short *)(iVar11 + 0x2c) + 0xeb;
      *(undefined2 *)(unaff_s3 + 2) = *(undefined2 *)(iVar11 + 0x30);
      uVar2 = *(undefined2 *)(iVar11 + 0x34);
      *(undefined2 *)(unaff_s5 + 2) = 0xf736;
      *(undefined2 *)(unaff_s5 + 4) = 0x16ac;
      *(undefined2 *)(unaff_s3 + 4) = uVar2;
    }
    iVar13 = (int)(((uint)*(ushort *)(unaff_s5 + 2) - (uint)*(ushort *)(unaff_s3 + 2)) * 0x10000) >>
             0x10;
    iVar11 = (int)(((uint)*(ushort *)(unaff_s5 + 4) - (uint)*(ushort *)(unaff_s3 + 4)) * 0x10000) >>
             0x10;
    in_t0 = (byte *)(iVar11 * iVar11);
    unaff_s4 = (int *)((int)unaff_s4 + 1);
    unaff_s1 = func_0x80084080(in_t0 + iVar13 * iVar13);
    iVar11 = func_0x80085690(-iVar11,-iVar13);
    func_0x80051794();
    unaff_s0 = iVar11 << 0x10;
    func_0x80084d10((int)unaff_s0 >> 0x10);
    iVar14 = 0x1f800000;
  }
  do {
    uVar17 = (undefined1)uVar18;
    uVar6 = (undefined1)uVar16;
    iVar11 = 0xff;
    do {
      *(undefined1 *)in_t1 = uVar6;
      *(undefined1 *)((int)in_t1 + 1) = uVar17;
      *(char *)((int)in_t1 + 2) = (char)iVar11;
      uVar16 = (uint)*(byte *)(param_4 + -2);
      uVar18 = (uint)*(byte *)((int)param_4 + -7);
      iVar11 = (uint)*in_t0 << 0x18;
      piVar20 = param_4;
      puVar15 = puVar22;
LAB_8013437c:
      puVar22 = (uint *)((iVar11 >> 0x18) - (uint)*(ushort *)(unaff_s3 + 6));
      if ((int)puVar22 * 0x10000 < 0) {
        puVar22 = (uint *)0x0;
      }
      puVar10 = (uint *)(int)(short)puVar22;
      iVar13 = uVar16 - (int)puVar10;
      iVar14 = uVar18 - (int)puVar10;
      iVar11 = (uint)*(byte *)((int)piVar20 + -6) - (int)puVar10;
      if (iVar13 < 0) {
        if (puVar10 == (uint *)0x0) {
          return (uint *)0x0;
        }
        puVar10[7] = 0x80145230;
        *(char *)((int)puVar10 + 3) = (char)unaff_s0;
        puVar10[4] = 0;
        puVar22 = puVar10;
LAB_8013d390:
        puVar22[5] = (uint)puVar15;
        return puVar22;
      }
      if (0xff < iVar13) {
        iVar13 = 0xff;
      }
      if (iVar14 < 0) goto LAB_8013d390;
      if (0xff < iVar14) {
        iVar14 = 0xff;
      }
      if (iVar11 < 0) {
        puVar22 = (uint *)FUN_8013d3ac(0);
        return puVar22;
      }
      if (0xff < iVar11) {
        iVar11 = 0xff;
      }
      *(char *)(puVar15 + 10) = (char)iVar13;
      *(char *)((int)puVar15 + 0x29) = (char)iVar14;
      *(char *)((int)puVar15 + 0x2a) = (char)iVar11;
      cVar5 = (char)unaff_s5;
      *(char *)(piVar20 + -9) = (char)piVar20[-9] + cVar5;
      *(char *)(piVar20 + -6) = (char)piVar20[-6] + cVar5;
      *(char *)(piVar20 + -3) = (char)piVar20[-3] + cVar5;
      *(char *)piVar20 = (char)*piVar20 + cVar5;
      puVar22 = (uint *)(_DAT_800ed8c8 + *unaff_s4 * 4);
      *puVar15 = *puVar22 | 0xc000000;
      *puVar22 = (uint)puVar15;
      param_4 = piVar20 + 0xd;
      puVar22 = puVar15 + 0xd;
      do {
        do {
          do {
            pbVar21 = in_t0;
            in_t0 = pbVar21 + 0x24;
            in_t2 = in_t2 + 9;
            if ((int)in_t6 < 1) {
              _DAT_800bf544 = puVar22;
              return (uint *)&LAB_800c0000;
            }
            in_t6 = *(uint *)(pbVar21 + 10);
            in_stack_00000020 = (uint)CONCAT21((ushort)*in_t0 << 8,pbVar21[0x22]) << 8;
            in_stack_00000024 = (uint)CONCAT21(in_stack_00000024._2_2_,pbVar21[0x15]) << 8;
            in_stack_00000028 = (uint)CONCAT21((ushort)pbVar21[0x25] << 8,pbVar21[0x23]) << 8;
            in_stack_0000002c = (uint)CONCAT21(in_stack_0000002c._2_2_,pbVar21[0x19]) << 8;
            in_stack_00000030 = (uint)CONCAT21((ushort)pbVar21[0x28] << 8,pbVar21[0x26]) << 8;
            in_stack_00000034 = (uint)CONCAT21(in_stack_00000034._2_2_,pbVar21[0x1d]) << 8;
            in_stack_00000038 = (uint)CONCAT21((ushort)pbVar21[0x29] << 8,pbVar21[0x27]) << 8;
            in_stack_0000003c = (uint)CONCAT21(in_stack_0000003c._2_2_,pbVar21[0x21]) << 8;
            setCopReg(2,in_zero,in_stack_00000020);
            setCopReg(2,extraout_at,in_stack_00000024);
            setCopReg(2,&stack0x00000030,in_stack_00000028);
            setCopReg(2,&stack0x00000028,in_stack_0000002c);
            setCopReg(2,&stack0x00000020,in_stack_00000030);
            setCopReg(2,iVar13,in_stack_00000034);
            piVar20[2] = *(uint *)(pbVar21 + 0x12) & 0xffffff | 0x3e000000;
            piVar20[4] = *in_t2 + in_t7;
            copFunction(2,0x280030);
            piVar20[7] = in_t6 & 0x7fffff;
            iVar11 = *(int *)(pbVar21 + 0xe);
            piVar20[10] = iVar11;
            iVar14 = getCopControlWord(2,0xf800);
            *unaff_s6 = iVar14;
          } while (*unaff_s6 < 0);
          uVar16 = getCopReg(2,0xc);
          puVar15[0xf] = uVar16;
          uVar16 = getCopReg(2,0xd);
          puVar15[0x12] = uVar16;
          uVar16 = getCopReg(2,0xe);
          puVar15[0x15] = uVar16;
          *param_4 = iVar11 >> 0x10;
          setCopReg(2,in_zero,in_stack_00000038);
          setCopReg(2,extraout_at,in_stack_0000003c);
          piVar20[5] = *(int *)(pbVar21 + 0x16);
          copFunction(2,0x180001);
          piVar20[8] = *(int *)(pbVar21 + 0x1a);
          iVar11 = getCopControlWord(2,0xf800);
          *unaff_s6 = iVar11;
        } while (*unaff_s6 < 0);
        uVar16 = getCopReg(2,0xe);
        puVar15[0x18] = uVar16;
        piVar20[0xb] = *(int *)(pbVar21 + 0x1e);
        copFunction(2,0x168002e);
        iVar11 = getCopReg(2,7);
        *unaff_s4 = iVar11;
        iVar11 = *unaff_s4 + (int)*(short *)((int)unaff_s2 + 0x32);
        uVar16 = iVar11 >> 10;
        iVar11 = (iVar11 >> (uVar16 & 0x1f)) + uVar16 * 0x200;
        *unaff_s4 = iVar11;
        if (0x7fb < iVar11 - 4U) {
          *unaff_s4 = -1;
        }
      } while (*unaff_s4 < 0);
      if ((*(byte *)((int)unaff_s2 + 3) != in_t5) && (*(byte *)((int)unaff_s2 + 3) != in_t3)) {
        bVar1 = *(byte *)((int)unaff_s2 + 5);
        if ((2 < bVar1) && ((bVar1 < 6 || ((bVar1 < 0xb && (8 < bVar1)))))) {
          ((char *)((int)piVar20 + 0x1e))[0] = '.';
          ((char *)((int)piVar20 + 0x1e))[1] = '\0';
        }
      }
      iVar11 = (int)(char)*in_t0 - (uint)*(ushort *)(unaff_s3 + 6);
      sVar8 = (short)iVar11;
      if (iVar11 * 0x10000 < 0) {
        sVar8 = 0;
      }
      iVar11 = (int)sVar8;
      iVar13 = (uint)*(byte *)(piVar20 + 2) - iVar11;
      iVar14 = (uint)*(byte *)((int)piVar20 + 9) - iVar11;
      iVar11 = (uint)*(byte *)((int)piVar20 + 10) - iVar11;
      if (iVar13 < 0) {
        puVar22 = (uint *)(unaff_s0 + 0x60);
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
        iVar13 = 0x1a;
        uVar7 = *(ushort *)(unaff_s0 + 0x62);
        iVar14 = 8;
LAB_8013d19c:
                    /* WARNING: Subroutine does not return */
        *(ushort *)((int)puVar22 + 2) = uVar7 & 0xfffb;
        FUN_801402b8(unaff_s0,iVar13,iVar14);
      }
      if (0xff < iVar13) {
        iVar13 = 0xff;
      }
      if (iVar14 < 0) {
        puVar22 = (uint *)thunk_EXT_FUN_80146194(iVar11,iVar13,0);
        return puVar22;
      }
      if (0xff < iVar14) {
        iVar14 = 0xff;
      }
      uVar7 = (ushort)(iVar11 < 0x100);
      if (iVar11 < 0) {
        unaff_s0 = 0;
        goto LAB_8013d19c;
      }
      if (uVar7 == 0) {
        iVar11 = 0xff;
      }
      *(char *)(puVar15 + 0xe) = (char)iVar13;
      *(char *)((int)puVar15 + 0x39) = (char)iVar14;
      *(char *)((int)puVar15 + 0x3a) = (char)iVar11;
      iVar11 = (int)(char)*in_t0 - (uint)*(ushort *)(unaff_s3 + 6);
      sVar8 = (short)iVar11;
      if (iVar11 * 0x10000 < 0) {
        sVar8 = 0;
      }
      iVar11 = (int)sVar8;
      iVar13 = (uint)*(byte *)(piVar20 + 5) - iVar11;
      iVar14 = (uint)*(byte *)((int)piVar20 + 0x15) - iVar11;
      iVar11 = (uint)*(byte *)((int)piVar20 + 0x16) - iVar11;
      if (iVar13 < 0) {
        puVar22 = (uint *)FUN_8013d214(iVar11,0);
        return puVar22;
      }
      if (0xff < iVar13) {
        iVar13 = 0xff;
      }
      if (iVar14 < 0) {
        return (uint *)(uint)(iVar14 < 0x100);
      }
      if ((uint *)(uint)(iVar14 < 0x100) == (uint *)0x0) {
        iVar14 = 0xff;
      }
      if (iVar11 < 0) {
        unaff_s2 = (uint *)0x0;
        if (DAT_00000007 == 0) {
          uRam00000062 = uRam00000062 & 0xfffb;
                    /* WARNING: Subroutine does not return */
          FUN_801402b8(0,(int)(short)iVar13,8);
        }
        if (DAT_00000007 < 2) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        iVar11 = 0;
        sVar8 = _DAT_00000032;
        DAT_00000007 = DAT_00000007 - 1;
LAB_8013d2c4:
        *(short *)(iVar11 + 0x32) = sVar8 + 0x10;
        FUN_801406e4(iVar11,iVar13);
        return unaff_s2;
      }
      if (0xff < iVar11) {
        iVar11 = 0xff;
      }
      *(char *)(puVar15 + 0x11) = (char)iVar13;
      *(char *)((int)puVar15 + 0x45) = (char)iVar14;
      *(char *)((int)puVar15 + 0x46) = (char)iVar11;
      psVar9 = (short *)((int)(char)*in_t0 - (uint)*(ushort *)(unaff_s3 + 6));
      in_t1 = puVar15 + 0x14;
      if ((int)psVar9 * 0x10000 < 0) {
        psVar9 = (short *)0x0;
      }
      sVar8 = (short)psVar9;
      iVar11 = (int)sVar8;
      uVar16 = (uint)*(byte *)(piVar20 + 8) - iVar11;
      uVar18 = (uint)*(byte *)((int)piVar20 + 0x21) - iVar11;
      iVar11 = (uint)*(byte *)((int)piVar20 + 0x22) - iVar11;
      if ((int)uVar16 < 0) {
        iVar13 = 0;
        goto LAB_8013d2c4;
      }
      if (0xff < (int)uVar16) {
        uVar16 = 0xff;
      }
      uVar6 = (undefined1)uVar16;
      if ((int)uVar18 < 0) {
        return (uint *)(uint)((int)uVar18 < 0x100);
      }
      if ((uint *)(uint)((int)uVar18 < 0x100) == (uint *)0x0) {
        uVar18 = 0xff;
      }
      uVar17 = (undefined1)uVar18;
      if (iVar11 < 0) {
        uVar16 = func_0x80078240((int)_DAT_1f800160 - (int)*psVar9,
                                 (int)_DAT_1f800162 - (int)psVar9[1],
                                 (int)_DAT_1f800164 - (int)psVar9[2]);
        return (uint *)(uint)(uVar16 < unaff_s0);
      }
    } while (iVar11 < 0x100);
  } while( true );
}

