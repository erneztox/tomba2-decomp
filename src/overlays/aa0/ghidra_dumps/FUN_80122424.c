// FUN_80122424

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_80122424(int param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  byte bVar1;
  undefined2 uVar2;
  char cVar3;
  undefined4 in_zero;
  undefined4 extraout_at;
  ushort uVar4;
  short sVar5;
  short *psVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  int iVar9;
  undefined1 uVar10;
  uint uVar11;
  int iVar12;
  undefined1 uVar13;
  uint uVar14;
  int iVar15;
  int *piVar16;
  byte *in_t0;
  byte *pbVar17;
  uint *in_t1;
  int *in_t2;
  uint in_t3;
  uint in_t5;
  uint in_t6;
  int in_t7;
  uint unaff_s0;
  int unaff_s1;
  uint *puVar18;
  uint *puVar19;
  undefined1 *unaff_s2;
  int unaff_s3;
  int *unaff_s4;
  int unaff_s5;
  int *unaff_s6;
  int unaff_s7;
  int unaff_s8;
  int in_stack_00000020;
  int in_stack_00000024;
  int in_stack_00000028;
  int in_stack_0000002c;
  int in_stack_00000030;
  int in_stack_00000034;
  int in_stack_00000038;
  int in_stack_0000003c;
  
  unaff_s2[5] = unaff_s2[5] + '\x01';
  while( true ) {
    func_0x80084360(param_1 + 0xf8);
    func_0x80084470(&DAT_1f8000f8);
    *(int *)(unaff_s2 + 0x14) = *(int *)(unaff_s2 + 0x14) + *(int *)(unaff_s8 + 0x3c);
    uVar14 = *(uint *)(unaff_s8 + 0x44);
    *(int *)(unaff_s2 + 0x18) = *(int *)(unaff_s2 + 0x18) + *(int *)(unaff_s8 + 0x40);
    *(uint *)(unaff_s2 + 0x1c) = *(int *)(unaff_s2 + 0x1c) + uVar14;
    func_0x80084660();
    func_0x80084690();
    puVar18 = (uint *)(unaff_s1 << 0x10);
    uVar11 = (int)puVar18 >> 0x10;
    FUN_80134064();
    if (3 < (int)unaff_s4) {
      return (undefined1 *)0x0;
    }
    piVar16 = param_4;
    puVar19 = puVar18;
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
    iVar12 = (int)(((uint)*(ushort *)(unaff_s5 + 2) - (uint)*(ushort *)(unaff_s3 + 2)) * 0x10000) >>
             0x10;
    iVar9 = (int)(((uint)*(ushort *)(unaff_s5 + 4) - (uint)*(ushort *)(unaff_s3 + 4)) * 0x10000) >>
            0x10;
    in_t0 = (byte *)(iVar9 * iVar9);
    unaff_s4 = (int *)((int)unaff_s4 + 1);
    unaff_s1 = func_0x80084080(in_t0 + iVar12 * iVar12);
    iVar9 = func_0x80085690(-iVar9,-iVar12);
    func_0x80051794();
    unaff_s0 = iVar9 << 0x10;
    func_0x80084d10((int)unaff_s0 >> 0x10);
    param_1 = 0x1f800000;
  }
  do {
    uVar13 = (undefined1)uVar14;
    uVar10 = (undefined1)uVar11;
    iVar9 = 0xff;
    do {
      *(undefined1 *)in_t1 = uVar10;
      *(undefined1 *)((int)in_t1 + 1) = uVar13;
      *(char *)((int)in_t1 + 2) = (char)iVar9;
      uVar11 = (uint)*(byte *)(param_4 + -2);
      uVar14 = (uint)*(byte *)((int)param_4 + -7);
      iVar9 = (uint)*in_t0 << 0x18;
      piVar16 = param_4;
      puVar19 = puVar18;
LAB_8013437c:
      puVar7 = (undefined1 *)((iVar9 >> 0x18) - (uint)*(ushort *)(unaff_s3 + 6));
      if ((int)puVar7 * 0x10000 < 0) {
        puVar7 = (undefined1 *)0x0;
      }
      puVar8 = (undefined1 *)(int)(short)puVar7;
      iVar12 = uVar11 - (int)puVar8;
      iVar15 = uVar14 - (int)puVar8;
      iVar9 = (uint)*(byte *)((int)piVar16 + -6) - (int)puVar8;
      if (iVar12 < 0) {
        if (puVar8 == (undefined1 *)0x0) {
          return (undefined1 *)0x0;
        }
        *(undefined4 *)(puVar8 + 0x1c) = 0x80145230;
        puVar8[3] = (char)unaff_s0;
        *(undefined4 *)(puVar8 + 0x10) = 0;
        puVar7 = puVar8;
LAB_8013d390:
        *(uint **)(puVar7 + 0x14) = puVar19;
        return puVar7;
      }
      if (0xff < iVar12) {
        iVar12 = 0xff;
      }
      if (iVar15 < 0) goto LAB_8013d390;
      if (0xff < iVar15) {
        iVar15 = 0xff;
      }
      if (iVar9 < 0) {
        puVar7 = (undefined1 *)FUN_8013d3ac(0);
        return puVar7;
      }
      if (0xff < iVar9) {
        iVar9 = 0xff;
      }
      *(char *)(puVar19 + 10) = (char)iVar12;
      *(char *)((int)puVar19 + 0x29) = (char)iVar15;
      *(char *)((int)puVar19 + 0x2a) = (char)iVar9;
      cVar3 = (char)unaff_s5;
      *(char *)(piVar16 + -9) = (char)piVar16[-9] + cVar3;
      *(char *)(piVar16 + -6) = (char)piVar16[-6] + cVar3;
      *(char *)(piVar16 + -3) = (char)piVar16[-3] + cVar3;
      *(char *)piVar16 = (char)*piVar16 + cVar3;
      puVar18 = (uint *)(_DAT_800ed8c8 + *unaff_s4 * 4);
      *puVar19 = *puVar18 | 0xc000000;
      *puVar18 = (uint)puVar19;
      param_4 = piVar16 + 0xd;
      puVar18 = puVar19 + 0xd;
      do {
        do {
          do {
            pbVar17 = in_t0;
            in_t0 = pbVar17 + 0x24;
            in_t2 = in_t2 + 9;
            if ((int)in_t6 < 1) {
              _DAT_800bf544 = puVar18;
              return &LAB_800c0000;
            }
            in_t6 = *(uint *)(pbVar17 + 10);
            in_stack_00000020 = (uint)CONCAT21((ushort)*in_t0 << 8,pbVar17[0x22]) << 8;
            in_stack_00000024 = (uint)CONCAT21(in_stack_00000024._2_2_,pbVar17[0x15]) << 8;
            in_stack_00000028 = (uint)CONCAT21((ushort)pbVar17[0x25] << 8,pbVar17[0x23]) << 8;
            in_stack_0000002c = (uint)CONCAT21(in_stack_0000002c._2_2_,pbVar17[0x19]) << 8;
            in_stack_00000030 = (uint)CONCAT21((ushort)pbVar17[0x28] << 8,pbVar17[0x26]) << 8;
            in_stack_00000034 = (uint)CONCAT21(in_stack_00000034._2_2_,pbVar17[0x1d]) << 8;
            in_stack_00000038 = (uint)CONCAT21((ushort)pbVar17[0x29] << 8,pbVar17[0x27]) << 8;
            in_stack_0000003c = (uint)CONCAT21(in_stack_0000003c._2_2_,pbVar17[0x21]) << 8;
            setCopReg(2,in_zero,in_stack_00000020);
            setCopReg(2,extraout_at,in_stack_00000024);
            setCopReg(2,&stack0x00000030,in_stack_00000028);
            setCopReg(2,&stack0x00000028,in_stack_0000002c);
            setCopReg(2,&stack0x00000020,in_stack_00000030);
            setCopReg(2,iVar12,in_stack_00000034);
            piVar16[2] = *(uint *)(pbVar17 + 0x12) & 0xffffff | 0x3e000000;
            piVar16[4] = *in_t2 + in_t7;
            copFunction(2,0x280030);
            piVar16[7] = in_t6 & 0x7fffff;
            iVar9 = *(int *)(pbVar17 + 0xe);
            piVar16[10] = iVar9;
            iVar15 = getCopControlWord(2,0xf800);
            *unaff_s6 = iVar15;
          } while (*unaff_s6 < 0);
          uVar11 = getCopReg(2,0xc);
          puVar19[0xf] = uVar11;
          uVar11 = getCopReg(2,0xd);
          puVar19[0x12] = uVar11;
          uVar11 = getCopReg(2,0xe);
          puVar19[0x15] = uVar11;
          *param_4 = iVar9 >> 0x10;
          setCopReg(2,in_zero,in_stack_00000038);
          setCopReg(2,extraout_at,in_stack_0000003c);
          piVar16[5] = *(int *)(pbVar17 + 0x16);
          copFunction(2,0x180001);
          piVar16[8] = *(int *)(pbVar17 + 0x1a);
          iVar9 = getCopControlWord(2,0xf800);
          *unaff_s6 = iVar9;
        } while (*unaff_s6 < 0);
        uVar11 = getCopReg(2,0xe);
        puVar19[0x18] = uVar11;
        piVar16[0xb] = *(int *)(pbVar17 + 0x1e);
        copFunction(2,0x168002e);
        iVar9 = getCopReg(2,7);
        *unaff_s4 = iVar9;
        uVar11 = *unaff_s4 + (int)*(short *)(unaff_s2 + 0x32) >> 10;
        iVar9 = (*unaff_s4 + (int)*(short *)(unaff_s2 + 0x32) >> (uVar11 & 0x1f)) + uVar11 * 0x200;
        *unaff_s4 = iVar9;
        if (0x7fb < iVar9 - 4U) {
          *unaff_s4 = -1;
        }
      } while (*unaff_s4 < 0);
      if (((byte)unaff_s2[3] != in_t5) && ((byte)unaff_s2[3] != in_t3)) {
        bVar1 = unaff_s2[5];
        if ((2 < bVar1) && ((bVar1 < 6 || ((bVar1 < 0xb && (8 < bVar1)))))) {
          ((char *)((int)piVar16 + 0x1e))[0] = '.';
          ((char *)((int)piVar16 + 0x1e))[1] = '\0';
        }
      }
      iVar9 = (int)(char)*in_t0 - (uint)*(ushort *)(unaff_s3 + 6);
      sVar5 = (short)iVar9;
      if (iVar9 * 0x10000 < 0) {
        sVar5 = 0;
      }
      iVar9 = (int)sVar5;
      iVar12 = (uint)*(byte *)(piVar16 + 2) - iVar9;
      iVar15 = (uint)*(byte *)((int)piVar16 + 9) - iVar9;
      iVar9 = (uint)*(byte *)((int)piVar16 + 10) - iVar9;
      if (iVar12 < 0) {
        puVar18 = (uint *)(unaff_s0 + 0x60);
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
        iVar12 = 0x1a;
        uVar4 = *(ushort *)(unaff_s0 + 0x62);
        iVar15 = 8;
LAB_8013d19c:
                    /* WARNING: Subroutine does not return */
        *(ushort *)((int)puVar18 + 2) = uVar4 & 0xfffb;
        FUN_801402b8(unaff_s0,iVar12,iVar15);
      }
      if (0xff < iVar12) {
        iVar12 = 0xff;
      }
      if (iVar15 < 0) {
        puVar7 = (undefined1 *)thunk_EXT_FUN_80146194(iVar9,iVar12,0);
        return puVar7;
      }
      if (0xff < iVar15) {
        iVar15 = 0xff;
      }
      uVar4 = (ushort)(iVar9 < 0x100);
      if (iVar9 < 0) {
        unaff_s0 = 0;
        goto LAB_8013d19c;
      }
      if (uVar4 == 0) {
        iVar9 = 0xff;
      }
      *(char *)(puVar19 + 0xe) = (char)iVar12;
      *(char *)((int)puVar19 + 0x39) = (char)iVar15;
      *(char *)((int)puVar19 + 0x3a) = (char)iVar9;
      iVar9 = (int)(char)*in_t0 - (uint)*(ushort *)(unaff_s3 + 6);
      sVar5 = (short)iVar9;
      if (iVar9 * 0x10000 < 0) {
        sVar5 = 0;
      }
      iVar9 = (int)sVar5;
      iVar12 = (uint)*(byte *)(piVar16 + 5) - iVar9;
      iVar15 = (uint)*(byte *)((int)piVar16 + 0x15) - iVar9;
      iVar9 = (uint)*(byte *)((int)piVar16 + 0x16) - iVar9;
      if (iVar12 < 0) {
        puVar7 = (undefined1 *)FUN_8013d214(iVar9,0);
        return puVar7;
      }
      if (0xff < iVar12) {
        iVar12 = 0xff;
      }
      if (iVar15 < 0) {
        return (undefined1 *)(uint)(iVar15 < 0x100);
      }
      if ((undefined1 *)(uint)(iVar15 < 0x100) == (undefined1 *)0x0) {
        iVar15 = 0xff;
      }
      if (iVar9 < 0) {
        unaff_s2 = (undefined1 *)0x0;
        if (DAT_00000007 == 0) {
          uRam00000062 = uRam00000062 & 0xfffb;
                    /* WARNING: Subroutine does not return */
          FUN_801402b8(0,(int)(short)iVar12,8);
        }
        if (DAT_00000007 < 2) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        iVar9 = 0;
        sVar5 = _DAT_00000032;
        DAT_00000007 = DAT_00000007 - 1;
LAB_8013d2c4:
        *(short *)(iVar9 + 0x32) = sVar5 + 0x10;
        FUN_801406e4(iVar9,iVar12);
        return unaff_s2;
      }
      if (0xff < iVar9) {
        iVar9 = 0xff;
      }
      *(char *)(puVar19 + 0x11) = (char)iVar12;
      *(char *)((int)puVar19 + 0x45) = (char)iVar15;
      *(char *)((int)puVar19 + 0x46) = (char)iVar9;
      psVar6 = (short *)((int)(char)*in_t0 - (uint)*(ushort *)(unaff_s3 + 6));
      in_t1 = puVar19 + 0x14;
      if ((int)psVar6 * 0x10000 < 0) {
        psVar6 = (short *)0x0;
      }
      sVar5 = (short)psVar6;
      iVar9 = (int)sVar5;
      uVar11 = (uint)*(byte *)(piVar16 + 8) - iVar9;
      uVar14 = (uint)*(byte *)((int)piVar16 + 0x21) - iVar9;
      iVar9 = (uint)*(byte *)((int)piVar16 + 0x22) - iVar9;
      if ((int)uVar11 < 0) {
        iVar12 = 0;
        goto LAB_8013d2c4;
      }
      if (0xff < (int)uVar11) {
        uVar11 = 0xff;
      }
      uVar10 = (undefined1)uVar11;
      if ((int)uVar14 < 0) {
        return (undefined1 *)(uint)((int)uVar14 < 0x100);
      }
      if ((undefined1 *)(uint)((int)uVar14 < 0x100) == (undefined1 *)0x0) {
        uVar14 = 0xff;
      }
      uVar13 = (undefined1)uVar14;
      if (iVar9 < 0) {
        uVar11 = func_0x80078240((int)_DAT_1f800160 - (int)*psVar6,
                                 (int)_DAT_1f800162 - (int)psVar6[1],
                                 (int)_DAT_1f800164 - (int)psVar6[2]);
        return (undefined1 *)(uint)(uVar11 < unaff_s0);
      }
    } while (iVar9 < 0x100);
  } while( true );
}

